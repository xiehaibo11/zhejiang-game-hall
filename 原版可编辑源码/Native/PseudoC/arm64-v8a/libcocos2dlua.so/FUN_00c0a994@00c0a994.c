
void FUN_00c0a994(long *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  ulong uVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 uVar14;
  int iVar15;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined1 local_2e4;
  undefined1 local_2e3;
  ulong local_2e0;
  long *local_2d8;
  long local_2d0;
  undefined1 *local_2c8;
  long local_2c0;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  long local_298;
  int local_290;
  undefined4 local_28c;
  byte local_288;
  undefined1 local_287;
  undefined1 local_286;
  undefined1 local_285;
  
  lVar12 = *param_1;
  lVar11 = param_1[1];
  local_28c = *(undefined4 *)((long)param_1 + 0x9c);
  lVar13 = *(long *)(lVar12 + 0x48);
  *param_1 = (long)&local_2e0;
  lVar13 = lVar13 - param_1[0x14];
  local_2b0 = 0xffffffff;
  local_2b8 = 0;
  local_2b4 = 0;
  local_2ac = 0;
  local_2a0 = 0;
  local_2a4 = 0;
  local_2a8 = 0;
  local_285 = 0;
  local_2c8 = (undefined1 *)0x0;
  local_288 = 0;
  local_286 = 1;
  local_2d8 = param_1;
  local_2d0 = lVar11;
  local_2c0 = lVar12;
  local_2e0 = FUN_00c1b840(lVar11,0,0);
  **(ulong **)(lVar11 + 0x28) = local_2e0 | 0xfffa000000000000;
  uVar1 = *(long *)(lVar11 + 0x28) + 8;
  *(ulong *)(lVar11 + 0x28) = uVar1;
  if (*(ulong *)(lVar11 + 0x30) <= uVar1) {
    FUN_00bfe164(lVar11);
  }
  local_2e8 = *(undefined4 *)((long)local_2d8 + 0x9c);
  local_2e4 = (undefined1)local_2a8;
  local_2e3 = 0;
  local_2f0 = local_2c8;
  lVar11 = *param_1;
  local_2c8 = (undefined1 *)&local_2f0;
  local_29c = param_4;
  FUN_00c07cfc(param_1,0x28);
  if (param_3 == 0) {
    iVar5 = *(int *)((long)param_1 + 0x34);
    iVar15 = 0;
    if (iVar5 == 0x29) {
      lVar9 = *param_1;
      uVar14 = 0;
      iVar15 = 0;
      uVar10 = *(uint *)(lVar9 + 0x38);
      goto LAB_00c0ab84;
    }
joined_r0x00c0aac4:
    while ((iVar5 == 0x10a || (iVar5 == 0x11f))) {
      iVar5 = iVar15 + 1;
      uVar7 = FUN_00c07cb4(param_1);
      FUN_00c083f4(param_1,iVar15,uVar7);
      iVar15 = iVar5;
      if (*(int *)((long)param_1 + 0x34) != 0x2c) goto LAB_00c0ab34;
      FUN_00c079c0(param_1);
      iVar5 = *(int *)((long)param_1 + 0x34);
    }
    if (iVar5 != 0x118) {
                    /* WARNING: Subroutine does not return */
      FUN_00c07bc4(param_1,0xa15);
    }
    FUN_00c079c0();
    *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) | 2;
LAB_00c0ab34:
    lVar9 = *param_1;
    iVar5 = iVar15 + -1;
    uVar8 = *(uint *)(lVar9 + 0x38);
    if (iVar15 == 0) {
      uVar14 = 0;
      uVar10 = uVar8;
      goto LAB_00c0ab84;
    }
    uVar14 = (undefined1)iVar15;
  }
  else {
    uVar7 = FUN_00c0a8f4(param_1,&DAT_014107b8,4);
    FUN_00c083f4(param_1,0,uVar7);
    iVar5 = *(int *)((long)param_1 + 0x34);
    if (iVar5 != 0x29) {
      iVar15 = 1;
      goto joined_r0x00c0aac4;
    }
    lVar9 = *param_1;
    uVar14 = 1;
    iVar5 = 0;
    iVar15 = 1;
    uVar8 = *(uint *)(lVar9 + 0x38);
  }
  uVar10 = uVar8 + iVar5 + 1;
  do {
    uVar6 = *(undefined4 *)(lVar9 + 0x28);
    lVar2 = param_1[0x12] + (ulong)*(ushort *)(lVar9 + (ulong)uVar8 * 2 + 0x5c) * 0x18;
    *(char *)(lVar2 + 0x10) = (char)uVar8;
    uVar8 = uVar8 + 1;
    *(undefined4 *)(lVar2 + 8) = uVar6;
    *(undefined1 *)(lVar2 + 0x11) = 0;
  } while (uVar8 != uVar10);
LAB_00c0ab84:
  *(uint *)(lVar9 + 0x38) = uVar10;
  FUN_00c07f38(lVar11,iVar15);
  *(int *)(lVar11 + 0x34) = *(int *)(lVar11 + 0x34) + iVar15;
  FUN_00c07cfc(param_1,0x29);
  local_298 = *(long *)(lVar12 + 0x48) + (ulong)*(uint *)(lVar12 + 0x28) * 8;
  local_290 = *(int *)(lVar12 + 0x50) - *(uint *)(lVar12 + 0x28);
  local_287 = uVar14;
  FUN_00c07f70(&local_2e0,0x59);
  FUN_00c0c9c0(param_1);
  if (*(int *)((long)param_1 + 0x34) != 0x106) {
    FUN_00c086ac(param_1,0x106,0x109,param_4);
  }
  *(int *)((long)param_1 + 0x74) = (int)param_1[0xe];
  uVar7 = FUN_00c0996c(param_1);
  lVar11 = param_1[0x15];
  *(long *)(lVar12 + 0x48) = param_1[0x14] + lVar13;
  *(int *)(lVar12 + 0x50) = (int)lVar11 - (int)(lVar13 >> 3);
  iVar5 = FUN_00c07b10(lVar12,uVar7,0xfffffff8);
  uVar6 = FUN_00c07f70(lVar12,iVar5 << 0x10 | 0x33);
  *param_2 = uVar6;
  param_2[3] = 0xffffffff;
  param_2[2] = 0xb;
  param_2[4] = 0xffffffff;
  bVar3 = *(byte *)(lVar12 + 0x58);
  bVar4 = bVar3 | local_288 & 4;
  *(byte *)(lVar12 + 0x58) = bVar4;
  if ((bVar3 & 1) == 0) {
    if ((bVar3 & 0x20) != 0) {
      bVar4 = bVar4 | 0x40;
    }
    *(byte *)(lVar12 + 0x58) = bVar4 | 1;
  }
  FUN_00c079c0(param_1);
  return;
}

