
/* notExist(btVector3 const&, btAlignedObjectArray<btVector3> const&) */

undefined8 notExist(btVector3 *param_1,btAlignedObjectArray *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(int *)(param_2 + 4) < 1) {
    return 1;
  }
  lVar1 = 0;
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x10) + 4);
  do {
    if (0.999 < *(float *)param_1 * *(float *)((long)puVar2 + -4) +
                (float)*(undefined8 *)(param_1 + 4) * (float)*puVar2 +
                (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20) *
                (float)((ulong)*puVar2 >> 0x20)) {
      return 0;
    }
    lVar1 = lVar1 + 1;
    puVar2 = puVar2 + 2;
  } while (lVar1 < *(int *)(param_2 + 4));
  return 1;
}

