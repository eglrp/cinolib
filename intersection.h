/****************************************************************************
* Italian National Research Council                                         *
* Institute for Applied Mathematics and Information Technologies, Genoa     *
* IMATI-GE / CNR                                                            *
*                                                                           *
* Author: Marco Livesu (marco.livesu@gmail.com)                             *
*                                                                           *
* Copyright(C) 2016                                                         *
* All rights reserved.                                                      *
*                                                                           *
* This file is part of CinoLib                                              *
*                                                                           *
* CinoLib is free software; you can redistribute it and/or modify           *
* it under the terms of the GNU General Public License as published by      *
* the Free Software Foundation; either version 3 of the License, or         *
* (at your option) any later version.                                       *
*                                                                           *
* This program is distributed in the hope that it will be useful,           *
* but WITHOUT ANY WARRANTY; without even the implied warranty of            *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the             *
* GNU General Public License (http://www.gnu.org/licenses/gpl.txt)          *
* for more details.                                                         *
****************************************************************************/
#ifndef INTERSECTION_H
#define INTERSECTION_H

#include "cinolib.h"
#include "vec2.h"
#include "vec3.h"
#include "plane.h"

namespace cinolib
{
namespace intersection
{

CINO_INLINE
bool segment2D(const vec2d        & s0_beg,
               const vec2d        & s0_end,
               const vec2d        & s1_beg,
               const vec2d        & s1_end,
               std::vector<vec2d> & inters);


//CINO_INLINE
//bool planes(const std::vector<Plane> & planes, vec3d & inters);


//CINO_INLINE
//bool lines3D(const vec3d   l0_p,
//             const vec3d   l0_dir,
//             const vec3d   l1_p,
//             const vec3d   l1_dir,
//                   vec3d & inters);

}
}

#ifndef  CINO_STATIC_LIB
#include "intersection.cpp"
#endif

#endif // INTERSECTION_H
