
void FUN_0012847c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = __strlen_chk("pixel vector[",0xe);
  FUN_0011bcc0(param_2,"pixel vector[","pixel vector[" + lVar1);
  FUN_0011bcc0(param_2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  lVar1 = __strlen_chk("]",2);
  FUN_0011bcc0(param_2,"]","operator delete[]" + lVar1 + 0x10);
  return;
}

