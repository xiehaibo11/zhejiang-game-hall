
undefined8 jni_getProperties(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_c8 [128];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*param_1 + 0x548))(param_1,param_3,0);
  property_get(uVar2,auStack_c8,0);
  uVar3 = (**(code **)(*param_1 + 0x538))(param_1,auStack_c8);
  (**(code **)(*param_1 + 0x550))(param_1,param_3,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

