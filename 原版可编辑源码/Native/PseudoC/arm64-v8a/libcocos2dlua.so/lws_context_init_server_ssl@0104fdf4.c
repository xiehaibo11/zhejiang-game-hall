
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
  
                    /* try { // try from 0104fe04 to 0114fe4b has its CatchHandler @ 0104fe04
                       catch() { ... } // from try @ 0104fe04 with catch @ 0104fe04
                       catch() { ... } // from try @ 0104fe88 with catch @ 0104fe04 */
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar1 = param_1[0x19];
  if ((uVar1 >> 0xc & 1) == 0) {
    *(undefined4 *)(param_2 + 0x1f8) = 0;
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return 0;
    }
    goto LAB_01050174;
  }
  sid_ctx = *(uchar **)(param_2 + 0x150);
  if (*(long *)(param_1 + 0xc) != 0) {
    uVar1 = uVar1 | 0x1000000;
    param_1[0x19] = uVar1;
  }
  if (*param_1 != -1) {
    uVar7 = uVar1 >> 0x18 & 1;
                    /* try { // try from 0104fe88 to 0114fee3 has its CatchHandler @ 0104fe04 */
    *(uint *)(param_2 + 0x1f8) = uVar7;
    if ((uVar1 >> 0x18 & 1) == 0) {
LAB_0104febc:
      pcVar6 = " Using non-SSL mode\n";
    }
    else {
      if (*(long *)(param_1 + 0x12) != 0) {
        _lws_log(4," SSL ciphers: \'%s\'\n");
        uVar7 = *(uint *)(param_2 + 0x1f8);
      }
      if (uVar7 == 0) goto LAB_0104febc;
      pcVar6 = " Using SSL mode\n";
    }
    _lws_log(4,pcVar6);
  }
                    /* catch() { ... } // from try @ 0104fe4c with catch @ 0104fed0 */
  memset(auStack_368,0,0x310);
  local_148 = sid_ctx;
  local_140 = param_2;
                    /* try { // try from 0104fee4 to 0114ff13 has its CatchHandler @ 0104fee4
                       catch() { ... } // from try @ 0104fee4 with catch @ 0104fee4
                       catch() { ... } // from try @ 0104ff58 with catch @ 0104fee4 */
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
      SSL_CTX_set_ex_data(ssl,DAT_01795f80,*(void **)(param_2 + 0x150));
                    /* try { // try from 0104ff14 to 0114ff33 has its CatchHandler @ 0104ffc4 */
      SSL_CTX_set_options(*(undefined8 *)(param_2 + 0x1b0),0x2000000);
      SSL_CTX_set_options(*(undefined8 *)(param_2 + 0x1b0),0x20000);
      SSL_CTX_set_options(*(undefined8 *)(param_2 + 0x1b0),0);
                    /* try { // try from 0104ff34 to 0114ff4b has its CatchHandler @ 0104ffc0 */
      SSL_CTX_set_options(*(undefined8 *)(param_2 + 0x1b0),0x400000);
      if (*(char **)(param_1 + 0x12) != (char *)0x0) {
        SSL_CTX_set_cipher_list(*(SSL_CTX **)(param_2 + 0x1b0),*(char **)(param_1 + 0x12));
      }
                    /* try { // try from 0104ff4c to 0114ff57 has its CatchHandler @ 0104ffa8 */
      uVar1 = param_1[0x19];
                    /* try { // try from 0104ff58 to 0114ffd7 has its CatchHandler @ 0104fee4 */
      if (((uVar1 ^ 0xffffffff) & 0x1002) == 0) {
        SSL_CTX_set_session_id_context(*(SSL_CTX **)(param_2 + 0x1b0),sid_ctx,8);
        SSL_CTX_set_verify(*(SSL_CTX **)(param_2 + 0x1b0),uVar1 >> 6 & 2 ^ 3,FUN_01050274);
      }
      SSL_CTX_callback_ctrl(*(SSL_CTX **)(param_2 + 0x1b0),0x35,FUN_010502e8);
                    /* catch() { ... } // from try @ 0104ff4c with catch @ 0104ffa8 */
      SSL_CTX_ctrl(*(SSL_CTX **)(param_2 + 0x1b0),0x36,0,sid_ctx);
                    /* catch() { ... } // from try @ 0104ff34 with catch @ 0104ffc0 */
                    /* catch() { ... } // from try @ 0104ff14 with catch @ 0104ffc4 */
      if ((*(char **)(param_1 + 0x10) != (char *)0x0) &&
         (iVar3 = SSL_CTX_load_verify_locations
                            (*(SSL_CTX **)(param_2 + 0x1b0),*(char **)(param_1 + 0x10),(char *)0x0),
         iVar3 == 0)) {
                    /* try { // try from 0104ffd8 to 01150013 has its CatchHandler @ 0104ffd8
                       catch() { ... } // from try @ 0104ffd8 with catch @ 0104ffd8
                       catch() { ... } // from try @ 01050030 with catch @ 0104ffd8 */
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
                    /* try { // try from 01050014 to 0115002f has its CatchHandler @ 0105009c */
          if (key != (EC_KEY *)0x0) {
            SSL_CTX_ctrl(*(SSL_CTX **)(param_2 + 0x1b0),4,0,key);
                    /* try { // try from 01050030 to 011500af has its CatchHandler @ 0104ffd8 */
            EC_KEY_free(key);
            SSL_CTX_set_options(*(undefined8 *)(param_2 + 0x1b0),0);
            _lws_log(4," SSL ECDH curve \'%s\'\n",pcVar6);
            (**(code **)(*(long *)(param_2 + 0x188) + 8))
                      (auStack_368,0x16,*(undefined8 *)(param_2 + 0x1b0),0,0);
            goto LAB_01050074;
          }
          pcVar5 = "SSL: Unable to create curve \'%s\'";
        }
        _lws_log(1,pcVar5,pcVar6);
        if (*(long *)(lVar2 + 0x28) == local_58) {
          return 0xffffffff;
        }
        goto LAB_01050174;
      }
