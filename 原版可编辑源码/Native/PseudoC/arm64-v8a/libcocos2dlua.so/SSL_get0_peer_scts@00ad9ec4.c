
undefined8 SSL_get0_peer_scts(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  OCSP_RESPONSE *resp;
  OCSP_BASICRESP *bs;
  OCSP_SINGLERESP *x;
  X509 *x_00;
  void *pvVar4;
  int idx;
  uchar *local_48;
  
                    /* try { // try from 00ad9ed8 to 00bd9f1f has its CatchHandler @ 00ad9ed8
                       catch() { ... } // from try @ 00ad9ed8 with catch @ 00ad9ed8
                       catch() { ... } // from try @ 00ad9f60 with catch @ 00ad9ed8 */
  if (*(int *)(param_1 + 0x25c) == 0) {
    if (*(uchar **)(param_1 + 0x250) == (uchar *)0x0) {
LAB_00ad9f30:
      if ((*(uchar **)(param_1 + 0x278) == (uchar *)0x0) || (*(int *)(param_1 + 0x280) == 0)) {
        bs = (OCSP_BASICRESP *)0x0;
        resp = (OCSP_RESPONSE *)0x0;
LAB_00ad9fe8:
        iVar1 = 0;
        pvVar4 = (void *)0x0;
      }
      else {
        local_48 = *(uchar **)(param_1 + 0x278);
                    /* try { // try from 00ad9f4c to 00bd9f5f has its CatchHandler @ 00ad9fac */
        resp = d2i_OCSP_RESPONSE((OCSP_RESPONSE **)0x0,&local_48,(long)*(int *)(param_1 + 0x280));
        if (resp == (OCSP_RESPONSE *)0x0) {
          bs = (OCSP_BASICRESP *)0x0;
          goto LAB_00ad9fe8;
        }
        bs = OCSP_response_get1_basic(resp);
                    /* try { // try from 00ad9f60 to 00bd9fcb has its CatchHandler @ 00ad9ed8 */
        if ((bs == (OCSP_BASICRESP *)0x0) || (iVar1 = OCSP_resp_count(bs), iVar1 < 1))
        goto LAB_00ad9fe8;
        idx = 0;
        pvVar4 = (void *)0x0;
        iVar1 = 0;
        do {
          x = OCSP_resp_get0(bs,idx);
          if (x != (OCSP_SINGLERESP *)0x0) {
            pvVar4 = OCSP_SINGLERESP_get1_ext_d2i(x,0x3ba,(int *)0x0,(int *)0x0);
                    /* catch() { ... } // from try @ 00ad9f4c with catch @ 00ad9fac */
                    /* catch() { ... } // from try @ 00ad9f20 with catch @ 00ad9fb0 */
            iVar1 = FUN_00ada534(param_1 + 0x248,pvVar4,3);
            if (iVar1 < 0) break;
          }
          idx = idx + 1;
                    /* try { // try from 00ad9fcc to 00bda013 has its CatchHandler @ 00ad9fcc
                       catch() { ... } // from try @ 00ad9fcc with catch @ 00ad9fcc
                       catch() { ... } // from try @ 00ada04c with catch @ 00ad9fcc */
          iVar2 = OCSP_resp_count(bs);
        } while (idx < iVar2);
      }
      SCT_LIST_free(pvVar4);
      OCSP_BASICRESP_free(bs);
      OCSP_RESPONSE_free(resp);
      if (-1 < iVar1) {
                    /* try { // try from 00ada014 to 00bda02b has its CatchHandler @ 00ada09c */
        if ((*(long *)(param_1 + 0x178) != 0) &&
           (x_00 = *(X509 **)(*(long *)(param_1 + 0x178) + 0x98), x_00 != (X509 *)0x0)) {
          pvVar4 = X509_get_ext_d2i(x_00,0x3b7,(int *)0x0,(int *)0x0);
                    /* try { // try from 00ada038 to 00bda04b has its CatchHandler @ 00ada098 */
          iVar1 = FUN_00ada534(param_1 + 0x248,pvVar4,2);
          SCT_LIST_free(pvVar4);
          if (iVar1 < 0) goto LAB_00ada058;
        }
                    /* try { // try from 00ada04c to 00bda0b7 has its CatchHandler @ 00ad9fcc */
        *(undefined4 *)(param_1 + 0x25c) = 1;
        goto LAB_00ad9ee8;
      }
    }
    else {
      local_48 = *(uchar **)(param_1 + 0x250);
      uVar3 = o2i_SCT_LIST(0,&local_48,*(undefined2 *)(param_1 + 600));
      iVar1 = FUN_00ada534(param_1 + 0x248,uVar3,1);
                    /* try { // try from 00ad9f20 to 00bd9f37 has its CatchHandler @ 00ad9fb0 */
      SCT_LIST_free(uVar3);
      if (-1 < iVar1) goto LAB_00ad9f30;
    }
LAB_00ada058:
    uVar3 = 0;
  }
  else {
LAB_00ad9ee8:
    uVar3 = *(undefined8 *)(param_1 + 0x248);
  }
  return uVar3;
}

