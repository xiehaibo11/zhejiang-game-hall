
undefined4 FUN_00af0198(ASN1_VALUE *param_1,ASN1_ITEM *param_2,int param_3)

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
                    /* try { // try from 00af01ec to 00bf01f3 has its CatchHandler @ 00af04c4 */
  switch(param_2->itype) {
  case '\0':
    pAVar9 = param_2->templates;
    if (pAVar9 == (ASN1_TEMPLATE *)0x0) goto switchD_00af01f4_caseD_5;
    uVar8 = pAVar9->flags;
    pAVar2 = param_1;
    if (((uint)uVar8 >> 0xc & 1) != 0) {
      pAVar2 = (ASN1_VALUE *)&local_58;
      local_58 = param_1;
    }
    if ((uVar8 & 1) != 0) {
                    /* try { // try from 00af0468 to 00bf046f has its CatchHandler @ 00af04cc */
      if ((uVar8 & 0x306) == 0) {
LAB_00af04fc:
                    /* catch() { ... } // from try @ 00aeef38 with catch @ 00af04fc
                       catch() { ... } // from try @ 00af0438 with catch @ 00af04fc */
        pAVar4 = pAVar9->item;
                    /* catch() { ... } // from try @ 00aef640 with catch @ 00af0500 */
        switch(pAVar4->itype) {
        case '\0':
          pAVar9 = pAVar4->templates;
          if (pAVar9 != (ASN1_TEMPLATE *)0x0) goto code_r0x00af0520;
          pvVar5 = pAVar4->funcs;
          if (pvVar5 != (void *)0x0) goto LAB_00af05ac;
          if ((int)pAVar4->utype == 1) {
                    /* catch() { ... } // from try @ 00aef210 with catch @ 00af05d4 */
            *(int *)pAVar2 = (int)pAVar4->size;
            return 1;
          }
        case '\x01':
        case '\x02':
        case '\x06':
          goto switchD_00af0514_caseD_1;
        default:
          goto switchD_00af0514_caseD_3;
        case '\x04':
          if (pAVar4->funcs == (void *)0x0) goto switchD_00af0514_caseD_1;
          pcVar11 = *(code **)((long)pAVar4->funcs + 0x18);
          break;
        case '\x05':
                    /* catch() { ... } // from try @ 00aeee60 with catch @ 00af05f8 */
          if ((pAVar4 == (ASN1_ITEM_EXP *)0x0) || (pvVar5 = pAVar4->funcs, pvVar5 == (void *)0x0))
          goto switchD_00af0514_caseD_1;
LAB_00af05ac:
          pcVar11 = *(code **)((long)pvVar5 + 0x20);
        }
        if (pcVar11 != (code *)0x0) {
          (*pcVar11)(pAVar2);
          return 1;
        }
      }
switchD_00af0514_caseD_1:
                    /* try { // try from 00af0470 to 00bf0477 has its CatchHandler @ 00af04c8 */
      *(ASN1_VALUE **)pAVar2 = (ASN1_VALUE *)0x0;
      return 1;
                    /* try { // try from 00af0478 to 00bf047f has its CatchHandler @ 00af04c4 */
    }
    if ((uVar8 & 0x300) != 0) goto switchD_00af0514_caseD_1;
    if ((uVar8 & 6) == 0) {
      iVar1 = FUN_00af0198(pAVar2,pAVar9->item,(uint)uVar8 & 0x1000);
      break;
    }
    pAVar3 = (ASN1_VALUE *)OPENSSL_sk_new_null();
    if (pAVar3 != (ASN1_VALUE *)0x0) {
      *(ASN1_VALUE **)pAVar2 = pAVar3;
      goto switchD_00af0514_caseD_3;
    }
LAB_00af0530:
                    /* catch() { ... } // from try @ 00aef108 with catch @ 00af053c
                       catch() { ... } // from try @ 00af0418 with catch @ 00af053c */
    ERR_put_error(0xd,0x85,0x41,"crypto/asn1/tasn_new.c",0xdf);
    goto LAB_00af054c;
  case '\x01':
  case '\x06':
    if (pcVar11 == (code *)0x0) {
LAB_00af021c:
      if (param_3 == 0) {
        pAVar2 = (ASN1_VALUE *)CRYPTO_zalloc(param_2->size,"crypto/asn1/tasn_new.c",0x7a);
        *(ASN1_VALUE **)param_1 = pAVar2;
        if (pAVar2 == (ASN1_VALUE *)0x0) goto LAB_00af054c;
      }
      else {
        memset(*(ASN1_VALUE **)param_1,0,param_2->size);
      }
      iVar1 = asn1_do_lock((ASN1_VALUE **)param_1,0,param_2);
      if (iVar1 < 0) goto LAB_00af054c;
      asn1_enc_init((ASN1_VALUE **)param_1,param_2);
                    /* try { // try from 00af0324 to 00bf033b has its CatchHandler @ 00af04ac */
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
                    /* try { // try from 00af0418 to 00bf041f has its CatchHandler @ 00af053c */
            if ((uVar8 & 0x300) != 0) goto switchD_00af0360_caseD_1;
                    /* try { // try from 00af0420 to 00bf0427 has its CatchHandler @ 00af052c */
            if ((uVar8 & 6) == 0) {
              iVar1 = FUN_00af0198(pAVar2,pAVar9->item,(uint)uVar8 & 0x1000);
              if (iVar1 == 0) goto LAB_00af054c;
            }
            else {
                    /* try { // try from 00af0428 to 00bf042f has its CatchHandler @ 00af0528 */
              pAVar3 = (ASN1_VALUE *)OPENSSL_sk_new_null();
              if (pAVar3 == (ASN1_VALUE *)0x0) goto LAB_00af0530;
                    /* try { // try from 00af0430 to 00bf0437 has its CatchHandler @ 00aeec50 */
              *(ASN1_VALUE **)pAVar2 = pAVar3;
            }
          }
          else {
                    /* try { // try from 00af0438 to 00bf043f has its CatchHandler @ 00af04fc */
                    /* try { // try from 00af0440 to 00bf044f has its CatchHandler @ 00af04f8 */
            pAVar6 = pAVar9;
            if ((uVar8 & 0x306) == 0) {
LAB_00af0348:
              pAVar4 = pAVar6->item;
              switch(pAVar4->itype) {
              case '\0':
                pAVar6 = pAVar4->templates;
                if (pAVar6 != (ASN1_TEMPLATE *)0x0) goto code_r0x00af036c;
                if (pAVar4->funcs != (void *)0x0) {
                  pcVar7 = *(code **)((long)pAVar4->funcs + 0x20);
                  break;
                }
                if ((int)pAVar4->utype == 1) {
                  *(int *)pAVar2 = (int)pAVar4->size;
                  goto switchD_00af0360_caseD_3;
                }
              case '\x01':
              case '\x02':
              case '\x06':
                goto switchD_00af0360_caseD_1;
              default:
                goto switchD_00af0360_caseD_3;
              case '\x04':
                if (pAVar4->funcs == (void *)0x0) goto switchD_00af0360_caseD_1;
                    /* try { // try from 00af03cc to 00bf03e3 has its CatchHandler @ 00af0480 */
                pcVar7 = *(code **)((long)pAVar4->funcs + 0x18);
                break;
              case '\x05':
                if ((pAVar4 == (ASN1_ITEM_EXP *)0x0) || (pAVar4->funcs == (void *)0x0))
                goto switchD_00af0360_caseD_1;
                    /* try { // try from 00af03e4 to 00bf0417 has its CatchHandler @ 00aeec50 */
                pcVar7 = *(code **)((long)pAVar4->funcs + 0x20);
              }
              if (pcVar7 != (code *)0x0) {
                (*pcVar7)(pAVar2);
                goto switchD_00af0360_caseD_3;
              }
            }
switchD_00af0360_caseD_1:
            *(ASN1_VALUE **)pAVar2 = (ASN1_VALUE *)0x0;
          }
switchD_00af0360_caseD_3:
          lVar12 = lVar12 + 1;
                    /* try { // try from 00af0450 to 00bf0457 has its CatchHandler @ 00af04e8 */
          pAVar9 = pAVar9 + 1;
                    /* try { // try from 00af0458 to 00bf045f has its CatchHandler @ 00af04e4 */
        } while (lVar12 < param_2->tcount);
      }
      goto joined_r0x00af04a8;
    }
    iVar1 = (*pcVar11)(0,param_1,param_2,0);
    if (iVar1 != 0) {
      if (iVar1 == 2) goto switchD_00af0514_caseD_3;
      goto LAB_00af021c;
    }
