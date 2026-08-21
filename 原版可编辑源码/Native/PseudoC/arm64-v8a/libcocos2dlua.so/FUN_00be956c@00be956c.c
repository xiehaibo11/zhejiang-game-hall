
undefined8 FUN_00be956c(undefined8 param_1,long *param_2,int *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  uchar *local_28;
  
  if (param_4 != (undefined8 *)0x0) {
    param_4 = (undefined8 *)*param_4;
    local_40 = param_4[2];
    local_48 = param_4[3];
    local_38 = param_4[4];
    iVar1 = (**(code **)(*(long *)(param_4[1] + 0x20) + 0x18))(0xb,param_4,param_4[1],&local_48);
    if (0 < iVar1) {
      iVar1 = ASN1_item_ndef_i2d((ASN1_VALUE *)*param_4,(uchar **)0x0,(ASN1_ITEM *)param_4[1]);
      local_28 = CRYPTO_malloc(iVar1,"crypto/asn1/bio_ndef.c",0xb9);
      if (local_28 == (uchar *)0x0) {
        return 0;
      }
      param_4[5] = local_28;
      *param_2 = (long)local_28;
      iVar1 = ASN1_item_ndef_i2d((ASN1_VALUE *)*param_4,&local_28,(ASN1_ITEM *)param_4[1]);
      if (*(long *)param_4[4] != 0) {
        *param_2 = *(long *)param_4[4];
        *param_3 = (iVar1 - *(int *)param_4[4]) + *(int *)(param_4 + 5);
        return 1;
      }
    }
  }
  return 0;
}

