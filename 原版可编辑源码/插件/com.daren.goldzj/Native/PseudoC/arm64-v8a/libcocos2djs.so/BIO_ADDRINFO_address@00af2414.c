
undefined8 BIO_ADDRINFO_address(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  return uVar1;
}

