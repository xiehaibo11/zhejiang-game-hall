
void FUN_00ac0bc4(ulong *param_1,undefined8 *param_2)

{
  long lVar1;
  size_t __n;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *__src;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)param_1[2];
  if (puVar8 == (undefined8 *)param_1[3]) {
    puVar7 = (undefined8 *)*param_1;
    __src = (undefined8 *)param_1[1];
    if (__src < puVar7 || (long)__src - (long)puVar7 == 0) {
      lVar1 = (long)param_1[3] - (long)puVar7;
      uVar4 = (lVar1 >> 2) * 0x5555555555555556;
      if (lVar1 == 0) {
        uVar4 = 1;
      }
      if (0x1555555555555555 < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar2 = operator_new(uVar4 * 0xc);
      lVar1 = (long)puVar8 - (long)__src;
      puVar5 = (undefined8 *)((long)pvVar2 + (uVar4 >> 2) * 0xc);
      puVar8 = puVar5;
      if (lVar1 != 0) {
        puVar8 = (undefined8 *)((long)pvVar2 + (uVar4 >> 2) * 0xc);
        lVar3 = (lVar1 >> 2) * 4;
        puVar7 = puVar5;
        do {
          puVar8 = (undefined8 *)((long)puVar8 + 0xc);
          uVar6 = *__src;
          lVar3 = lVar3 + -0xc;
          *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(__src + 1);
          *puVar7 = uVar6;
          puVar7 = puVar8;
          __src = (undefined8 *)((long)__src + 0xc);
        } while (lVar3 != 0);
        puVar7 = (undefined8 *)*param_1;
        puVar8 = (undefined8 *)((long)puVar5 + lVar1);
      }
      *param_1 = (ulong)pvVar2;
      param_1[1] = (ulong)puVar5;
      param_1[2] = (ulong)puVar8;
      param_1[3] = (ulong)((long)pvVar2 + uVar4 * 0xc);
      if (puVar7 != (undefined8 *)0x0) {
        operator_delete(puVar7);
        puVar8 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar3 = ((long)__src - (long)puVar7 >> 2) * -0x5555555555555555;
      lVar1 = lVar3 + 2;
      if (-1 < lVar3 + 1) {
        lVar1 = lVar3 + 1;
      }
      __n = (long)puVar8 - (long)__src;
      pvVar2 = (void *)((long)__src + (lVar1 >> 1) * -0xc);
      if (__n != 0) {
        memmove(pvVar2,__src,__n);
      }
      puVar8 = (undefined8 *)((long)pvVar2 + ((long)__n >> 2) * 4);
      param_1[1] = param_1[1] + (lVar1 >> 1) * -0xc;
      param_1[2] = (ulong)puVar8;
    }
  }
  uVar6 = *param_2;
  *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(param_2 + 1);
                    /* try { // try from 00ac0d34 to 00bc0d4b has its CatchHandler @ 00ac0fe8 */
  *puVar8 = uVar6;
  param_1[2] = param_1[2] + 0xc;
                    /* try { // try from 00ac0d50 to 00bc0d57 has its CatchHandler @ 00ac0fd0 */
                    /* try { // try from 00ac0d58 to 00bc0d6f has its CatchHandler @ 00ac0fcc */
  return;
}

