
int CMS_dataFinal(CMS_ContentInfo *cms,BIO *bio)

{
  int iVar1;
  int iVar2;
  BIO *bp;
  int line;
  int *piVar3;
  long lVar4;
  CMS_ContentInfo *pCVar5;
  void *local_38;
  
  iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)cms);
  switch(iVar1) {
  case 0x15:
    pCVar5 = cms + 8;
    lVar4 = *(long *)pCVar5;
    goto joined_r0x00b900a0;
  case 0x16:
  case 0x19:
    piVar3 = *(int **)(*(long *)(cms + 8) + 0x10);
    break;
  case 0x17:
    lVar4 = *(long *)(*(long *)(cms + 8) + 0x18);
    goto LAB_00b90064;
  case 0x18:
switchD_00b8ff74_caseD_18:
    piVar3 = *(int **)(cms + 8);
    if (*piVar3 == 4) break;
    iVar1 = 0x81;
    iVar2 = 0x98;
    line = 0xb8;
    goto LAB_00b90104;
  case 0x1a:
    lVar4 = *(long *)(*(long *)(cms + 8) + 8);
LAB_00b90064:
    pCVar5 = (CMS_ContentInfo *)(lVar4 + 0x10);
    lVar4 = *(long *)pCVar5;
    if (lVar4 != 0) goto LAB_00b8ffd8;
    goto LAB_00b900a4;
  default:
    if (iVar1 == 0xcd) {
      piVar3 = *(int **)(*(long *)(cms + 8) + 0x28);
    }
    else {
      if (iVar1 != 0x312) goto switchD_00b8ff74_caseD_18;
      piVar3 = *(int **)(*(long *)(cms + 8) + 0x18);
    }
  }
  pCVar5 = (CMS_ContentInfo *)(piVar3 + 2);
  lVar4 = *(long *)pCVar5;
joined_r0x00b900a0:
  if (lVar4 == 0) {
LAB_00b900a4:
    iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)cms);
    iVar2 = 1;
    switch(iVar1) {
    case 0x15:
    case 0x17:
    case 0x1a:
      break;
    case 0x16:
      iVar2 = cms_SignedData_final(cms,bio);
      break;
    case 0x19:
      iVar2 = cms_DigestedData_do_final(cms,bio,0);
      break;
    default:
      if (iVar1 == 0x312) {
        return 1;
      }
    case 0x18:
      iVar1 = 0x6e;
      iVar2 = 0x9c;
      line = 0x92;
      goto LAB_00b90104;
    }
  }
  else {
LAB_00b8ffd8:
    if ((*(byte *)(lVar4 + 0x10) >> 5 & 1) == 0) goto LAB_00b900a4;
    bp = BIO_find_type(bio,0x401);
    if (bp != (BIO *)0x0) {
      lVar4 = BIO_ctrl(bp,3,0,&local_38);
      BIO_set_flags(bp,0x200);
      BIO_ctrl(bp,0x82,0,(void *)0x0);
      ASN1_STRING_set0(*(ASN1_STRING **)pCVar5,local_38,(int)lVar4);
      *(ulong *)(*(long *)pCVar5 + 0x10) = *(ulong *)(*(long *)pCVar5 + 0x10) & 0xffffffffffffffdf;
      goto LAB_00b900a4;
    }
    iVar1 = 0x6e;
    iVar2 = 0x69;
    line = 0x77;
LAB_00b90104:
    ERR_put_error(0x2e,iVar1,iVar2,"crypto/cms/cms_lib.c",line);
    iVar2 = 0;
  }
  return iVar2;
}

