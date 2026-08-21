
void FUN_00a6a3a0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = *param_3;
  local_40 = *param_2;
  lVar2 = FUN_00a697fc(&PTR_MD5_Init_016a4cf0,param_1,0x10);
  if (lVar2 == 0) {
    uVar3 = 0x1b;
  }
  else {
    FUN_00a69990(lVar2,&local_48,0x10);
    FUN_00a699b0(lVar2,&local_58);
    uVar3 = 0;
    param_4[1] = uStack_50;
    *param_4 = local_58;
    param_4[2] = *param_2;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

