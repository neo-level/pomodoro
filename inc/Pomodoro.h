//
// Created by Frederik Desmet on 22/10/2022.
//
#pragma once

#include <chrono>

class Pomodoro
{
public:
	Pomodoro() = default;
	~Pomodoro() = default;

	/**
	 * @brief Adds a pomodoro to the counter, and increases the streak when conditions are met.
	 */
	void AddPomodoro();

	/**
	 * @brief Shows the pomodoro stats
	 */
	void ShowPomodoroStats() const;

	/**
	 * @brief Resets the pomodoro counter and streak
	 */
	void Reset();

	/**
	 * @brief Starts a break
	 */
	void StartBreak();

	/**
	 * @brief Starts a short break
	 */
	void StartShortBreak();

	/**
	 * @brief Starts a long break
	 */
	void StartLongBreak();

	/**
	 * @brief Adds a streak
	 */
	void AddStreak();

	/**
	 * @brief Resets the streak count.
	 */
	void ResetStreak();

	/**
	 * @brief Gets the streak count.
	 * @return The streak count.
	 */
	[[nodiscard]] unsigned short int GetStreak() const;

	/**
	 * Adds a pomodoro to the counter.
	 */
	void AddCounter();

	/**
	 * @brief Resets the pomodoro counter.
	 */
	void ResetCounter();

	/**
	 * @brief Gets the pomodoro counter.
	 * @return The pomodoro counter.
	 */
	[[nodiscard]] unsigned short int GetCounter() const;

	/**
	 * @brief Gets the max pomodoro count.
	 * @return The max pomodoro count.
	 */
	[[nodiscard]] unsigned short int GetMaxCounter() const;
private:
	unsigned short int streak{};
	unsigned short int counter{};
	unsigned short int maxCounter{ 4 };

	std::chrono::minutes shorRest{ 5 };
	std::chrono::minutes longRest{ 15 };
	std::chrono::minutes pomodoro{ 25 };
};
