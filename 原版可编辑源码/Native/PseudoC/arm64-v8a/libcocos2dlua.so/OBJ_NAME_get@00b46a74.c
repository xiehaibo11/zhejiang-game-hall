
char * OBJ_NAME_get(char *name,int type)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  uint local_48 [2];
  char *local_40;
  
  pcVar2 = (char *)0x0;
  if (name != (char *)0x0) {
    if (DAT_01784a18 == 0) {
      CRYPTO_mem_ctrl(3);
      DAT_01784a18 = OPENSSL_LH_new(FUN_00b467d4,&LAB_00b4683c);
      CRYPTO_mem_ctrl(2);
      if (DAT_01784a18 == 0) {
        return (char *)0x0;
      }
    }
    local_48[0] = type & 0xffff7fff;
    local_40 = name;
    lVar1 = OPENSSL_LH_retrieve(DAT_01784a18,local_48);
    pcVar2 = (char *)0x0;
    if (lVar1 != 0) {
      if (((uint)type >> 0xf & 1) == 0) {
        iVar3 = -1;
        do {
          if (*(int *)(lVar1 + 4) == 0) goto LAB_00b46b24;
          iVar3 = iVar3 + 1;
          if (9 < iVar3) {
            return (char *)0x0;
          }
          local_40 = *(char **)(lVar1 + 0x10);
          lVar1 = OPENSSL_LH_retrieve(DAT_01784a18,local_48);
        } while (lVar1 != 0);
        pcVar2 = (char *)0x0;
      }
      else {
LAB_00b46b24:
        pcVar2 = *(char **)(lVar1 + 0x10);
      }
    }
  }
  return pcVar2;
}

