
undefined4 FUN_00130008(long *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  undefined2 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  
LAB_00130030:
  do {
    if (*(uint *)((long)param_1 + 0xb4) < 0x106) {
      FUN_0012e71c(param_1);
      uVar12 = *(uint *)((long)param_1 + 0xb4);
      if ((uVar12 < 0x106) && (param_2 == 0)) {
        return 0;
      }
      if (uVar12 == 0) {
        uVar12 = *(uint *)((long)param_1 + 0xac);
        uVar13 = (ulong)uVar12;
        if (1 < uVar12) {
          uVar12 = 2;
        }
        *(uint *)((long)param_1 + 0x172c) = uVar12;
        if (param_2 == 4) {
          uVar14 = param_1[0x13];
          if ((long)uVar14 < 0) {
            lVar17 = 0;
          }
          else {
            lVar17 = param_1[0xc] + (uVar14 & 0xffffffff);
          }
          FUN_00132fbc(param_1,lVar17,uVar13 - uVar14,1);
          param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
          FUN_0012f594(*param_1);
          if (*(int *)(*param_1 + 0x20) != 0) {
            return 3;
          }
          return 2;
        }
        if (*(int *)((long)param_1 + 0x170c) != 0) {
          uVar14 = param_1[0x13];
          if ((long)uVar14 < 0) {
            lVar17 = 0;
          }
          else {
            lVar17 = param_1[0xc] + (uVar14 & 0xffffffff);
          }
          FUN_00132fbc(param_1,lVar17,uVar13 - uVar14,0);
          param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
          FUN_0012f594(*param_1);
          if (*(int *)(*param_1 + 0x20) == 0) {
            return 0;
          }
        }
        return 1;
      }
      if (2 < uVar12) goto LAB_00130060;
LAB_001300b8:
      uVar12 = *(uint *)(param_1 + 0x14);
    }
    else {
LAB_00130060:
      uVar12 = *(uint *)((long)param_1 + 0xac);
      lVar17 = param_1[0xf];
      uVar15 = ((int)param_1[0x10] << (ulong)(*(uint *)(param_1 + 0x12) & 0x1f) ^
               (uint)*(byte *)(param_1[0xc] + (ulong)(uVar12 + 2))) &
               *(uint *)((long)param_1 + 0x8c);
      uVar6 = *(ushort *)(lVar17 + (ulong)uVar15 * 2);
      *(uint *)(param_1 + 0x10) = uVar15;
      *(ushort *)(param_1[0xe] + (ulong)(*(uint *)(param_1 + 0xb) & uVar12) * 2) = uVar6;
      *(short *)(lVar17 + (ulong)uVar15 * 2) = (short)uVar12;
      if ((uVar6 == 0) || ((int)param_1[10] - 0x106U < uVar12 - uVar6)) goto LAB_001300b8;
      uVar12 = FUN_00130860(param_1);
      *(uint *)(param_1 + 0x14) = uVar12;
    }
    if (uVar12 < 3) {
      uVar12 = *(uint *)((long)param_1 + 0x170c);
      bVar4 = *(byte *)(param_1[0xc] + (ulong)*(uint *)((long)param_1 + 0xac));
      lVar17 = param_1[0x2e0];
      *(undefined2 *)(param_1[0x2e2] + (ulong)uVar12 * 2) = 0;
      *(uint *)((long)param_1 + 0x170c) = uVar12 + 1;
      *(byte *)(lVar17 + (ulong)uVar12) = bVar4;
      iVar8 = *(int *)((long)param_1 + 0xb4);
      iVar2 = *(int *)((long)param_1 + 0xac);
      *(short *)((long)param_1 + (ulong)bVar4 * 4 + 0xd4) =
           *(short *)((long)param_1 + (ulong)bVar4 * 4 + 0xd4) + 1;
      *(int *)((long)param_1 + 0xb4) = iVar8 + -1;
      uVar12 = iVar2 + 1;
      bVar11 = *(int *)((long)param_1 + 0x170c) == (int)param_1[0x2e1] + -1;
LAB_00130240:
      *(uint *)((long)param_1 + 0xac) = uVar12;
      if (!bVar11) goto LAB_00130030;
    }
    else {
      uVar15 = *(uint *)((long)param_1 + 0x170c);
      lVar17 = param_1[0x2e0];
      iVar8 = *(int *)((long)param_1 + 0xac) - (int)param_1[0x16];
      bVar4 = (&DAT_0011e2d0)[(ulong)(uVar12 - 3) & 0xff];
      *(short *)(param_1[0x2e2] + (ulong)uVar15 * 2) = (short)iVar8;
      *(uint *)((long)param_1 + 0x170c) = uVar15 + 1;
      *(char *)(lVar17 + (ulong)uVar15) = (char)(uVar12 - 3);
      uVar12 = iVar8 - 1;
      if (0xff < (uVar12 & 0xffff)) {
        uVar12 = (uVar12 >> 7 & 0x1ff) + 0x100;
      }
      bVar5 = (&DAT_0011e0d0)[(ulong)uVar12 & 0xffff];
      uVar15 = *(uint *)(param_1 + 0x18);
      *(short *)((long)param_1 + (ulong)bVar4 * 4 + 0x4d8) =
           *(short *)((long)param_1 + (ulong)bVar4 * 4 + 0x4d8) + 1;
      uVar12 = *(uint *)(param_1 + 0x14);
      iVar8 = *(int *)((long)param_1 + 0xb4);
      *(short *)((long)param_1 + (ulong)bVar5 * 4 + 0x9c8) =
           *(short *)((long)param_1 + (ulong)bVar5 * 4 + 0x9c8) + 1;
      iVar2 = *(int *)((long)param_1 + 0x170c);
      uVar9 = iVar8 - uVar12;
      iVar8 = (int)param_1[0x2e1] + -1;
      *(uint *)((long)param_1 + 0xb4) = uVar9;
      if ((uVar12 <= uVar15) && (2 < uVar9)) {
        lVar16 = param_1[0xc];
        uVar15 = *(uint *)((long)param_1 + 0x8c);
        uVar9 = *(uint *)(param_1 + 0x12);
        lVar17 = param_1[0xe];
        lVar1 = param_1[0xf];
        uVar3 = *(uint *)(param_1 + 0xb);
        uVar13 = (ulong)*(uint *)(param_1 + 0x10);
        *(uint *)(param_1 + 0x14) = uVar12 - 1;
        iVar18 = uVar12 - 2;
        uVar12 = *(int *)((long)param_1 + 0xac) + 1;
        do {
          *(uint *)((long)param_1 + 0xac) = uVar12;
          uVar10 = ((int)uVar13 << (ulong)(uVar9 & 0x1f) ^
                   (uint)*(byte *)(lVar16 + (ulong)(uVar12 + 2))) & uVar15;
          uVar13 = (ulong)uVar10;
          uVar7 = *(undefined2 *)(lVar1 + uVar13 * 2);
          *(int *)(param_1 + 0x14) = iVar18;
          iVar18 = iVar18 + -1;
          *(undefined2 *)(lVar17 + (ulong)(uVar3 & uVar12) * 2) = uVar7;
          *(short *)(lVar1 + uVar13 * 2) = (short)uVar12;
          uVar12 = uVar12 + 1;
          *(uint *)(param_1 + 0x10) = uVar10;
        } while (iVar18 != -1);
        bVar11 = iVar2 == iVar8;
        goto LAB_00130240;
      }
      *(undefined4 *)(param_1 + 0x14) = 0;
      uVar12 = *(int *)((long)param_1 + 0xac) + uVar12;
      *(uint *)((long)param_1 + 0xac) = uVar12;
      uVar15 = (uint)*(byte *)(param_1[0xc] + (ulong)uVar12);
      *(uint *)(param_1 + 0x10) = uVar15;
      *(uint *)(param_1 + 0x10) =
           (uVar15 << (ulong)(*(uint *)(param_1 + 0x12) & 0x1f) ^
           (uint)*(byte *)(param_1[0xc] + (ulong)(uVar12 + 1))) & *(uint *)((long)param_1 + 0x8c);
      if (iVar2 != iVar8) goto LAB_00130030;
    }
    uVar13 = param_1[0x13];
    if ((long)uVar13 < 0) {
      lVar17 = 0;
    }
    else {
      lVar17 = param_1[0xc] + (uVar13 & 0xffffffff);
    }
    FUN_00132fbc(param_1,lVar17,uVar12 - uVar13,0);
    param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
    FUN_0012f594(*param_1);
    if (*(int *)(*param_1 + 0x20) == 0) {
      return 0;
    }
  } while( true );
}

