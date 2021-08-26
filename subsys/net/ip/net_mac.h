/** @file
 @brief Network mac helpers header

 Handle mac address
 */

/*
 * Copyright (c) 2021 Ably
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef ZEPHYR_NET_MAC_H_
#define ZEPHYR_NET_MAC_H_

#include <zephyr/types.h>

/**
 * @brief copy a random mac address into mac_addr
 *
 * The function will copy a mac address that was generated on bootup into
 * the buffer given in the argument.
 *
 * @param mac_addr pointer to a mac address
 */
void net_mac_get(uint8_t *mac_addr);

#endif
