
int CMS_is_detached(CMS_ContentInfo *cms)

{
  int iVar1;
  int *piVar2;
  CMS_ContentInfo *pCVar3;
  
  iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)cms);
  switch(iVar1) {
  case 0x15:
    pCVar3 = cms + 8;
    goto LAB_00b90390;
  case 0x16:
  case 0x19:
    piVar2 = *(int **)(*(long *)(cms + 8) + 0x10);
    break;
  case 0x17:
    pCVar3 = (CMS_ContentInfo *)(*(long *)(*(long *)(cms + 8) + 0x18) + 0x10);
    goto LAB_00b90390;
  case 0x18:
switchD_00b902fc_caseD_18:
    piVar2 = *(int **)(cms + 8);
    if (*piVar2 != 4) {
      ERR_put_error(0x2e,0x81,0x98,"crypto/cms/cms_lib.c",0xb8);
      return -1;
    }
    break;
  case 0x1a:
    pCVar3 = (CMS_ContentInfo *)(*(long *)(*(long *)(cms + 8) + 8) + 0x10);
    goto LAB_00b90390;
  default:
    if (iVar1 == 0xcd) {
      piVar2 = *(int **)(*(long *)(cms + 8) + 0x28);
    }
    else {
      if (iVar1 != 0x312) goto switchD_00b902fc_caseD_18;
      piVar2 = *(int **)(*(long *)(cms + 8) + 0x18);
    }
  }
  pCVar3 = (CMS_ContentInfo *)(piVar2 + 2);
LAB_00b90390:
  return (uint)(*(long *)pCVar3 == 0);
}

