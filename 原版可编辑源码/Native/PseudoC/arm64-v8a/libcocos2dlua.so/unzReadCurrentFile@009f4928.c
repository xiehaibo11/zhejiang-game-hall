
int unzReadCurrentFile(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  int iVar11;
  
  if ((param_1 == 0) || (plVar10 = *(long **)(param_1 + 0x120), plVar10 == (long *)0x0)) {
    iVar11 = -0x66;
  }
  else if (*plVar10 == 0) {
    iVar11 = -100;
  }
  else {
    if (param_3 != 0) {
      uVar5 = (ulong)param_3;
      plVar10[4] = param_2;
      *(uint *)(plVar10 + 5) = param_3;
      if (((ulong)plVar10[0x17] < uVar5) && ((int)plVar10[0x23] == 0)) {
        param_3 = (uint)plVar10[0x17];
        *(uint *)(plVar10 + 5) = param_3;
      }
      uVar8 = *(uint *)(plVar10 + 2);
      uVar9 = (ulong)uVar8;
      if ((plVar10[0x16] + uVar9 < uVar5) && ((int)plVar10[0x23] != 0)) {
        param_3 = uVar8 + (int)plVar10[0x16];
        *(uint *)(plVar10 + 5) = param_3;
      }
      if (param_3 != 0) {
        iVar11 = 0;
        if (uVar8 != 0) goto LAB_009f4b50;
LAB_009f49cc:
        uVar9 = plVar10[0x16];
        if (uVar9 == 0) {
          uVar9 = 0;
          lVar4 = plVar10[0x21];
        }
        else {
          if (0x3fff < uVar9) {
            uVar9 = 0x4000;
          }
          if ((int)uVar9 == 0) {
            return 0;
          }
          lVar4 = (*(code *)plVar10[0x1c])
                            (plVar10[0x1f],plVar10[0x20],plVar10[0x22] + plVar10[0xf],0);
          if ((lVar4 != 0) ||
             (uVar5 = (*(code *)plVar10[0x19])(plVar10[0x1f],plVar10[0x20],*plVar10,uVar9),
             uVar5 != uVar9)) {
            return -1;
          }
          if (*(int *)(param_1 + 0x128) != 0) {
            uVar5 = 0;
            do {
              lVar7 = *(long *)(param_1 + 0x148);
              uVar8 = *(uint *)(param_1 + 0x140) & 0xfffd;
              uVar8 = (uint)*(byte *)(*plVar10 + uVar5) ^ (uVar8 | 2) * (uVar8 ^ 3) >> 8;
              uVar2 = (undefined1)uVar8;
              *(undefined1 *)(*plVar10 + uVar5) = uVar2;
              uVar6 = *(ulong *)(lVar7 + ((ulong)((uint)*(ulong *)(param_1 + 0x130) ^ uVar8) & 0xff)
                                         * 8) ^ *(ulong *)(param_1 + 0x130) >> 8;
              *(ulong *)(param_1 + 0x130) = uVar6;
              lVar4 = (*(long *)(param_1 + 0x138) + (uVar6 & 0xff)) * 0x8088405 + 1;
              *(long *)(param_1 + 0x138) = lVar4;
              *(ulong *)(param_1 + 0x140) =
                   *(ulong *)(lVar7 + ((ulong)((uint)*(ulong *)(param_1 + 0x140) ^
                                              (uint)lVar4 >> 0x18) & 0xff) * 8) ^
                   *(ulong *)(param_1 + 0x140) >> 8;
              *(undefined1 *)(*plVar10 + uVar5) = uVar2;
              uVar5 = uVar5 + 1;
            } while (uVar5 < uVar9);
          }
          *(int *)(plVar10 + 2) = (int)uVar9;
          plVar10[1] = *plVar10;
          plVar10[0xf] = plVar10[0xf] + uVar9;
          plVar10[0x16] = plVar10[0x16] - uVar9;
          lVar4 = plVar10[0x21];
        }
        uVar8 = (uint)uVar9;
        if (lVar4 == 0) goto LAB_009f4b58;
        do {
          uVar8 = (uint)uVar9;
          if ((int)plVar10[0x23] != 0) goto LAB_009f4b58;
          lVar7 = plVar10[6];
          lVar4 = plVar10[4];
          iVar3 = inflate(plVar10 + 1,2);
          if ((-1 < iVar3) && (plVar10[7] != 0)) {
            iVar3 = -3;
          }
          uVar5 = plVar10[6] - lVar7;
          lVar4 = crc32(plVar10[0x14],lVar4,uVar5 & 0xffffffff);
          iVar11 = iVar11 + (int)uVar5;
          plVar10[0x14] = lVar4;
          plVar10[0x17] = plVar10[0x17] - uVar5;
          if (iVar3 != 0) {
            if (iVar3 == 1) {
              return iVar11;
            }
            return iVar3;
          }
          iVar3 = (int)plVar10[5];
          while( true ) {
            if (iVar3 == 0) {
              return iVar11;
            }
            uVar9 = (ulong)*(uint *)(plVar10 + 2);
            if (*(uint *)(plVar10 + 2) == 0) goto LAB_009f49cc;
LAB_009f4b50:
            uVar8 = (uint)uVar9;
            if (plVar10[0x21] != 0) break;
LAB_009f4b58:
            if ((uVar8 == 0) && (plVar10[0x16] == 0)) {
              return iVar11;
            }
            uVar1 = *(uint *)(plVar10 + 5);
            if (uVar8 <= *(uint *)(plVar10 + 5)) {
              uVar1 = uVar8;
            }
            if (uVar1 == 0) {
              uVar5 = 0;
            }
            else {
              uVar9 = 0;
              uVar5 = (ulong)uVar1;
              do {
                *(undefined1 *)(plVar10[4] + uVar9) = *(undefined1 *)(plVar10[1] + uVar9);
                uVar9 = uVar9 + 1;
              } while (uVar9 < uVar5);
            }
            lVar4 = crc32(plVar10[0x14],plVar10[4],uVar1);
            plVar10[0x17] = plVar10[0x17] - uVar5;
            iVar3 = (int)plVar10[5] - uVar1;
            plVar10[0x14] = lVar4;
            *(uint *)(plVar10 + 2) = (int)plVar10[2] - uVar1;
            plVar10[4] = plVar10[4] + uVar5;
            *(int *)(plVar10 + 5) = iVar3;
            plVar10[1] = plVar10[1] + uVar5;
            plVar10[6] = plVar10[6] + uVar5;
            iVar11 = uVar1 + iVar11;
          }
        } while( true );
      }
    }
    iVar11 = 0;
  }
  return iVar11;
}

