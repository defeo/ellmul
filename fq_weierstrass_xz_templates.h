/*=============================================================================

    This file is part of FLINT.

    FLINT is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    FLINT is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with FLINT; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA

=============================================================================*/
/******************************************************************************

    Copyright (C) 2014 Jean-Pierre Flori

******************************************************************************/

#ifdef T

/*
  Weierstrass XZ type
*/
typedef struct {
    TEMPLATE(T, t) a;
    TEMPLATE(T, t) b;
    TEMPLATE(T, t) b2;
    TEMPLATE(T, t) b4;
} TEMPLATE(T, weierstrass_xz_struct);

typedef TEMPLATE(T, weierstrass_xz_struct) TEMPLATE(T, weierstrass_xz_t)[1];

void
TEMPLATE(T, weierstrass_xz_init)(TEMPLATE(T, weierstrass_xz_t) E, TEMPLATE(T, ctx_t) K);

void
TEMPLATE(T, weierstrass_xz_clear)(TEMPLATE(T, weierstrass_xz_t) E, TEMPLATE(T, ctx_t) K);

void
TEMPLATE(T, weierstrass_xz_set_ui)(TEMPLATE(T, weierstrass_xz_t) E, ulong a, ulong b, TEMPLATE(T, ctx_t) K);

void
TEMPLATE(T, weierstrass_xz_dbl)(TEMPLATE(T, t) x3, TEMPLATE(T, t) z3,
                                const TEMPLATE(T, t) x1, const TEMPLATE(T, t) z1,
                                const TEMPLATE(T, weierstrass_xz_t) E,
                                const TEMPLATE(T, ctx_t) K);

void
TEMPLATE(T, weierstrass_xz_dadd)(TEMPLATE(T, t) x5, TEMPLATE(T, t) z5,
                                 const TEMPLATE(T, t) x3, const TEMPLATE(T, t) z3,
                                 const TEMPLATE(T, t) x2, const TEMPLATE(T, t) z2,
                                 const TEMPLATE(T, t) x1, const TEMPLATE(T, t) z1,
                                 const TEMPLATE(T, weierstrass_xz_t) E,
                                 const TEMPLATE(T, ctx_t) K);

void
TEMPLATE(T, weierstrass_xz_ladd)(TEMPLATE(T, t) x5, TEMPLATE(T, t) z5, TEMPLATE(T, t) x4, TEMPLATE(T, t) z4,
                                 const TEMPLATE(T, t) x3, const TEMPLATE(T, t) z3,
                                 const TEMPLATE(T, t) x2, const TEMPLATE(T, t) z2,
                                 const TEMPLATE(T, t) x1, const TEMPLATE(T, t) z1,
                                 const TEMPLATE(T, weierstrass_xz_t) E,
                                 const TEMPLATE(T, ctx_t) K);

#ifdef EC
#undef EC
#endif

#define EC weierstrass_xz
#include "fq_elliptic_curves_templates.h"
#undef EC

#endif