
int uv_translate_sys_error(uint param_1)

{
  return -((param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f));
}

