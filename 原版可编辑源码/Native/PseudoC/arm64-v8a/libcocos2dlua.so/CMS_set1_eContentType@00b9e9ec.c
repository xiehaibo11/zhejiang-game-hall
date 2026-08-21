
int CMS_set1_eContentType(CMS_ContentInfo *cms,ASN1_OBJECT *oid)

{
  int iVar1;
  ASN1_OBJECT *pAVar2;
  undefined8 *puVar3;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b9e914 with catch @ 00b9e9fc
                        */
  iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)cms);
  switch(iVar1) {
  case 0x16:
  case 0x19:
    puVar3 = *(undefined8 **)(*(long *)(cms + 8) + 0x10);
    break;
  case 0x17:
switchD_00b9ea24_caseD_17:
    puVar3 = *(undefined8 **)(*(long *)(cms + 8) + 0x18);
    if (puVar3 == (undefined8 *)0x0) goto LAB_00b9eab8;
    goto LAB_00b9ea34;
  case 0x18:
switchD_00b9ea24_caseD_18:
    ERR_put_error(0x2e,0x82,0x98,"crypto/cms/cms_lib.c",0xda);
    goto LAB_00b9eab8;
  case 0x1a:
    puVar3 = *(undefined8 **)(*(long *)(cms + 8) + 8);
    break;
  default:
    if (iVar1 != 0xcd) {
      if (iVar1 != 0x312) goto switchD_00b9ea24_caseD_18;
      goto switchD_00b9ea24_caseD_17;
    }
    puVar3 = *(undefined8 **)(*(long *)(cms + 8) + 0x28);
  }
  if (puVar3 == (undefined8 *)0x0) {
LAB_00b9eab8:
    iVar1 = 0;
  }
  else {
LAB_00b9ea34:
    if (oid != (ASN1_OBJECT *)0x0) {
      pAVar2 = OBJ_dup(oid);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b9e8b4 with catch @ 00b9ea44
                        */
      if (pAVar2 == (ASN1_OBJECT *)0x0) {
        return 0;
      }
      ASN1_OBJECT_free((ASN1_OBJECT *)*puVar3);
      *puVar3 = pAVar2;
    }
    iVar1 = 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b9e754 with catch @ 00b9ea58
                        */
  }
  return iVar1;
}

