
void FUN_00122240(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = __strlen_chk("(",2);
  FUN_0011bcc0(param_2,"(","sizeof... (" + lVar1 + 10);
  plVar2 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
  if (*(char *)((long)plVar2 + 9) != '\x01') {
    (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
  }
  lVar1 = __strlen_chk(")",2);
  FUN_0011bcc0(param_2,")","operator()" + lVar1 + 9);
  FUN_0011bcc0(param_2,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  return;
}

