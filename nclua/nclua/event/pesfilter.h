/* Section and PES SBTVD filter
 * Copyright (C) 2018 UFPB
 * Author: Rafael Diniz <rafael@riseup.net>
 *
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 *
 */

#ifndef HAVE_PESFILTER_H__
#define HAVE_PESFILTER_H__

#include <stdint.h>
#include <pthread.h>

#ifdef __cplusplus
extern "C" {
#endif


    int pesfilter_start(uint16_t *pid);
    int pesfilter_stop(uint16_t *pid);
    int pesfilter_event(uint16_t pid, uint8_t *data);

#ifdef __cplusplus
};
#endif

#endif /* HAVE_PESFILTER__ */
