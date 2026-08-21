
void FUN_01264820(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = __strlen_chk("pixel vector[",0xe);
  FUN_01258064(param_2,"pixel vector[","pixel vector[" + lVar1);
  FUN_01258064(param_2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  lVar1 = __strlen_chk(&DAT_013c3898,2);
  FUN_01258064(param_2,&DAT_013c3898,&DAT_013c3898 + lVar1);
  return;
}

