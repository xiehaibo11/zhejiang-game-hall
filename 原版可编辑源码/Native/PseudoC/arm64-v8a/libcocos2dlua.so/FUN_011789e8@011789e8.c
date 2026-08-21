
undefined4 FUN_011789e8(long *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  
  do {
    uVar10 = *(uint *)((long)param_1 + 0xa4);
LAB_01178a40:
    if (uVar10 < 0x106) {
      FUN_01176140(param_1);
      uVar10 = *(uint *)((long)param_1 + 0xa4);
      if ((param_2 == 0) && (uVar10 < 0x106)) {
        return 0;
      }
      if (uVar10 == 0) {
        if ((int)param_1[0x13] != 0) {
          uVar10 = *(uint *)((long)param_1 + 0x16fc);
          bVar4 = *(byte *)(param_1[10] + (ulong)(*(int *)((long)param_1 + 0x9c) - 1));
          *(undefined2 *)(param_1[0x2e0] + (ulong)uVar10 * 2) = 0;
          *(uint *)((long)param_1 + 0x16fc) = uVar10 + 1;
          *(byte *)(param_1[0x2de] + (ulong)uVar10) = bVar4;
          *(short *)((long)param_1 + (ulong)bVar4 * 4 + 0xc4) =
               *(short *)((long)param_1 + (ulong)bVar4 * 4 + 0xc4) + 1;
          *(undefined4 *)(param_1 + 0x13) = 0;
        }
        uVar10 = *(uint *)((long)param_1 + 0x9c);
        uVar9 = (ulong)uVar10;
        if (1 < uVar10) {
          uVar10 = 2;
        }
        *(uint *)((long)param_1 + 0x171c) = uVar10;
        if (param_2 == 4) {
          uVar11 = param_1[0x11];
          if ((long)uVar11 < 0) {
            lVar14 = 0;
          }
          else {
            lVar14 = param_1[10] + (uVar11 & 0xffffffff);
          }
          FUN_0117c24c(param_1,lVar14,uVar9 - uVar11,1);
          lVar8 = *param_1;
          param_1[0x11] = (ulong)*(uint *)((long)param_1 + 0x9c);
          lVar14 = *(long *)(lVar8 + 0x38);
          FUN_0117c078(lVar14);
          uVar10 = *(uint *)(lVar8 + 0x20);
          if (*(uint *)(lVar14 + 0x28) <= *(uint *)(lVar8 + 0x20)) {
            uVar10 = *(uint *)(lVar14 + 0x28);
          }
          if (uVar10 != 0) {
            uVar9 = (ulong)uVar10;
            memcpy(*(void **)(lVar8 + 0x18),*(void **)(lVar14 + 0x20),uVar9);
            *(ulong *)(lVar8 + 0x18) = *(long *)(lVar8 + 0x18) + uVar9;
            *(ulong *)(lVar14 + 0x20) = *(long *)(lVar14 + 0x20) + uVar9;
            *(ulong *)(lVar8 + 0x28) = *(long *)(lVar8 + 0x28) + uVar9;
            *(uint *)(lVar8 + 0x20) = *(int *)(lVar8 + 0x20) - uVar10;
            iVar6 = *(int *)(lVar14 + 0x28) - uVar10;
            *(int *)(lVar14 + 0x28) = iVar6;
            if (iVar6 == 0) {
              *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)(lVar14 + 0x10);
            }
          }
          if (*(int *)(*param_1 + 0x20) != 0) {
            return 3;
          }
          return 2;
        }
        if (*(int *)((long)param_1 + 0x16fc) != 0) {
          uVar11 = param_1[0x11];
          if ((long)uVar11 < 0) {
            lVar14 = 0;
          }
          else {
            lVar14 = param_1[10] + (uVar11 & 0xffffffff);
          }
          FUN_0117c24c(param_1,lVar14,uVar9 - uVar11,0);
          lVar8 = *param_1;
          param_1[0x11] = (ulong)*(uint *)((long)param_1 + 0x9c);
          lVar14 = *(long *)(lVar8 + 0x38);
          FUN_0117c078(lVar14);
          uVar10 = *(uint *)(lVar8 + 0x20);
          if (*(uint *)(lVar14 + 0x28) <= *(uint *)(lVar8 + 0x20)) {
            uVar10 = *(uint *)(lVar14 + 0x28);
          }
          if (uVar10 != 0) {
            uVar9 = (ulong)uVar10;
            memcpy(*(void **)(lVar8 + 0x18),*(void **)(lVar14 + 0x20),uVar9);
            *(ulong *)(lVar8 + 0x18) = *(long *)(lVar8 + 0x18) + uVar9;
            *(ulong *)(lVar14 + 0x20) = *(long *)(lVar14 + 0x20) + uVar9;
            *(ulong *)(lVar8 + 0x28) = *(long *)(lVar8 + 0x28) + uVar9;
            *(uint *)(lVar8 + 0x20) = *(int *)(lVar8 + 0x20) - uVar10;
            iVar6 = *(int *)(lVar14 + 0x28) - uVar10;
            *(int *)(lVar14 + 0x28) = iVar6;
            if (iVar6 == 0) {
              *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)(lVar14 + 0x10);
            }
          }
          if (*(int *)(*param_1 + 0x20) == 0) {
            return 0;
          }
        }
        return 1;
      }
      if (2 < uVar10) goto LAB_01178a6c;
      *(int *)(param_1 + 0x15) = (int)param_1[0x12];
      *(int *)((long)param_1 + 0x94) = (int)param_1[0x14];
      goto LAB_01178b08;
    }
