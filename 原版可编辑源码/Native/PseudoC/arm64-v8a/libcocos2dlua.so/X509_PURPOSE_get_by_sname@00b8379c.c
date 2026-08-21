
int X509_PURPOSE_get_by_sname(char *sname)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  
  lVar5 = 0;
  puVar6 = &DAT_0176f000;
  iVar1 = -9;
  do {
    iVar4 = iVar1;
    if (DAT_01784fa8 == 0) {
      if (8 < lVar5) {
        return -1;
      }
    }
    else {
      iVar1 = OPENSSL_sk_num();
      if (iVar1 + 9 <= lVar5) {
        return -1;
      }
    }
    puVar3 = puVar6;
    if (8 < lVar5) {
      puVar3 = (undefined *)OPENSSL_sk_value(DAT_01784fa8,iVar4);
    }
    iVar2 = strcmp(*(char **)(puVar3 + 0x20),sname);
    lVar5 = lVar5 + 1;
    puVar6 = puVar6 + 0x30;
    iVar1 = iVar4 + 1;
  } while (iVar2 != 0);
  return iVar4 + 9;
}

