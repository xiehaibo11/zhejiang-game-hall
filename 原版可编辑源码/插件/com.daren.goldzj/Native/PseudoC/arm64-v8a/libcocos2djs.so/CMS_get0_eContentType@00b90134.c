
ASN1_OBJECT * CMS_get0_eContentType(CMS_ContentInfo *cms)

{
  int iVar1;
  ASN1_OBJECT *pAVar2;
  undefined8 *puVar3;
  
  iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)cms);
  switch(iVar1) {
  case 0x16:
  case 0x19:
    puVar3 = *(undefined8 **)(*(long *)(cms + 8) + 0x10);
    if (puVar3 == (undefined8 *)0x0) goto LAB_00b901dc;
    goto LAB_00b901c8;
  case 0x17:
switchD_00b90168_caseD_17:
    puVar3 = *(undefined8 **)(*(long *)(cms + 8) + 0x18);
    break;
  case 0x18:
switchD_00b90168_caseD_18:
    ERR_put_error(0x2e,0x82,0x98,"crypto/cms/cms_lib.c",0xda);
    goto LAB_00b901dc;
  case 0x1a:
    puVar3 = *(undefined8 **)(*(long *)(cms + 8) + 8);
    break;
  default:
    if (iVar1 != 0xcd) {
      if (iVar1 != 0x312) goto switchD_00b90168_caseD_18;
      goto switchD_00b90168_caseD_17;
    }
    puVar3 = *(undefined8 **)(*(long *)(cms + 8) + 0x28);
  }
  if (puVar3 == (undefined8 *)0x0) {
LAB_00b901dc:
    pAVar2 = (ASN1_OBJECT *)0x0;
  }
  else {
LAB_00b901c8:
    pAVar2 = (ASN1_OBJECT *)*puVar3;
  }
  return pAVar2;
}

