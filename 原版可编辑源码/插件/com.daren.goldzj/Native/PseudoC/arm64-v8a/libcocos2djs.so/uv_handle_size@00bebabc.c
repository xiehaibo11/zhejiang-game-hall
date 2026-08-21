
undefined8 uv_handle_size(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffffffffffff;
  if (param_1 - 1U < 0x10) {
    uVar1 = *(undefined8 *)(&DAT_018e0980 + (ulong)(param_1 - 1U) * 8);
  }
  return uVar1;
}

