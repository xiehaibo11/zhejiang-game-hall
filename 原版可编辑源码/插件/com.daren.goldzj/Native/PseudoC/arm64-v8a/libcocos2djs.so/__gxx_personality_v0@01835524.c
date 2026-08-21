
void __gxx_personality_v0(int param_1,ulong param_2,ulong param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  int local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar3 = 3;
  if (((param_1 == 1) && (param_4 != 0)) && (param_5 != 0)) {
    param_3 = param_3 & 0xffffffffffffff00;
    if ((param_2 & 1) == 0) {
      if (((uint)param_2 >> 1 & 1) == 0) {
        iVar3 = 3;
      }
      else {
        if (((uint)param_2 >> 2 & 1) == 0) {
          FUN_018356ec(&local_78,param_2,param_3 == 0x434c4e47432b2b00,param_4,param_5);
          iVar3 = local_50;
          if (local_50 != 6) goto LAB_018356b4;
          _Unwind_SetGR(param_5,0,param_4);
          _Unwind_SetGR(param_5,1,local_78);
          uVar4 = local_60;
        }
        else {
          if (param_3 == 0x434c4e47432b2b00) {
            local_78 = (long)*(int *)(param_4 + -0x2c);
            uStack_68 = *(undefined8 *)(param_4 + -0x20);
            local_70 = *(undefined8 *)(param_4 + -0x28);
            uStack_58 = *(undefined8 *)(param_4 + -0x10);
            local_60 = *(undefined8 *)(param_4 + -0x18);
          }
          else {
            FUN_018356ec(&local_78,param_2,0,param_4,param_5);
            if (local_50 != 6) {
                    /* WARNING: Subroutine does not return */
              FUN_01835cf4(0,param_4);
            }
          }
          uVar4 = local_60;
          lVar2 = local_78;
          _Unwind_SetGR(param_5,0,param_4);
          _Unwind_SetGR(param_5,1,lVar2);
        }
        _Unwind_SetIP(param_5,uVar4);
        iVar3 = 7;
      }
    }
    else {
      FUN_018356ec(&local_78,param_2,param_3 == 0x434c4e47432b2b00,param_4,param_5);
      iVar3 = local_50;
      if ((local_50 == 6) && (param_3 == 0x434c4e47432b2b00)) {
        iVar3 = 6;
        *(int *)(param_4 + -0x2c) = (int)local_78;
        *(undefined8 *)(param_4 + -0x20) = uStack_68;
        *(undefined8 *)(param_4 + -0x28) = local_70;
        *(undefined8 *)(param_4 + -0x10) = uStack_58;
        *(undefined8 *)(param_4 + -0x18) = local_60;
      }
    }
  }
LAB_018356b4:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3);
  }
  return;
}

