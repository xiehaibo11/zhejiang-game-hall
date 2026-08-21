
void png_set_benign_errors(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x168) | 0x700000;
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 0x168) & 0xff8fffff;
  }
  *(uint *)(param_1 + 0x168) = uVar1;
  return;
}

