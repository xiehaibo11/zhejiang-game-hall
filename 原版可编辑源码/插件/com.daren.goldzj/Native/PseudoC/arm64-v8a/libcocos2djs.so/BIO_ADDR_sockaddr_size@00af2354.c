
undefined8 BIO_ADDR_sockaddr_size(short *param_1)

{
  short sVar1;
  
  sVar1 = *param_1;
  if (sVar1 == 1) {
    return 0x6e;
  }
  if (sVar1 != 2) {
    if (sVar1 == 10) {
      return 0x1c;
    }
    return 0x70;
  }
  return 0x10;
}

