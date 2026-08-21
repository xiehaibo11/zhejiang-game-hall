
undefined8 FUN_00b9fd70(undefined8 *param_1)

{
  int iVar1;
  ASN1_VALUE *pAVar2;
  ASN1_OBJECT *pAVar3;
  int reason;
  int line;
  
  if (param_1[1] == 0) {
    pAVar2 = ASN1_item_new((ASN1_ITEM *)CMS_SignedData_it);
    param_1[1] = pAVar2;
    if (pAVar2 != (ASN1_VALUE *)0x0) {
      *(undefined8 *)pAVar2 = 1;
      pAVar3 = OBJ_nid2obj(0x15);
      **(undefined8 **)(param_1[1] + 0x10) = pAVar3;
      *(undefined4 *)(*(long *)(param_1[1] + 0x10) + 0x10) = 1;
      ASN1_OBJECT_free((ASN1_OBJECT *)*param_1);
      pAVar3 = OBJ_nid2obj(0x16);
      *param_1 = pAVar3;
      return param_1[1];
    }
                    /* try { // try from 00b9fe14 to 00c9fe1f has its CatchHandler @ 00ba0a24 */
    iVar1 = 0x95;
                    /* try { // try from 00b9fe24 to 00c9fe63 has its CatchHandler @ 00ba0a50 */
    reason = 0x41;
    line = 0x25;
  }
  else {
    iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_1);
    if (iVar1 == 0x16) {
      return param_1[1];
    }
    iVar1 = 0x85;
                    /* try { // try from 00b9fe08 to 00c9fe0f has its CatchHandler @ 00ba0a8c */
    reason = 0x6c;
    line = 0x1a;
  }
  ERR_put_error(0x2e,iVar1,reason,"crypto/cms/cms_sd.c",line);
  return 0;
}

