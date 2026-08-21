
void png_write_sig(long param_1)

{
  undefined8 local_18;
  
  local_18 = 0xa1a0a0d474e5089;
  *(undefined4 *)(param_1 + 0x4e4) = 0x12;
  png_write_data(param_1,(long)&local_18 + (ulong)*(byte *)(param_1 + 0x2b5),
                 8 - (ulong)*(byte *)(param_1 + 0x2b5));
  if (*(byte *)(param_1 + 0x2b5) < 3) {
    *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 0x1000;
  }
  return;
}

