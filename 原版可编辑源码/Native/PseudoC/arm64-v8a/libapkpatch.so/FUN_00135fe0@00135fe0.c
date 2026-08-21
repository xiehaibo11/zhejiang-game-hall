
undefined4
FUN_00135fe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int local_6c;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_68 = 0;
  local_6c = 0;
  local_60 = param_6;
  local_58 = param_5;
  local_50 = param_2;
  FUN_00135f08(&local_68,&local_50,6,&local_58,&local_60,&local_6c);
  lVar2 = local_68;
  uVar5 = 0;
  if ((local_6c == 0) &&
     (uVar3 = FUN_001360b4(param_1,local_50,param_3,param_4,local_68,local_58,local_60),
     uVar5 = uVar3, lVar2 != 0)) {
    iVar4 = (**(code **)(lVar2 + 0x18))(lVar2);
    uVar5 = 0;
    if (iVar4 != 0) {
      uVar5 = uVar3;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}

