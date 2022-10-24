//
// Created by Frederik Desmet on 22/10/2022.
//

#pragma once

#include <chrono>

class Timer
{
public:
	explicit Timer(std::chrono::minutes duration);
	Timer() = default;
	~Timer() = default;

	void Start();
	void Stop();
	void Reset();
	void Pause();
	void Resume();
	void Info();

	[[nodiscard]] std::chrono::minutes GetDuration() const;
	void SetDuration(std::chrono::minutes duration);

	[[nodiscard]] std::chrono::steady_clock::time_point GetStartTime() const;
	void SetStartTime();

	[[nodiscard]] std::chrono::steady_clock::time_point GetStopTime() const;
	void SetStopTime();

	[[nodiscard]] std::chrono::minutes GetPauseTime() const;
	void SetPauseTime();
private:
	std::chrono::minutes _duration{25};
	std::chrono::minutes _pauseTime{};

	std::chrono::steady_clock::time_point _startTime{};
	std::chrono::steady_clock::time_point _stopTime{};
};
