
/* ClipperLib::Pt2IsBetweenPt1AndPt3(ClipperLib::IntPoint, ClipperLib::IntPoint,
   ClipperLib::IntPoint) */

byte ClipperLib::Pt2IsBetweenPt1AndPt3
               (long param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  bool bVar1;
  bool bVar2;
  
  if ((param_1 == param_5) && (param_2 == param_6)) {
                    /* try { // try from 01031994 to 011319b7 has its CatchHandler @ 0103333c */
    return 0;
  }
  if ((param_1 == param_3) && (param_2 == param_4)) {
    return 0;
  }
                    /* try { // try from 010319b8 to 011319e3 has its CatchHandler @ 01031838 */
  if ((param_5 == param_3) && (param_6 == param_4)) {
    return 0;
  }
  if (param_1 == param_5) {
    bVar1 = param_4 <= param_2;
    bVar2 = SBORROW8(param_4,param_6);
    param_4 = param_4 - param_6;
  }
  else {
                    /* try { // try from 010319e4 to 01131a07 has its CatchHandler @ 01033338 */
    bVar1 = param_3 <= param_1;
    bVar2 = SBORROW8(param_3,param_5);
    param_4 = param_3 - param_5;
  }
  return bVar1 ^ param_4 < 0 != bVar2;
}

