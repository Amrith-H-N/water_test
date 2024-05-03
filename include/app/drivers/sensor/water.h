/*
 * Copyright (c) 2022 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef ZEPHYR_INCLUDE_ZEPHYR_DRIVERS_SENSOR_H_
#define ZEPHYR_INCLUDE_ZEPHYR_DRIVERS_SENSOR_H_

#include <zephyr/drivers/sensor.h>

/**
 * @defgroup drivers Drivers
 * @{
 *
 * @brief This is a group of all driver-related code.
 *
 * This group contains all the driver classes, functions, and variables.
 * It's a central place to find everything related to drivers in this project.
 */

/** @brief water_sensor custom channels. */
enum water_channel
{
  /** PH channel. */
  WATER_CHAN_PH = SENSOR_CHAN_PRIV_START,
  /** Turbidity Channel. */
  WATER_CHAN_TURB,
  /** Temperature channel. */
  WATER_CHAN_TEMP,
  /** All channels. */
  WATER_CHAN_ALL

};
/** @} */
#endif /* ZEPHYR_INCLUDE */