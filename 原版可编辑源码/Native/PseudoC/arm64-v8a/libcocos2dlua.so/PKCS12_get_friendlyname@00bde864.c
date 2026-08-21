
char * PKCS12_get_friendlyname(PKCS12_SAFEBAG *bag)

{
  int *piVar1;
  char *pcVar2;
  
  piVar1 = (int *)PKCS12_SAFEBAG_get0_attr(bag,0x9c);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0x1e)) {
    pcVar2 = (char *)OPENSSL_uni2utf8(*(undefined8 *)(*(undefined4 **)(piVar1 + 2) + 2),
                                      **(undefined4 **)(piVar1 + 2));
    return pcVar2;
  }
  return (char *)0x0;
}

