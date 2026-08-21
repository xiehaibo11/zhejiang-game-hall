
void FUN_00125fe8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = __strlen_chk("\'unnamed",9);
  FUN_0011bcc0(param_2,"\'unnamed","\'unnamed" + lVar1);
  FUN_0011bcc0(param_2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  lVar1 = __strlen_chk("\'",2);
  FUN_0011bcc0(param_2,"\'","\'block-literal\'" + lVar1 + 0xe);
  return;
}

