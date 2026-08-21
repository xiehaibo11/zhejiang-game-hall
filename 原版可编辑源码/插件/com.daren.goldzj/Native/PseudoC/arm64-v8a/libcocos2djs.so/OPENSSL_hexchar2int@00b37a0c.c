
undefined4 OPENSSL_hexchar2int(char param_1)

{
  if ((byte)(param_1 - 0x30U) < 0x37) {
    return *(undefined4 *)(&DAT_018b1a40 + (long)(char)(param_1 - 0x30U) * 4);
  }
  return 0xffffffff;
}

