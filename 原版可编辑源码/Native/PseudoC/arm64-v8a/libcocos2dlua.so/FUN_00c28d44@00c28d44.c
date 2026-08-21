
void FUN_00c28d44(long param_1,ulong param_2)

{
  bool bVar1;
  int *piVar2;
  bool bVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  byte bVar9;
  undefined4 uVar10;
  ulong uVar11;
  int *local_9b0;
  undefined4 *local_9a8;
  int local_9a0;
  uint local_99c;
  uint local_998;
  long local_988;
  long local_980;
  int local_978;
  undefined4 local_974;
  undefined4 local_970;
  undefined4 local_96c;
  undefined4 local_968;
  uint local_960;
  undefined2 auStack_956 [1195];
  
  bVar1 = true;
  iVar7 = *(int *)(param_1 + 4);
LAB_00c28d84:
  if (iVar7 == 0x103) {
    return;
  }
LAB_00c28d8c:
  if (iVar7 == 0x3b) {
    bVar1 = false;
    FUN_00c2593c(param_1,param_2);
    iVar7 = *(int *)(param_1 + 4);
    param_2 = extraout_x1_00;
  }
  else {
    if (iVar7 != 0x23) {
      uVar5 = FUN_00c27ec4(param_1,&local_9a0,0x38000);
      bVar3 = *(int *)(param_1 + 4) == 0x103;
      if (((!bVar3) && (*(int *)(param_1 + 4) != 0x3b)) || (local_960 >> 0x1c != 7)) {
LAB_00c28dc4:
        do {
          FUN_00c263c4(param_1,&local_9a0);
          uVar6 = FUN_00c25220(param_1,&local_9a0);
          uVar11 = (ulong)uVar6;
          if ((local_988 != 0) && (local_978 == 0)) {
            plVar8 = *(long **)(param_1 + 0x50);
            if ((uVar5 & 0x8000) == 0) {
              piVar2 = (int *)(*plVar8 + uVar11 * 0x18);
              if (*(uint *)(*plVar8 + uVar11 * 0x18) >> 0x1c != 6) {
                if ((uVar5 & 0x20000) != 0) {
                  uVar11 = FUN_00c27470(param_1,&local_9b0,uVar11);
                  uVar11 = uVar11 & 0xffffffff;
                  goto LAB_00c28e10;
                }
                uVar11 = FUN_00c0e728(plVar8,&local_9b0);
                uVar11 = uVar11 & 0xffffffff;
                *local_9b0 = uVar6 + 0xc0000000;
                piVar2 = local_9b0;
              }
              local_9b0 = piVar2;
              if (local_980 != 0) {
                uVar4 = FUN_00c0e728(*(undefined8 *)(param_1 + 0x50),&local_9a8);
                local_9b0 = (int *)(**(long **)(param_1 + 0x50) + uVar11 * 0x18);
                *local_9a8 = 0x80040000;
                *(short *)(local_9a8 + 2) = (short)local_9b0[2];
                *(undefined2 *)(local_9b0 + 2) = uVar4;
                *(byte *)(local_980 + 8) = *(byte *)(local_980 + 8) | 0x20;
                *(long *)(local_9a8 + 4) = local_980;
              }
            }
            else {
              uVar11 = FUN_00c0e728(plVar8,&local_9b0);
              uVar11 = uVar11 & 0xffffffff;
              *local_9b0 = uVar6 + 0x70000000;
            }
LAB_00c28e10:
            *(byte *)(local_988 + 8) = *(byte *)(local_988 + 8) | 0x20;
            *(long *)(local_9b0 + 4) = local_988;
            FUN_00c0e904(*(undefined8 *)(param_1 + 0x50),local_9b0,uVar11);
          }
          if (*(int *)(param_1 + 4) != 0x2c) goto LAB_00c28f50;
          FUN_00c2593c(param_1);
          local_988 = 0;
          local_99c = local_998;
          local_9a0 = local_998 + 1;
          local_974 = local_96c;
          local_970 = local_968;
          local_980 = 0;
          auStack_956[(ulong)local_998 * 0xc] = 0;
        } while( true );
      }
      uVar6 = local_960;
      do {
        uVar6 = *(uint *)(**(long **)(param_1 + 0x50) + (ulong)(ushort)uVar6 * 0x18);
      } while (uVar6 >> 0x1c == 8);
      if ((uVar6 >> 0x1c & 0xfffffffb) != 1) goto LAB_00c28dc4;
      goto LAB_00c28f58;
    }
    uVar5 = *(uint *)(param_1 + 0x68);
    uVar6 = FUN_00c2593c(param_1,param_2);
    param_2 = (ulong)uVar6;
    if (uVar6 == 0x102) {
      iVar7 = *(int *)(param_1 + 4);
      uVar10 = *(undefined4 *)(param_1 + 8);
      while ((iVar7 != 0x103 &&
             (param_2 = (ulong)*(uint *)(param_1 + 0x68), uVar5 == *(uint *)(param_1 + 0x68)))) {
        FUN_00c2593c(param_1);
        iVar7 = *(int *)(param_1 + 4);
        param_2 = extraout_x1_01;
      }
      goto LAB_00c29074;
    }
    if (uVar6 != 0x100) {
LAB_00c2901c:
                    /* WARNING: Subroutine does not return */
      FUN_00c24fe0(param_1,*(undefined4 *)(param_1 + 4),0xa7b);
    }
    iVar7 = *(int *)(*(long *)(param_1 + 0x10) + 0xc);
    if (iVar7 == 0x187aab88) {
      iVar7 = FUN_00c2593c(param_1);
      if (iVar7 != 0x102) {
                    /* WARNING: Subroutine does not return */
        FUN_00c258bc(param_1);
      }
      iVar7 = *(int *)(param_1 + 4);
      uVar10 = *(undefined4 *)(param_1 + 8);
      goto joined_r0x00c29168;
    }
    if (iVar7 != -0xa194b08) goto LAB_00c2901c;
    FUN_00c2593c(param_1);
    iVar7 = *(int *)(param_1 + 4);
    if (iVar7 != 0x100) goto LAB_00c290d4;
    if (*(int *)(*(long *)(param_1 + 0x10) + 0xc) == -0x18646661) {
      FUN_00c2593c(param_1);
      FUN_00c263a0(param_1,0x28);
      iVar7 = *(int *)(param_1 + 4);
      if (iVar7 == 0x100) {
        iVar7 = *(int *)(*(long *)(param_1 + 0x10) + 0xc);
        if (iVar7 == 0x738e923c) {
          bVar9 = *(byte *)(param_1 + 0x7f);
          if (bVar9 < 7) {
            iVar7 = bVar9 + 1;
            *(undefined1 *)(param_1 + iVar7 + 0x78) =
                 *(undefined1 *)(param_1 + (int)(uint)bVar9 + 0x78);
            *(char *)(param_1 + 0x7f) = (char)iVar7;
          }
        }
        else {
          if (iVar7 != 0x6c71cf27) {
                    /* WARNING: Subroutine does not return */
            FUN_00c24fe0(param_1,0x100,0xa7b);
          }
          if (*(char *)(param_1 + 0x7f) != '\0') {
            *(char *)(param_1 + 0x7f) = *(char *)(param_1 + 0x7f) + -1;
          }
        }
        FUN_00c2593c(param_1);
        if (*(int *)(param_1 + 4) == 0x2c) {
          FUN_00c2593c(param_1);
          iVar7 = *(int *)(param_1 + 4);
          goto LAB_00c29118;
        }
      }
      else {
LAB_00c29118:
        if (iVar7 == 0x102) {
          bVar9 = 0;
          if (*(int *)(param_1 + 8) != 0) {
            bVar9 = (byte)LZCOUNT(*(int *)(param_1 + 8)) ^ 0x1f;
          }
          *(byte *)(param_1 + (int)(uint)*(byte *)(param_1 + 0x7f) + 0x78) = bVar9;
          FUN_00c2593c(param_1);
        }
        else {
          *(undefined1 *)(param_1 + (ulong)*(byte *)(param_1 + 0x7f) + 0x78) = 0xff;
        }
      }
      FUN_00c263a0(param_1,0x29);
      iVar7 = *(int *)(param_1 + 4);
      param_2 = extraout_x1_02;
    }
    else {
      while (param_2 = (ulong)*(uint *)(param_1 + 0x68), uVar5 == *(uint *)(param_1 + 0x68)) {
        FUN_00c2593c(param_1);
        iVar7 = *(int *)(param_1 + 4);
LAB_00c290d4:
        if (iVar7 == 0x103) {
          return;
        }
      }
    }
  }
  goto LAB_00c28d84;
LAB_00c28f50:
  bVar3 = *(int *)(param_1 + 4) == 0x103;
LAB_00c28f58:
  if ((bVar3) && (bVar1)) {
    return;
  }
  bVar1 = false;
  FUN_00c263a0(param_1,0x3b);
  iVar7 = *(int *)(param_1 + 4);
  param_2 = extraout_x1;
  if (iVar7 == 0x103) {
    return;
  }
  goto LAB_00c28d8c;
joined_r0x00c29168:
  if (iVar7 == 0x103) goto LAB_00c29074;
  param_2 = (ulong)*(uint *)(param_1 + 0x68);
  if (uVar5 != *(uint *)(param_1 + 0x68)) {
    *(undefined4 *)(param_1 + 0x68) = uVar10;
    goto LAB_00c28d84;
  }
  FUN_00c2593c(param_1);
  iVar7 = *(int *)(param_1 + 4);
  param_2 = extraout_x1_03;
  goto joined_r0x00c29168;
LAB_00c29074:
  *(undefined4 *)(param_1 + 0x68) = uVar10;
  goto LAB_00c28d84;
}

