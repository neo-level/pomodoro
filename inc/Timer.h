//
// Created by Frederik Desmet on 22/10/2022.
//

#pragma once

#include <chrono>

class Timer
{
public:
	Timer() = default;
	~Timer() = default;

	/**
	 * @brief Construct a new Timer object, with a user specified duration.
	 *
	 * @param duration The duration of the timer.
	 */
	explicit Timer(std::chrono::minutes duration);

	/**
	 * @brief Starts the timer
	 */
	void Start();

	/**
	 * @brief Stops the timer
	 */
	void Stop();

	/**
	 * @brief Resets the timer
	 */
	void Reset();

	/**
	 * @brief Pauses the timer
	 */
	void Pause();

	/**
	 * @brief Resumes the timer
	 */
	void Resume();

	/**
	 * @brief Prints the timer info
	 */
	void Info();

	/**
	 * @brief Gets the duration of the timer
	 * @return The duration of the timer
	 */
	[[nodiscard]] std::chrono::minutes GetDuration() const;

	/**
	 * @brief Sets the duration of the timer
	 */
	void SetDuration(std::chrono::minutes duration);

	/**
	 * @brief Gets the start time of the timer
	 * @return The start time of the timer
	 */
	[[nodiscard]] std::chrono::steady_clock::time_point GetStartTime() const;

	/**
	 * @brief Sets the start time of the timer
	 */
	void SetStartTime();

	/**
	 * @brief Gets the stop time of the timer
	 * @return The stop time of the timer
	 */
	[[nodiscard]] std::chrono::steady_clock::time_point GetStopTime() const;

	/**
	 * @brief Sets the stop time of the timer
	 */
	void SetStopTime();

	/**
	 * @brief Gets the pause time of the timer
	 * @return The pause time of the timer
	 */
	[[nodiscard]] std::chrono::minutes GetPauseTime() const;

	/**
	 * @brief Sets the pause time of the timer
	 */
	void SetPauseTime();
private:
	std::chrono::minutes _duration{ 25 };
	std::chrono::minutes _pauseTime{};

	std::chrono::steady_clock::time_point _startTime{};
	std::chrono::steady_clock::time_point _stopTime{};
};
