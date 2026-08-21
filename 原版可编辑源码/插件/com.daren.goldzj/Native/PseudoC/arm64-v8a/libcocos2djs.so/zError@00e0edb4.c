
undefined8 zError(int param_1)

{
  return *(undefined8 *)(z_errmsg + (2 - (long)param_1) * 8);
}

