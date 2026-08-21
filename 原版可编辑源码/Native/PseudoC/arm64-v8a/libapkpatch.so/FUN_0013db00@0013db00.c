
void FUN_0013db00(long param_1)

{
  long lVar1;
  
  FUN_0013f690();
  while (*(long *)(param_1 + 0x20) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
    FUN_00138300(param_1 + 0x28,1);
  }
  FUN_00138018(param_1 + 0x28);
  do {
    lVar1 = FUN_00138300(param_1 + 0x28,0);
  } while (lVar1 != 0);
  FUN_00137f58(param_1 + 0x28);
  FUN_00136fe8(*(undefined8 *)(param_1 + 0x10));
  FUN_00137f58(param_1 + 8);
  FUN_00137f58(param_1);
  return;
}

