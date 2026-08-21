
undefined8 SSL_get_client_ciphers(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x178) == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x38) == 0) {
      return 0;
    }
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x178) + 0xe8);
  }
  return uVar1;
}

