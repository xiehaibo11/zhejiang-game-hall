
undefined8 SSL_CTX_get0_privatekey(long param_1)

{
  if (*(long **)(param_1 + 0x120) != (long *)0x0) {
    return *(undefined8 *)(**(long **)(param_1 + 0x120) + 8);
  }
  return 0;
}

