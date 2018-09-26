#ifndef RGPHALFSEGMENT2D_H
#define RGPHALFSEGMENT2D_H

#include "RGPPoint2D.h"
#include "RGPSegment2D.h"

struct RGPHalfSegment2D {

    // Members

    RGPSegment2D segment;
    RGPPoint2D dominantPoint;

    // Constructors

    RGPHalfSegment2D(RGPSegment2D s, RGPPoint2D dp);
    ~RGPHalfSegment2D();

    // Methods

};

struct RGPAnnotatedHalfSegment2D : public RGPHalfSegment2D {

    // Members

    bool regionIsAbove;

    // Constructors

    RGPAnnotatedHalfSegment2D(RGPSegment2D s, RGPPoint2D dp, bool regAbove);
    ~RGPAnnotatedHalfSegment2D();

    // Methods

};

#endif //RGPHALFSEGMENT2D_H
