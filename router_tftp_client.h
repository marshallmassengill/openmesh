/*
 * Copyright (C) Marek Lindner
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of version 3 of the GNU General Public
 * License as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA
 */

extern const struct router_type mr500;
extern const struct router_type mr600;
extern const struct router_type mr900;
extern const struct router_type mr1750;
extern const struct router_type om2p;
extern const struct router_type om5p;
extern const struct router_type om5pan;
extern const struct router_type om5pac;

void tftp_client_flash_time_set(struct node *node);
int tftp_client_flash_completed(struct node *node);
