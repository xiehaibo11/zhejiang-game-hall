
/* ClipperLib::HorzSegmentsOverlap(ClipperLib::IntPoint const&, ClipperLib::IntPoint const&,
   ClipperLib::IntPoint const&, ClipperLib::IntPoint const&) */

bool ClipperLib::HorzSegmentsOverlap
               (IntPoint *param_1,IntPoint *param_2,IntPoint *param_3,IntPoint *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)param_1;
  lVar1 = *(long *)param_3;
  lVar3 = *(long *)param_4;
                    /* try { // try from 01031a9c to 01131abf has its CatchHandler @ 010332a0 */
  if (lVar2 <= lVar1 == lVar2 < lVar3) {
    lVar4 = *(long *)param_2;
                    /* try { // try from 01031ac0 to 01131aef has its CatchHandler @ 01031838 */
                    /* try { // try from 01031af0 to 01131b13 has its CatchHandler @ 01033330 */
    if ((((lVar2 < lVar3 == lVar4 <= lVar3) && (lVar1 < lVar4 == lVar3 <= lVar4)) &&
        (lVar1 <= lVar2 == lVar1 < lVar4)) && ((lVar2 != lVar1 || (lVar4 != lVar3)))) {
                    /* try { // try from 01031b14 to 01131b3f has its CatchHandler @ 01031838 */
      return lVar2 == lVar3 && lVar4 == lVar1;
    }
  }
  return true;
}

