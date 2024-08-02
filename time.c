#include <stdio.h>
#include <stdlib.h>

struct s_time
{
	unsigned long second;
	unsigned long minute;
	unsigned long hour;
	unsigned long day;
};

void print_time(struct s_time duration)
{
	printf("%lu d : %lu h : %lu m : %lu s \n", duration.day, duration.hour, duration.minute, duration.second);
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

int main(int ac, char** av)
{
	if(ac != 2)
	{
		printf("Il ne faut qu'un argument : ./time <second_count> \n");
		return EXIT_FAILURE;
	}
	else
	{
		struct s_time duration;
		const unsigned long time_input = strtoul(av[1], av + 1, 10);
		duration = convert_second_into_duration(time_input);
		print_time(duration);
		return EXIT_SUCCESS;
	}
}
