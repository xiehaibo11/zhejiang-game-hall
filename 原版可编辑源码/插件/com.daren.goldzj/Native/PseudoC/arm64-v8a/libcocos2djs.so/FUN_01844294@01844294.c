
undefined1  [16] FUN_01844294(long param_1,void *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  size_t __n;
  undefined8 *puVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  puVar5 = *(undefined8 **)(param_1 + 0x12e0);
  __n = param_3 - (long)param_2;
  uVar6 = (ulong)((int)__n + 0xf) & 0xfffffff0;
  plVar4 = puVar5 + 1;
  lVar3 = *plVar4;
  puVar2 = puVar5;
  if (0xfef < lVar3 + uVar6) {
    if (0xff0 < uVar6) {
      puVar1 = malloc(uVar6 + 0x10);
      if (puVar1 == (undefined8 *)0x0) {
LAB_0184436c:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      puVar2 = puVar1 + 2;
      *puVar1 = *puVar5;
      puVar1[1] = 0;
      *puVar5 = puVar1;
      goto joined_r0x0184433c;
    }
    puVar2 = malloc(0x1000);
    if (puVar2 == (undefined8 *)0x0) goto LAB_0184436c;
    lVar3 = 0;
    *puVar2 = puVar5;
    plVar4 = puVar2 + 1;
    *plVar4 = 0;
    *(undefined8 **)(param_1 + 0x12e0) = puVar2;
  }
  puVar2 = (undefined8 *)((long)puVar2 + lVar3 + 0x10);
  *plVar4 = lVar3 + uVar6;
joined_r0x0184433c:
  if (__n != 0) {
    memmove(puVar2,param_2,__n);
  }
  auVar7._8_8_ = (long)__n >> 3;
  auVar7._0_8_ = puVar2;
  return auVar7;
}