LAB_00af04c8:
                    /* catch() { ... } // from try @ 00af00a8 with catch @ 00af04c8
                       catch() { ... } // from try @ 00af0470 with catch @ 00af04c8 */
                    /* catch() { ... } // from try @ 00aeff64 with catch @ 00af04cc
                       catch() { ... } // from try @ 00af0468 with catch @ 00af04cc */
                    /* catch() { ... } // from try @ 00aefe20 with catch @ 00af04d0
                       catch() { ... } // from try @ 00af0460 with catch @ 00af04d0 */
    ERR_put_error(0xd,0x79,100,"crypto/asn1/tasn_new.c",0x98);
                    /* catch() { ... } // from try @ 00aefcdc with catch @ 00af04e4
                       catch() { ... } // from try @ 00af0458 with catch @ 00af04e4 */
                    /* catch() { ... } // from try @ 00aefb9c with catch @ 00af04e8
                       catch() { ... } // from try @ 00af0450 with catch @ 00af04e8 */
    ASN1_item_ex_free((ASN1_VALUE **)param_1,param_2);
    goto LAB_00af0568;
  case '\x02':
    if (pcVar11 != (code *)0x0) {
      iVar1 = (*pcVar11)(0,param_1,param_2,0);
      if (iVar1 == 0) goto LAB_00af04c8;
      if (iVar1 == 2) goto switchD_00af0514_caseD_3;
    }
    if (param_3 == 0) {
                    /* catch() { ... } // from try @ 00af03cc with catch @ 00af0480
                       try { // try from 00af0480 to 00bf065f has its CatchHandler @ 00aeec50 */
      pAVar2 = (ASN1_VALUE *)CRYPTO_zalloc(param_2->size,"crypto/asn1/tasn_new.c",0x61);
      *(ASN1_VALUE **)param_1 = pAVar2;
      if (pAVar2 == (ASN1_VALUE *)0x0) goto LAB_00af054c;
    }
    else {
      memset(*(ASN1_VALUE **)param_1,0,param_2->size);
    }
                    /* catch() { ... } // from try @ 00af0378 with catch @ 00af049c */
    asn1_set_choice_selector((ASN1_VALUE **)param_1,-1,param_2);
