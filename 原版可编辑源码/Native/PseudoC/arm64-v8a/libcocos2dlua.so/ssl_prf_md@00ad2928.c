
undefined8 ssl_prf_md(void)

{
  uint uVar1;
  
  uVar1 = ssl_get_algorithm2();
  uVar1 = uVar1 >> 8 & 0xff;
  if (0xb < uVar1) {
    return 0;
  }
  return (&DAT_01782c90)[uVar1];
}

