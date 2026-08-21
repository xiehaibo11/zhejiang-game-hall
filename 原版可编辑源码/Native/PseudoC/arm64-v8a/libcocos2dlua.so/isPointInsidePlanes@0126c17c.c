
/* btGeometryUtil::isPointInsidePlanes(btAlignedObjectArray<btVector3> const&, btVector3 const&,
   float) */

undefined8
btGeometryUtil::isPointInsidePlanes(btAlignedObjectArray *param_1,btVector3 *param_2,float param_3)

{
  float *pfVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 4) < 1) {
    return 1;
  }
  pfVar1 = *(float **)(param_1 + 0x10);
  lVar2 = 0;
  do {
    if (0.0 < (pfVar1[3] +
              *pfVar1 * *(float *)param_2 +
              (float)*(undefined8 *)(pfVar1 + 1) * (float)*(undefined8 *)(param_2 + 4) +
              (float)((ulong)*(undefined8 *)(pfVar1 + 1) >> 0x20) *
              (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20)) - param_3) {
      return 0;
    }
    lVar2 = lVar2 + 1;
    pfVar1 = pfVar1 + 4;
  } while (lVar2 < *(int *)(param_1 + 4));
  return 1;
}

