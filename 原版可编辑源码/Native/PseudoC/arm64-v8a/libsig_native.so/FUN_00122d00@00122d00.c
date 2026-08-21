
void FUN_00122d00(long param_1,undefined8 param_2)

{
  long lVar1;
  
  FUN_0011bcc0(param_2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  lVar1 = __strlen_chk("<",2);
  FUN_0011bcc0(param_2,"<","operator<<" + lVar1 + 9);
  (**(code **)(**(long **)(param_1 + 0x20) + 0x20))(*(long **)(param_1 + 0x20),param_2);
  lVar1 = __strlen_chk(&DAT_0012f037,3);
  FUN_0011bcc0(param_2,&DAT_0012f037,&DAT_0012f037 + lVar1);
  (**(code **)(**(long **)(param_1 + 0x28) + 0x20))(*(long **)(param_1 + 0x28),param_2);
  lVar1 = __strlen_chk(")",2);
  FUN_0011bcc0(param_2,")","operator()" + lVar1 + 9);
  return;
}

