/*
**********************************************************************
*
* This file is a part of library MPCDPS(Massive Point Cloud Data Processing System).
* It is a free program and it is protected by the license GPL-v3.0, you may not use the
* file except in compliance with the License.
*
* Copyright(c) 2016 - 2018 Xu Shengpan, all rights reserved.
*
* Email: jack_1227x@163.com
*
**********************************************************************
*/

#ifndef   MPCDPS_CIRCLE_H
#define  MPCDPS_CIRCLE_H

#include "Point2.h"
#include "Rect2.h"
#include "MPCDPSCoreLib.h"

namespace mpcdps {

    /*class Circle.*/
    template <typename T>
    class MPCDPS_CORE_ITEM  Circle
    {
    public:
        /*Default constructor.*/
        Circle();

        /*Copy constructor.*/
        Circle(const Circle& obj);

        /*Destructor.*/
        ~Circle();

        /*To test whether it intersects with another circle.*/
        bool intersects(const Circle<T>& obj) const;

		/*To test whether it intersects a rect.*/
		bool intersects(const Rect2<T>& rect) const;

        /*To test whether it contains another circle.*/
        bool contains(const Circle<T>& obj) const;

		/*To test whether it contains a point*/
		bool contains(const Point2<T>& pt) const;

        /*Combine with another circle and update this circle.*/
        Circle<T>& combine(const Circle<T>& obj);

        /*Combined with another circle and return a new circle.*/
        Circle<T> combined(const Circle<T>& obj) const;

        Point2<T>   _center;  /*The center of the circle.*/
        double        _radius;   /*The radius of the circle.*/
    };
}

#endif