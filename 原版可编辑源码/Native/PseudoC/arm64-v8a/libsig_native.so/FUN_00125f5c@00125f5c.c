
void FUN_00125f5c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  lVar1 = __strlen_chk("[abi:",6);
  FUN_0011bcc0(param_2,"[abi:","[abi:" + lVar1);
  FUN_0011bcc0(param_2,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  lVar1 = __strlen_chk("]",2);
  FUN_0011bcc0(param_2,"]","operator delete[]" + lVar1 + 0x10);
  return;
}

