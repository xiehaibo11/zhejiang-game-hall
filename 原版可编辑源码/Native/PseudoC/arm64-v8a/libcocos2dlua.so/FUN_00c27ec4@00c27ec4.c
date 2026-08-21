
uint FUN_00c27ec4(long param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  undefined4 local_14;
  int local_10;
  uint local_c;
  int *local_8;
  
  uVar1 = *(undefined4 *)(param_1 + 0x74);
  uVar5 = 0;
  *(long *)(param_2 + 4) = param_1;
  uVar10 = 0;
  param_2[3] = uVar1;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined2 *)((long)param_2 + 0x4a) = 0;
  do {
    iVar8 = 0;
    FUN_00c277f0(param_1,param_2);
    iVar6 = *(int *)(param_1 + 4);
    while (iVar6 - 0x10dU < 0x14) {
      iVar4 = *(int *)(*(long *)(param_1 + 0x18) + 4);
      iVar3 = iVar8;
      if ((iVar4 != 0) && (iVar3 = iVar4, iVar8 != 0)) goto LAB_00c2806c;
      iVar8 = iVar3;
      uVar7 = 1 << (ulong)(iVar6 - 0x10dU & 0x1f);
      uVar2 = uVar10 | uVar7;
      uVar10 = uVar2 | (uVar7 & 0x20 & uVar10) << 1;
      if (iVar6 < 0x11c) {
        if (uVar5 != 0) {
          if ((uVar2 & 0x100) == 0) goto LAB_00c28080;
          goto LAB_00c28070;
        }
      }
      else if ((param_3 & uVar7) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00c24fe0(param_1,iVar6,0xbb9);
      }
      FUN_00c2593c(param_1);
      FUN_00c277f0(param_1,param_2);
      iVar6 = *(int *)(param_1 + 4);
    }
    if ((uVar5 != 0) || (iVar8 != 0)) {
LAB_00c2806c:
      if ((uVar10 >> 8 & 1) != 0) {
LAB_00c28070:
        uVar5 = 0x10;
        if (iVar8 == 4) {
          uVar5 = 0xf;
        }
        goto LAB_00c28080;
      }
      if (uVar5 == 0) goto joined_r0x00c28258;
      goto LAB_00c28080;
    }
    if ((uVar10 & 0x7a0) != 0) break;
    if (iVar6 == 0x127) {
      uVar5 = FUN_00c2843c(param_1,param_2,0x10000000);
    }
    else if (iVar6 < 0x128) {
      if (iVar6 == 0x24) {
        uVar5 = *(uint *)(param_1 + 0xc);
        FUN_00c2593c(param_1);
      }
      else {
        if ((iVar6 != 0x100) || (**(uint **)(param_1 + 0x18) >> 0x1c != 7)) break;
        uVar5 = **(uint **)(param_1 + 0x18) & 0xffff;
        FUN_00c2593c(param_1);
      }
    }
    else if (iVar6 == 0x128) {
      uVar5 = FUN_00c2843c(param_1,param_2,0x10800000);
    }
    else {
      if (iVar6 != 0x129) break;
      uVar5 = FUN_00c27d44(param_1,param_2,0x50000001);
      if (*(int *)(param_1 + 4) == 0x7b) {
        local_14 = 0x5002000a;
        FUN_00c2593c(param_1);
        local_10 = 0;
        local_c = 9;
        iVar6 = *(int *)(param_1 + 4);
        uVar9 = (ulong)uVar5;
        do {
          lVar11 = *(long *)(param_1 + 0x10);
          if (iVar6 != 0x100) {
                    /* WARNING: Subroutine does not return */
            FUN_00c258bc(param_1,0x100);
          }
          if (*(int *)(param_1 + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00c24fe0(param_1,0,0xc0a,lVar11 + 0x18);
          }
          FUN_00c2593c(param_1);
          if (*(int *)(param_1 + 4) == 0x3d) {
            FUN_00c2593c(param_1);
            FUN_00c273e4(param_1,&local_10);
            if (local_c == 10) {
              if (-1 < local_10) {
                local_c = 9;
              }
            }
            else {
              local_c = 9;
              if (local_10 < 0) {
                local_14 = 0x50020009;
              }
            }
          }
          uVar7 = FUN_00c0e728(*(undefined8 *)(param_1 + 0x50),&local_8);
          *(short *)(**(long **)(param_1 + 0x50) + uVar9 * 0x18 + 8) = (short)uVar7;
          *(byte *)(lVar11 + 8) = *(byte *)(lVar11 + 8) | 0x20;
          *local_8 = (local_c | 0x2000000) + 0xb0000000;
          *(long *)(local_8 + 4) = lVar11;
          local_8[1] = local_10;
          local_10 = local_10 + 1;
          if (local_10 == -0x80000000) {
            local_c = 10;
            FUN_00c0e904(*(undefined8 *)(param_1 + 0x50),local_8,uVar7);
            iVar6 = *(int *)(param_1 + 4);
          }
          else {
            FUN_00c0e904(*(undefined8 *)(param_1 + 0x50),local_8,(ulong)uVar7);
            iVar6 = *(int *)(param_1 + 4);
          }
          if (iVar6 != 0x2c) break;
          FUN_00c2593c(param_1);
          iVar6 = *(int *)(param_1 + 4);
          uVar9 = (ulong)uVar7;
        } while (iVar6 != 0x7d);
        FUN_00c263a0(param_1,0x7d);
        lVar11 = **(long **)(param_1 + 0x50);
        *(undefined4 *)(lVar11 + (ulong)uVar5 * 0x18) = local_14;
        *(undefined4 *)(lVar11 + (ulong)uVar5 * 0x18 + 4) = 4;
      }
    }
  } while( true );
  uVar5 = 0x10;
  if ((uVar10 >> 8 & 1) != 0) {
LAB_00c28080:
    FUN_00c2570c(param_2,uVar5);
    uVar5 = param_2[0xb];
    goto LAB_00c28090;
  }
  iVar8 = 0;
joined_r0x00c28258:
  if ((uVar10 & 1) != 0) {
    FUN_00c25690(param_2,(param_2[0xb] & 0x3000000) + 0x40000000,0xffffffff);
    uVar5 = param_2[0xb] & 0xfcffffff;
    param_2[0xb] = uVar5;
    goto LAB_00c28090;
  }
  uVar5 = 0x800000;
  if ((uVar10 & 0x400) == 0) {
    uVar5 = 0;
  }
  if ((uVar10 >> 1 & 1) == 0) {
    if ((uVar10 >> 4 & 1) == 0) {
      if ((uVar10 >> 2 & 1) == 0) {
        if ((uVar10 >> 7 & 1) == 0) {
          if ((uVar10 >> 6 & 1) == 0) {
            if ((uVar10 >> 5 & 1) == 0) {
              if (iVar8 != 0) goto LAB_00c28034;
              iVar4 = 0x20000;
              iVar8 = 4;
              if ((uVar10 & 0x600) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00c24fe0(param_1,iVar6,0xbcb);
              }
            }
            else {
              uVar5 = uVar5 | 0x400000;
              iVar4 = 0x30000;
              iVar8 = 8;
            }
          }
          else {
            iVar4 = 0x30000;
            iVar8 = 8;
          }
        }
        else {
          iVar4 = 0x10000;
          iVar8 = 2;
        }
      }
      else {
        iVar4 = ((uint)LZCOUNT(iVar8) ^ 0x1f) << 0x10;
        if ((uVar10 & 0x604) == 4) {
          uVar5 = 0x800000;
        }
      }
    }
    else if ((uVar10 >> 5 & 1) == 0) {
      iVar4 = ((uint)LZCOUNT(iVar8) ^ 0x1f) << 0x10;
      uVar5 = 0x4000000;
    }
    else {
      iVar4 = 0x40000;
      uVar5 = 0x4000000;
      iVar8 = 0x10;
    }
  }
  else {
    if ((uVar10 & 0xfff079f5) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00c24fe0(param_1,0,0xb83);
    }
    uVar5 = uVar5 | 0x8000000;
    if ((uVar10 >> 9 & 1) == 0) {
      uVar5 = 0x8800000;
    }
    if (iVar8 == 0) {
      iVar8 = 1;
      iVar4 = 0;
    }
    else {
LAB_00c28034:
      iVar4 = ((uint)LZCOUNT(iVar8) ^ 0x1f) << 0x10;
    }
  }
  FUN_00c25690(param_2,uVar5 + iVar4 + (param_2[0xb] & 0x3000000),iVar8);
  uVar5 = param_2[0xb] & 0xfcffffff;
  param_2[0xb] = uVar5;
LAB_00c28090:
  param_2[2] = param_2[1];
  param_2[0xd] = uVar5;
  param_2[0xe] = param_2[0xc];
  return uVar10 & 0xf8000;
}

