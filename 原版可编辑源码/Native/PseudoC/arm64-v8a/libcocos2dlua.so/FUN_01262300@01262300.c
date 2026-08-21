
void FUN_01262300(long param_1,undefined8 param_2)

{
  long lVar1;
  
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  lVar1 = __strlen_chk("[abi:",6);
  FUN_01258064(param_2,"[abi:","[abi:" + lVar1);
  FUN_01258064(param_2,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  lVar1 = __strlen_chk(&DAT_013c3898,2);
  FUN_01258064(param_2,&DAT_013c3898,&DAT_013c3898 + lVar1);
  return;
}

