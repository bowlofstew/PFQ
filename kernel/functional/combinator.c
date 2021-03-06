/***************************************************************
 *
 * (C) 2011-14 Nicola Bonelli <nicola@pfq.io>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 * The full GNU General Public License is included in this distribution in
 * the file called "COPYING".
 *
 ****************************************************************/

#include <linux/kernel.h>
#include <linux/module.h>

#include <pf_q-module.h>

#include "combinator.h"

struct pfq_function_descr combinator_functions[] = {

        { "or",    "(SkBuff -> Bool) -> (SkBuff -> Bool) -> SkBuff -> Bool",    or  },
        { "and",   "(SkBuff -> Bool) -> (SkBuff -> Bool) -> SkBuff -> Bool",    and },
        { "xor",   "(SkBuff -> Bool) -> (SkBuff -> Bool) -> SkBuff -> Bool",    xor },
        { "not",   "(SkBuff -> Bool) -> SkBuff -> Bool",  			not },

        { NULL }};

