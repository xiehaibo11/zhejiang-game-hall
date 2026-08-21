
int OBJ_ln2nid(char *s)

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
  undefined1 *local_80;
  undefined1 auStack_78 [8];
  char *local_70;
  
  local_70 = s;
  if (DAT_01d3aca8 != 0) {
    local_80 = auStack_78;
    local_88[0] = 2;
    lVar3 = OPENSSL_LH_retrieve(DAT_01d3aca8,local_88);
    if (lVar3 != 0) {
      ppuVar4 = *(undefined ***)(lVar3 + 8);
      goto LAB_00b397ac;
    }
  }
  __s1 = local_70;
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
    puVar5 = (uint *)(&DAT_018b2a54 + (long)iVar1 * 4);
    iVar2 = strcmp(__s1,(&PTR_s_undefined_019b2fcb_0x53_01c78cf0)[(ulong)*puVar5 * 5]);
  } while ((iVar2 < 0) || (iVar6 = iVar1 + 1, iVar1 = iVar7, iVar2 != 0));
  if (puVar5 == (uint *)0x0) {
    return 0;
  }
  ppuVar4 = &PTR_s_UNDEF_01c78ce8 + (ulong)*puVar5 * 5;
LAB_00b397ac:
  return *(int *)(ppuVar4 + 2);
}

