
undefined4 tls_prepare_client_certificate(SSL *param_1,int param_2)

{
  int iVar1;
  stack_st_X509_NAME *ca_dn;
  _func_3151 *p_Var2;
  ulong uVar3;
  long *plVar4;
  ENGINE *e;
  EVP_PKEY *local_38;
  X509 *local_28;
  
  local_28 = (X509 *)0x0;
                    /* try { // try from 00ad313c to 00bd32a7 has its CatchHandler @ 00ad313c
                       catch() { ... } // from try @ 00ad313c with catch @ 00ad313c
                       catch() { ... } // from try @ 00ad32b0 with catch @ 00ad313c */
  local_38 = (EVP_PKEY *)0x0;
  if (param_2 != 4) {
    if (param_2 != 3) {
      return 0;
    }
    p_Var2 = param_1->verify_callback;
    if (*(code **)(p_Var2 + 0x178) != (code *)0x0) {
      iVar1 = (**(code **)(p_Var2 + 0x178))(param_1,*(undefined8 *)(p_Var2 + 0x180));
      if (iVar1 < 0) {
        param_1->rwstate = 4;
        return 3;
      }
      if (iVar1 == 0) goto LAB_00ad33d0;
      p_Var2 = param_1->verify_callback;
      param_1->rwstate = 1;
    }
    if ((((p_Var2 != (_func_3151 *)0x0) && (plVar4 = *(long **)p_Var2, *plVar4 != 0)) &&
        (plVar4[1] != 0)) &&
       ((((byte)param_1->method->get_timeout[0x68] >> 1 & 1) == 0 ||
        (*(long *)(*(long *)&param_1->read_ahead +
                   ((ulong)((long)plVar4 - (long)(p_Var2 + 0x20)) >> 3) * 0x6666666666666668 + 0x2d8
                  ) != 0)))) {
      if ((*(uint *)(p_Var2 + 0x1c) & 0x30001) == 0) {
        return 2;
      }
      iVar1 = tls1_check_chain(param_1,0,0,0,0xfffffffe);
      if (iVar1 != 0) {
        return 2;
      }
    }
  }
  uVar3 = param_1->mode;
  e = *(ENGINE **)(uVar3 + 0x1b8);
  if (e == (ENGINE *)0x0) {
LAB_00ad3254:
    if (*(code **)(uVar3 + 0xb8) != (code *)0x0) {
      iVar1 = (**(code **)(uVar3 + 0xb8))(param_1,&local_28,&local_38);
      goto joined_r0x00ad3274;
    }
    iVar1 = 0;
  }
  else {
    ca_dn = SSL_get_client_CA_list(param_1);
    iVar1 = ENGINE_load_ssl_client_cert
                      (e,param_1,ca_dn,&local_28,&local_38,(stack_st_X509 **)0x0,(UI_METHOD *)0x0,
                       (void *)0x0);
    if (iVar1 == 0) {
      uVar3 = param_1->mode;
      goto LAB_00ad3254;
    }
joined_r0x00ad3274:
    if (iVar1 < 0) {
      param_1->rwstate = 4;
      return 4;
    }
  }
  param_1->rwstate = 1;
                    /* try { // try from 00ad32a8 to 00bd32af has its CatchHandler @ 00ad3374 */
  if (((iVar1 == 1) && (local_38 != (EVP_PKEY *)0x0)) && (local_28 != (X509 *)0x0)) {
                    /* try { // try from 00ad32b0 to 00bd3387 has its CatchHandler @ 00ad313c */
    iVar1 = SSL_use_certificate(param_1,local_28);
    if ((iVar1 == 0) || (iVar1 = SSL_use_PrivateKey(param_1,local_38), iVar1 == 0)) {
LAB_00ad32f4:
      iVar1 = 0;
    }
    else {
      iVar1 = 1;
    }
  }
  else if (iVar1 == 1) {
    ERR_put_error(0x14,0x168,0x6a,"ssl/statem/statem_clnt.c",0xac0);
    goto LAB_00ad32f4;
  }
  X509_free(local_28);
  EVP_PKEY_free(local_38);
                    /* catch() { ... } // from try @ 00ad32a8 with catch @ 00ad3374 */
  if (((((iVar1 != 0) && (p_Var2 = param_1->verify_callback, p_Var2 != (_func_3151 *)0x0)) &&
       (plVar4 = *(long **)p_Var2, *plVar4 != 0)) && (plVar4[1] != 0)) &&
     (((((byte)param_1->method->get_timeout[0x68] >> 1 & 1) == 0 ||
       (*(long *)(*(long *)&param_1->read_ahead +
                  ((ulong)((long)plVar4 - (long)(p_Var2 + 0x20)) >> 3) * 0x6666666666666668 + 0x2d8)
        != 0)) &&
      (((*(uint *)(p_Var2 + 0x1c) & 0x30001) == 0 ||
       (iVar1 = tls1_check_chain(param_1,0,0,0,0xfffffffe), iVar1 != 0)))))) {
    return 2;
  }
  if (param_1->version == 0x300) {
    *(undefined4 *)(*(long *)&param_1->read_ahead + 0x238) = 0;
    ssl3_send_alert(param_1,1,0x29);
    return 2;
  }
  *(undefined4 *)(*(long *)&param_1->read_ahead + 0x238) = 2;
  iVar1 = ssl3_digest_cached_records(param_1,0);
  if (iVar1 != 0) {
    return 2;
  }
LAB_00ad33d0:
  ssl3_send_alert(param_1,2,0x50);
  ossl_statem_set_error(param_1);
  return 0;
}

