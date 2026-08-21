
int ASN1_item_ex_i2d(ASN1_VALUE **pval,uchar **out,ASN1_ITEM *it,int tag,int aclass)

{
  uint xclass;
  int iVar1;
  int iVar2;
  int iVar3;
  ASN1_TEMPLATE *pAVar4;
  ASN1_VALUE **ppAVar5;
  void *pvVar6;
  long lVar7;
  ASN1_TEMPLATE *pAVar8;
  code *pcVar9;
  int local_64;
  
  pvVar6 = it->funcs;
  if ((it->itype != '\0') && (*pval == (ASN1_VALUE *)0x0)) {
    return 0;
  }
  if (pvVar6 == (void *)0x0) {
    pcVar9 = (code *)0x0;
  }
  else {
    pcVar9 = *(code **)((long)pvVar6 + 0x18);
  }
  iVar1 = 0;
  iVar3 = 1;
  switch(it->itype) {
  case '\0':
    pAVar8 = it->templates;
    if (pAVar8 != (ASN1_TEMPLATE *)0x0) goto LAB_00aff720;
    break;
  case '\x02':
    if ((pcVar9 != (code *)0x0) && (iVar3 = (*pcVar9)(6,pval,it,0), iVar3 == 0)) {
      return 0;
    }
    iVar3 = asn1_get_choice_selector(pval,it);
    if ((iVar3 < 0) || (it->tcount <= (long)iVar3)) {
      if (pcVar9 == (code *)0x0) {
        return 0;
      }
      (*pcVar9)(7,pval,it,0);
      return 0;
    }
    pAVar8 = it->templates + iVar3;
    pval = asn1_get_field_ptr(pval,pAVar8);
    tag = -1;
LAB_00aff720:
    iVar3 = FUN_00aff98c(pval,out,pAVar8,tag,aclass);
    return iVar3;
  default:
    goto switchD_00aff6a4_caseD_3;
  case '\x04':
    iVar3 = (**(code **)((long)pvVar6 + 0x28))(pval,out,it,tag,aclass);
    return iVar3;
  case '\x05':
    tag = -1;
    break;
  case '\x06':
    iVar3 = ((uint)aclass >> 0xb & 1) + 1;
  case '\x01':
    iVar1 = asn1_enc_restore(&local_64,out,pval,it);
    if (-1 < iVar1) {
      if (iVar1 != 0) {
        return local_64;
      }
      xclass = aclass & 0xffffff3f;
      if (tag != -1) {
        xclass = aclass;
      }
      iVar1 = 0x10;
      if (tag != -1) {
        iVar1 = tag;
      }
      local_64 = 0;
      if ((pcVar9 == (code *)0x0) || (iVar2 = (*pcVar9)(6,pval,it,0), iVar2 != 0)) {
        if (0 < it->tcount) {
          pAVar8 = it->templates;
          lVar7 = 0;
          do {
            pAVar4 = asn1_do_adb(pval,pAVar8,1);
            if (pAVar4 == (ASN1_TEMPLATE *)0x0) {
              return 0;
            }
            ppAVar5 = asn1_get_field_ptr(pval,pAVar4);
            iVar2 = FUN_00aff98c(ppAVar5,0,pAVar4,0xffffffff,xclass);
            if (iVar2 == -1) {
              return -1;
            }
            if (0x7fffffff - local_64 < iVar2) {
              return -1;
            }
            local_64 = local_64 + iVar2;
            lVar7 = lVar7 + 1;
            pAVar8 = pAVar8 + 1;
          } while (lVar7 < it->tcount);
        }
        iVar2 = ASN1_object_size(iVar3,local_64,iVar1);
        if (out == (uchar **)0x0) {
          return iVar2;
        }
        if (iVar2 == -1) {
          return -1;
        }
        ASN1_put_object(out,iVar3,local_64,iVar1,xclass);
        if (0 < it->tcount) {
          pAVar8 = it->templates;
          lVar7 = 0;
          do {
            pAVar4 = asn1_do_adb(pval,pAVar8,1);
            if (pAVar4 == (ASN1_TEMPLATE *)0x0) {
              return 0;
            }
            ppAVar5 = asn1_get_field_ptr(pval,pAVar4);
            FUN_00aff98c(ppAVar5,out,pAVar4,0xffffffff,xclass);
            lVar7 = lVar7 + 1;
            pAVar8 = pAVar8 + 1;
          } while (lVar7 < it->tcount);
        }
        if (iVar3 == 2) {
          ASN1_put_eoc(out);
        }
        if (pcVar9 == (code *)0x0) {
          return iVar2;
        }
        iVar3 = (*pcVar9)(7,pval,it,0);
        if (iVar3 != 0) {
          return iVar2;
        }
      }
    }
    return 0;
  }
  iVar1 = FUN_00affe74(pval,out,it,tag,aclass);
switchD_00aff6a4_caseD_3:
  return iVar1;
}

