
void FUN_01262284(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    lVar1 = __strlen_chk("~",2);
    FUN_01258064(param_2,"~","operator~" + lVar1 + 8);
  }
  auVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  FUN_01258064(param_2,auVar2._0_8_,auVar2._8_8_);
  return;
}

