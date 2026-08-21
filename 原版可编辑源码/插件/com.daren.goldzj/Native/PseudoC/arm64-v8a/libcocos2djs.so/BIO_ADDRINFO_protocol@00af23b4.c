
int BIO_ADDRINFO_protocol(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((param_1 != 0) && (iVar2 = *(int *)(param_1 + 0xc), iVar2 == 0)) {
    if (*(int *)(param_1 + 4) == 1) {
      return 0;
    }
    iVar2 = 0x11;
    if (*(int *)(param_1 + 8) != 2) {
      iVar2 = 0;
    }
    iVar1 = 6;
    if (*(int *)(param_1 + 8) != 1) {
      iVar1 = iVar2;
    }
    return iVar1;
  }
  return iVar2;
}

