
void __dynamic_cast(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long local_78;
  long *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  long lStack_50;
  undefined8 local_48;
  int iStack_40;
  int iStack_3c;
  int local_38;
  undefined3 uStack_34;
  undefined8 uStack_31;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  plVar1 = *(long **)(*param_1 + -8);
  lStack_50 = 0;
  local_58 = 0;
  iStack_40 = 0;
  local_48 = 0;
  uStack_31 = 0;
  iStack_3c = 0;
  local_38 = 0;
  uStack_34 = 0;
  lVar3 = (long)param_1 + *(long *)(*param_1 + -0x10);
  local_78 = param_3;
  local_70 = param_1;
  uStack_68 = param_2;
  local_60 = param_4;
  if (plVar1[1] == *(long *)(param_3 + 8)) {
    uStack_31 = 0x100;
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_78,lVar3,lVar3,1,0);
    if ((int)local_48 != 1) {
      lVar3 = 0;
    }
  }
  else {
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_78,lVar3,1,0);
    if (iStack_3c == 1) {
      if (((int)local_48 == 1) ||
         (((lVar3 = 0, local_38 == 0 && (local_48._4_4_ == 1)) && (iStack_40 == 1)))) {
        lVar3 = local_58;
      }
    }
    else if (iStack_3c == 0) {
      lVar3 = lStack_50;
      if ((iStack_40 != 1 || local_48._4_4_ != 1) || local_38 != 1) {
        lVar3 = 0;
      }
    }
    else {
      lVar3 = 0;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}

