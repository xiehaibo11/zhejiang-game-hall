
long SSL_ctrl(SSL *ssl,int cmd,long larg,void *parg)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  int *piVar7;
  
  uVar6 = (uint)larg;
  switch(cmd) {
  case 0x10:
    *(void **)&ssl->hit = parg;
    uVar5 = 1;
    break;
  default:
                    /* WARNING: Could not recover jumptable at 0x00ad5cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar4 = (*ssl->method->ssl_ctrl)(ssl,cmd,larg,parg);
    return lVar4;
  case 0x21:
    uVar1 = *(uint *)&ssl->tlsext_hostname;
    *(uint *)&ssl->tlsext_hostname = uVar1 | uVar6;
    uVar5 = (ulong)uVar1 | larg & 0xffffffffU;
    break;
  case 0x28:
    uVar5 = (ulong)*(int *)&ssl[1].compress;
    break;
  case 0x29:
    uVar5 = (ulong)*(int *)&ssl[1].compress;
    *(uint *)&ssl[1].compress = uVar6;
    break;
  case 0x32:
    uVar5 = *(ulong *)&ssl->tlsext_status_expected;
    break;
  case 0x33:
    uVar5 = *(ulong *)&ssl->tlsext_status_expected;
    *(long *)&ssl->tlsext_status_expected = larg;
    break;
  case 0x34:
    if (0x3e00 < larg - 0x200U) goto LAB_00ad5e20;
    uVar1 = *(uint *)&ssl->tlsext_ocsp_exts;
    *(uint *)((long)&ssl->tlsext_ocsp_exts + 4) = uVar6;
    if (uVar1 <= uVar6) {
      return 1;
    }
    goto LAB_00ad5e08;
  case 0x4c:
    if (*(long *)&ssl->read_ahead != 0) {
      return (long)*(int *)(*(long *)&ssl->read_ahead + 0x3c4);
                    /* try { // try from 00ad5d2c to 00bd5d2f has its CatchHandler @ 00ad5db8 */
    }
    goto LAB_00ad5e20;
  case 0x4e:
                    /* try { // try from 00ad5d30 to 00bd5d3b has its CatchHandler @ 00ad5db4 */
    uVar6 = ~uVar6 & *(uint *)&ssl->tlsext_hostname;
    uVar5 = (ulong)uVar6;
                    /* try { // try from 00ad5d3c to 00bd5ddb has its CatchHandler @ 00ad5c38 */
    *(uint *)&ssl->tlsext_hostname = uVar6;
    break;
  case 99:
    uVar1 = *(uint *)(ssl->verify_callback + 0x1c);
    *(uint *)(ssl->verify_callback + 0x1c) = uVar1 | uVar6;
    uVar5 = (ulong)uVar1 | larg & 0xffffffffU;
    break;
  case 100:
    uVar6 = ~uVar6 & *(uint *)(ssl->verify_callback + 0x1c);
    uVar5 = (ulong)uVar6;
    *(uint *)(ssl->verify_callback + 0x1c) = uVar6;
    break;
  case 0x6e:
    if (parg == (void *)0x0) {
      return 2;
    }
    lVar4 = *(long *)(*(long *)&ssl->read_ahead + 0x290);
    if (lVar4 != 0) {
      *(long *)parg = lVar4;
      return (long)*(int *)(*(long *)&ssl->read_ahead + 0x298);
    }
    goto LAB_00ad5e20;
  case 0x7a:
    if (((ssl->ctx == (SSL_CTX *)0x0) || (iVar3 = SSL_in_init(ssl), iVar3 != 0)) ||
       (iVar3 = ossl_statem_get_in_handshake(ssl), iVar3 != 0)) {
                    /* catch() { ... } // from try @ 00ad5d30 with catch @ 00ad5db4 */
      uVar5 = 0xffffffffffffffff;
                    /* catch() { ... } // from try @ 00ad5d2c with catch @ 00ad5db8 */
    }
    else {
      uVar5 = (ulong)(uint)ssl->ctx->verify_mode & 1;
    }
    break;
  case 0x7b:
    uVar2 = **(undefined4 **)ssl->mode;
    piVar7 = (int *)((long)&ssl->tlsext_hostname + 4);
    goto LAB_00ad5de0;
  case 0x7c:
    uVar2 = **(undefined4 **)ssl->mode;
                    /* catch() { ... } // from try @ 00ad5e38 with catch @ 00ad5ddc */
    piVar7 = &ssl->servername_done;
LAB_00ad5de0:
    iVar3 = ssl_set_version_bound(uVar2,larg & 0xffffffff,piVar7);
    uVar5 = (ulong)iVar3;
    break;
  case 0x7d:
    if (larg == 0) {
      return 0;
    }
    if (*(uint *)((long)&ssl->tlsext_ocsp_exts + 4) < uVar6) {
      return 0;
    }
LAB_00ad5e08:
    *(uint *)&ssl->tlsext_ocsp_exts = uVar6;
    uVar5 = 1;
    break;
  case 0x7e:
    if (larg - 1U < 0x20) {
                    /* try { // try from 00ad5e38 to 00bd5ecb has its CatchHandler @ 00ad5ddc */
      *(uint *)&ssl->tlsext_ocsp_resp = uVar6;
      if (larg < 2) {
        return 1;
      }
      *(undefined4 *)&ssl[1].compress = 1;
      return 1;
    }
LAB_00ad5e20:
    uVar5 = 0;
  }
                    /* try { // try from 00ad5e2c to 00bd5e37 has its CatchHandler @ 00ad5ea8 */
  return uVar5;
}

