
void FUN_0125f0a4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  FUN_01258064(param_2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  lVar1 = __strlen_chk("<",2);
  FUN_01258064(param_2,"<","expected <" + lVar1 + 9);
  (**(code **)(**(long **)(param_1 + 0x20) + 0x20))(*(long **)(param_1 + 0x20),param_2);
  lVar1 = __strlen_chk(&DAT_014a802f,3);
  FUN_01258064(param_2,&DAT_014a802f,&DAT_014a802f + lVar1);
  (**(code **)(**(long **)(param_1 + 0x28) + 0x20))(*(long **)(param_1 + 0x28),param_2);
  lVar1 = __strlen_chk(&DAT_013d1656,2);
  FUN_01258064(param_2,&DAT_013d1656,&DAT_013d1656 + lVar1);
  return;
}

