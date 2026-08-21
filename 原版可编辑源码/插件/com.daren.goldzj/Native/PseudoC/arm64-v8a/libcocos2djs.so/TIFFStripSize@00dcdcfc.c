
void TIFFStripSize(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x5c);
  if (*(uint *)(param_1 + 0x84) <= *(uint *)(param_1 + 0x5c)) {
    uVar1 = *(uint *)(param_1 + 0x84);
  }
  TIFFVStripSize64(param_1,uVar1);
  return;
}

