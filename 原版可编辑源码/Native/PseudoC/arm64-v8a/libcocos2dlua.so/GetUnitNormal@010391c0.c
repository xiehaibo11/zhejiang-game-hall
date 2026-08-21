
/* ClipperLib::GetUnitNormal(ClipperLib::IntPoint const&, ClipperLib::IntPoint const&) */

undefined1  [16] ClipperLib::GetUnitNormal(IntPoint *param_1,IntPoint *param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  
  if ((*(long *)param_2 - *(long *)param_1 == 0) &&
     (*(long *)(param_2 + 8) == *(long *)(param_1 + 8))) {
    return ZEXT816(0);
  }
  dVar2 = (double)(*(long *)param_2 - *(long *)param_1);
  dVar3 = (double)(*(long *)(param_2 + 8) - *(long *)(param_1 + 8));
  auVar1._0_8_ = (1.0 / SQRT(dVar2 * dVar2 + dVar3 * dVar3)) * dVar3;
  auVar1._8_8_ = 0;
  return auVar1;
}

