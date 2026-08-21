
/* ClipperLib::DistanceFromLineSqrd(ClipperLib::IntPoint const&, ClipperLib::IntPoint const&,
   ClipperLib::IntPoint const&) */

undefined1  [16]
ClipperLib::DistanceFromLineSqrd(IntPoint *param_1,IntPoint *param_2,IntPoint *param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  
  dVar3 = (double)(*(long *)(param_2 + 8) - *(long *)(param_3 + 8));
  dVar4 = (double)(*(long *)param_3 - *(long *)param_2);
  dVar1 = (dVar3 * (double)*(long *)param_1 + dVar4 * (double)*(long *)(param_1 + 8)) -
          (dVar3 * (double)*(long *)param_2 + (double)*(long *)(param_2 + 8) * dVar4);
  auVar2._0_8_ = (dVar1 * dVar1) / (dVar3 * dVar3 + dVar4 * dVar4);
  auVar2._8_8_ = 0;
  return auVar2;
}

