//
// Created by Frederik Desmet on 22/10/2022.
//

#include <iostream>
#include "Timer.h"

Timer::Timer(std::chrono::minutes duration)
	: _duration(duration)
{
}

void Timer::Start()
{
	SetStartTime();
}

void Timer::Stop()
{
	SetStopTime();
}

void Timer::Reset()
{
	_startTime = {};
	_stopTime = {};
	_pauseTime = {};
	_duration = { std::chrono::minutes(25) };
}

void Timer::Pause()
{
	SetPauseTime();
}

void Timer::Resume()
{
	SetDuration(GetDuration() - GetPauseTime());
	SetStartTime();
	Start();
}

void Timer::Info()
{
	using namespace std;
	cout << "Timer started at: " << GetStartTime().time_since_epoch().count() << "\n";
	cout << "Timer stopped at: " << GetStopTime().time_since_epoch().count() << "\n";
	cout << "Timer paused at: " << GetPauseTime().count() << "\n";
	cout << "Timer duration: " << GetDuration().count() << endl;
}

std::chrono::minutes Timer::GetDuration() const
{
	return _duration;
}

void Timer::SetDuration(std::chrono::minutes duration)
{
	_duration = duration;
}

std::chrono::steady_clock::time_point Timer::GetStartTime() const
{
	return _startTime;
}

void Timer::SetStartTime()
{
	_startTime = std::chrono::steady_clock::now();
}

std::chrono::steady_clock::time_point Timer::GetStopTime() const
{
	return _stopTime;
}

void Timer::SetStopTime()
{
	_stopTime = std::chrono::steady_clock::now();
}

std::chrono::minutes Timer::GetPauseTime() const
{
	return _pauseTime;
}

void Timer::SetPauseTime()
{
	_pauseTime = std::chrono::duration_cast<std::chrono::minutes>(GetStopTime() - GetStartTime());
}





