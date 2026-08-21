
long d2i_SCT_LIST(undefined8 param_1,long *param_2,long param_3)

{
  ASN1_OCTET_STRING *pAVar1;
  long lVar2;
  uchar *local_38;
  ASN1_OCTET_STRING *local_28;
  
  local_28 = (ASN1_STRING *)0x0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b032a0 with catch @ 00b032e0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b031cc with catch @ 00b032e4
                        */
  local_38 = (uchar *)*param_2;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b03234 with catch @ 00b032ec
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b031f0 with catch @ 00b032f0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b031e8 with catch @ 00b03300
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b03228 with catch @ 00b03304
                       catch(type#1 @ 00000000) { ... } // from try @ 00b03270 with catch @ 00b03304
                        */
  pAVar1 = d2i_ASN1_OCTET_STRING(&local_28,&local_38,param_3);
  if (pAVar1 == (ASN1_OCTET_STRING *)0x0) {
    lVar2 = 0;
  }
  else {
    local_38 = local_28->data;
                    /* try { // try from 00b03324 to 00c03327 has its CatchHandler @ 00b03330 */
    lVar2 = o2i_SCT_LIST(param_1,&local_38,(long)local_28->length);
                    /* try { // try from 00b03328 to 00c03333 has its CatchHandler @ 00b03178 */
    if (lVar2 != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b03324 with catch @ 00b03330
                        */
                    /* try { // try from 00b03334 to 00c03337 has its CatchHandler @ 00b03340 */
                    /* try { // try from 00b03338 to 00c03343 has its CatchHandler @ 00b03178 */
      *param_2 = *param_2 + param_3;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b03334 with catch @ 00b03340
                        */
    ASN1_OCTET_STRING_free(local_28);
  }
  return lVar2;
}

