#include <iostream>
#include "Pomodoro.h"

/*
 * TODO: allow user to start a pomodoro.
 * TODO: allow user to stop a pomodoro.
 * TODO: allow user to reset a pomodoro.
 * TODO: allow user to pause a pomodoro.
 * TODO: allow user to resume a pomodoro.
 * TODO: allow user to get it's current streak.
 * TODO: allow user to get it's current pomodoro count.
 * */
int main()
{
	Pomodoro pomodoro;
	pomodoro.Start();
	pomodoro.Stop();
	pomodoro.Reset();
	return 0;
}
