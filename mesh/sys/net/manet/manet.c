/*
 * Copyright (C) 2021 btcven and Locha Mesh developers <contact@locha.io>
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @ingroup     net_manet
 * @{
 *
 * @file
 * @brief       MANET standards helper code
 *
 * @author      Locha Mesh developers <contact@locha.io>
 * @}
 */

#include "net/manet.h"

ipv6_addr_t ipv6_addr_all_manet_routers_link_local =
    IPV6_ADDR_ALL_MANET_ROUTERS_LINK_LOCAL;

int manet_netif_ipv6_group_join(gnrc_netif_t *netif)
{
    assert(netif != NULL);

    int res =
        gnrc_netif_ipv6_group_join(netif,
                                   &ipv6_addr_all_manet_routers_link_local);

    if (res < 0) {
        return -1;
    }
    puts("Joined on netif!");

    return 0;
}
