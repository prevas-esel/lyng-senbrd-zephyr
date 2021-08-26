/** @file
 @brief Network mac helpers

 Handle mac address
 */

/*
 * Copyright (c) 2021 Ably
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "net_mac.h"
#include <zephyr.h>
#include <kernel.h>
#include <init.h>
#include <random/rand32.h>

static uint8_t mac[6] = { 0x02, 0x00, 0x5E, 0x00, 0x53, 0xFE };

void net_mac_get(uint8_t *mac_addr)
{
	memcpy(mac_addr, mac, 6);
}

static int mac_init(const struct device *unused)
{
	uint32_t entropy;

	entropy = sys_rand32_get();

	mac[3] = (entropy >> 16) & 0xff;
	mac[4] = (entropy >>  8) & 0xff;
	mac[5] = (entropy >>  0) & 0xff;

	return 0;
}

SYS_INIT(mac_init, POST_KERNEL, 10);
