
undefined * ssl3_get_cipher(uint param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_01d1b810 + (0x93 - (ulong)param_1) * 0x48;
  if (0x93 < param_1) {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}

