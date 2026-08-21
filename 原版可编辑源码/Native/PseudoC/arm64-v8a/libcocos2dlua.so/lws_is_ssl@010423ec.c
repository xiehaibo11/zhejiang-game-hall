
byte lws_is_ssl(long param_1)

{
  return *(byte *)(param_1 + 0x2f8) & 0xf;
}

