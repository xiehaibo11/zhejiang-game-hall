
undefined4 lws_context_init_server_ssl(int *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  SSL_METHOD *meth;
  SSL_CTX *ssl;
  EC_KEY *key;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  undefined8 uVar8;
  uchar *sid_ctx;
  undefined1 auStack_368 [544];
  uchar *local_148;
  long local_140;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar1 = param_1[0x19];
  if ((uVar1 >> 0xc & 1) == 0) {
    *(undefined4 *)(param_2 + 0x1f8) = 0;
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return 0;
    }
    goto LAB_00aad9f0;
  }
  sid_ctx = *(uchar **)(param_2 + 0x150);
  if (*(long *)(param_1 + 0xc) != 0) {
    uVar1 = uVar1 | 0x1000000;
    param_1[0x19] = uVar1;
  }
  if (*param_1 != -1) {
    uVar7 = uVar1 >> 0x18 & 1;
    *(uint *)(param_2 + 0x1f8) = uVar7;
    if ((uVar1 >> 0x18 & 1) == 0) {
LAB_00aad738:
      pcVar6 = " Using non-SSL mode\n";
    }
    else {
      if (*(long *)(param_1 + 0x12) != 0) {
                    /* try { // try from 00aad71c to 00bad7af has its CatchHandler @ 00aad71c
                       catch() { ... } // from try @ 00aad71c with catch @ 00aad71c
                       catch() { ... } // from try @ 00aad7bc with catch @ 00aad71c */
        _lws_log(4," SSL ciphers: \'%s\'\n");
        uVar7 = *(uint *)(param_2 + 0x1f8);
      }
      if (uVar7 == 0) goto LAB_00aad738;
      pcVar6 = " Using SSL mode\n";
    }
    _lws_log(4,pcVar6);
  }
  memset(auStack_368,0,0x310);
  local_148 = sid_ctx;
  local_140 = param_2;
  meth = (SSL_METHOD *)TLS_server_method();
  if (meth == (SSL_METHOD *)0x0) {
    uVar4 = ERR_get_error();
    pcVar5 = ERR_error_string(uVar4,*(char **)(sid_ctx + 0x7b8));
    pcVar6 = "problem creating ssl method %lu: %s\n";
  }
  else {
    ssl = SSL_CTX_new(meth);
    *(SSL_CTX **)(param_2 + 0x1b0) = ssl;
    if (ssl != (SSL_CTX *)0x0) {
      SSL_CTX_set_ex_data(ssl,DAT_01d5449c,*(void **)(param_2 + 0x150));
      SSL_CTX_set_options(*(undefined8 *)(param_2 + 0x1b0),0x2000000);
      SSL_CTX_set_options(*(undefined8 *)(param_2 + 0x1b0),0x20000);
      SSL_CTX_set_options(*(undefined8 *)(param_2 + 0x1b0),0);
                    /* try { // try from 00aad7b0 to 00bad7bb has its CatchHandler @ 00aad8f4 */
      SSL_CTX_set_options(*(undefined8 *)(param_2 + 0x1b0),0x400000);
                    /* try { // try from 00aad7bc to 00bad90b has its CatchHandler @ 00aad71c */
      if (*(char **)(param_1 + 0x12) != (char *)0x0) {
        SSL_CTX_set_cipher_list(*(SSL_CTX **)(param_2 + 0x1b0),*(char **)(param_1 + 0x12));
      }
      uVar1 = param_1[0x19];
      if (((uVar1 ^ 0xffffffff) & 0x1002) == 0) {
        SSL_CTX_set_session_id_context(*(SSL_CTX **)(param_2 + 0x1b0),sid_ctx,8);
        SSL_CTX_set_verify(*(SSL_CTX **)(param_2 + 0x1b0),uVar1 >> 6 & 2 ^ 3,FUN_00aadaf0);
      }
      SSL_CTX_callback_ctrl(*(SSL_CTX **)(param_2 + 0x1b0),0x35,FUN_00aadb64);
      SSL_CTX_ctrl(*(SSL_CTX **)(param_2 + 0x1b0),0x36,0,sid_ctx);
      if ((*(char **)(param_1 + 0x10) != (char *)0x0) &&
         (iVar3 = SSL_CTX_load_verify_locations
                            (*(SSL_CTX **)(param_2 + 0x1b0),*(char **)(param_1 + 0x10),(char *)0x0),
         iVar3 == 0)) {
        _lws_log(1,"%s: SSL_CTX_load_verify_locations unhappy\n","lws_context_init_server_ssl");
      }
      if (*(int *)(param_2 + 0x1f8) != 0) {
        pcVar6 = "prime256v1";
        if (*(char **)(param_1 + 0x26) != (char *)0x0) {
          pcVar6 = *(char **)(param_1 + 0x26);
        }
        iVar3 = OBJ_sn2nid(pcVar6);
        if (iVar3 == 0) {
          pcVar5 = "SSL: Unknown curve name \'%s\'";
        }
        else {
          key = EC_KEY_new_by_curve_name(iVar3);
          if (key != (EC_KEY *)0x0) {
            SSL_CTX_ctrl(*(SSL_CTX **)(param_2 + 0x1b0),4,0,key);
            EC_KEY_free(key);
            SSL_CTX_set_options(*(undefined8 *)(param_2 + 0x1b0),0);
            _lws_log(4," SSL ECDH curve \'%s\'\n",pcVar6);
            (**(code **)(*(long *)(param_2 + 0x188) + 8))
                      (auStack_368,0x16,*(undefined8 *)(param_2 + 0x1b0),0,0);
            goto LAB_00aad8f0;
          }
          pcVar5 = "SSL: Unable to create curve \'%s\'";
        }
        _lws_log(1,pcVar5,pcVar6);
                    /* try { // try from 00aada1c to 00bada23 has its CatchHandler @ 00aadcb4 */
                    /* try { // try from 00aada24 to 00badaaf has its CatchHandler @ 00aad90c */
        if (*(long *)(lVar2 + 0x28) == local_58) {
          return 0xffffffff;
        }
        goto LAB_00aad9f0;
      }
LAB_00aad8f0:
                    /* catch() { ... } // from try @ 00aad7b0 with catch @ 00aad8f4 */
      if (((param_1[0x19] ^ 0xffffffffU) & 0x1008) == 0) {
        *(undefined4 *)(param_2 + 0x1fc) = 1;
      }
                    /* try { // try from 00aad90c to 00bada1b has its CatchHandler @ 00aad90c
                       catch() { ... } // from try @ 00aad90c with catch @ 00aad90c
                       catch() { ... } // from try @ 00aada24 with catch @ 00aad90c
                       catch() { ... } // from try @ 00aadab8 with catch @ 00aad90c
                       catch() { ... } // from try @ 00aadb44 with catch @ 00aad90c
                       catch() { ... } // from try @ 00aadbcc with catch @ 00aad90c
                       catch() { ... } // from try @ 00aadc34 with catch @ 00aad90c */
      if (*(long *)(param_1 + 0x38) != 0) {
        SSL_CTX_set_options(*(undefined8 *)(param_2 + 0x1b0));
      }
      if (*(long *)(param_1 + 0x3a) != 0) {
        SSL_CTX_clear_options(*(undefined8 *)(param_2 + 0x1b0));
      }
      if ((*(int *)(param_2 + 0x1f8) == 0) || (*(char **)(param_1 + 0xc) == (char *)0x0)) {
LAB_00aadab0:
                    /* try { // try from 00aadab0 to 00badab7 has its CatchHandler @ 00aadc94 */
                    /* try { // try from 00aadab8 to 00badb3b has its CatchHandler @ 00aad90c */
        if (*(long *)(lVar2 + 0x28) == local_58) {
          return 0;
        }
      }
      else {
        iVar3 = SSL_CTX_use_certificate_chain_file
                          (*(SSL_CTX **)(param_2 + 0x1b0),*(char **)(param_1 + 0xc));
        if (iVar3 != 1) {
          uVar4 = ERR_get_error();
          uVar8 = *(undefined8 *)(param_1 + 0xc);
          pcVar5 = ERR_error_string(uVar4,*(char **)(sid_ctx + 0x7b8));
          pcVar6 = "problem getting cert \'%s\' %lu: %s\n";
LAB_00aada4c:
          _lws_log(1,pcVar6,uVar8,uVar4,pcVar5);
          if (*(long *)(lVar2 + 0x28) == local_58) {
            return 1;
          }
          goto LAB_00aad9f0;
        }
        FUN_00aaca90(*(undefined8 *)(param_2 + 0x1b0),param_1);
        if (*(char **)(param_1 + 0xe) == (char *)0x0) {
          iVar3 = (**(code **)(*(long *)(param_2 + 0x188) + 8))
                            (auStack_368,0x25,*(undefined8 *)(param_2 + 0x1b0),0,0);
          if (iVar3 == 0) goto LAB_00aadaa4;
          pcVar6 = "ssl private key not set\n";
        }
        else {
          iVar3 = SSL_CTX_use_PrivateKey_file
                            (*(SSL_CTX **)(param_2 + 0x1b0),*(char **)(param_1 + 0xe),1);
          if (iVar3 != 1) {
            uVar4 = ERR_get_error();
            uVar8 = *(undefined8 *)(param_1 + 0xe);
            pcVar5 = ERR_error_string(uVar4,*(char **)(sid_ctx + 0x7b8));
            pcVar6 = "ssl problem getting key \'%s\' %lu: %s\n";
            goto LAB_00aada4c;
          }
LAB_00aadaa4:
          iVar3 = SSL_CTX_check_private_key(*(SSL_CTX **)(param_2 + 0x1b0));
          if (iVar3 != 0) goto LAB_00aadab0;
          pcVar6 = "Private SSL key doesn\'t match cert\n";
        }
        _lws_log(1,pcVar6);
        if (*(long *)(lVar2 + 0x28) == local_58) {
          return 1;
        }
      }
      goto LAB_00aad9f0;
    }
    uVar4 = ERR_get_error();
    pcVar5 = ERR_error_string(uVar4,*(char **)(sid_ctx + 0x7b8));
    pcVar6 = "problem creating ssl context %lu: %s\n";
  }
  _lws_log(1,pcVar6,uVar4,pcVar5);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return 1;
  }
LAB_00aad9f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

