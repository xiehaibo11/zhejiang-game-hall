
void FUN_00bfb23c(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *local_8;
  
  local_8 = &DAT_0140fd20;
  lVar1 = FUN_00bfcc0c(param_1,*(long *)(param_1 + 0x20) + -8,&local_8);
  if (param_2 + 9999U < 9999) {
    param_2 = param_2 + (int)(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 3) + 1;
  }
  if (((lVar1 == 0) || (*(char *)(lVar1 + 3) != 'h')) || (param_2 = param_2 + -1, param_2 != 0)) {
    uVar2 = FUN_00c00c18(param_1,PTR_s_not_enough_memory_01776bf0 + 0x1e7,param_2,local_8);
  }
  else {
    uVar2 = FUN_00c00c18(param_1,PTR_s_not_enough_memory_01776bf0 + 0x1c9,local_8,param_3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfb194(param_1,uVar2);
}

