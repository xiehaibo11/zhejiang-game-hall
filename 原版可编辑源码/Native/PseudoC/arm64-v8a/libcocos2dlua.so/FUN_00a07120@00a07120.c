
void FUN_00a07120(ulong *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  size_t __n;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *__src;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)param_1[2];
  if (puVar7 == (undefined8 *)param_1[3]) {
    puVar6 = (undefined8 *)*param_1;
    __src = (undefined8 *)param_1[1];
    if (__src < puVar6 || (long)__src - (long)puVar6 == 0) {
      lVar1 = (long)param_1[3] - (long)puVar6;
      uVar5 = lVar1 >> 2;
      if (lVar1 == 0) {
        uVar5 = 1;
      }
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar3 = operator_new(uVar5 * 8);
      puVar2 = (undefined8 *)((long)pvVar3 + (uVar5 >> 2) * 8);
                    /* try { // try from 00a071cc to 00b071ff has its CatchHandler @ 00a072cc */
      lVar1 = (long)puVar7 - (long)__src;
      puVar7 = puVar2;
      if (lVar1 != 0) {
        lVar4 = (lVar1 >> 3) << 3;
        do {
          lVar4 = lVar4 + -8;
          *puVar7 = *__src;
          puVar7 = puVar7 + 1;
          __src = __src + 1;
                    /* try { // try from 00a07200 to 00b07213 has its CatchHandler @ 00a07298 */
        } while (lVar4 != 0);
        puVar6 = (undefined8 *)*param_1;
        puVar7 = (undefined8 *)((long)puVar2 + lVar1);
      }
      *param_1 = (ulong)pvVar3;
      param_1[1] = (ulong)puVar2;
      param_1[2] = (ulong)puVar7;
      param_1[3] = (ulong)((long)pvVar3 + uVar5 * 8);
                    /* try { // try from 00a07218 to 00b0724b has its CatchHandler @ 00a0729c */
      if (puVar6 != (undefined8 *)0x0) {
        operator_delete(puVar6);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar4 = (long)__src - (long)puVar6 >> 3;
      lVar1 = lVar4 + 2;
      if (-1 < lVar4 + 1) {
        lVar1 = lVar4 + 1;
      }
      __n = (long)puVar7 - (long)__src;
      if (__n != 0) {
        memmove(__src + -(lVar1 >> 1),__src,__n);
      }
      puVar7 = __src + -(lVar1 >> 1) + ((long)__n >> 3);
      param_1[1] = param_1[1] + (lVar1 >> 1) * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = *param_2;
  param_1[2] = param_1[2] + 8;
                    /* try { // try from 00a0724c to 00b072e7 has its CatchHandler @ 00a06f1c */
  return;
}

