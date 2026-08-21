
undefined * uv_default_loop(void)

{
  int iVar1;
  
  if (DAT_017932d0 != (undefined *)0x0) {
    return DAT_017932d0;
  }
  iVar1 = uv_loop_init(&DAT_017932d8);
  if (iVar1 != 0) {
    return (undefined *)0x0;
  }
  DAT_017932d0 = &DAT_017932d8;
  return &DAT_017932d8;
}

