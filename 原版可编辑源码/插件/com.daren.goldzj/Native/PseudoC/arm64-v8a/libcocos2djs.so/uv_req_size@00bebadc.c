
undefined8 uv_req_size(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffffffffffff;
  if (param_1 - 1U < 9) {
    uVar1 = *(undefined8 *)(&DAT_018e0a00 + (ulong)(param_1 - 1U) * 8);
  }
  return uVar1;
}

