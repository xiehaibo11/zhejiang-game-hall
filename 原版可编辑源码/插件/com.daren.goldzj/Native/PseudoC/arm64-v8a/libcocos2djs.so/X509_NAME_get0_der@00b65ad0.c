
undefined8 X509_NAME_get0_der(ASN1_VALUE *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
                    /* try { // try from 00b65ad4 to 00c65adb has its CatchHandler @ 00b65b20 */
                    /* try { // try from 00b65adc to 00c65b3b has its CatchHandler @ 00b65988 */
  iVar1 = ASN1_item_i2d(param_1,(uchar **)0x0,(ASN1_ITEM *)X509_NAME_it);
  if (iVar1 < 1) {
    uVar2 = 0;
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 8);
    }
    if (param_3 != (undefined8 *)0x0) {
                    /* catch() { ... } // from try @ 00b65a74 with catch @ 00b65b20
                       catch() { ... } // from try @ 00b65ad4 with catch @ 00b65b20 */
      *param_3 = **(undefined8 **)(param_1 + 0x10);
    }
    uVar2 = 1;
  }
                    /* try { // try from 00b65b3c to 00c65c27 has its CatchHandler @ 00b65b3c
                       catch() { ... } // from try @ 00b65b3c with catch @ 00b65b3c
                       catch() { ... } // from try @ 00b65c3c with catch @ 00b65b3c
                       catch() { ... } // from try @ 00b65cac with catch @ 00b65b3c */
  return uVar2;
}