LAB_01050074:
      if (((param_1[0x19] ^ 0xffffffffU) & 0x1008) == 0) {
        *(undefined4 *)(param_2 + 0x1fc) = 1;
      }
      if (*(long *)(param_1 + 0x38) != 0) {
        SSL_CTX_set_options(*(undefined8 *)(param_2 + 0x1b0));
      }
                    /* catch() { ... } // from try @ 01050014 with catch @ 0105009c */
      if (*(long *)(param_1 + 0x3a) != 0) {
        SSL_CTX_clear_options(*(undefined8 *)(param_2 + 0x1b0));
      }
      if ((*(int *)(param_2 + 0x1f8) == 0) || (*(char **)(param_1 + 0xc) == (char *)0x0)) {
LAB_01050234:
                    /* try { // try from 01050234 to 01150237 has its CatchHandler @ 010502c4 */
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
LAB_010501d0:
          _lws_log(1,pcVar6,uVar8,uVar4,pcVar5);
          if (*(long *)(lVar2 + 0x28) == local_58) {
            return 1;
          }
          goto LAB_01050174;
        }
        FUN_0104f214(*(undefined8 *)(param_2 + 0x1b0),param_1);
        if (*(char **)(param_1 + 0xe) == (char *)0x0) {
          iVar3 = (**(code **)(*(long *)(param_2 + 0x188) + 8))
                            (auStack_368,0x25,*(undefined8 *)(param_2 + 0x1b0),0,0);
          if (iVar3 == 0) goto LAB_01050228;
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
            goto LAB_010501d0;
          }
LAB_01050228:
          iVar3 = SSL_CTX_check_private_key(*(SSL_CTX **)(param_2 + 0x1b0));
          if (iVar3 != 0) goto LAB_01050234;
          pcVar6 = "Private SSL key doesn\'t match cert\n";
        }
        _lws_log(1,pcVar6);
        if (*(long *)(lVar2 + 0x28) == local_58) {
          return 1;
        }
      }
      goto LAB_01050174;
    }
    uVar4 = ERR_get_error();
    pcVar5 = ERR_error_string(uVar4,*(char **)(sid_ctx + 0x7b8));
    pcVar6 = "problem creating ssl context %lu: %s\n";
  }
  _lws_log(1,pcVar6,uVar4,pcVar5);
  if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0104fe4c to 0114fe87 has its CatchHandler @ 0104fed0 */
    return 1;
  }
LAB_01050174:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

