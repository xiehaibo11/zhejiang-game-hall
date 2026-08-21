
undefined1 FUN_00e1d94c(long param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x40);
  if (puVar1 < *(undefined1 **)(param_1 + 0x48)) {
    *(undefined1 **)(param_1 + 0x40) = puVar1 + 1;
    return *puVar1;
  }
  return 0;
}

