
undefined4 FUN_00135848(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  long local_68;
  long lStack_60;
  code *local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lStack_60 = param_3 - param_2;
  local_58 = FUN_00135798;
  local_68 = param_2;
  lVar3 = (**(code **)(param_1 + 8))(param_1,param_5 - param_4,&local_68,0);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(param_1 + 0x18))(lVar3,param_4,param_5);
    (**(code **)(param_1 + 0x10))(param_1,lVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

