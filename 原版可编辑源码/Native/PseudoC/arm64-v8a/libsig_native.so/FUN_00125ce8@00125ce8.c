
void FUN_00125ce8(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = __strlen_chk("__uuidof(",10);
  FUN_0011bcc0(param_2,"__uuidof(","__uuidof(" + lVar1);
  plVar2 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
  if (*(char *)((long)plVar2 + 9) != '\x01') {
    (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
  }
  lVar1 = __strlen_chk(")",2);
  FUN_0011bcc0(param_2,")","operator()" + lVar1 + 9);
  return;
}

