
bool SSL_CTX_SRP_CTX_init(long param_1)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x2c0) = 0;
    memset((void *)(param_1 + 0x248),0,0x70);
    *(undefined4 *)(param_1 + 0x2b8) = 0x400;
  }
  return param_1 != 0;
}

