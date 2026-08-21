
int ASN1_STRING_set_default_mask_asc(char *p)

{
  int iVar1;
  ulong uVar2;
  char *local_18;
  
  iVar1 = strncmp(p,"MASK:",5);
  if (iVar1 == 0) {
    if (p[5] == '\0') {
      return 0;
    }
    uVar2 = strtoul(p + 5,&local_18,0);
    if (*local_18 != '\0') {
      return 0;
    }
  }
  else {
    iVar1 = strcmp(p,"nombstr");
    if (iVar1 == 0) {
      uVar2 = 0xffffffffffffd7ff;
    }
    else {
      iVar1 = strcmp(p,"pkix");
      if (iVar1 == 0) {
        uVar2 = 0xfffffffffffffffb;
      }
      else {
        iVar1 = strcmp(p,"utf8only");
        if (iVar1 == 0) {
          uVar2 = 0x2000;
        }
        else {
          iVar1 = strcmp(p,"default");
          if (iVar1 != 0) {
            return 0;
          }
          uVar2 = 0xffffffff;
        }
      }
    }
  }
  DAT_01d20fc0 = uVar2;
  return 1;
}

