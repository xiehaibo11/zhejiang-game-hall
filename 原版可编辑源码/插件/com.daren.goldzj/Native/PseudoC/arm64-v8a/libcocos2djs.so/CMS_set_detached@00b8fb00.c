
int CMS_set_detached(CMS_ContentInfo *cms,int detached)

{
  CMS_ContentInfo *pCVar1;
  int iVar2;
  ASN1_STRING *a;
  int reason;
  int line;
  int *piVar3;
  long lVar4;
  
  iVar2 = OBJ_obj2nid(*(ASN1_OBJECT **)cms);
  switch(iVar2) {
  case 0x15:
    pCVar1 = cms + 8;
    a = *(ASN1_STRING **)pCVar1;
    goto joined_r0x00b8fbbc;
  case 0x16:
  case 0x19:
    piVar3 = *(int **)(*(long *)(cms + 8) + 0x10);
    break;
  case 0x17:
    lVar4 = *(long *)(*(long *)(cms + 8) + 0x18);
    goto LAB_00b8fbb4;
  case 0x18:
switchD_00b8fb38_caseD_18:
    piVar3 = *(int **)(cms + 8);
    if (*piVar3 != 4) {
      iVar2 = 0x81;
      reason = 0x98;
      line = 0xb8;
      goto LAB_00b8fc24;
    }
    break;
  case 0x1a:
    lVar4 = *(long *)(*(long *)(cms + 8) + 8);
LAB_00b8fbb4:
    pCVar1 = (CMS_ContentInfo *)(lVar4 + 0x10);
    a = *(ASN1_STRING **)pCVar1;
    goto joined_r0x00b8fbbc;
  default:
    if (iVar2 == 0xcd) {
      piVar3 = *(int **)(*(long *)(cms + 8) + 0x28);
    }
    else {
      if (iVar2 != 0x312) goto switchD_00b8fb38_caseD_18;
      piVar3 = *(int **)(*(long *)(cms + 8) + 0x18);
    }
  }
  pCVar1 = (CMS_ContentInfo *)(piVar3 + 2);
  a = *(ASN1_STRING **)pCVar1;
joined_r0x00b8fbbc:
  if (detached == 0) {
    if (a == (ASN1_STRING *)0x0) {
      a = ASN1_OCTET_STRING_new();
      *(ASN1_STRING **)pCVar1 = a;
      if (a == (ASN1_OCTET_STRING *)0x0) {
        iVar2 = 0x93;
        reason = 0x41;
        line = 0x118;
LAB_00b8fc24:
        ERR_put_error(0x2e,iVar2,reason,"crypto/cms/cms_lib.c",line);
        return 0;
      }
    }
    a->flags = a->flags | 0x20;
  }
  else {
    ASN1_OCTET_STRING_free(a);
    *(undefined8 *)pCVar1 = 0;
  }
  return 1;
}

