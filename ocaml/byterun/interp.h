/***********************************************************************/
/*                                                                     */
/*                           Objective Caml                            */
/*                                                                     */
/*            Xavier Leroy, projet Cristal, INRIA Rocquencourt         */
/*                                                                     */
/*  Copyright 1996 Institut National de Recherche en Informatique et   */
/*  en Automatique.  All rights reserved.  This file is distributed    */
/*  under the terms of the GNU Library General Public License, with    */
/*  the special exception on linking described in file ../LICENSE.     */
/*                                                                     */
/***********************************************************************/

/* $Id: interp.h,v 1.13 2004/04/26 14:08:22 basile Exp $ */

/* The bytecode interpreter */

#ifndef CAML_INTERP_H
#define CAML_INTERP_H

#include "misc.h"
#include "mlvalues.h"

/* interpret a bytecode */
value caml_interprete (code_t prog, asize_t prog_size);

/* tell the runtime that a bytecode program might be needed */
void caml_prepare_bytecode(code_t prog, asize_t prog_size);

/* tell the runtime that a bytecode program is no more needed */
void caml_release_bytecode(code_t prog, asize_t prog_size);

#endif /* CAML_INTERP_H */
