
void FUN_0116c924(long param_1)

{
  undefined8 uVar1;
  
  cpHashSetFree(*(undefined8 *)(param_1 + 0x28));
  uVar1 = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    cpArrayFreeEach(*(long *)(param_1 + 0x48),free);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
  }
  cpArrayFree(uVar1);
  return;
}

