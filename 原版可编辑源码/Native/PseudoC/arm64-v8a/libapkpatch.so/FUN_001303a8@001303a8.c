
undefined4 FUN_001303a8(long *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  short sVar9;
  ushort uVar10;
  undefined2 uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  long lVar20;
  
LAB_001303dc:
  do {
    if (*(uint *)((long)param_1 + 0xb4) < 0x106) {
      FUN_0012e71c(param_1);
      uVar17 = *(uint *)((long)param_1 + 0xb4);
      if ((uVar17 < 0x106) && (param_2 == 0)) {
        return 0;
      }
      if (uVar17 == 0) {
        if ((int)param_1[0x15] != 0) {
          uVar17 = *(uint *)((long)param_1 + 0x170c);
          bVar7 = *(byte *)(param_1[0xc] + (ulong)(*(int *)((long)param_1 + 0xac) - 1));
          lVar20 = param_1[0x2e0];
          *(undefined2 *)(param_1[0x2e2] + (ulong)uVar17 * 2) = 0;
          *(uint *)((long)param_1 + 0x170c) = uVar17 + 1;
          *(byte *)(lVar20 + (ulong)uVar17) = bVar7;
          sVar9 = *(short *)((long)param_1 + (ulong)bVar7 * 4 + 0xd4);
          *(undefined4 *)(param_1 + 0x15) = 0;
          *(short *)((long)param_1 + (ulong)bVar7 * 4 + 0xd4) = sVar9 + 1;
        }
        uVar17 = *(uint *)((long)param_1 + 0xac);
        uVar16 = (ulong)uVar17;
        if (1 < uVar17) {
          uVar17 = 2;
        }
        *(uint *)((long)param_1 + 0x172c) = uVar17;
        if (param_2 != 4) {
          if (*(int *)((long)param_1 + 0x170c) != 0) {
            uVar18 = param_1[0x13];
            if ((long)uVar18 < 0) {
              lVar20 = 0;
            }
            else {
              lVar20 = param_1[0xc] + (uVar18 & 0xffffffff);
            }
            FUN_00132fbc(param_1,lVar20,uVar16 - uVar18,0);
            param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
            FUN_0012f594(*param_1);
            if (*(int *)(*param_1 + 0x20) == 0) {
              return 0;
            }
          }
          return 1;
        }
        uVar18 = param_1[0x13];
        if ((long)uVar18 < 0) {
          lVar20 = 0;
        }
        else {
          lVar20 = param_1[0xc] + (uVar18 & 0xffffffff);
        }
        FUN_00132fbc(param_1,lVar20,uVar16 - uVar18,1);
        param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
        FUN_0012f594(*param_1);
        if (*(int *)(*param_1 + 0x20) != 0) {
          return 3;
        }
        return 2;
      }
      if (2 < uVar17) goto LAB_0013040c;
      uVar15 = *(uint *)(param_1 + 0x14);
      uVar14 = 2;
      *(uint *)(param_1 + 0x17) = uVar15;
      *(undefined4 *)(param_1 + 0x14) = 2;
      *(int *)((long)param_1 + 0xa4) = (int)param_1[0x16];
    }
    else {
LAB_0013040c:
      uVar17 = *(uint *)((long)param_1 + 0xac);
      lVar13 = param_1[0x16];
      lVar20 = param_1[0xf];
      uVar12 = ((int)param_1[0x10] << (ulong)(*(uint *)(param_1 + 0x12) & 0x1f) ^
               (uint)*(byte *)(param_1[0xc] + (ulong)(uVar17 + 2))) &
               *(uint *)((long)param_1 + 0x8c);
      uVar10 = *(ushort *)(lVar20 + (ulong)uVar12 * 2);
      uVar15 = *(uint *)(param_1 + 0x14);
      uVar14 = 2;
      *(ushort *)(param_1[0xe] + (ulong)(*(uint *)(param_1 + 0xb) & uVar17) * 2) = uVar10;
      *(short *)(lVar20 + (ulong)uVar12 * 2) = (short)uVar17;
      *(uint *)(param_1 + 0x17) = uVar15;
      *(uint *)(param_1 + 0x10) = uVar12;
      *(undefined4 *)(param_1 + 0x14) = 2;
      *(int *)((long)param_1 + 0xa4) = (int)lVar13;
      if (uVar10 != 0) {
        if ((uVar15 < *(uint *)(param_1 + 0x18)) &&
           (*(int *)((long)param_1 + 0xac) - (uint)uVar10 <= (int)param_1[10] - 0x106U)) {
          uVar14 = FUN_00130860(param_1);
          *(uint *)(param_1 + 0x14) = uVar14;
          if (uVar14 < 6) {
            if ((int)param_1[0x19] == 1) {
LAB_001306a4:
              uVar14 = 2;
              *(undefined4 *)(param_1 + 0x14) = 2;
            }
            else if (uVar14 == 3) {
              if (0x1000 < (uint)(*(int *)((long)param_1 + 0xac) - (int)param_1[0x16]))
              goto LAB_001306a4;
              uVar14 = 3;
            }
          }
        }
        else {
          uVar14 = 2;
        }
        uVar15 = *(uint *)(param_1 + 0x17);
      }
    }
    if ((uVar15 < 3) || (uVar15 < uVar14)) {
      if ((int)param_1[0x15] == 0) {
        *(undefined4 *)(param_1 + 0x15) = 1;
        *(int *)((long)param_1 + 0xac) = *(int *)((long)param_1 + 0xac) + 1;
        *(int *)((long)param_1 + 0xb4) = *(int *)((long)param_1 + 0xb4) + -1;
        goto LAB_001303dc;
      }
      uVar17 = *(uint *)((long)param_1 + 0x170c);
      bVar7 = *(byte *)(param_1[0xc] + (ulong)(*(int *)((long)param_1 + 0xac) - 1));
      lVar20 = param_1[0x2e0];
      *(undefined2 *)(param_1[0x2e2] + (ulong)uVar17 * 2) = 0;
      *(uint *)((long)param_1 + 0x170c) = uVar17 + 1;
      *(byte *)(lVar20 + (ulong)uVar17) = bVar7;
      *(short *)((long)param_1 + (ulong)bVar7 * 4 + 0xd4) =
           *(short *)((long)param_1 + (ulong)bVar7 * 4 + 0xd4) + 1;
      if (*(int *)((long)param_1 + 0x170c) == (int)param_1[0x2e1] + -1) {
        uVar16 = param_1[0x13];
        if ((long)uVar16 < 0) {
          lVar20 = 0;
        }
        else {
          lVar20 = param_1[0xc] + (uVar16 & 0xffffffff);
        }
        FUN_00132fbc(param_1,lVar20,*(uint *)((long)param_1 + 0xac) - uVar16,0);
        param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
        FUN_0012f594(*param_1);
      }
      iVar1 = *(int *)(*param_1 + 0x20);
      *(int *)((long)param_1 + 0xac) = *(int *)((long)param_1 + 0xac) + 1;
      *(int *)((long)param_1 + 0xb4) = *(int *)((long)param_1 + 0xb4) + -1;
    }
    else {
      iVar3 = *(int *)((long)param_1 + 0xac);
      iVar4 = *(int *)((long)param_1 + 0xb4);
      uVar17 = *(uint *)((long)param_1 + 0x170c);
      lVar20 = param_1[0x2e0];
      bVar7 = (&DAT_0011e2d0)[(ulong)(uVar15 - 3) & 0xff];
      iVar1 = iVar3 + ~*(uint *)((long)param_1 + 0xa4);
      *(uint *)((long)param_1 + 0x170c) = uVar17 + 1;
      *(short *)(param_1[0x2e2] + (ulong)uVar17 * 2) = (short)iVar1;
      *(char *)(lVar20 + (ulong)uVar17) = (char)(uVar15 - 3);
      uVar17 = iVar1 - 1;
      if (0xff < (uVar17 & 0xffff)) {
        uVar17 = (uVar17 >> 7 & 0x1ff) + 0x100;
      }
      bVar8 = (&DAT_0011e0d0)[(ulong)uVar17 & 0xffff];
      iVar1 = *(int *)((long)param_1 + 0xb4);
      iVar2 = (int)param_1[0x17];
      *(short *)((long)param_1 + (ulong)bVar7 * 4 + 0x4d8) =
           *(short *)((long)param_1 + (ulong)bVar7 * 4 + 0x4d8) + 1;
      iVar5 = *(int *)((long)param_1 + 0xac);
      *(short *)((long)param_1 + (ulong)bVar8 * 4 + 0x9c8) =
           *(short *)((long)param_1 + (ulong)bVar8 * 4 + 0x9c8) + 1;
      lVar20 = param_1[0x2e1];
      iVar6 = *(int *)((long)param_1 + 0x170c);
      iVar19 = iVar2 + -3;
      *(int *)((long)param_1 + 0xb4) = (iVar1 - iVar2) + 1;
      *(int *)(param_1 + 0x17) = iVar2 + -2;
      uVar17 = iVar5 + 1;
      do {
        *(uint *)((long)param_1 + 0xac) = uVar17;
        if (uVar17 <= (iVar3 + iVar4) - 3U) {
          lVar13 = param_1[0xf];
          uVar15 = ((int)param_1[0x10] << (ulong)(*(uint *)(param_1 + 0x12) & 0x1f) ^
                   (uint)*(byte *)(param_1[0xc] + (ulong)(uVar17 + 2))) &
                   *(uint *)((long)param_1 + 0x8c);
          uVar11 = *(undefined2 *)(lVar13 + (ulong)uVar15 * 2);
          *(uint *)(param_1 + 0x10) = uVar15;
          *(undefined2 *)(param_1[0xe] + (ulong)(*(uint *)(param_1 + 0xb) & uVar17) * 2) = uVar11;
          *(short *)(lVar13 + (ulong)uVar15 * 2) = (short)uVar17;
        }
        *(int *)(param_1 + 0x17) = iVar19;
        iVar19 = iVar19 + -1;
        uVar17 = uVar17 + 1;
      } while (iVar19 != -1);
      *(undefined4 *)(param_1 + 0x14) = 2;
      *(undefined4 *)(param_1 + 0x15) = 0;
      *(uint *)((long)param_1 + 0xac) = uVar17;
      if (iVar6 != (int)lVar20 + -1) goto LAB_001303dc;
      uVar16 = param_1[0x13];
      if ((long)uVar16 < 0) {
        lVar20 = 0;
      }
      else {
        lVar20 = param_1[0xc] + (uVar16 & 0xffffffff);
      }
      FUN_00132fbc(param_1,lVar20,uVar17 - uVar16,0);
      param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
      FUN_0012f594(*param_1);
      iVar1 = *(int *)(*param_1 + 0x20);
    }
    if (iVar1 == 0) {
      return 0;
    }
  } while( true );
}

