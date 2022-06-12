/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Microchip KSZ8XXX series register access
 *
 * Copyright (C) 2020 Pengutronix, Michael Grzeschik <kernel@pengutronix.de>
 */

#ifndef __KSZ8XXX_H
#define __KSZ8XXX_H
#include <linux/kernel.h>

enum ksz_regs {
	REG_IND_CTRL_0,
	REG_IND_DATA_8,
	REG_IND_DATA_CHECK,
	REG_IND_DATA_HI,
	REG_IND_DATA_LO,
	REG_IND_MIB_CHECK,
	REG_IND_BYTE,
	P_FORCE_CTRL,
	P_LINK_STATUS,
	P_LOCAL_CTRL,
	P_NEG_RESTART_CTRL,
	P_REMOTE_STATUS,
	P_SPEED_STATUS,
	S_TAIL_TAG_CTRL,
};

enum ksz_masks {
	PORT_802_1P_REMAPPING,
	SW_TAIL_TAG_ENABLE,
	MIB_COUNTER_OVERFLOW,
	MIB_COUNTER_VALID,
	VLAN_TABLE_FID,
	VLAN_TABLE_MEMBERSHIP,
	VLAN_TABLE_VALID,
	STATIC_MAC_TABLE_VALID,
	STATIC_MAC_TABLE_USE_FID,
	STATIC_MAC_TABLE_FID,
	STATIC_MAC_TABLE_OVERRIDE,
	STATIC_MAC_TABLE_FWD_PORTS,
	DYNAMIC_MAC_TABLE_ENTRIES_H,
	DYNAMIC_MAC_TABLE_MAC_EMPTY,
	DYNAMIC_MAC_TABLE_NOT_READY,
	DYNAMIC_MAC_TABLE_ENTRIES,
	DYNAMIC_MAC_TABLE_FID,
	DYNAMIC_MAC_TABLE_SRC_PORT,
	DYNAMIC_MAC_TABLE_TIMESTAMP,
};

enum ksz_shifts {
	VLAN_TABLE_MEMBERSHIP_S,
	VLAN_TABLE,
	STATIC_MAC_FWD_PORTS,
	STATIC_MAC_FID,
	DYNAMIC_MAC_ENTRIES_H,
	DYNAMIC_MAC_ENTRIES,
	DYNAMIC_MAC_FID,
	DYNAMIC_MAC_TIMESTAMP,
	DYNAMIC_MAC_SRC_PORT,
};

struct ksz8 {
	const u8 *regs;
	const u32 *masks;
	const u8 *shifts;
	void *priv;
};

#endif
