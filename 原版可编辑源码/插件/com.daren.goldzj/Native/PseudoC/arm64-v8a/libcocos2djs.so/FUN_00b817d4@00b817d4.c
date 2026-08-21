
/* WARNING: Type propagation algorithm not settling */

ulong FUN_00b817d4(BIO *param_1,uchar **param_2,uint param_3,ASN1_ITEM *param_4,long param_5,
                  long param_6,int param_7,byte *param_8)

{
  char *buf;
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ASN1_TEMPLATE *tt;
  ASN1_VALUE **ppAVar6;
  char cVar7;
  ASN1_TEMPLATE *pAVar8;
  char *pcVar9;
  ASN1_OBJECT *o;
  ASN1_INTEGER *a;
  void *pvVar10;
  code *pcVar11;
  long lVar12;
  BIO *local_c8;
  uint local_c0;
  byte *local_b8;
  char acStack_b0 [80];
  
  pvVar10 = param_4->funcs;
  if (pvVar10 == (void *)0x0) {
    pcVar11 = (code *)0x0;
    cVar7 = param_4->itype;
    if (cVar7 == '\0') goto LAB_00b81844;
LAB_00b81850:
    if (*param_2 != (uchar *)0x0) {
      switch(cVar7) {
      case '\0':
        goto switchD_00b81870_caseD_0;
      case '\x01':
      case '\x06':
        if ((param_7 == 0) &&
           (uVar5 = FUN_00b81e78(param_1,param_3,param_5,param_6,param_8), (int)uVar5 == 0)) {
          return uVar5;
        }
        if (param_5 != 0 || param_6 != 0) {
          if ((*param_8 >> 1 & 1) == 0) {
            pcVar9 = "\n";
          }
          else {
            pcVar9 = " {\n";
          }
          iVar3 = BIO_puts(param_1,pcVar9);
          if (iVar3 < 1) {
            return 0;
          }
        }
        if (pcVar11 != (code *)0x0) {
          uVar5 = (*pcVar11)(8,param_2,param_4,&local_c8);
          if ((int)uVar5 == 0) {
            return uVar5;
          }
          if ((int)uVar5 == 2) {
            return 1;
          }
        }
        if (0 < param_4->tcount) {
          pAVar8 = param_4->templates;
          lVar12 = 0;
          do {
            tt = asn1_do_adb((ASN1_VALUE **)param_2,pAVar8,1);
            if (tt == (ASN1_TEMPLATE *)0x0) {
              return 0;
            }
            ppAVar6 = asn1_get_field_ptr((ASN1_VALUE **)param_2,tt);
            uVar5 = FUN_00b81fb0(param_1,ppAVar6,param_3 + 2,tt,param_8);
            if ((int)uVar5 == 0) {
              return uVar5;
            }
            lVar12 = lVar12 + 1;
            pAVar8 = pAVar8 + 1;
          } while (lVar12 < param_4->tcount);
        }
        if (((*param_8 >> 1 & 1) != 0) &&
           (iVar3 = BIO_printf(param_1,"%*s}\n",(ulong)param_3,&DAT_0189703a), iVar3 < 0)) {
          return 0;
        }
        if (pcVar11 == (code *)0x0) {
          return 1;
        }
        uVar5 = (*pcVar11)(9,param_2,param_4,&local_c8);
        iVar3 = (int)uVar5;
        goto joined_r0x00b81c74;
      case '\x02':
        uVar4 = asn1_get_choice_selector((ASN1_VALUE **)param_2,param_4);
        if (((int)uVar4 < 0) || (param_4->tcount <= (long)(int)uVar4)) {
          iVar3 = BIO_printf(param_1,"ERROR: selector [%d] invalid\n",(ulong)uVar4);
          return (ulong)(0 < iVar3);
        }
        pAVar8 = param_4->templates + (int)uVar4;
        param_2 = (uchar **)asn1_get_field_ptr((ASN1_VALUE **)param_2,pAVar8);
        goto LAB_00b81908;
      default:
        BIO_printf(param_1,"Unprocessed type %d\n");
        return 0;
      case '\x04':
        goto switchD_00b81870_caseD_4;
      case '\x05':
        goto switchD_00b81870_caseD_5;
      }
    }
    if ((*param_8 & 1) == 0) {
      return 1;
    }
    if ((param_7 == 0) &&
       (uVar5 = FUN_00b81e78(param_1,param_3,param_5,param_6,param_8), (int)uVar5 == 0)) {
      return uVar5;
    }
    pcVar9 = "<ABSENT>\n";
    goto LAB_00b818e0;
  }
  pcVar11 = *(code **)((long)pvVar10 + 0x18);
  if (pcVar11 != (code *)0x0) {
    local_c8 = param_1;
    local_c0 = param_3;
    local_b8 = param_8;
  }
  cVar7 = param_4->itype;
  if (cVar7 != '\0') goto LAB_00b81850;
LAB_00b81844:
  if (param_4->utype != 1) goto LAB_00b81850;
switchD_00b81870_caseD_0:
  pAVar8 = param_4->templates;
  if (pAVar8 != (ASN1_TEMPLATE *)0x0) {
LAB_00b81908:
    uVar5 = FUN_00b81fb0(param_1,param_2,param_3,pAVar8,param_8);
    iVar3 = (int)uVar5;
    goto joined_r0x00b81c74;
  }
switchD_00b81870_caseD_5:
  uVar5 = FUN_00b81e78(param_1,param_3,param_5,param_6,param_8);
  if ((int)uVar5 == 0) {
    return uVar5;
  }
  if ((pvVar10 != (void *)0x0) && (*(code **)((long)pvVar10 + 0x38) != (code *)0x0)) {
    uVar5 = (**(code **)((long)pvVar10 + 0x38))(param_1,param_2,param_4,param_3,param_8);
    iVar3 = (int)uVar5;
joined_r0x00b81c74:
    if (iVar3 != 0) {
      return 1;
    }
    return uVar5;
  }
  if (param_4->itype == '\x05') {
    a = (ASN1_INTEGER *)*param_2;
    uVar5 = (long)a->type & 0xfffffffffffffeff;
    bVar1 = *param_8;
joined_r0x00b81b54:
    if ((bVar1 >> 3 & 1) == 0) {
      pcVar9 = (char *)0x0;
    }
    else {
      pcVar9 = ASN1_tag2str((int)uVar5);
    }
  }
  else {
    uVar5 = param_4->utype;
    if (uVar5 == 1) {
      a = (ASN1_INTEGER *)0x0;
      bVar1 = *param_8;
      goto joined_r0x00b81b54;
    }
    a = (ASN1_INTEGER *)*param_2;
    if (uVar5 != 0xfffffffffffffffc) {
      bVar1 = *param_8;
      goto joined_r0x00b81b54;
    }
    piVar2 = &a->length;
    uVar5 = (ulong)*piVar2;
    param_2 = &a->data;
    a = (ASN1_INTEGER *)*param_2;
    if ((*param_8 >> 4 & 1) == 0) {
      pcVar9 = ASN1_tag2str(*piVar2);
    }
    else {
      pcVar9 = (char *)0x0;
    }
  }
  if (uVar5 == 5) {
    iVar3 = BIO_puts(param_1,"NULL\n");
    if (0 < iVar3) {
      return 1;
    }
    return 0;
  }
  if (pcVar9 != (char *)0x0) {
    iVar3 = BIO_puts(param_1,pcVar9);
    if (iVar3 < 1) {
      return 0;
    }
    iVar3 = BIO_puts(param_1,":");
    if (iVar3 < 1) {
      return 0;
    }
  }
  switch(uVar5) {
  case 1:
    iVar3 = *(int *)param_2;
    if (iVar3 == -1) {
      iVar3 = (int)param_4->size;
    }
    pcVar9 = "FALSE";
    if (iVar3 != 0) {
      pcVar9 = "TRUE";
    }
    buf = "BOOL ABSENT";
    if (iVar3 != -1) {
      buf = pcVar9;
    }
    iVar3 = BIO_puts(param_1,buf);
    goto joined_r0x00b81d08;
  case 2:
  case 10:
    pcVar9 = i2s_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,a);
    if (pcVar9 == (char *)0x0) {
      return 0;
    }
    iVar3 = BIO_puts(param_1,pcVar9);
    CRYPTO_free(pcVar9);
    goto joined_r0x00b81d08;
  case 3:
  case 4:
    if (a->type == 3) {
      iVar3 = BIO_printf(param_1," (%ld unused bits)\n",a->flags & 7);
    }
    else {
      iVar3 = BIO_puts(param_1,"\n");
    }
    if (iVar3 < 1) {
      return 0;
    }
    if (a->length < 1) {
      return 1;
    }
    iVar3 = BIO_dump_indent(param_1,(char *)a->data,a->length,param_3 + 2);
    goto joined_r0x00b81b38;
  case 6:
    o = (ASN1_OBJECT *)*param_2;
    iVar3 = OBJ_obj2nid(o);
    pcVar9 = OBJ_nid2ln(iVar3);
    if (pcVar9 == (char *)0x0) {
      pcVar9 = "";
    }
    OBJ_obj2txt(acStack_b0,0x50,o,1);
    iVar3 = BIO_printf(param_1,"%s (%s)",pcVar9,acStack_b0);
joined_r0x00b81d08:
    if (iVar3 < 1) {
      return 0;
    }
    goto LAB_00b81e28;
  case 0x17:
    iVar3 = ASN1_UTCTIME_print(param_1,a);
    break;
  case 0x18:
    iVar3 = ASN1_GENERALIZEDTIME_print(param_1,a);
    break;
  case 0xfffffffffffffffd:
  case 0x10:
  case 0x11:
    iVar3 = BIO_puts(param_1,"\n");
    if (iVar3 < 1) {
      return 0;
    }
    iVar3 = ASN1_parse_dump(param_1,a->data,(long)a->length,param_3,0);
    goto joined_r0x00b81b38;
  default:
    iVar3 = ASN1_STRING_print_ex(param_1,a,*(ulong *)(param_8 + 0x20));
  }
  if (iVar3 != 0) {
LAB_00b81e28:
    pcVar9 = "\n";
LAB_00b818e0:
    iVar3 = BIO_puts(param_1,pcVar9);
joined_r0x00b81b38:
    if (0 < iVar3) {
      return 1;
    }
  }
  return 0;
switchD_00b81870_caseD_4:
  if (param_7 == 0) {
    uVar5 = FUN_00b81e78(param_1,param_3,param_5,param_6,param_8);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    pvVar10 = param_4->funcs;
  }
  if ((pvVar10 == (void *)0x0) || (*(code **)((long)pvVar10 + 0x30) == (code *)0x0)) {
    if (param_6 == 0) {
      return 1;
    }
    iVar3 = BIO_printf(param_1,":EXTERNAL TYPE %s\n",param_6);
    goto joined_r0x00b81b38;
  }
  uVar5 = (**(code **)((long)pvVar10 + 0x30))(param_1,param_2,param_3,&DAT_0189703a,param_8);
  if ((int)uVar5 == 0) {
    return uVar5;
  }
  if ((int)uVar5 != 2) {
    return 1;
  }
  goto LAB_00b81e28;
}

