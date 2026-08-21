
void FUN_00132fbc(long *param_1,long param_2,long param_3,int param_4)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ushort uVar4;
  undefined *puVar5;
  long *plVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined4 uVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  
  if (*(int *)((long)param_1 + 0xc4) < 1) {
    uVar9 = 0;
    uVar14 = param_3 + 5;
    uVar15 = param_3 + 5;
  }
  else {
    if (*(int *)(*param_1 + 0x58) == 2) {
      lVar12 = 0;
      uVar14 = 0xf3ffc07f;
      do {
        if (((uVar14 & 1) != 0) && (*(short *)((long)param_1 + lVar12 + 0xd4) != 0)) {
          uVar11 = 0;
          goto LAB_00133058;
        }
        lVar12 = lVar12 + 4;
        uVar14 = uVar14 >> 1;
      } while (lVar12 != 0x80);
      if ((((short)param_1[0x1f] == 0) && (*(short *)((long)param_1 + 0xfc) == 0)) &&
         ((short)param_1[0x21] == 0)) {
        lVar12 = 0;
        do {
          if (*(short *)((long)param_1 + lVar12 + 0x154) != 0) goto LAB_0013303c;
          lVar12 = lVar12 + 4;
        } while (lVar12 != 0x380);
        uVar11 = 0;
      }
      else {
LAB_0013303c:
        uVar11 = 1;
      }
LAB_00133058:
      *(undefined4 *)(*param_1 + 0x58) = uVar11;
    }
    FUN_001334f0(param_1,param_1 + 0x16b);
    FUN_001334f0(param_1,param_1 + 0x16e);
    FUN_00133e84(param_1,(long)param_1 + 0xd4,(int)param_1[0x16c]);
    FUN_00133e84(param_1,param_1 + 0x139,(int)param_1[0x16f]);
    FUN_001334f0(param_1,param_1 + 0x171);
    uVar9 = 0x12;
    do {
      if (*(short *)((long)param_1 + (ulong)(byte)(&DAT_0011ea00)[uVar9] * 4 + 0xabe) != 0)
      goto LAB_001330cc;
      uVar7 = (uint)uVar9;
      uVar9 = (ulong)(uVar7 - 1);
    } while (3 < uVar7);
    uVar9 = 2;
LAB_001330cc:
    lVar12 = param_1[0x2e3] +
             (-(uVar9 >> 0x1f) & 0xfffffffe00000000 | uVar9 << 1) + (long)(int)uVar9;
    uVar2 = lVar12 + 0x1b;
    uVar14 = param_1[0x2e4] + 10U >> 3;
    param_1[0x2e3] = lVar12 + 0x11;
    uVar15 = uVar2 >> 3;
    if (uVar14 <= uVar2 >> 3) {
      uVar15 = uVar14;
    }
  }
  if ((uVar15 < param_3 + 4U) || (param_2 == 0)) {
    uVar7 = *(uint *)((long)param_1 + 0x1734);
    if (((int)param_1[0x19] == 4) || (uVar14 == uVar15)) {
      uVar1 = param_4 + 2;
      if ((int)uVar7 < 0xe) {
        *(ushort *)(param_1 + 0x2e6) =
             *(ushort *)(param_1 + 0x2e6) | (ushort)(uVar1 << (ulong)(uVar7 & 0x1f));
        iVar8 = uVar7 + 3;
      }
      else {
        lVar12 = param_1[5];
        uVar7 = (uint)*(ushort *)(param_1 + 0x2e6) | uVar1 << (ulong)(uVar7 & 0x1f);
        *(short *)(param_1 + 0x2e6) = (short)uVar7;
        param_1[5] = lVar12 + 1;
        *(char *)(param_1[2] + lVar12) = (char)uVar7;
        lVar12 = param_1[5];
        param_1[5] = lVar12 + 1;
        *(undefined1 *)(param_1[2] + lVar12) = *(undefined1 *)((long)param_1 + 0x1731);
        *(short *)(param_1 + 0x2e6) =
             (short)((uVar1 & 0xffff) >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1734) & 0x1f));
        iVar8 = *(int *)((long)param_1 + 0x1734) + -0xd;
      }
      *(int *)((long)param_1 + 0x1734) = iVar8;
      puVar5 = &DAT_0011e3d0;
      plVar6 = (long *)&DAT_0011e850;
    }
    else {
      uVar1 = param_4 + 4;
      if ((int)uVar7 < 0xe) {
        uVar13 = uVar7 + 3;
        uVar7 = (uint)*(ushort *)(param_1 + 0x2e6) | uVar1 << (ulong)(uVar7 & 0x1f);
      }
      else {
        lVar12 = param_1[5];
        uVar7 = (uint)*(ushort *)(param_1 + 0x2e6) | uVar1 << (ulong)(uVar7 & 0x1f);
        *(short *)(param_1 + 0x2e6) = (short)uVar7;
        param_1[5] = lVar12 + 1;
        *(char *)(param_1[2] + lVar12) = (char)uVar7;
        lVar12 = param_1[5];
        param_1[5] = lVar12 + 1;
        *(undefined1 *)(param_1[2] + lVar12) = *(undefined1 *)((long)param_1 + 0x1731);
        uVar7 = (uVar1 & 0xffff) >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1734) & 0x1f);
        uVar13 = *(int *)((long)param_1 + 0x1734) - 0xd;
      }
      uVar3 = *(uint *)(param_1 + 0x16f);
      uVar1 = (int)param_1[0x16c] + 0xff00;
      *(uint *)((long)param_1 + 0x1734) = uVar13;
      if ((int)uVar13 < 0xc) {
        uVar7 = uVar7 | uVar1 << (ulong)(uVar13 & 0x1f);
        uVar13 = uVar13 + 5;
      }
      else {
        lVar12 = param_1[5];
        uVar7 = uVar7 | uVar1 << (ulong)(uVar13 & 0x1f);
        *(short *)(param_1 + 0x2e6) = (short)uVar7;
        param_1[5] = lVar12 + 1;
        *(char *)(param_1[2] + lVar12) = (char)uVar7;
        lVar12 = param_1[5];
        param_1[5] = lVar12 + 1;
        *(undefined1 *)(param_1[2] + lVar12) = *(undefined1 *)((long)param_1 + 0x1731);
        uVar7 = (uVar1 & 0xffff) >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1734) & 0x1f);
        uVar13 = *(int *)((long)param_1 + 0x1734) - 0xb;
      }
      *(uint *)((long)param_1 + 0x1734) = uVar13;
      if ((int)uVar13 < 0xc) {
        uVar7 = uVar7 | uVar3 + 0x10000 << (ulong)(uVar13 & 0x1f);
        uVar13 = uVar13 + 5;
      }
      else {
        lVar12 = param_1[5];
        uVar7 = uVar7 | uVar3 + 0x10000 << (ulong)(uVar13 & 0x1f);
        *(short *)(param_1 + 0x2e6) = (short)uVar7;
        param_1[5] = lVar12 + 1;
        *(char *)(param_1[2] + lVar12) = (char)uVar7;
        lVar12 = param_1[5];
        param_1[5] = lVar12 + 1;
        *(undefined1 *)(param_1[2] + lVar12) = *(undefined1 *)((long)param_1 + 0x1731);
        uVar7 = (uVar3 & 0xffff) >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1734) & 0x1f);
        uVar13 = *(int *)((long)param_1 + 0x1734) - 0xb;
      }
      iVar8 = (int)uVar9;
      uVar1 = iVar8 + 0xfffd;
      *(uint *)((long)param_1 + 0x1734) = uVar13;
      if ((int)uVar13 < 0xd) {
        uVar7 = uVar7 | uVar1 << (ulong)(uVar13 & 0x1f);
        uVar13 = uVar13 + 4;
        *(short *)(param_1 + 0x2e6) = (short)uVar7;
      }
      else {
        lVar12 = param_1[5];
        uVar7 = uVar7 | uVar1 << (ulong)(uVar13 & 0x1f);
        *(short *)(param_1 + 0x2e6) = (short)uVar7;
        param_1[5] = lVar12 + 1;
        *(char *)(param_1[2] + lVar12) = (char)uVar7;
        lVar12 = param_1[5];
        param_1[5] = lVar12 + 1;
        *(undefined1 *)(param_1[2] + lVar12) = *(undefined1 *)((long)param_1 + 0x1731);
        uVar7 = (uVar1 & 0xffff) >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1734) & 0x1f);
        *(short *)(param_1 + 0x2e6) = (short)uVar7;
        uVar13 = *(int *)((long)param_1 + 0x1734) - 0xc;
      }
      *(uint *)((long)param_1 + 0x1734) = uVar13;
      if (-1 < iVar8) {
        pbVar10 = &DAT_0011ea00;
        uVar14 = (ulong)(iVar8 + 1);
        do {
          uVar4 = *(ushort *)((long)param_1 + (ulong)*pbVar10 * 4 + 0xabe);
          uVar7 = uVar7 | (uint)uVar4 << (ulong)(uVar13 & 0x1f);
          *(short *)(param_1 + 0x2e6) = (short)uVar7;
          if ((int)uVar13 < 0xe) {
            uVar13 = uVar13 + 3;
          }
          else {
            lVar12 = param_1[5];
            param_1[5] = lVar12 + 1;
            *(char *)(param_1[2] + lVar12) = (char)uVar7;
            lVar12 = param_1[5];
            param_1[5] = lVar12 + 1;
            *(undefined1 *)(param_1[2] + lVar12) = *(undefined1 *)((long)param_1 + 0x1731);
            uVar4 = uVar4 >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1734) & 0x1f);
            uVar7 = (uint)uVar4;
            *(ushort *)(param_1 + 0x2e6) = uVar4;
            uVar13 = *(int *)((long)param_1 + 0x1734) - 0xd;
          }
          uVar14 = uVar14 - 1;
          pbVar10 = pbVar10 + 1;
          *(uint *)((long)param_1 + 0x1734) = uVar13;
        } while (uVar14 != 0);
      }
      FUN_00133f90(param_1,(long)param_1 + 0xd4);
      FUN_00133f90(param_1,param_1 + 0x139,uVar3);
      puVar5 = (undefined *)((long)param_1 + 0xd4);
      plVar6 = param_1 + 0x139;
    }
    FUN_001339c4(param_1,puVar5,plVar6);
  }
  else {
    FUN_00132cb0(param_1,param_2,param_3,param_4);
  }
  FUN_00132b78(param_1);
  if (param_4 == 0) {
    return;
  }
  FUN_00132dec(param_1);
  return;
}

