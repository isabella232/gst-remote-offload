/*
 *  gvatensormetaserializer.h - GVATensorMetaSerializer object
 *
 *  Copyright (C) 2019 Intel Corporation
 *    Author: Metcalfe, Ryan <ryan.d.metcalfe@intel.com>
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public License
 *  as published by the Free Software Foundation; either version 2.1
 *  of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free
 *  Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 *  Boston, MA 02110-1301 USA
 */
#ifndef _GSTGVATENSORMETASERIALIZER_H_
#define _GSTGVATENSORMETASERIALIZER_H_

#include <glib-object.h>

G_BEGIN_DECLS

#define GVATENSORMETASERIALIZER_TYPE (gva_tensor_metaserializer_get_type ())
G_DECLARE_FINAL_TYPE (GVATensorMetaSerializer, gva_tensor_metaserializer,
                      METASERIALIZER, GVATENSOR, GObject)

GVATensorMetaSerializer *gva_tensor_metaserializer_new();

G_END_DECLS

#endif
