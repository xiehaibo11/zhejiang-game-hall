
int ssl_validate_ct(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int line;
  long lVar4;
  
                    /* try { // try from 00ada12c to 00bda133 has its CatchHandler @ 00ada170 */
  if (*(long *)(param_1 + 0x178) == 0) {
    return 1;
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x178) + 0x98);
                    /* try { // try from 00ada134 to 00bda18b has its CatchHandler @ 00ada0b8 */
  if (lVar4 == 0) {
    return 1;
  }
  if (*(long *)(param_1 + 0x238) == 0) {
    return 1;
  }
  if (*(long *)(param_1 + 0x1c8) != 0) {
    return 1;
  }
  if (*(long *)(param_1 + 0x1c0) == 0) {
    return 1;
  }
  iVar1 = OPENSSL_sk_num();
                    /* catch() { ... } // from try @ 00ada12c with catch @ 00ada170 */
  if (iVar1 < 2) {
    return 1;
  }
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 200));
  if (((0 < iVar1) && (*(byte **)(param_1 + 0xd8) != (byte *)0x0)) &&
     ((**(byte **)(param_1 + 0xd8) & 0xfe) == 2)) {
    return 1;
  }
  lVar2 = CT_POLICY_EVAL_CTX_new();
  if (lVar2 == 0) {
    iVar1 = 0x41;
    line = 0x104a;
  }
  else {
    uVar3 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x1c0),1);
    CT_POLICY_EVAL_CTX_set1_cert(lVar2,lVar4);
    CT_POLICY_EVAL_CTX_set1_issuer(lVar2,uVar3);
    CT_POLICY_EVAL_CTX_set_shared_CTLOG_STORE
              (lVar2,*(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x188));
    uVar3 = SSL_get0_peer_scts(param_1);
    iVar1 = SCT_LIST_validate(uVar3,lVar2);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(param_1 + 0x238))(lVar2,uVar3,*(undefined8 *)(param_1 + 0x240));
      if (0 < iVar1) {
        CT_POLICY_EVAL_CTX_free(lVar2);
        return iVar1;
      }
      goto LAB_00ada260;
    }
    iVar1 = 0xd0;
    line = 0x1064;
  }
  ERR_put_error(0x14,400,iVar1,"ssl/ssl_lib.c",line);
LAB_00ada260:
  CT_POLICY_EVAL_CTX_free(lVar2);
  *(undefined8 *)(param_1 + 0x1c8) = 0x47;
  return 0;
}

