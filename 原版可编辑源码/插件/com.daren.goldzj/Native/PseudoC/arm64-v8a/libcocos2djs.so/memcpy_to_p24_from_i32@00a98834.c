
void memcpy_to_p24_from_i32(undefined1 *param_1,undefined4 *param_2,long param_3)

{
  undefined4 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar1 = *param_2;
    *param_1 = (char)((uint)uVar1 >> 8);
    param_1[1] = (char)((uint)uVar1 >> 0x10);
    param_1[2] = (char)((uint)uVar1 >> 0x18);
    param_1 = param_1 + 3;
    param_2 = param_2 + 1;
  }
  return;
}

