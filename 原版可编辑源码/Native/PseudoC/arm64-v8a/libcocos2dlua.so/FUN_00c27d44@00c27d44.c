
int FUN_00c27d44(long param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  uint *local_8;
  
  *(undefined4 *)(param_1 + 0x70) = 0x2022;
  FUN_00c2593c();
  FUN_00c277f0(param_1,param_2);
  *(undefined4 *)(param_1 + 0x70) = 0x38c0;
  if (*(int *)(param_1 + 4) == 0x7b) {
    iVar1 = FUN_00c0e728(*(undefined8 *)(param_1 + 0x50),&local_8);
    *local_8 = param_3;
    local_8[1] = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 4) != 0x100) {
                    /* WARNING: Subroutine does not return */
      FUN_00c258bc(param_1,0x100);
    }
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 0) {
      if ((*(uint *)(param_1 + 0x74) >> 4 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00c24fe0(param_1,0,0xbea,*(long *)(param_1 + 0x10) + 0x18);
      }
      iVar1 = FUN_00c0e728(*(undefined8 *)(param_1 + 0x50),&local_8);
      lVar2 = *(long *)(param_1 + 0x10);
      *local_8 = param_3;
      local_8[1] = 0xffffffff;
      *(byte *)(lVar2 + 8) = *(byte *)(lVar2 + 8) | 0x20;
      *(long *)(local_8 + 4) = lVar2;
      FUN_00c0e904(*(undefined8 *)(param_1 + 0x50),local_8,iVar1);
    }
    else {
      local_8 = *(uint **)(param_1 + 0x18);
      if (((param_3 ^ *local_8) & 0xf0800000) != 0) {
        lVar2 = *(long *)(local_8 + 4);
        goto LAB_00c27e2c;
      }
    }
    FUN_00c2593c(param_1);
  }
  if (*(int *)(param_1 + 4) != 0x7b) {
    return iVar1;
  }
  if ((local_8[1] == 0xffffffff) && ((short)local_8[2] == 0)) {
    *(undefined2 *)(local_8 + 2) = 1;
    return iVar1;
  }
  lVar2 = *(long *)(local_8 + 4);
LAB_00c27e2c:
                    /* WARNING: Subroutine does not return */
  FUN_00c24fe0(param_1,0,0xc0a,lVar2 + 0x18);
}

