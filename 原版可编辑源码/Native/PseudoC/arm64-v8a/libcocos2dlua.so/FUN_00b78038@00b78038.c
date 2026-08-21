
undefined8 FUN_00b78038(undefined8 *param_1,void *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ASN1_VALUE *val;
  ASN1_STRING *str;
  long lVar4;
  
                    /* try { // try from 00b78058 to 00c78093 has its CatchHandler @ 00b78058
                       catch() { ... } // from try @ 00b78058 with catch @ 00b78058
                       catch() { ... } // from try @ 00b780a4 with catch @ 00b78058
                       catch() { ... } // from try @ 00b780c8 with catch @ 00b78058
                       catch() { ... } // from try @ 00b780ec with catch @ 00b78058 */
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
                    /* try { // try from 00b78094 to 00c780a3 has its CatchHandler @ 00b78130 */
    *(ASN1_STRING **)(val + 8) = str;
    if (str == (ASN1_BIT_STRING *)0x0) goto LAB_00b78118;
  }
                    /* try { // try from 00b780a4 to 00c780b7 has its CatchHandler @ 00b78058 */
  iVar3 = ASN1_BIT_STRING_set(str,param_2,iVar1 >> 3);
  if (iVar3 != 0) {
    lVar4 = *(long *)(val + 8);
                    /* try { // try from 00b780b8 to 00c780c7 has its CatchHandler @ 00b7812c */
    uVar2 = param_3 % 8;
                    /* try { // try from 00b780c8 to 00c780db has its CatchHandler @ 00b78058 */
    *(ulong *)(lVar4 + 0x10) = *(ulong *)(lVar4 + 0x10) & 0xfffffffffffffff0 | 8;
    if (0 < (int)uVar2) {
                    /* try { // try from 00b780dc to 00c780eb has its CatchHandler @ 00b78128 */
      lVar4 = *(long *)(lVar4 + 8) + (long)(iVar1 >> 3);
                    /* try { // try from 00b780ec to 00c78143 has its CatchHandler @ 00b78058 */
      *(byte *)(lVar4 + -1) = *(byte *)(lVar4 + -1) & ((byte)(0xff >> (ulong)(uVar2 & 0x1f)) ^ 0xff)
      ;
      *(ulong *)(*(long *)(val + 8) + 0x10) =
           *(ulong *)(*(long *)(val + 8) + 0x10) | (long)(int)(8 - uVar2);
    }
    *param_1 = val;
    return 1;
  }
LAB_00b78118:
  ASN1_item_free(val,(ASN1_ITEM *)IPAddressOrRange_it);
                    /* catch() { ... } // from try @ 00b780dc with catch @ 00b78128 */
                    /* catch() { ... } // from try @ 00b780b8 with catch @ 00b7812c */
                    /* catch() { ... } // from try @ 00b78094 with catch @ 00b78130 */
  return 0;
}

