
ulong ssl_free_wbio_buffer(ulong param_1)

{
  uint uVar1;
  BIO *pBVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (*(long *)(param_1 + 0x20) != 0) {
    pBVar2 = BIO_pop(*(BIO **)(param_1 + 0x18));
    *(BIO **)(param_1 + 0x18) = pBVar2;
    uVar1 = BIO_free(*(BIO **)(param_1 + 0x20));
    uVar3 = (ulong)uVar1;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return uVar3;
}

