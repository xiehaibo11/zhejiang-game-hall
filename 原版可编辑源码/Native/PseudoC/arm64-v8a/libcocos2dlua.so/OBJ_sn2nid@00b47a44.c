
int OBJ_sn2nid(char *s)

{
  int iVar1;
  char *__s1;
  int iVar2;
  long lVar3;
  undefined **ppuVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  undefined4 local_88 [2];
  char **local_80;
  char *local_78 [5];
  
  local_78[0] = s;
  if (DAT_01784a28 != 0) {
    local_80 = local_78;
    local_88[0] = 1;
    lVar3 = OPENSSL_LH_retrieve(DAT_01784a28,local_88);
    if (lVar3 != 0) {
      ppuVar4 = *(undefined ***)(lVar3 + 8);
      goto LAB_00b47b28;
    }
  }
  __s1 = local_78[0];
  iVar6 = 0;
  iVar2 = 0;
  puVar5 = (uint *)0x0;
  iVar1 = 0x41c;
  do {
    iVar7 = iVar1;
    if (iVar7 <= iVar6) {
      if (iVar2 != 0) {
        return 0;
      }
      break;
    }
    iVar1 = iVar7 + iVar6;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 1;
    }
    iVar1 = iVar1 >> 1;
    puVar5 = (uint *)(&DAT_013e4094 + (long)iVar1 * 4);
    iVar2 = strcmp(__s1,(&PTR_s_UNDEF_016b3c38)[(ulong)*puVar5 * 5]);
  } while ((iVar2 < 0) || (iVar6 = iVar1 + 1, iVar1 = iVar7, iVar2 != 0));
  if (puVar5 == (uint *)0x0) {
    return 0;
  }
  ppuVar4 = &PTR_s_UNDEF_016b3c38 + (ulong)*puVar5 * 5;
LAB_00b47b28:
  return *(int *)(ppuVar4 + 2);
}