LAB_01178a6c:
    uVar1 = *(uint *)((long)param_1 + 0x9c);
    uVar7 = 2;
    lVar14 = param_1[0xd];
    uVar10 = ((int)param_1[0xe] << (ulong)(*(uint *)(param_1 + 0x10) & 0x1f) ^
             (uint)*(byte *)(param_1[10] + (ulong)(uVar1 + 2))) & *(uint *)((long)param_1 + 0x7c);
    *(uint *)(param_1 + 0xe) = uVar10;
    lVar8 = (ulong)uVar10 * 2;
    uVar5 = *(ushort *)(lVar14 + lVar8);
    *(ushort *)(param_1[0xc] + (ulong)(*(uint *)((long)param_1 + 0x4c) & uVar1) * 2) = uVar5;
    *(short *)(lVar14 + lVar8) = (short)uVar1;
    uVar10 = *(uint *)(param_1 + 0x12);
    *(uint *)(param_1 + 0x15) = uVar10;
    *(undefined4 *)(param_1 + 0x12) = 2;
    *(int *)((long)param_1 + 0x94) = (int)param_1[0x14];
    if (uVar5 == 0) {
LAB_01178b0c:
      uVar10 = *(uint *)(param_1 + 0x15);
    }
    else {
      if (uVar10 < *(uint *)(param_1 + 0x16)) {
        if (*(int *)((long)param_1 + 0x44) - 0x106U < *(int *)((long)param_1 + 0x9c) - (uint)uVar5)
        {
          uVar7 = 2;
        }
        else {
          uVar7 = FUN_011790b0(param_1);
          *(uint *)(param_1 + 0x12) = uVar7;
          if (uVar7 < 6) {
            if ((int)param_1[0x17] == 1) {
LAB_01178b08:
              uVar7 = 2;
              *(undefined4 *)(param_1 + 0x12) = 2;
            }
            else if (uVar7 == 3) {
              if (0x1000 < (uint)(*(int *)((long)param_1 + 0x9c) - (int)param_1[0x14]))
              goto LAB_01178b08;
              uVar7 = 3;
            }
          }
        }
        goto LAB_01178b0c;
      }
      uVar7 = 2;
    }
    if ((uVar10 < 3) || (uVar10 < uVar7)) {
      if ((int)param_1[0x13] == 0) {
        uVar10 = *(int *)((long)param_1 + 0xa4) - 1;
        *(undefined4 *)(param_1 + 0x13) = 1;
        *(int *)((long)param_1 + 0x9c) = *(int *)((long)param_1 + 0x9c) + 1;
        *(uint *)((long)param_1 + 0xa4) = uVar10;
      }
      else {
        uVar10 = *(uint *)((long)param_1 + 0x16fc);
        bVar4 = *(byte *)(param_1[10] + (ulong)(*(int *)((long)param_1 + 0x9c) - 1));
        *(undefined2 *)(param_1[0x2e0] + (ulong)uVar10 * 2) = 0;
        *(uint *)((long)param_1 + 0x16fc) = uVar10 + 1;
        *(byte *)(param_1[0x2de] + (ulong)uVar10) = bVar4;
        *(short *)((long)param_1 + (ulong)bVar4 * 4 + 0xc4) =
             *(short *)((long)param_1 + (ulong)bVar4 * 4 + 0xc4) + 1;
        if (*(int *)((long)param_1 + 0x16fc) == (int)param_1[0x2df] + -1) {
          uVar9 = param_1[0x11];
          if ((long)uVar9 < 0) {
            lVar14 = 0;
          }
          else {
            lVar14 = param_1[10] + (uVar9 & 0xffffffff);
          }
          FUN_0117c24c(param_1,lVar14,*(uint *)((long)param_1 + 0x9c) - uVar9,0);
          lVar8 = *param_1;
          param_1[0x11] = (ulong)*(uint *)((long)param_1 + 0x9c);
          lVar14 = *(long *)(lVar8 + 0x38);
          FUN_0117c078(lVar14);
          uVar10 = *(uint *)(lVar8 + 0x20);
          if (*(uint *)(lVar14 + 0x28) <= *(uint *)(lVar8 + 0x20)) {
            uVar10 = *(uint *)(lVar14 + 0x28);
          }
          if (uVar10 != 0) {
            uVar9 = (ulong)uVar10;
            memcpy(*(void **)(lVar8 + 0x18),*(void **)(lVar14 + 0x20),uVar9);
            *(ulong *)(lVar8 + 0x18) = *(long *)(lVar8 + 0x18) + uVar9;
            *(ulong *)(lVar14 + 0x20) = *(long *)(lVar14 + 0x20) + uVar9;
            *(ulong *)(lVar8 + 0x28) = *(long *)(lVar8 + 0x28) + uVar9;
            *(uint *)(lVar8 + 0x20) = *(int *)(lVar8 + 0x20) - uVar10;
            iVar6 = *(int *)(lVar14 + 0x28) - uVar10;
            *(int *)(lVar14 + 0x28) = iVar6;
            if (iVar6 == 0) {
              *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)(lVar14 + 0x10);
            }
          }
        }
        uVar10 = *(int *)((long)param_1 + 0xa4) - 1;
        *(int *)((long)param_1 + 0x9c) = *(int *)((long)param_1 + 0x9c) + 1;
        *(uint *)((long)param_1 + 0xa4) = uVar10;
        if (*(int *)(*param_1 + 0x20) == 0) {
          return 0;
        }
      }
      goto LAB_01178a40;
    }
    iVar6 = *(int *)((long)param_1 + 0x9c);
    uVar1 = *(uint *)((long)param_1 + 0x16fc);
    bVar4 = (&DAT_0149f1a0)[uVar10 + 0xfd & 0xff];
    iVar12 = (iVar6 + 0xffff) - *(int *)((long)param_1 + 0x94);
    iVar2 = *(int *)((long)param_1 + 0xa4);
    *(short *)(param_1[0x2e0] + (ulong)uVar1 * 2) = (short)iVar12;
    *(uint *)((long)param_1 + 0x16fc) = uVar1 + 1;
    *(char *)(param_1[0x2de] + (ulong)uVar1) = (char)(uVar10 + 0xfd);
    uVar1 = iVar12 - 1;
    uVar10 = uVar1 & 0xffff;
    *(short *)((long)param_1 + ((ulong)bVar4 | 0x100) * 4 + 200) =
         *(short *)((long)param_1 + ((ulong)bVar4 | 0x100) * 4 + 200) + 1;
    if (0xff < uVar10) {
      uVar10 = (uVar1 >> 7 & 0x1ff) + 0x100;
    }
    *(short *)((long)param_1 + (ulong)(byte)(&DAT_0149efa0)[uVar10] * 4 + 0x9b8) =
         *(short *)((long)param_1 + (ulong)(byte)(&DAT_0149efa0)[uVar10] * 4 + 0x9b8) + 1;
    iVar12 = (int)param_1[0x15];
    lVar14 = param_1[0x2df];
    iVar3 = *(int *)((long)param_1 + 0x16fc);
    *(int *)((long)param_1 + 0xa4) = (1 - iVar12) + *(int *)((long)param_1 + 0xa4);
    *(int *)(param_1 + 0x15) = iVar12 + -2;
    iVar12 = iVar12 + -3;
    uVar10 = *(int *)((long)param_1 + 0x9c) + 1;
    do {
      *(uint *)((long)param_1 + 0x9c) = uVar10;
      if (uVar10 <= (iVar6 + iVar2) - 3U) {
        lVar8 = param_1[0xd];
        uVar1 = ((int)param_1[0xe] << (ulong)(*(uint *)(param_1 + 0x10) & 0x1f) ^
                (uint)*(byte *)(param_1[10] + (ulong)(uVar10 + 2))) &
                *(uint *)((long)param_1 + 0x7c);
        *(uint *)(param_1 + 0xe) = uVar1;
        lVar13 = (ulong)uVar1 * 2;
        *(undefined2 *)(param_1[0xc] + (ulong)(*(uint *)((long)param_1 + 0x4c) & uVar10) * 2) =
             *(undefined2 *)(lVar8 + lVar13);
        *(short *)(lVar8 + lVar13) = (short)uVar10;
      }
      *(int *)(param_1 + 0x15) = iVar12;
      iVar12 = iVar12 + -1;
      uVar10 = uVar10 + 1;
    } while (iVar12 != -1);
    *(undefined4 *)(param_1 + 0x12) = 2;
    *(undefined4 *)(param_1 + 0x13) = 0;
    *(uint *)((long)param_1 + 0x9c) = uVar10;
    if (iVar3 == (int)lVar14 + -1) {
      uVar9 = param_1[0x11];
      if ((long)uVar9 < 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = param_1[10] + (uVar9 & 0xffffffff);
      }
      FUN_0117c24c(param_1,lVar14,uVar10 - uVar9,0);
      lVar8 = *param_1;
      param_1[0x11] = (ulong)*(uint *)((long)param_1 + 0x9c);
      lVar14 = *(long *)(lVar8 + 0x38);
      FUN_0117c078(lVar14);
      uVar10 = *(uint *)(lVar8 + 0x20);
      if (*(uint *)(lVar14 + 0x28) <= *(uint *)(lVar8 + 0x20)) {
        uVar10 = *(uint *)(lVar14 + 0x28);
      }
      if (uVar10 != 0) {
        uVar9 = (ulong)uVar10;
        memcpy(*(void **)(lVar8 + 0x18),*(void **)(lVar14 + 0x20),uVar9);
        *(ulong *)(lVar8 + 0x18) = *(long *)(lVar8 + 0x18) + uVar9;
        *(ulong *)(lVar14 + 0x20) = *(long *)(lVar14 + 0x20) + uVar9;
        *(ulong *)(lVar8 + 0x28) = *(long *)(lVar8 + 0x28) + uVar9;
        *(uint *)(lVar8 + 0x20) = *(int *)(lVar8 + 0x20) - uVar10;
        iVar6 = *(int *)(lVar14 + 0x28) - uVar10;
        *(int *)(lVar14 + 0x28) = iVar6;
        if (iVar6 == 0) {
          *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)(lVar14 + 0x10);
        }
      }
      if (*(int *)(*param_1 + 0x20) == 0) {
        return 0;
      }
    }
  } while( true );
}

