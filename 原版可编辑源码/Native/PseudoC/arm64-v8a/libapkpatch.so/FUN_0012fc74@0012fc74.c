
undefined4 FUN_0012fc74(long *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  
LAB_0012fca4:
  do {
    uVar9 = *(uint *)((long)param_1 + 0xb4);
    if (uVar9 < 0x103) {
      FUN_0012e71c(param_1);
      uVar9 = *(uint *)((long)param_1 + 0xb4);
      if ((uVar9 < 0x103) && (param_2 == 0)) {
        return 0;
      }
      if (uVar9 == 0) {
        *(undefined4 *)((long)param_1 + 0x172c) = 0;
        if (param_2 == 4) {
          uVar10 = param_1[0x13];
          if ((long)uVar10 < 0) {
            lVar11 = 0;
          }
          else {
            lVar11 = param_1[0xc] + (uVar10 & 0xffffffff);
          }
          FUN_00132fbc(param_1,lVar11,*(uint *)((long)param_1 + 0xac) - uVar10,1);
          param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
          FUN_0012f594(*param_1);
          if (*(int *)(*param_1 + 0x20) != 0) {
            return 3;
          }
          return 2;
        }
        if (*(int *)((long)param_1 + 0x170c) != 0) {
          uVar10 = param_1[0x13];
          if ((long)uVar10 < 0) {
            lVar11 = 0;
          }
          else {
            lVar11 = param_1[0xc] + (uVar10 & 0xffffffff);
          }
          FUN_00132fbc(param_1,lVar11,*(uint *)((long)param_1 + 0xac) - uVar10,0);
          param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
          FUN_0012f594(*param_1);
          if (*(int *)(*param_1 + 0x20) == 0) {
            return 0;
          }
        }
        return 1;
      }
      *(undefined4 *)(param_1 + 0x14) = 0;
      if (2 < uVar9) goto LAB_0012fce4;
      uVar10 = (ulong)*(uint *)((long)param_1 + 0xac);
LAB_0012fe90:
      uVar9 = *(uint *)((long)param_1 + 0x170c);
      bVar7 = *(byte *)(param_1[0xc] + uVar10);
      lVar11 = param_1[0x2e0];
      *(undefined2 *)(param_1[0x2e2] + (ulong)uVar9 * 2) = 0;
      *(uint *)((long)param_1 + 0x170c) = uVar9 + 1;
      *(byte *)(lVar11 + (ulong)uVar9) = bVar7;
      iVar6 = *(int *)((long)param_1 + 0xb4);
      iVar12 = *(int *)((long)param_1 + 0xac);
      *(short *)((long)param_1 + (ulong)bVar7 * 4 + 0xd4) =
           *(short *)((long)param_1 + (ulong)bVar7 * 4 + 0xd4) + 1;
      *(int *)((long)param_1 + 0xb4) = iVar6 + -1;
      uVar9 = iVar12 + 1;
      *(uint *)((long)param_1 + 0xac) = uVar9;
      if (*(int *)((long)param_1 + 0x170c) != (int)param_1[0x2e1] + -1) goto LAB_0012fca4;
    }
    else {
      *(undefined4 *)(param_1 + 0x14) = 0;
LAB_0012fce4:
      uVar10 = (ulong)*(uint *)((long)param_1 + 0xac);
      if (*(uint *)((long)param_1 + 0xac) == 0) goto LAB_0012fe90;
      pcVar4 = (char *)(param_1[0xc] + uVar10);
      cVar8 = pcVar4[-1];
      if (((cVar8 != *pcVar4) || (cVar8 != pcVar4[1])) || (cVar8 != pcVar4[2])) goto LAB_0012fe90;
      iVar6 = (int)pcVar4;
      lVar11 = 0;
      do {
        pcVar5 = pcVar4 + lVar11;
        if (cVar8 != pcVar5[3]) {
          iVar12 = (int)pcVar5 + 3;
          goto LAB_0012fdf4;
        }
        iVar12 = (int)lVar11;
        if (cVar8 != pcVar5[4]) {
          iVar12 = iVar6 + iVar12 + 4;
          goto LAB_0012fdf4;
        }
        pcVar5 = pcVar4 + lVar11;
        if (cVar8 != pcVar5[5]) {
          iVar12 = (int)pcVar5 + 5;
          goto LAB_0012fdf4;
        }
        if (cVar8 != pcVar5[6]) {
          iVar12 = iVar6 + iVar12 + 6;
          goto LAB_0012fdf4;
        }
        pcVar5 = pcVar4 + lVar11;
        if (cVar8 != pcVar5[7]) {
          iVar12 = (int)pcVar5 + 7;
          goto LAB_0012fdf4;
        }
        if (cVar8 != pcVar5[8]) {
          iVar12 = iVar6 + iVar12 + 8;
          goto LAB_0012fdf4;
        }
        pcVar5 = pcVar4 + lVar11;
        if (cVar8 != pcVar5[9]) {
          iVar12 = (int)pcVar5 + 9;
          goto LAB_0012fdf4;
        }
        lVar2 = lVar11 + 8;
      } while ((cVar8 == pcVar5[10]) && (uVar3 = lVar11 + 2, lVar11 = lVar2, uVar3 < 0xfa));
      iVar12 = iVar6 + (int)lVar2 + 2;
LAB_0012fdf4:
      uVar1 = (iVar12 - (iVar6 + 0x102)) + 0x102;
      if (uVar1 <= uVar9) {
        uVar9 = uVar1;
      }
      *(uint *)(param_1 + 0x14) = uVar9;
      if (uVar9 < 3) goto LAB_0012fe90;
      uVar1 = *(uint *)((long)param_1 + 0x170c);
      lVar11 = param_1[0x2e0];
      bVar7 = (&DAT_0011e2d0)[(ulong)(uVar9 - 3) & 0xff];
      *(undefined2 *)(param_1[0x2e2] + (ulong)uVar1 * 2) = 1;
      *(uint *)((long)param_1 + 0x170c) = uVar1 + 1;
      *(char *)(lVar11 + (ulong)uVar1) = (char)(uVar9 - 3);
      iVar6 = *(int *)((long)param_1 + 0xb4);
      iVar12 = *(int *)((long)param_1 + 0xac);
      *(short *)((long)param_1 + (ulong)bVar7 * 4 + 0x4d8) =
           *(short *)((long)param_1 + (ulong)bVar7 * 4 + 0x4d8) + 1;
      lVar11 = param_1[0x14];
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(short *)(param_1 + 0x139) = (short)param_1[0x139] + 1;
      uVar9 = iVar12 + (int)lVar11;
      *(int *)((long)param_1 + 0xb4) = iVar6 - (int)lVar11;
      *(uint *)((long)param_1 + 0xac) = uVar9;
      if (*(int *)((long)param_1 + 0x170c) != (int)param_1[0x2e1] + -1) goto LAB_0012fca4;
    }
    uVar10 = param_1[0x13];
    if ((long)uVar10 < 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = param_1[0xc] + (uVar10 & 0xffffffff);
    }
    FUN_00132fbc(param_1,lVar11,uVar9 - uVar10,0);
    param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
    FUN_0012f594(*param_1);
    if (*(int *)(*param_1 + 0x20) == 0) {
      return 0;
    }
  } while( true );
}

