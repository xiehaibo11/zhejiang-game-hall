
undefined8 FUN_00b68bb8(undefined8 *param_1,void *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ASN1_VALUE *val;
  ASN1_STRING *str;
  long lVar4;
  
  iVar1 = param_3 + 0xe;
  if (-1 < param_3 + 7) {
    iVar1 = param_3 + 7;
  }
  val = ASN1_item_new((ASN1_ITEM *)IPAddressOrRange_it);
  if (val == (ASN1_VALUE *)0x0) {
    return 0;
  }
  str = *(ASN1_STRING **)(val + 8);
  *(undefined4 *)val = 0;
  if (str == (ASN1_STRING *)0x0) {
    str = ASN1_BIT_STRING_new();
    *(ASN1_STRING **)(val + 8) = str;
    if (str == (ASN1_BIT_STRING *)0x0) goto LAB_00b68c98;
  }
  iVar3 = ASN1_BIT_STRING_set(str,param_2,iVar1 >> 3);
  if (iVar3 != 0) {
    lVar4 = *(long *)(val + 8);
    uVar2 = param_3 % 8;
    *(ulong *)(lVar4 + 0x10) = *(ulong *)(lVar4 + 0x10) & 0xfffffffffffffff0 | 8;
    if (0 < (int)uVar2) {
      lVar4 = *(long *)(lVar4 + 8) + (long)(iVar1 >> 3);
      *(byte *)(lVar4 + -1) = *(byte *)(lVar4 + -1) & ((byte)(0xff >> (ulong)(uVar2 & 0x1f)) ^ 0xff)
      ;
      *(ulong *)(*(long *)(val + 8) + 0x10) =
           *(ulong *)(*(long *)(val + 8) + 0x10) | (long)(int)(8 - uVar2);
    }
    *param_1 = val;
    return 1;
  }
LAB_00b68c98:
  ASN1_item_free(val,(ASN1_ITEM *)IPAddressOrRange_it);
  return 0;
}

