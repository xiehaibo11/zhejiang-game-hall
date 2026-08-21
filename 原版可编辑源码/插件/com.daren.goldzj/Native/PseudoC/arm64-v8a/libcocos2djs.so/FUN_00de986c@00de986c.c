
undefined4 FUN_00de986c(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  void *__ptr;
  ulong uVar7;
  long lVar8;
  
  puVar4 = (undefined8 *)WebPSafeCalloc(1,0x170);
  if (puVar4 == (undefined8 *)0x0) goto LAB_00de99a4;
  *puVar4 = 0x200000000;
  FUN_00df3c0c();
  *(undefined8 **)(param_1 + 6) = puVar4;
  puVar1 = param_1 + 8;
  *(uint *)((long)puVar4 + 0x84) = *param_1;
  uVar2 = param_1[1];
  puVar4[1] = puVar1;
  *(uint *)(puVar4 + 0x11) = uVar2;
  FUN_00de764c(puVar1,0x208);
  FUN_00de61f8(0,puVar1);
  *(undefined8 *)(param_1 + 0x16) = param_4;
  param_1[8] = *param_1;
  param_1[9] = param_1[1];
  *(undefined4 *)puVar4 = 0;
  FUN_00e02d38(puVar4 + 5,param_2,param_3);
  iVar3 = FUN_00de9a44(*param_1,param_1[1],1,puVar4,0);
  if (iVar3 == 0) {
LAB_00de998c:
    __ptr = *(void **)(param_1 + 6);
  }
  else {
    if (((*(int *)(puVar4 + 0x1e) != 1) || (*(int *)(puVar4 + 0x1f) != 3)) ||
       (0 < *(int *)(puVar4 + 0x13))) {
LAB_00de9940:
      param_1[0x30] = 0;
      uVar7 = (ulong)(*param_1 & 0xffff);
      lVar8 = (long)*(int *)(puVar4 + 0x11) * (long)*(int *)((long)puVar4 + 0x84);
      lVar5 = WebPSafeMalloc(uVar7 + (long)(int)*param_1 * 0x10 + lVar8,4);
      puVar4[3] = lVar5;
      if (lVar5 != 0) {
        puVar4[4] = lVar5 + lVar8 * 4 + uVar7 * 4;
        return 1;
      }
      *(undefined4 *)puVar4 = 1;
      puVar4[4] = 0;
      goto LAB_00de998c;
    }
    if (0 < *(int *)(puVar4 + 0x1b)) {
      lVar5 = 0;
      puVar6 = (undefined8 *)(puVar4[0x1c] + 0x18);
      do {
        if (((*(char *)puVar6[-2] != '\0') || (*(char *)puVar6[-1] != '\0')) ||
           (*(char *)*puVar6 != '\0')) goto LAB_00de9940;
        lVar5 = lVar5 + 1;
        puVar6 = puVar6 + 0x47;
      } while (lVar5 < *(int *)(puVar4 + 0x1b));
    }
    param_1[0x30] = 1;
    puVar4[4] = 0;
    lVar5 = WebPSafeMalloc((long)*(int *)(puVar4 + 0x11) * (long)*(int *)((long)puVar4 + 0x84),1);
    puVar4[3] = lVar5;
    if (lVar5 != 0) {
      return 1;
    }
    *(undefined4 *)puVar4 = 1;
    __ptr = *(void **)(param_1 + 6);
  }
  if (__ptr != (void *)0x0) {
    FUN_00de977c(__ptr);
    WebPSafeFree(__ptr);
  }
LAB_00de99a4:
  param_1[6] = 0;
  param_1[7] = 0;
  return 0;
}

