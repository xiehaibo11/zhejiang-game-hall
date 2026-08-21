
/* ClipperLib::PointsAreClose(ClipperLib::IntPoint, ClipperLib::IntPoint, double) */

bool ClipperLib::PointsAreClose(double param_1,long param_2,long param_3,long param_4,long param_5)

{
  return ((double)param_2 - (double)param_4) * ((double)param_2 - (double)param_4) +
         ((double)param_3 - (double)param_5) * ((double)param_3 - (double)param_5) <= param_1;
}

