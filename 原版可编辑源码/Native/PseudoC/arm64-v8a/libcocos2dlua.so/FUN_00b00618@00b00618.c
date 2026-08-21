
undefined4 FUN_00b00618(ASN1_VALUE *param_1,ASN1_ITEM *param_2,int param_3)

{
  int iVar1;
  ASN1_VALUE *pAVar2;
  ASN1_VALUE *pAVar3;
  ASN1_ITEM_EXP *pAVar4;
  void *pvVar5;
  ASN1_TEMPLATE *pAVar6;
  code *pcVar7;
  ulong uVar8;
  ASN1_TEMPLATE *pAVar9;
  undefined4 uVar10;
  code *pcVar11;
  long lVar12;
  ASN1_VALUE *local_58;
  
  pvVar5 = param_2->funcs;
  if ((pvVar5 == (void *)0x0) || (pcVar11 = *(code **)((long)pvVar5 + 0x18), pcVar11 == (code *)0x0)
     ) {
    pcVar11 = (code *)0x0;
  }
  uVar10 = 1;
  switch(param_2->itype) {
  case '\0':
    pAVar9 = param_2->templates;
    if (pAVar9 == (ASN1_TEMPLATE *)0x0) goto switchD_00b00674_caseD_5;
    uVar8 = pAVar9->flags;
    pAVar2 = param_1;
    if (((uint)uVar8 >> 0xc & 1) != 0) {
      pAVar2 = (ASN1_VALUE *)&local_58;
      local_58 = param_1;
    }
    if ((uVar8 & 1) != 0) {
      if ((uVar8 & 0x306) == 0) {
LAB_00b0097c:
        pAVar4 = pAVar9->item;
        switch(pAVar4->itype) {
        case '\0':
          pAVar9 = pAVar4->templates;
          if (pAVar9 != (ASN1_TEMPLATE *)0x0) goto code_r0x00b009a0;
          pvVar5 = pAVar4->funcs;
          if (pvVar5 != (void *)0x0) goto LAB_00b00a2c;
          if ((int)pAVar4->utype == 1) {
            *(int *)pAVar2 = (int)pAVar4->size;
            return 1;
          }
        case '\x01':
        case '\x02':
        case '\x06':
          goto switchD_00b00994_caseD_1;
        default:
          goto switchD_00b00994_caseD_3;
        case '\x04':
          if (pAVar4->funcs == (void *)0x0) goto switchD_00b00994_caseD_1;
          pcVar11 = *(code **)((long)pAVar4->funcs + 0x18);
          break;
        case '\x05':
          if ((pAVar4 == (ASN1_ITEM_EXP *)0x0) || (pvVar5 = pAVar4->funcs, pvVar5 == (void *)0x0))
          goto switchD_00b00994_caseD_1;
LAB_00b00a2c:
          pcVar11 = *(code **)((long)pvVar5 + 0x20);
        }
        if (pcVar11 != (code *)0x0) {
          (*pcVar11)(pAVar2);
          return 1;
        }
      }
switchD_00b00994_caseD_1:
      *(ASN1_VALUE **)pAVar2 = (ASN1_VALUE *)0x0;
      return 1;
    }
    if ((uVar8 & 0x300) != 0) goto switchD_00b00994_caseD_1;
    if ((uVar8 & 6) == 0) {
      iVar1 = FUN_00b00618(pAVar2,pAVar9->item,(uint)uVar8 & 0x1000);
      break;
    }
    pAVar3 = (ASN1_VALUE *)OPENSSL_sk_new_null();
    if (pAVar3 != (ASN1_VALUE *)0x0) {
      *(ASN1_VALUE **)pAVar2 = pAVar3;
      goto switchD_00b00994_caseD_3;
    }
LAB_00b009b0:
    ERR_put_error(0xd,0x85,0x41,"crypto/asn1/tasn_new.c",0xdf);
    goto LAB_00b009cc;
  case '\x01':
  case '\x06':
    if (pcVar11 == (code *)0x0) {
LAB_00b0069c:
      if (param_3 == 0) {
        pAVar2 = (ASN1_VALUE *)CRYPTO_zalloc(param_2->size,"crypto/asn1/tasn_new.c",0x7a);
        *(ASN1_VALUE **)param_1 = pAVar2;
        if (pAVar2 == (ASN1_VALUE *)0x0) goto LAB_00b009cc;
      }
      else {
        memset(*(ASN1_VALUE **)param_1,0,param_2->size);
      }
      iVar1 = asn1_do_lock((ASN1_VALUE **)param_1,0,param_2);
      if (iVar1 < 0) goto LAB_00b009cc;
      asn1_enc_init((ASN1_VALUE **)param_1,param_2);
      if (0 < param_2->tcount) {
        pAVar9 = param_2->templates;
        lVar12 = 0;
        do {
          pAVar3 = (ASN1_VALUE *)asn1_get_field_ptr((ASN1_VALUE **)param_1,pAVar9);
          uVar8 = pAVar9->flags;
          pAVar2 = pAVar3;
          if (((uint)uVar8 >> 0xc & 1) != 0) {
            pAVar2 = (ASN1_VALUE *)&local_58;
            local_58 = pAVar3;
          }
          if ((uVar8 & 1) == 0) {
            if ((uVar8 & 0x300) != 0) goto switchD_00b007e0_caseD_1;
            if ((uVar8 & 6) == 0) {
              iVar1 = FUN_00b00618(pAVar2,pAVar9->item,(uint)uVar8 & 0x1000);
              if (iVar1 == 0) goto LAB_00b009cc;
            }
            else {
              pAVar3 = (ASN1_VALUE *)OPENSSL_sk_new_null();
              if (pAVar3 == (ASN1_VALUE *)0x0) goto LAB_00b009b0;
              *(ASN1_VALUE **)pAVar2 = pAVar3;
            }
          }
          else {
            pAVar6 = pAVar9;
            if ((uVar8 & 0x306) == 0) {
LAB_00b007c8:
              pAVar4 = pAVar6->item;
              switch(pAVar4->itype) {
              case '\0':
                pAVar6 = pAVar4->templates;
                if (pAVar6 != (ASN1_TEMPLATE *)0x0) goto code_r0x00b007ec;
                if (pAVar4->funcs != (void *)0x0) {
                  pcVar7 = *(code **)((long)pAVar4->funcs + 0x20);
                  break;
                }
                if ((int)pAVar4->utype == 1) {
                  *(int *)pAVar2 = (int)pAVar4->size;
                  goto switchD_00b007e0_caseD_3;
                }
              case '\x01':
              case '\x02':
              case '\x06':
                goto switchD_00b007e0_caseD_1;
              default:
                goto switchD_00b007e0_caseD_3;
              case '\x04':
                if (pAVar4->funcs == (void *)0x0) goto switchD_00b007e0_caseD_1;
                pcVar7 = *(code **)((long)pAVar4->funcs + 0x18);
                break;
              case '\x05':
                if ((pAVar4 == (ASN1_ITEM_EXP *)0x0) || (pAVar4->funcs == (void *)0x0))
                goto switchD_00b007e0_caseD_1;
                pcVar7 = *(code **)((long)pAVar4->funcs + 0x20);
              }
              if (pcVar7 != (code *)0x0) {
                (*pcVar7)(pAVar2);
                goto switchD_00b007e0_caseD_3;
              }
            }
switchD_00b007e0_caseD_1:
            *(ASN1_VALUE **)pAVar2 = (ASN1_VALUE *)0x0;
          }
switchD_00b007e0_caseD_3:
          lVar12 = lVar12 + 1;
          pAVar9 = pAVar9 + 1;
        } while (lVar12 < param_2->tcount);
      }
      goto joined_r0x00b00928;
    }
    iVar1 = (*pcVar11)(0,param_1,param_2,0);
    if (iVar1 != 0) {
      if (iVar1 == 2) goto switchD_00b00994_caseD_3;
      goto LAB_00b0069c;
    }
LAB_00b00948:
    ERR_put_error(0xd,0x79,100,"crypto/asn1/tasn_new.c",0x98);
    ASN1_item_ex_free((ASN1_VALUE **)param_1,param_2);
    goto LAB_00b009e8;
  case '\x02':
    if (pcVar11 != (code *)0x0) {
      iVar1 = (*pcVar11)(0,param_1,param_2,0);
      if (iVar1 == 0) goto LAB_00b00948;
      if (iVar1 == 2) goto switchD_00b00994_caseD_3;
    }
    if (param_3 == 0) {
      pAVar2 = (ASN1_VALUE *)CRYPTO_zalloc(param_2->size,"crypto/asn1/tasn_new.c",0x61);
      *(ASN1_VALUE **)param_1 = pAVar2;
      if (pAVar2 == (ASN1_VALUE *)0x0) goto LAB_00b009cc;
    }
    else {
      memset(*(ASN1_VALUE **)param_1,0,param_2->size);
    }
    asn1_set_choice_selector((ASN1_VALUE **)param_1,-1,param_2);
joined_r0x00b00928:
    if (pcVar11 != (code *)0x0) {
      iVar1 = (*pcVar11)(1,param_1,param_2,0);
      if (iVar1 != 0) {
        return 1;
      }
      goto LAB_00b00948;
    }
    goto switchD_00b00994_caseD_3;
  default:
    goto switchD_00b00674_caseD_3;
  case '\x04':
    if ((pvVar5 == (void *)0x0) || (*(code **)((long)pvVar5 + 8) == (code *)0x0))
    goto switchD_00b00994_caseD_3;
    iVar1 = (**(code **)((long)pvVar5 + 8))(param_1,param_2);
    break;
  case '\x05':
switchD_00b00674_caseD_5:
    iVar1 = FUN_00b00a84(param_1,param_2,param_3);
  }
  if (iVar1 == 0) {
LAB_00b009cc:
    ERR_put_error(0xd,0x79,0x41,"crypto/asn1/tasn_new.c",0x91);
LAB_00b009e8:
    uVar10 = 0;
  }
  else {
switchD_00b00994_caseD_3:
    uVar10 = 1;
  }
switchD_00b00674_caseD_3:
  return uVar10;
code_r0x00b007ec:
  if ((pAVar6->flags & 0x306) != 0) goto switchD_00b007e0_caseD_1;
  goto LAB_00b007c8;
code_r0x00b009a0:
  if ((pAVar9->flags & 0x306) != 0) goto switchD_00b00994_caseD_1;
  goto LAB_00b0097c;
}

