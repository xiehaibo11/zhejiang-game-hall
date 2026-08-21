
undefined1  [16] FUN_0125f2dc(long param_1,void *param_2,long param_3)

{
  undefined8 *__dest;
  undefined8 *puVar1;
  long lVar2;
  size_t __n;
  undefined8 *puVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  puVar3 = *(undefined8 **)(param_1 + 0x12e0);
  __n = param_3 - (long)param_2;
  uVar4 = (ulong)((int)__n + 0xf) & 0xfffffff0;
  lVar2 = puVar3[1];
  puVar1 = puVar3;
  if (0xfef < lVar2 + uVar4) {
    if (0xff0 < uVar4) {
      puVar1 = malloc(uVar4 + 0x10);
      if (puVar1 == (undefined8 *)0x0) {
LAB_0125f3a8:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      __dest = puVar1 + 2;
      *puVar1 = *puVar3;
      puVar1[1] = 0;
      *puVar3 = puVar1;
      goto joined_r0x0125f378;
    }
    puVar1 = malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) goto LAB_0125f3a8;
    lVar2 = 0;
    *puVar1 = puVar3;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x12e0) = puVar1;
  }
  __dest = (undefined8 *)((long)puVar1 + lVar2 + 0x10);
  puVar1[1] = lVar2 + uVar4;
joined_r0x0125f378:
  if (__n != 0) {
    memmove(__dest,param_2,__n);
  }
  auVar5._8_8_ = (long)__n >> 3;
  auVar5._0_8_ = __dest;
  return auVar5;
}

