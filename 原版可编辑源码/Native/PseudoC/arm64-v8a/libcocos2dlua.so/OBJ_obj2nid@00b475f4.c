
int OBJ_obj2nid(ASN1_OBJECT *o)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined **ppuVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  undefined4 local_60 [2];
  ASN1_OBJECT *local_58;
  
  if (o == (ASN1_OBJECT *)0x0) {
    return 0;
  }
  if (o->nid != 0) {
    return o->nid;
  }
  if (o->length == 0) {
LAB_00b476fc:
    iVar7 = 0;
  }
  else {
    if (DAT_01784a28 == 0) {
LAB_00b47650:
      iVar7 = 0;
      iVar3 = 0;
      puVar6 = (uint *)0x0;
      iVar1 = 0x3bc;
      do {
        iVar8 = iVar1;
        if (iVar8 <= iVar7) {
          if (iVar3 != 0) goto LAB_00b476fc;
          break;
        }
        iVar1 = iVar8 + iVar7;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        iVar1 = iVar1 >> 1;
        puVar6 = (uint *)(&DAT_013e2134 + (long)iVar1 * 4);
        iVar2 = o->length;
        iVar3 = iVar2 - *(int *)(&DAT_016b3c4c + (ulong)*puVar6 * 0x28);
        if (iVar3 == 0) {
          if (iVar2 == 0) break;
          iVar3 = memcmp(o->data,*(void **)(&DAT_016b3c50 + (ulong)*puVar6 * 0x28),(long)iVar2);
        }
      } while ((iVar3 < 0) || (iVar7 = iVar1 + 1, iVar1 = iVar8, iVar3 != 0));
      if (puVar6 == (uint *)0x0) goto LAB_00b476fc;
      ppuVar5 = &PTR_s_UNDEF_016b3c38 + (ulong)*puVar6 * 5;
    }
    else {
      local_60[0] = 0;
      local_58 = o;
      lVar4 = OPENSSL_LH_retrieve(DAT_01784a28,local_60);
      if (lVar4 == 0) goto LAB_00b47650;
      ppuVar5 = *(undefined ***)(lVar4 + 8);
    }
    iVar7 = *(int *)(ppuVar5 + 2);
  }
  return iVar7;
}

