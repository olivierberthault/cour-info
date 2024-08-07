#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define HIDE_CURSOR "\e[?25l"
#define SHOW_CURSOR "\e[?25h"
#define REPLACE "\r\033[K"


struct s_time
{
	unsigned long second;
	unsigned long minute;
	unsigned long hour;
	unsigned long day;
};

void print_time(struct s_time duration)
{
	printf("%lu d : %lu h : %lu m : %lu s \r", duration.day, duration.hour, duration.minute, duration.second);
}

struct s_time convert_second_into_duration(const unsigned long second_count)
{
	unsigned long remaining_seconds;
	struct s_time duration;

	remaining_seconds = second_count;

	duration.day = second_count / 86400;
	remaining_seconds %= 86400;
	duration.hour = remaining_seconds / 3600;
	remaining_seconds %= 3600;
	duration.minute = remaining_seconds / 60;
	remaining_seconds %= 60;
	duration.second = remaining_seconds;
	return duration;
}

void print_countdown(unsigned long second_count)
{
	struct s_time duration;
	unsigned long i;

	i = 0;
	printf(HIDE_CURSOR);
	while(i <= second_count)
	{
		duration = convert_second_into_duration(second_count - i);
		print_time(duration);
		fflush(stdout);
		sleep(1);
		printf(REPLACE);
		i++;
	}
	printf(SHOW_CURSOR);
}

unsigned long convert_array_into_seconds(unsigned long times[4])
{
	unsigned long times_factor[] = {86400, 3600, 60, 1};
	unsigned long seconds;
	int i;

	seconds = 0;

	i = 0;
	while(i < 4)
	{
		seconds += times[i] * times_factor[i];
		i++;
	}

	return seconds;
}

int main(int ac, char** av)
{
	
	if(ac != 5)
	{
		printf("Usage : ./countdown <day> <hour> <minute> <second> \n");
		return EXIT_FAILURE;
	}
	else
	{
		unsigned long times[] = {0, 0, 0, 0};
		unsigned long total_seconds;
		int i = 0;
		while(i < 4)
		{
			times[i] = strtoul(av[i + 1], av + i + 1, 10);
			i++;
		}
		total_seconds = convert_array_into_seconds(times);
		print_countdown(total_seconds);
		return EXIT_SUCCESS;
	}
}
