/** BEGIN COPYRIGHT BLOCK
 * This Program is free software; you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation; version 2 of the License.
 * 
 * This Program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along with
 * this Program; if not, write to the Free Software Foundation, Inc., 59 Temple
 * Place, Suite 330, Boston, MA 02111-1307 USA.
 * 
 * In addition, as a special exception, Red Hat, Inc. gives You the additional
 * right to link the code of this Program with code not covered under the GNU
 * General Public License ("Non-GPL Code") and to distribute linked combinations
 * including the two, subject to the limitations in this paragraph. Non-GPL Code
 * permitted under this exception must only link to the code of this Program
 * through those well defined interfaces identified in the file named EXCEPTION
 * found in the source code files (the "Approved Interfaces"). The files of
 * Non-GPL Code may instantiate templates or use macros or inline functions from
 * the Approved Interfaces without causing the resulting work to be covered by
 * the GNU General Public License. Only Red Hat, Inc. may make changes or
 * additions to the list of Approved Interfaces. You must obey the GNU General
 * Public License in all respects for all of the Program code and other code used
 * in conjunction with the Program except the Non-GPL Code covered by this
 * exception. If you modify this file, you may extend this exception to your
 * version of the file, but you are not obligated to do so. If you do not wish to
 * provide this exception without modification, you must delete this exception
 * statement from your version and license this file solely under the GPL without
 * exception. 
 * 
 * 
 * Copyright (C) 2001 Sun Microsystems, Inc. Used by permission.
 * Copyright (C) 2005 Red Hat, Inc.
 * All rights reserved.
 * END COPYRIGHT BLOCK **/

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#ifndef PUBLIC_NSACL_PLISTDEF_H
#define PUBLIC_NSACL_PLISTDEF_H

/*
 * File:        plistdef.h
 *
 * Description:
 *
 *      This file defines the interface to property lists.  Property
 *      lists are a generalization of parameter blocks (pblocks).
 */

#ifndef PUBLIC_NSAPI_H
#include "public/nsapi.h"
#endif /* !PUBLIC_NSAPI_H */

typedef struct PListStruct_s *PList_t;

/* Define error codes returned from property list routines */

#define ERRPLINVPI      -1      /* invalid property index */
#define ERRPLEXIST      -2      /* property already exists */
#define ERRPLFULL       -3      /* property list is full */
#define ERRPLNOMEM      -4      /* insufficient dynamic memory */
#define ERRPLUNDEF      -5      /* undefined property name */

#define PLFLG_OLD_MPOOL	0	/* use the plist memory pool */
#define PLFLG_NEW_MPOOL	1	/* use the input memory pool */
#define PLFLG_IGN_RES	2	/* ignore the reserved properties */
#define PLFLG_USE_RES	3	/* use the reserved properties */

#ifdef __cplusplus
typedef void (PListFunc_t)(char*, const void*, void*);
#else
typedef void (PListFunc_t)();
#endif

#ifndef INTNSACL
#define PListAssignValue (*__nsacl_table->f_PListAssignValue)
#define PListCreate (*__nsacl_table->f_PListCreate)
#define PListDefProp (*__nsacl_table->f_PListDefProp)
#define PListDeleteProp (*__nsacl_table->f_PListDeleteProp)
#define PListFindValue (*__nsacl_table->f_PListFindValue)
#define PListInitProp (*__nsacl_table->f_PListInitProp)
#define PListNew (*__nsacl_table->f_PListNew)
#define PListDestroy (*__nsacl_table->f_PListDestroy)
#define PListGetValue (*__nsacl_table->f_PListGetValue)
#define PListNameProp (*__nsacl_table->f_PListNameProp)
#define PListSetType (*__nsacl_table->f_PListSetType)
#define PListSetValue (*__nsacl_table->f_PListSetValue)
#define PListEnumerate (*__nsacl_table->f_PListEnumerate)
#define PListDuplicate (*__nsacl_table->f_PListDuplicate)
#define PListGetPool (*__nsacl_table->f_PListGetPool)

#endif /* !INTNSACL */

#endif /* !PUBLIC_NSACL_PLISTDEF_H */
