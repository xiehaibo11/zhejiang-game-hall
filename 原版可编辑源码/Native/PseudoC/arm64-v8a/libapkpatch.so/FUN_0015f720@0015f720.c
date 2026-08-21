
void FUN_0015f720(long param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  long *local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined7 uStack_50;
  undefined1 local_49;
  undefined7 uStack_48;
  undefined8 uStack_41;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 8) == *(long *)(param_2 + 8)) {
    bVar2 = true;
  }
  else {
    plVar3 = (long *)__dynamic_cast(param_2,&__cxxabiv1::__shim_type_info::typeinfo,
                                    &__cxxabiv1::__class_type_info::typeinfo,0);
    bVar2 = false;
    if (plVar3 != (long *)0x0) {
      uStack_80 = 0;
      uStack_70 = 0xffffffffffffffff;
      uStack_48 = 0;
      uStack_60 = 0;
      local_68 = 0;
      uStack_50 = 0;
      local_49 = 0;
      local_58 = 0;
      uStack_41 = 0x100;
      local_88 = plVar3;
      local_78 = param_1;
      (**(code **)(*plVar3 + 0x38))(plVar3,&local_88,*param_3,1);
      bVar2 = (int)local_58 == 1;
      if (bVar2) {
        *param_3 = local_68;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}

