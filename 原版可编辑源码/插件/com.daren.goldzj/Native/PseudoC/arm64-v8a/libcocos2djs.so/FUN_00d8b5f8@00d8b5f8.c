
void FUN_00d8b5f8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  **(undefined8 **)(lVar1 + 0x28) = *(undefined8 *)(lVar1 + 0x40);
  **(long **)(lVar1 + 0x30) = *(long *)(lVar1 + 0x48) - *(long *)(lVar1 + 8);
  return;
}

