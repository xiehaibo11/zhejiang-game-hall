
void FUN_0011bd4c(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = __strlen_chk("construction vtable for ",0x19);
  FUN_0011bcc0(param_2,"construction vtable for ","construction vtable for " + lVar1);
  plVar2 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
  if (*(char *)((long)plVar2 + 9) != '\x01') {
    (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
  }
  lVar1 = __strlen_chk(&DAT_0012eece,5);
  FUN_0011bcc0(param_2,&DAT_0012eece,&DAT_0012eece + lVar1);
  plVar2 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
  if (*(char *)((long)plVar2 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0011be34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
  return;
}

