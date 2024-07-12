#include <stdio.h>

struct s_time
{
	unsigned long second;
	unsigned long minute;
	unsigned long hour;
};

void print_time(struct s_time duration)
{
	printf("%lu : %lu : %lu \n", duration.hour, duration.minute, duration.second);
}

struct s_time convert_second_into_duration(unsigned long second_count)
{
	struct s_time duration;
	duration.hour = second_count / 3600;
	duration.minute = (second_count % 3600) / 60;
	duration.second = second_count % 60;
	return duration;
}

int main()
{
	struct s_time duration;
	unsigned long time_input = 12541616416;
	duration = convert_second_into_duration(time_input);
	print_time(duration);
	return 0;
}
