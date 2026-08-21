
undefined8 SSL_CTX_get0_certificate(long param_1)

{
  if (*(undefined8 **)(param_1 + 0x120) != (undefined8 *)0x0) {
    return *(undefined8 *)**(undefined8 **)(param_1 + 0x120);
  }
  return 0;
}

