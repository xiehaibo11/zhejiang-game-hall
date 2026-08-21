
void speex_bits_advance(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x10) + param_2;
  if (((int)(uVar1 + *(int *)(param_1 + 0xc) * 8) <= *(int *)(param_1 + 8)) &&
     (*(int *)(param_1 + 0x18) == 0)) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + ((int)uVar1 >> 3);
    *(uint *)(param_1 + 0x10) = uVar1 & 7;
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 1;
  return;
}

