
void FUN_01264270(long param_1,undefined8 param_2)

{
  long lVar1;
  
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  lVar1 = __strlen_chk(" ",2);
  FUN_01258064(param_2," ",
               "%s has wrong number of arguments: %d, was expecting 0~2\n " + lVar1 + 0x38);
  return;
}

