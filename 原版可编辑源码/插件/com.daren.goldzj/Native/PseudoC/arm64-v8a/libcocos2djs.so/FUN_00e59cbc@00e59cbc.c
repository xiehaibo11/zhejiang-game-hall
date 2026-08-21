
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00e59cbc(long param_1,ulong param_2,ushort *param_3)

{
  undefined2 uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  ushort uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  if (*(long *)(param_1 + 0x540) == 0) {
    if (*(uint *)(param_1 + 0x53c) <= param_2) {
      return 6;
    }
    iVar10 = *(int *)(param_1 + 0x538);
  }
  else {
    if ((ulong)(long)*(int *)(param_1 + 0x38) <= param_2) {
      return 6;
    }
    param_2 = (ulong)*(uint *)(*(long *)(param_1 + 0x540) + param_2 * 4);
    iVar10 = *(int *)(param_1 + 0x538);
  }
  if (1 < iVar10 - 1U) {
    if (iVar10 != 3) {
      return 2;
    }
    lVar13 = *(long *)(param_1 + 0x528) + param_2 * 4;
    uVar7 = (ulong)*(byte *)(lVar13 + 8) << 0x18 | (ulong)*(byte *)(lVar13 + 9) << 0x10 |
            (ulong)*(byte *)(lVar13 + 10) << 8 | (ulong)*(byte *)(lVar13 + 0xb);
    if (*(ulong *)(param_1 + 0x5a8) < (ulong)((int)uVar7 + 4)) {
      return 3;
    }
    uVar12 = *(undefined8 *)(param_1 + 0xc0);
    uVar6 = FUN_00e1bb5c(uVar12,*(long *)(param_1 + 0x5a0) + uVar7);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    uVar6 = FUN_00e1d718(uVar12,4);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    uVar5 = FUN_00e1d970(uVar12);
    FUN_00e1d970(uVar12);
    FUN_00e1d90c(uVar12);
    uVar1 = *(undefined2 *)(param_1 + 0x152);
    *param_3 = uVar5;
    param_3[1] = uVar5;
    lVar13 = (ulong)uVar5 << 6;
    uVar6 = FT_MulDiv((long)*(short *)(param_1 + 0x198),lVar13,uVar1);
    *(undefined8 *)(param_3 + 0xc) = uVar6;
    uVar6 = FT_MulDiv((long)*(short *)(param_1 + 0x19a),lVar13,uVar1);
    *(undefined8 *)(param_3 + 0x10) = uVar6;
    uVar6 = FT_MulDiv(((long)*(short *)(param_1 + 0x198) - (long)*(short *)(param_1 + 0x19a)) +
                      (long)*(short *)(param_1 + 0x19c),lVar13,uVar1);
    *(undefined8 *)(param_3 + 0x14) = uVar6;
    uVar6 = FT_MulDiv(*(undefined2 *)(param_1 + 0x19e),lVar13,uVar1);
    *(undefined8 *)(param_3 + 0x18) = uVar6;
    uVar5 = *param_3;
    goto LAB_00e59f58;
  }
  lVar8 = *(long *)(param_1 + 0x528) + param_2 * 0x30;
  uVar5 = (ushort)*(byte *)(lVar8 + 0x34);
  *param_3 = (ushort)*(byte *)(lVar8 + 0x34);
  uVar7 = (ulong)*(byte *)(lVar8 + 0x35);
  param_3[1] = (ushort)*(byte *)(lVar8 + 0x35);
  cVar3 = *(char *)(lVar8 + 0x18);
  lVar9 = (long)cVar3 * 0x40;
  *(long *)(param_3 + 0xc) = lVar9;
  cVar4 = *(char *)(lVar8 + 0x19);
  lVar11 = (long)cVar4;
  lVar13 = lVar11 * 0x40;
  *(long *)(param_3 + 0x10) = lVar13;
  cVar2 = *(char *)(lVar8 + 0x21);
  iVar10 = (int)cVar2;
  if (lVar11 < 1) {
    if (cVar4 == '\0' && cVar3 == '\0') {
      if (cVar2 != '\0' || *(char *)(lVar8 + 0x20) != '\0') {
        lVar9 = (long)(int)*(char *)(lVar8 + 0x20) * 0x40;
        *(long *)(param_3 + 0xc) = lVar9;
        *(long *)(param_3 + 0x10) = (long)iVar10 * 0x40;
        lVar13 = lVar9 + (long)iVar10 * -0x40;
        *(long *)(param_3 + 0x14) = lVar13;
        goto joined_r0x00e59e48;
      }
      lVar13 = 0;
      lVar9 = uVar7 << 6;
      *(long *)(param_3 + 0xc) = lVar9;
      param_3[0x10] = 0;
      param_3[0x11] = 0;
      param_3[0x12] = 0;
      param_3[0x13] = 0;
    }
LAB_00e59f1c:
    lVar13 = lVar9 - lVar13;
    *(long *)(param_3 + 0x14) = lVar13;
  }
  else {
    if (-1 < iVar10) goto LAB_00e59f1c;
    *(long *)(param_3 + 0x10) = lVar11 * -0x40;
    lVar13 = lVar9 + lVar11 * 0x40;
    *(long *)(param_3 + 0x14) = lVar13;
  }
joined_r0x00e59e48:
  if (lVar13 == 0) {
    *(ulong *)(param_3 + 0x10) = lVar9 + uVar7 * -0x40;
    *(ulong *)(param_3 + 0x14) = uVar7 * 0x40;
  }
  *(long *)(param_3 + 0x18) =
       (long)(int)(((uint)*(byte *)(lVar8 + 0x1a) + (int)*(char *)(lVar8 + 0x1e) +
                   (int)*(char *)(lVar8 + 0x1f)) * 0x40);
LAB_00e59f58:
  uVar6 = FT_MulDiv(uVar5,0x400000,*(undefined2 *)(param_1 + 0x152));
  *(undefined8 *)(param_3 + 4) = uVar6;
  uVar6 = FT_MulDiv(param_3[1],0x400000,*(undefined2 *)(param_1 + 0x152));
  *(undefined8 *)(param_3 + 8) = uVar6;
  return 0;
}

