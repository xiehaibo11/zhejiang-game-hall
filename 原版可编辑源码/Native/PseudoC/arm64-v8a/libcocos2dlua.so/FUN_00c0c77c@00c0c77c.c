
void FUN_00c0c77c(long *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  int iVar4;
  bool bVar5;
  uint local_20 [2];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint *local_8;
  
  if (3 < param_2[2] - 6) {
                    /* WARNING: Subroutine does not return */
    FUN_00c07bc4(param_1,0xab8);
  }
  if (*(int *)((long)param_1 + 0x34) == 0x2c) {
    FUN_00c079c0();
    local_8 = param_2;
    FUN_00c0c45c(param_1,local_20);
    if (local_18 == 6) {
      lVar2 = *param_1;
      bVar5 = false;
      uVar1 = *(uint *)(lVar2 + 0x34);
      puVar3 = param_2;
      do {
        if (puVar3[2] == 9) {
          if (local_20[0] == *puVar3) {
            *puVar3 = uVar1;
            bVar5 = true;
          }
          if (local_20[0] == puVar3[1]) {
            puVar3[1] = uVar1;
            bVar5 = true;
          }
        }
        puVar3 = *(uint **)(puVar3 + 6);
      } while (puVar3 != (uint *)0x0);
      if (bVar5) {
        FUN_00c07f70(lVar2,local_20[0] << 0x10 | uVar1 << 8 | 0x12);
        FUN_00c07f38(lVar2,1);
        *(int *)(lVar2 + 0x34) = *(int *)(lVar2 + 0x34) + 1;
      }
    }
    if (199 < param_3 + *(int *)((long)param_1 + 0xac)) {
                    /* WARNING: Subroutine does not return */
      FUN_007b6014(*(undefined8 *)(*param_1 + 8),*(undefined4 *)(*param_1 + 0x44),200,
                   "variable names");
    }
    FUN_00c0c77c(param_1,local_20,param_3 + 1);
    lVar2 = *param_1;
    iVar4 = *(int *)(lVar2 + 0x34);
  }
  else {
    FUN_00c07cfc(param_1,0x3d);
    uVar1 = FUN_00c0c134(param_1,local_20);
    if (uVar1 == param_3) {
      lVar2 = *param_1;
      if (local_18 == 0xd) {
        if (*(char *)(*(long *)(lVar2 + 0x48) + (ulong)local_20[0] * 8) == 'G') {
          *(int *)(lVar2 + 0x34) = *(int *)(lVar2 + 0x34) + -1;
          local_18 = 0xb;
        }
        else {
          local_18 = 0xc;
        }
      }
      FUN_00c08e38(lVar2,param_2,local_20);
      return;
    }
    FUN_00c09148(*param_1,param_3,uVar1,local_20);
    lVar2 = *param_1;
    iVar4 = *(int *)(lVar2 + 0x34);
    if (param_3 < uVar1) {
      iVar4 = (param_3 + iVar4) - uVar1;
      *(int *)(lVar2 + 0x34) = iVar4;
    }
  }
  local_20[0] = iVar4 - 1;
  local_18 = 0xc;
  local_14 = 0xffffffff;
  local_10 = 0xffffffff;
  FUN_00c08e38(lVar2,param_2,local_20);
  return;
}

