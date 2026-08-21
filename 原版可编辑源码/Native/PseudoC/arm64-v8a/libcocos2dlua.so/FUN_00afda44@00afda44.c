
undefined8
FUN_00afda44(ASN1_VALUE **param_1,long *param_2,char *param_3,ASN1_ITEM *param_4,long param_5,
            undefined8 param_6,uint param_7,undefined8 param_8)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined8 uVar4;
  ASN1_TEMPLATE *pAVar5;
  ASN1_VALUE **ppAVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  ulong uVar10;
  ASN1_TEMPLATE *tt;
  void *pvVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  uint local_80;
  char local_7c [4];
  char local_78 [4];
  char local_74 [4];
  char *local_70;
  char *local_68;
  
  local_70 = (char *)0x0;
  pvVar11 = param_4->funcs;
  if (param_1 == (ASN1_VALUE **)0x0) {
    return 0;
  }
  if ((pvVar11 == (void *)0x0) ||
     (pcVar13 = *(code **)((long)pvVar11 + 0x18), pcVar13 == (code *)0x0)) {
    pcVar13 = (code *)0x0;
  }
  iVar3 = (int)param_5;
  local_68 = param_3;
  switch(param_4->itype) {
  case '\0':
    if (param_4->templates == (ASN1_TEMPLATE *)0x0) {
LAB_00afe040:
      uVar4 = FUN_00afe450(param_1,param_2,local_68,param_4,param_5,param_6,param_7,param_8);
      return uVar4;
    }
    if ((iVar3 == -1) && ((param_7 & 0xff) == 0)) {
      uVar4 = FUN_00afe294(param_1,param_2,param_3,param_4->templates,0,param_8);
      return uVar4;
    }
    iVar3 = 0xaa;
    iVar7 = 0x9f;
    break;
  case '\x01':
  case '\x06':
    local_70 = (char *)*param_2;
    uVar9 = 0;
    if (iVar3 != -1) {
      uVar9 = (undefined4)param_6;
    }
    iVar7 = 0x10;
    if (iVar3 != -1) {
      iVar7 = iVar3;
    }
    uVar4 = FUN_00afeba0(&local_68,0,0,local_78,local_7c,&local_70,param_3,iVar7,uVar9,(char)param_7
                         ,param_8);
    if ((int)uVar4 == -1) {
      return uVar4;
    }
    if ((int)uVar4 == 0) {
      iVar3 = 0x3a;
      iVar7 = 0x112;
    }
    else {
      cVar1 = local_78[0];
      if ((pvVar11 != (void *)0x0) && ((*(byte *)((long)pvVar11 + 8) >> 2 & 1) != 0)) {
        local_68 = param_3 + (*param_2 - (long)local_70);
        cVar1 = '\x01';
      }
      if (local_7c[0] == '\0') {
        iVar3 = 0x95;
        iVar7 = 0x11e;
      }
      else if ((*param_1 == (ASN1_VALUE *)0x0) &&
              (iVar3 = ASN1_item_ex_new(param_1,param_4), iVar3 == 0)) {
        iVar3 = 0x3a;
        iVar7 = 0x123;
      }
      else {
        if ((pcVar13 != (code *)0x0) && (iVar3 = (*pcVar13)(4,param_1,param_4,0), iVar3 == 0))
        goto LAB_00afe204;
        tt = param_4->templates;
        if (param_4->tcount < 1) {
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          do {
            if (((tt->flags & 0x300) != 0) &&
               (pAVar5 = asn1_do_adb(param_1,tt,0), pAVar5 != (ASN1_TEMPLATE *)0x0)) {
              ppAVar6 = asn1_get_field_ptr(param_1,pAVar5);
              asn1_template_free(ppAVar6,pAVar5);
            }
            lVar12 = lVar12 + 1;
            tt = tt + 1;
          } while (lVar12 < param_4->tcount);
          tt = param_4->templates;
          if (param_4->tcount < 1) {
            lVar12 = 0;
          }
          else {
            lVar12 = 0;
            do {
              pAVar5 = asn1_do_adb(param_1,tt,1);
              if (pAVar5 == (ASN1_TEMPLATE *)0x0) goto LAB_00afe220;
              ppAVar6 = asn1_get_field_ptr(param_1,pAVar5);
              pcVar2 = local_70;
              if (local_68 == (char *)0x0) break;
              if (((1 < (long)local_68) && (*local_70 == '\0')) && (local_70[1] == '\0')) {
                local_70 = local_70 + 2;
                if (local_78[0] == '\0') {
                  iVar3 = 0x9f;
                  iVar7 = 0x145;
                  goto LAB_00afe21c;
                }
                local_78[0] = '\0';
                local_68 = local_68 + -2;
                goto LAB_00afe144;
              }
              if (lVar12 == param_4->tcount + -1) {
                uVar8 = 0;
              }
              else {
                uVar8 = (uint)pAVar5->flags & 1;
              }
              iVar3 = FUN_00afe294(ppAVar6,&local_70,local_68,pAVar5,uVar8,param_8);
              if (iVar3 == -1) {
                asn1_template_free(ppAVar6,pAVar5);
              }
              else {
                if (iVar3 == 0) goto LAB_00afdfa8;
                local_68 = pcVar2 + ((long)local_68 - (long)local_70);
              }
              lVar12 = lVar12 + 1;
              tt = tt + 1;
            } while (lVar12 < param_4->tcount);
          }
        }
        iVar3 = (int)lVar12;
        if (local_78[0] == '\0') {
LAB_00afe144:
          iVar3 = (int)lVar12;
        }
        else {
          if ((((long)local_68 < 2) || (*local_70 != '\0')) || (local_70[1] != '\0')) {
            iVar3 = 0x89;
            iVar7 = 0x16c;
            break;
          }
          local_70 = local_70 + 2;
        }
        if ((cVar1 != '\0') || (local_68 == (char *)0x0)) {
          lVar12 = (long)iVar3;
          if (lVar12 < param_4->tcount) {
            do {
              pAVar5 = asn1_do_adb(param_1,tt,1);
              if (pAVar5 == (ASN1_TEMPLATE *)0x0) goto LAB_00afe220;
              if ((pAVar5->flags & 1) == 0) {
                ERR_put_error(0xd,0x78,0x79,"crypto/asn1/tasn_dec.c",0x185);
                goto LAB_00afdfa8;
              }
              ppAVar6 = asn1_get_field_ptr(param_1,pAVar5);
              asn1_template_free(ppAVar6,pAVar5);
              lVar12 = lVar12 + 1;
              tt = tt + 1;
            } while (lVar12 < param_4->tcount);
          }
          pcVar2 = local_70;
          iVar3 = asn1_enc_save(param_1,(uchar *)*param_2,(int)local_70 - (int)(uchar *)*param_2,
                                param_4);
          if ((iVar3 != 0) &&
             ((pcVar13 == (code *)0x0 || (iVar3 = (*pcVar13)(5,param_1,param_4,0), iVar3 != 0)))) {
            *param_2 = (long)pcVar2;
            return 1;
          }
          goto LAB_00afe204;
        }
        iVar3 = 0x94;
        iVar7 = 0x171;
      }
    }
    break;
  case '\x02':
    if ((pcVar13 != (code *)0x0) && (iVar3 = (*pcVar13)(4,param_1,param_4,0), iVar3 == 0)) {
LAB_00afe204:
      iVar3 = 100;
      iVar7 = 0x195;
      break;
    }
    if (*param_1 == (ASN1_VALUE *)0x0) {
      iVar3 = ASN1_item_ex_new(param_1,param_4);
      if (iVar3 == 0) {
        iVar3 = 0x3a;
        iVar7 = 0xd6;
        break;
      }
    }
    else {
      iVar3 = asn1_get_choice_selector(param_1,param_4);
      if ((-1 < iVar3) && ((long)iVar3 < param_4->tcount)) {
        pAVar5 = param_4->templates;
        ppAVar6 = asn1_get_field_ptr(param_1,pAVar5 + iVar3);
        asn1_template_free(ppAVar6,pAVar5 + iVar3);
        asn1_set_choice_selector(param_1,-1,param_4);
      }
    }
    local_70 = (char *)*param_2;
    if (param_4->tcount < 1) {
      iVar3 = 0;
      if (param_4->tcount == 0) goto LAB_00afdfd8;
LAB_00afde9c:
      asn1_set_choice_selector(param_1,iVar3,param_4);
      if ((pcVar13 == (code *)0x0) || (iVar3 = (*pcVar13)(5,param_1,param_4,0), iVar3 != 0)) {
        *param_2 = (long)local_70;
        return 1;
      }
      goto LAB_00afe204;
    }
    pAVar5 = param_4->templates;
    ppAVar6 = asn1_get_field_ptr(param_1,pAVar5);
    iVar3 = FUN_00afe294(ppAVar6,&local_70,param_3,pAVar5,1,param_8);
    if (iVar3 == -1) {
      lVar12 = 1;
      do {
        lVar14 = lVar12;
        pcVar2 = local_68;
        lVar12 = param_4->tcount;
        if (lVar12 <= lVar14) goto LAB_00afdfcc;
        pAVar5 = pAVar5 + 1;
        ppAVar6 = asn1_get_field_ptr(param_1,pAVar5);
        iVar3 = FUN_00afe294(ppAVar6,&local_70,pcVar2,pAVar5,1,param_8);
        lVar12 = lVar14 + 1;
      } while (iVar3 == -1);
    }
    else {
      lVar14 = 0;
    }
    if (0 < iVar3) {
      lVar12 = param_4->tcount;
LAB_00afdfcc:
      iVar3 = (int)lVar14;
      if (lVar12 != lVar14) goto LAB_00afde9c;
LAB_00afdfd8:
      if ((param_7 & 0xff) != 0) {
        ASN1_item_ex_free(param_1,param_4);
        return 0xffffffff;
      }
      iVar3 = 0x8f;
      iVar7 = 0xf9;
      break;
    }
    asn1_template_free(ppAVar6,pAVar5);
    ERR_put_error(0xd,0x78,0x3a,"crypto/asn1/tasn_dec.c",0xed);
    if (pAVar5 != (ASN1_TEMPLATE *)0x0) {
LAB_00afdfa8:
      ERR_add_error_data(4,"Field=",pAVar5->field_name,", Type=",param_4->sname);
      return 0;
    }
    goto LAB_00afe220;
  default:
    goto switchD_00afdab8_caseD_3;
  case '\x04':
    uVar4 = (**(code **)((long)pvVar11 + 0x20))
                      (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar4;
  case '\x05':
    local_70 = (char *)*param_2;
    iVar3 = FUN_00afeba0(0,&local_80,local_74,0,0,&local_70,param_3,0xffffffff,0,1,param_8);
    if (iVar3 == 0) {
      iVar3 = 0x3a;
      iVar7 = 0xae;
    }
    else if (local_74[0] == '\0') {
      param_5 = (long)(int)local_80;
      if (local_80 < 0x1f) {
        uVar10 = *(ulong *)(&DAT_013d9400 + param_5 * 8);
      }
      else {
        uVar10 = 0;
      }
      if ((param_4->utype & uVar10) != 0) {
        param_6 = 0;
        param_7 = 0;
        goto LAB_00afe040;
      }
      if ((param_7 & 0xff) != 0) {
        return 0xffffffff;
      }
      iVar3 = 0x8c;
      iVar7 = 0xbf;
    }
    else {
      if ((param_7 & 0xff) != 0) {
        return 0xffffffff;
      }
      iVar3 = 0x8b;
      iVar7 = 0xb7;
    }
  }
LAB_00afe21c:
  ERR_put_error(0xd,0x78,iVar3,"crypto/asn1/tasn_dec.c",iVar7);
LAB_00afe220:
  ERR_add_error_data(2,"Type=",param_4->sname);
switchD_00afdab8_caseD_3:
  return 0;
}

