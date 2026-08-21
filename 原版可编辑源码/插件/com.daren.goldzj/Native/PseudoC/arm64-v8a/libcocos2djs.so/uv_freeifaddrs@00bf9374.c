
void uv_freeifaddrs(long *param_1)

{
  while (param_1 != (long *)0x0) {
    param_1 = (long *)*param_1;
    uv__free();
  }
  return;
}

