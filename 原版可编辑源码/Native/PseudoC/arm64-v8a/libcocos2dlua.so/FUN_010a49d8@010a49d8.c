
void FUN_010a49d8(long param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x18) = 0x40000002e;
  uVar1 = **(undefined8 **)(param_1 + 8);
  memset((void *)(param_1 + 0x20),0,0x130);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  FT_GlyphLoader_New(uVar1,param_1 + 0x30);
  return;
}

