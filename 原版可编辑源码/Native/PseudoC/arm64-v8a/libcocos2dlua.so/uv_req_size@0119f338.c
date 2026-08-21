
undefined8 uv_req_size(int param_1)

{
  if (param_1 - 1U < 9) {
    return *(undefined8 *)(&DAT_014a10e0 + (long)(int)(param_1 - 1U) * 8);
  }
  return 0xffffffffffffffff;
}

