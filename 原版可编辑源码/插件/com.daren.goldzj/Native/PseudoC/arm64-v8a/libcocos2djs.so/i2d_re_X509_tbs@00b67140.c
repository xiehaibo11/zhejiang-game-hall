
int i2d_re_X509_tbs(ASN1_VALUE *param_1,uchar **param_2)

{
  int iVar1;
  
                    /* catch() { ... } // from try @ 00b6706c with catch @ 00b67148 */
  *(undefined4 *)(param_1 + 0x80) = 1;
  iVar1 = ASN1_item_i2d(param_1,param_2,(ASN1_ITEM *)X509_CINF_it);
  return iVar1;
}

