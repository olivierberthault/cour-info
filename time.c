#include <stdio.h>
#include <stdlib.h>

struct s_time
{
	unsigned long second;
	unsigned long minute;
	unsigned long hour;
};

void print_time(struct s_time duration)
{
	printf("%lu h : %lu m : %lu s \n", duration.hour, duration.minute, duration.second);
}

struct s_time convert_second_into_duration(const unsigned long second_count)
{
	struct s_time duration;
	duration.hour = second_count / 3600;
	duration.minute = (second_count % 3600) / 60;
	duration.second = second_count % 60;
	return duration;
}

int main(int ac, char** av)
{
	if(ac != 2)
	{
		printf("Il ne faut qu'un argument : ./time <second_count> \n");
		return 1;
	}
	else
	{
		struct s_time duration;
		const unsigned long time_input = strtoul(av[1], av + 1, 10);
		duration = convert_second_into_duration(time_input);
		print_time(duration);
		return 0;
	}
}
