
void __gxx_personality_v0(int param_1,ulong param_2,ulong param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
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
          FUN_0015e874(&local_78,param_2,param_3 == 0x434c4e47432b2b00,param_4,param_5);
          iVar3 = local_50;
          if (local_50 != 6) goto LAB_0015e838;
          thunk_FUN_00161850(param_5,0,param_4);
          thunk_FUN_00161850(param_5,1,local_78);
          uVar4 = uStack_60;
        }
        else {
          if (param_3 == 0x434c4e47432b2b00) {
            local_78 = (long)*(int *)(param_4 + -0x24);
            uStack_70 = *(undefined8 *)(param_4 + -0x20);
            local_68 = *(undefined8 *)(param_4 + -0x18);
            uStack_60 = *(undefined8 *)(param_4 + -0x10);
            local_58 = *(undefined8 *)(param_4 + -8);
          }
          else {
            FUN_0015e874(&local_78,param_2,0,param_4,param_5);
            if (local_50 != 6) {
              __cxa_begin_catch(param_4);
                    /* WARNING: Subroutine does not return */
              std::terminate();
            }
          }
          uVar4 = uStack_60;
          lVar2 = local_78;
          thunk_FUN_00161850(param_5,0,param_4);
          thunk_FUN_00161850(param_5,1,lVar2);
        }
        FUN_0016171c(param_5,uVar4);
        iVar3 = 7;
      }
    }
    else {
      FUN_0015e874(&local_78,param_2,param_3 == 0x434c4e47432b2b00,param_4,param_5);
      iVar3 = local_50;
      if ((local_50 == 6) && (param_3 == 0x434c4e47432b2b00)) {
        iVar3 = 6;
        *(int *)(param_4 + -0x24) = (int)local_78;
        *(undefined8 *)(param_4 + -0x20) = uStack_70;
        *(undefined8 *)(param_4 + -0x10) = uStack_60;
        *(undefined8 *)(param_4 + -0x18) = local_68;
        *(undefined8 *)(param_4 + -8) = local_58;
      }
    }
  }
LAB_0015e838:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3);
  }
  return;
}

