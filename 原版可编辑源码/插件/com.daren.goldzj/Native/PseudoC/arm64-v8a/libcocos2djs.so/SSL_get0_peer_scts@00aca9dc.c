
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
  
  if (*(int *)(param_1 + 0x25c) == 0) {
    if (*(uchar **)(param_1 + 0x250) == (uchar *)0x0) {
LAB_00acaa48:
      if ((*(uchar **)(param_1 + 0x278) == (uchar *)0x0) || (*(int *)(param_1 + 0x280) == 0)) {
        bs = (OCSP_BASICRESP *)0x0;
        resp = (OCSP_RESPONSE *)0x0;
LAB_00acab00:
        iVar1 = 0;
        pvVar4 = (void *)0x0;
      }
      else {
                    /* try { // try from 00acaa58 to 00bcaa63 has its CatchHandler @ 00acabcc */
        local_48 = *(uchar **)(param_1 + 0x278);
        resp = d2i_OCSP_RESPONSE((OCSP_RESPONSE **)0x0,&local_48,(long)*(int *)(param_1 + 0x280));
        if (resp == (OCSP_RESPONSE *)0x0) {
          bs = (OCSP_BASICRESP *)0x0;
          goto LAB_00acab00;
        }
        bs = OCSP_response_get1_basic(resp);
                    /* try { // try from 00acaa78 to 00bcaaa3 has its CatchHandler @ 00acac0c */
        if ((bs == (OCSP_BASICRESP *)0x0) || (iVar1 = OCSP_resp_count(bs), iVar1 < 1))
        goto LAB_00acab00;
        idx = 0;
        pvVar4 = (void *)0x0;
        iVar1 = 0;
        do {
          x = OCSP_resp_get0(bs,idx);
          if (x != (OCSP_SINGLERESP *)0x0) {
            pvVar4 = OCSP_SINGLERESP_get1_ext_d2i(x,0x3ba,(int *)0x0,(int *)0x0);
            iVar1 = FUN_00acb04c(param_1 + 0x248,pvVar4,3);
            if (iVar1 < 0) break;
          }
          idx = idx + 1;
          iVar2 = OCSP_resp_count(bs);
        } while (idx < iVar2);
      }
      SCT_LIST_free(pvVar4);
      OCSP_BASICRESP_free(bs);
      OCSP_RESPONSE_free(resp);
      if (-1 < iVar1) {
        if ((*(long *)(param_1 + 0x178) != 0) &&
           (x_00 = *(X509 **)(*(long *)(param_1 + 0x178) + 0x98), x_00 != (X509 *)0x0)) {
                    /* try { // try from 00acab30 to 00bcab37 has its CatchHandler @ 00acabc0 */
          pvVar4 = X509_get_ext_d2i(x_00,0x3b7,(int *)0x0,(int *)0x0);
          iVar1 = FUN_00acb04c(param_1 + 0x248,pvVar4,2);
                    /* try { // try from 00acab5c to 00bcab5f has its CatchHandler @ 00acaca4 */
          SCT_LIST_free(pvVar4);
                    /* try { // try from 00acab60 to 00bcac6f has its CatchHandler @ 00aca884 */
          if (iVar1 < 0) goto LAB_00acab70;
        }
        *(undefined4 *)(param_1 + 0x25c) = 1;
        goto LAB_00acaa00;
      }
    }
    else {
      local_48 = *(uchar **)(param_1 + 0x250);
      uVar3 = o2i_SCT_LIST(0,&local_48,*(undefined2 *)(param_1 + 600));
                    /* try { // try from 00acaa28 to 00bcaa2f has its CatchHandler @ 00acabec */
      iVar1 = FUN_00acb04c(param_1 + 0x248,uVar3,1);
      SCT_LIST_free(uVar3);
      if (-1 < iVar1) goto LAB_00acaa48;
    }
LAB_00acab70:
    uVar3 = 0;
  }
  else {
LAB_00acaa00:
    uVar3 = *(undefined8 *)(param_1 + 0x248);
  }
  return uVar3;
}

