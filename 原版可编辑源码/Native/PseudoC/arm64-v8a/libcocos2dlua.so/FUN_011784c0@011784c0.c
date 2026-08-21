
undefined4 FUN_011784c0(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  
  do {
    if (*(uint *)((long)param_1 + 0xa4) < 0x106) {
      FUN_01176140(param_1);
      uVar7 = *(uint *)((long)param_1 + 0xa4);
      if ((param_2 == 0) && (uVar7 < 0x106)) {
        return 0;
      }
      if (uVar7 == 0) {
        uVar7 = *(uint *)((long)param_1 + 0x9c);
        uVar11 = (ulong)uVar7;
        if (1 < uVar7) {
          uVar7 = 2;
        }
        *(uint *)((long)param_1 + 0x171c) = uVar7;
        if (param_2 != 4) {
          if (*(int *)((long)param_1 + 0x16fc) != 0) {
            uVar9 = param_1[0x11];
            if ((long)uVar9 < 0) {
              lVar14 = 0;
            }
            else {
              lVar14 = param_1[10] + (uVar9 & 0xffffffff);
            }
            FUN_0117c24c(param_1,lVar14,uVar11 - uVar9,0);
            lVar8 = *param_1;
            param_1[0x11] = (ulong)*(uint *)((long)param_1 + 0x9c);
            lVar14 = *(long *)(lVar8 + 0x38);
            FUN_0117c078(lVar14);
            uVar7 = *(uint *)(lVar8 + 0x20);
            if (*(uint *)(lVar14 + 0x28) <= *(uint *)(lVar8 + 0x20)) {
              uVar7 = *(uint *)(lVar14 + 0x28);
            }
            if (uVar7 != 0) {
              uVar11 = (ulong)uVar7;
              memcpy(*(void **)(lVar8 + 0x18),*(void **)(lVar14 + 0x20),uVar11);
              *(ulong *)(lVar8 + 0x18) = *(long *)(lVar8 + 0x18) + uVar11;
              *(ulong *)(lVar14 + 0x20) = *(long *)(lVar14 + 0x20) + uVar11;
              *(ulong *)(lVar8 + 0x28) = *(long *)(lVar8 + 0x28) + uVar11;
              *(uint *)(lVar8 + 0x20) = *(int *)(lVar8 + 0x20) - uVar7;
              iVar13 = *(int *)(lVar14 + 0x28) - uVar7;
              *(int *)(lVar14 + 0x28) = iVar13;
              if (iVar13 == 0) {
                *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)(lVar14 + 0x10);
              }
            }
            if (*(int *)(*param_1 + 0x20) == 0) {
              return 0;
            }
          }
          return 1;
        }
        uVar9 = param_1[0x11];
        if ((long)uVar9 < 0) {
          lVar14 = 0;
        }
        else {
          lVar14 = param_1[10] + (uVar9 & 0xffffffff);
        }
        FUN_0117c24c(param_1,lVar14,uVar11 - uVar9,1);
        lVar8 = *param_1;
        param_1[0x11] = (ulong)*(uint *)((long)param_1 + 0x9c);
        lVar14 = *(long *)(lVar8 + 0x38);
        FUN_0117c078(lVar14);
        uVar7 = *(uint *)(lVar8 + 0x20);
        if (*(uint *)(lVar14 + 0x28) <= *(uint *)(lVar8 + 0x20)) {
          uVar7 = *(uint *)(lVar14 + 0x28);
        }
        if (uVar7 != 0) {
          uVar11 = (ulong)uVar7;
          memcpy(*(void **)(lVar8 + 0x18),*(void **)(lVar14 + 0x20),uVar11);
          *(ulong *)(lVar8 + 0x18) = *(long *)(lVar8 + 0x18) + uVar11;
          *(ulong *)(lVar14 + 0x20) = *(long *)(lVar14 + 0x20) + uVar11;
          *(ulong *)(lVar8 + 0x28) = *(long *)(lVar8 + 0x28) + uVar11;
          *(uint *)(lVar8 + 0x20) = *(int *)(lVar8 + 0x20) - uVar7;
          iVar13 = *(int *)(lVar14 + 0x28) - uVar7;
          *(int *)(lVar14 + 0x28) = iVar13;
          if (iVar13 == 0) {
            *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)(lVar14 + 0x10);
          }
        }
        if (*(int *)(*param_1 + 0x20) != 0) {
          return 3;
        }
        return 2;
      }
      if (2 < uVar7) goto LAB_01178520;
LAB_0117857c:
      uVar7 = *(uint *)(param_1 + 0x12);
      if (2 < uVar7) goto LAB_01178588;
LAB_01178704:
      uVar7 = *(uint *)((long)param_1 + 0x16fc);
      bVar4 = *(byte *)(param_1[10] + (ulong)*(uint *)((long)param_1 + 0x9c));
      *(undefined2 *)(param_1[0x2e0] + (ulong)uVar7 * 2) = 0;
      *(uint *)((long)param_1 + 0x16fc) = uVar7 + 1;
      *(byte *)(param_1[0x2de] + (ulong)uVar7) = bVar4;
      *(short *)((long)param_1 + (ulong)bVar4 * 4 + 0xc4) =
           *(short *)((long)param_1 + (ulong)bVar4 * 4 + 0xc4) + 1;
      bVar6 = *(int *)((long)param_1 + 0x16fc) == (int)param_1[0x2df] + -1;
      uVar7 = *(int *)((long)param_1 + 0x9c) + 1;
      *(int *)((long)param_1 + 0xa4) = *(int *)((long)param_1 + 0xa4) + -1;
LAB_01178764:
      *(uint *)((long)param_1 + 0x9c) = uVar7;
    }
    else {
LAB_01178520:
      uVar10 = *(uint *)((long)param_1 + 0x9c);
      lVar14 = param_1[0xd];
      uVar7 = ((int)param_1[0xe] << (ulong)(*(uint *)(param_1 + 0x10) & 0x1f) ^
              (uint)*(byte *)(param_1[10] + (ulong)(uVar10 + 2))) & *(uint *)((long)param_1 + 0x7c);
      *(uint *)(param_1 + 0xe) = uVar7;
      lVar8 = (ulong)uVar7 * 2;
      uVar5 = *(ushort *)(lVar14 + lVar8);
      *(ushort *)(param_1[0xc] + (ulong)(*(uint *)((long)param_1 + 0x4c) & uVar10) * 2) = uVar5;
      *(short *)(lVar14 + lVar8) = (short)uVar10;
      if ((uVar5 == 0) || (*(int *)((long)param_1 + 0x44) - 0x106U < uVar10 - uVar5))
      goto LAB_0117857c;
      uVar7 = FUN_011790b0(param_1);
      *(uint *)(param_1 + 0x12) = uVar7;
      if (uVar7 < 3) goto LAB_01178704;
LAB_01178588:
      uVar10 = *(uint *)((long)param_1 + 0x16fc);
      iVar13 = *(int *)((long)param_1 + 0x9c) - (int)param_1[0x14];
      bVar4 = (&DAT_0149f1a0)[uVar7 + 0xfd & 0xff];
      *(short *)(param_1[0x2e0] + (ulong)uVar10 * 2) = (short)iVar13;
      *(uint *)((long)param_1 + 0x16fc) = uVar10 + 1;
      *(char *)(param_1[0x2de] + (ulong)uVar10) = (char)(uVar7 + 0xfd);
      uVar10 = iVar13 - 1;
      uVar7 = uVar10 & 0xffff;
      *(short *)((long)param_1 + ((ulong)bVar4 | 0x100) * 4 + 200) =
           *(short *)((long)param_1 + ((ulong)bVar4 | 0x100) * 4 + 200) + 1;
      if (0xff < uVar7) {
        uVar7 = (uVar10 >> 7 & 0x1ff) + 0x100;
      }
      *(short *)((long)param_1 + (ulong)(byte)(&DAT_0149efa0)[uVar7] * 4 + 0x9b8) =
           *(short *)((long)param_1 + (ulong)(byte)(&DAT_0149efa0)[uVar7] * 4 + 0x9b8) + 1;
      uVar7 = *(uint *)(param_1 + 0x12);
      uVar10 = *(int *)((long)param_1 + 0xa4) - uVar7;
      bVar6 = *(int *)((long)param_1 + 0x16fc) == (int)param_1[0x2df] + -1;
      *(uint *)((long)param_1 + 0xa4) = uVar10;
      if ((2 < uVar10) && (uVar7 <= *(uint *)(param_1 + 0x16))) {
        uVar11 = (ulong)*(uint *)(param_1 + 0xe);
        uVar10 = *(uint *)((long)param_1 + 0x7c);
        uVar2 = *(uint *)(param_1 + 0x10);
        lVar12 = param_1[10];
        lVar14 = param_1[0xc];
        lVar8 = param_1[0xd];
        uVar3 = *(uint *)((long)param_1 + 0x4c);
        *(uint *)(param_1 + 0x12) = uVar7 - 1;
        iVar13 = uVar7 - 2;
        uVar7 = *(int *)((long)param_1 + 0x9c) + 1;
        do {
          *(uint *)((long)param_1 + 0x9c) = uVar7;
          uVar1 = ((int)uVar11 << (ulong)(uVar2 & 0x1f) ^
                  (uint)*(byte *)(lVar12 + (ulong)(uVar7 + 2))) & uVar10;
          uVar11 = (ulong)uVar1;
          *(uint *)(param_1 + 0xe) = uVar1;
          *(undefined2 *)(lVar14 + (ulong)(uVar3 & uVar7) * 2) = *(undefined2 *)(lVar8 + uVar11 * 2)
          ;
          *(short *)(lVar8 + uVar11 * 2) = (short)uVar7;
          *(int *)(param_1 + 0x12) = iVar13;
          iVar13 = iVar13 + -1;
          uVar7 = uVar7 + 1;
        } while (iVar13 != -1);
        goto LAB_01178764;
      }
      *(undefined4 *)(param_1 + 0x12) = 0;
      uVar7 = *(int *)((long)param_1 + 0x9c) + uVar7;
      *(uint *)((long)param_1 + 0x9c) = uVar7;
      uVar10 = (uint)*(byte *)(param_1[10] + (ulong)uVar7);
      *(uint *)(param_1 + 0xe) = uVar10;
      *(uint *)(param_1 + 0xe) =
           (uVar10 << (ulong)(*(uint *)(param_1 + 0x10) & 0x1f) ^
           (uint)*(byte *)(param_1[10] + (ulong)(uVar7 + 1))) & *(uint *)((long)param_1 + 0x7c);
    }
    if (bVar6) {
      uVar11 = param_1[0x11];
      if ((long)uVar11 < 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = param_1[10] + (uVar11 & 0xffffffff);
      }
      FUN_0117c24c(param_1,lVar14,uVar7 - uVar11,0);
      lVar8 = *param_1;
      param_1[0x11] = (ulong)*(uint *)((long)param_1 + 0x9c);
      lVar14 = *(long *)(lVar8 + 0x38);
      FUN_0117c078(lVar14);
      uVar7 = *(uint *)(lVar8 + 0x20);
      if (*(uint *)(lVar14 + 0x28) <= *(uint *)(lVar8 + 0x20)) {
        uVar7 = *(uint *)(lVar14 + 0x28);
      }
      if (uVar7 != 0) {
        uVar11 = (ulong)uVar7;
        memcpy(*(void **)(lVar8 + 0x18),*(void **)(lVar14 + 0x20),uVar11);
        *(ulong *)(lVar8 + 0x18) = *(long *)(lVar8 + 0x18) + uVar11;
        *(ulong *)(lVar14 + 0x20) = *(long *)(lVar14 + 0x20) + uVar11;
        *(ulong *)(lVar8 + 0x28) = *(long *)(lVar8 + 0x28) + uVar11;
        *(uint *)(lVar8 + 0x20) = *(int *)(lVar8 + 0x20) - uVar7;
        iVar13 = *(int *)(lVar14 + 0x28) - uVar7;
        *(int *)(lVar14 + 0x28) = iVar13;
        if (iVar13 == 0) {
          *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)(lVar14 + 0x10);
        }
      }
      if (*(int *)(*param_1 + 0x20) == 0) {
        return 0;
      }
    }
  } while( true );
}

