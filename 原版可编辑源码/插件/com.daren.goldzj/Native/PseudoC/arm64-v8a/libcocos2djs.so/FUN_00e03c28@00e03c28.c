
long FUN_00e03c28(long param_1,int param_2,uint param_3)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint *__ptr;
  int *piVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  void *__ptr_00;
  long lVar15;
  code *pcVar16;
  
  if (param_2 < 0) {
    return 0;
  }
  if ((int)param_3 < 1) {
    return 0;
  }
  uVar3 = *(ushort *)(param_1 + 0x4a);
  if ((int)(uint)uVar3 < (int)(param_3 + param_2)) {
    return 0;
  }
  uVar4 = *(ushort *)(param_1 + 0x48);
  uVar14 = (ulong)uVar4;
  uVar9 = param_3;
  if (param_2 == 0) {
    __ptr = (uint *)WebPSafeCalloc(1,200);
    *(uint **)(param_1 + 0xb90) = __ptr;
    if (__ptr == (uint *)0x0) {
      return 0;
    }
    uVar13 = *(ulong *)(param_1 + 0xba0);
    pbVar12 = *(byte **)(param_1 + 0xb98);
    uVar11 = *(undefined8 *)(param_1 + 0xbb0);
    *__ptr = (uint)uVar4;
    __ptr[1] = (uint)uVar3;
    if (1 < uVar13) {
      bVar2 = *pbVar12;
      uVar9 = bVar2 & 3;
      __ptr[2] = uVar9;
      __ptr[3] = *pbVar12 >> 2 & 3;
      uVar5 = *pbVar12 >> 4 & 3;
      __ptr[4] = uVar5;
      if (((uVar9 < 2) && (uVar5 < 2)) && (*pbVar12 < 0x40)) {
        uVar13 = uVar13 - 1;
        if ((bVar2 & 3) == 0) {
          uVar9 = (uint)(uVar3 * uVar14 <= uVar13);
        }
        else {
          uVar9 = FUN_00de986c(__ptr,pbVar12 + 1,uVar13,uVar11);
        }
        FUN_00e050c0();
        __ptr = *(uint **)(param_1 + 0xb90);
        if (uVar9 != 0) {
          uVar9 = (uint)uVar3;
          if (__ptr[4] != 1) {
            *(undefined4 *)(param_1 + 3000) = 0;
            uVar9 = param_3;
          }
          goto LAB_00e03c7c;
        }
        if (__ptr == (uint *)0x0) goto LAB_00e03d08;
      }
    }
    FUN_00de9834(*(undefined8 *)(__ptr + 6));
    __ptr[6] = 0;
    __ptr[7] = 0;
    WebPSafeFree(__ptr);
LAB_00e03d08:
    *(undefined8 *)(param_1 + 0xb90) = 0;
    return 0;
  }
LAB_00e03c7c:
  if (*(int *)(param_1 + 0xba8) != 0) goto LAB_00e03c88;
  piVar10 = *(int **)(param_1 + 0xb90);
  iVar8 = *piVar10;
  iVar1 = piVar10[1];
  lVar15 = *(long *)(param_1 + 0xbb0);
  pcVar16 = *(code **)(&DAT_01d548a0 + (ulong)(uint)piVar10[3] * 8);
  if (piVar10[2] == 0) {
    memcpy((void *)(lVar15 + iVar8 * param_2),
           (void *)(*(long *)(param_1 + 0xb98) + (long)(iVar8 * param_2) + 1),
           (long)(int)(iVar8 * uVar9));
LAB_00e03d6c:
    if (pcVar16 != (code *)0x0) {
      (*pcVar16)(iVar8,iVar1,iVar8,param_2,uVar9,lVar15);
    }
    if (uVar9 + param_2 == (uint)*(ushort *)(param_1 + 0x4a)) {
      *(undefined4 *)(param_1 + 0xba8) = 1;
    }
    if ((0 < *(int *)(param_1 + 3000)) &&
       (iVar8 = FUN_00e05b70(*(undefined8 *)(param_1 + 0xbb0),uVar14,(ulong)uVar3), iVar8 == 0))
    goto LAB_00e03ddc;
    if (*(int *)(param_1 + 0xba8) == 0) goto LAB_00e03c88;
    bVar6 = true;
    __ptr_00 = *(void **)(param_1 + 0xb90);
  }
  else {
    iVar7 = FUN_00dea634(piVar10,uVar9 + param_2);
    if (iVar7 != 0) goto LAB_00e03d6c;
LAB_00e03ddc:
    bVar6 = false;
    __ptr_00 = *(void **)(param_1 + 0xb90);
  }
  if (__ptr_00 != (void *)0x0) {
    FUN_00de9834(*(undefined8 *)((long)__ptr_00 + 0x18));
    *(undefined8 *)((long)__ptr_00 + 0x18) = 0;
    WebPSafeFree(__ptr_00);
  }
  *(undefined8 *)(param_1 + 0xb90) = 0;
  if (!bVar6) {
    return 0;
  }
LAB_00e03c88:
  return *(long *)(param_1 + 0xbb0) + uVar14 * (long)param_2;
}