joined_r0x00af04a8:
    if (pcVar11 != (code *)0x0) {
                    /* catch() { ... } // from try @ 00af0324 with catch @ 00af04ac */
      iVar1 = (*pcVar11)(1,param_1,param_2,0);
                    /* catch() { ... } // from try @ 00af01ec with catch @ 00af04c4
                       catch() { ... } // from try @ 00af0478 with catch @ 00af04c4 */
      if (iVar1 != 0) {
        return 1;
      }
      goto LAB_00af04c8;
    }
    goto switchD_00af0514_caseD_3;
  default:
    goto switchD_00af01f4_caseD_3;
  case '\x04':
    if ((pvVar5 == (void *)0x0) || (*(code **)((long)pvVar5 + 8) == (code *)0x0))
    goto switchD_00af0514_caseD_3;
    iVar1 = (**(code **)((long)pvVar5 + 8))(param_1,param_2);
    break;
  case '\x05':
switchD_00af01f4_caseD_5:
    iVar1 = FUN_00af0604(param_1,param_2,param_3);
  }
  if (iVar1 == 0) {
LAB_00af054c:
                    /* catch() { ... } // from try @ 00aef8f8 with catch @ 00af054c */
                    /* catch() { ... } // from try @ 00aef7f0 with catch @ 00af0560 */
    ERR_put_error(0xd,0x79,0x41,"crypto/asn1/tasn_new.c",0x91);
LAB_00af0568:
                    /* catch() { ... } // from try @ 00aeeddc with catch @ 00af0568 */
    uVar10 = 0;
  }
  else {
switchD_00af0514_caseD_3:
    uVar10 = 1;
  }
switchD_00af01f4_caseD_3:
                    /* catch() { ... } // from try @ 00aef874 with catch @ 00af0584 */
  return uVar10;
code_r0x00af036c:
  if ((pAVar6->flags & 0x306) != 0) goto switchD_00af0360_caseD_1;
  goto LAB_00af0348;
code_r0x00af0520:
                    /* catch() { ... } // from try @ 00aef448 with catch @ 00af0528
                       catch() { ... } // from try @ 00af0428 with catch @ 00af0528 */
  if ((pAVar9->flags & 0x306) != 0) goto switchD_00af0514_caseD_1;
  goto LAB_00af04fc;
}

