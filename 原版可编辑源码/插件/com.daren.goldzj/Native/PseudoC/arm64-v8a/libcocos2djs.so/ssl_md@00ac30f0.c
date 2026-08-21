
undefined8 ssl_md(uint param_1)

{
  if (0xb < (param_1 & 0xff)) {
    return 0;
  }
  return (&DAT_01d38f10)[param_1 & 0xff];
}

