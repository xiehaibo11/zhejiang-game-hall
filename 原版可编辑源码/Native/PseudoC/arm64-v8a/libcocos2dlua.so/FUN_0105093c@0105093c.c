
undefined4 FUN_0105093c(long param_1,long param_2)

{
  char *file;
  char *CAfile;
  long lVar1;
  int iVar2;
  SSL_METHOD *meth;
  SSL_CTX *pSVar3;
  ulong e;
  char *pcVar4;
  char *pcVar5;
  undefined1 auStack_368 [544];
  undefined8 local_148;
  long local_140;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 01050964 to 0115096b has its CatchHandler @ 010539d8 */
                    /* try { // try from 0105096c to 0115097b has its CatchHandler @ 010539d4 */
  if ((*(byte *)(param_2 + 0x1da) >> 6 & 1) == 0) {
    pcVar5 = *(char **)(param_1 + 0x48);
                    /* try { // try from 01050984 to 011509ab has its CatchHandler @ 01053a44 */
    if (*(char **)(param_1 + 0x130) != (char *)0x0) {
      pcVar5 = *(char **)(param_1 + 0x130);
    }
    pcVar4 = *(char **)(param_1 + 0x30);
    if (*(char **)(param_1 + 0x118) != (char *)0x0) {
      pcVar4 = *(char **)(param_1 + 0x118);
    }
    file = *(char **)(param_1 + 0x38);
    if (*(char **)(param_1 + 0x120) != (char *)0x0) {
      file = *(char **)(param_1 + 0x120);
    }
    CAfile = *(char **)(param_1 + 0x40);
    if (*(char **)(param_1 + 0x128) != (char *)0x0) {
      CAfile = *(char **)(param_1 + 0x128);
    }
    if (((*(byte *)(param_1 + 0x65) >> 4 & 1) != 0) && (*(long *)(param_2 + 0x1b8) == 0)) {
      if (*(long *)(param_1 + 0x80) != 0) {
                    /* try { // try from 010509f4 to 011509ff has its CatchHandler @ 01053a00 */
        *(long *)(param_2 + 0x1b8) = *(long *)(param_1 + 0x80);
        *(byte *)(param_2 + 0x200) = *(byte *)(param_2 + 0x200) | 1;
        if (*(long *)(lVar1 + 0x28) == local_58) {
          return 0;
        }
        goto LAB_01050a14;
      }
      meth = (SSL_METHOD *)TLS_client_method();
      if (meth == (SSL_METHOD *)0x0) {
        e = ERR_get_error();
        pcVar4 = ERR_error_string(e,*(char **)(*(long *)(param_2 + 0x150) + 0x7b8));
        pcVar5 = "problem creating ssl method %lu: %s\n";
      }
      else {
        pSVar3 = SSL_CTX_new(meth);
        *(SSL_CTX **)(param_2 + 0x1b8) = pSVar3;
        if (pSVar3 != (SSL_CTX *)0x0) {
          _lws_log(4,"created client ssl context for %s\n",*(undefined8 *)(param_2 + 0x170));
          SSL_CTX_set_options(*(undefined8 *)(param_2 + 0x1b8),0x20000);
          SSL_CTX_set_options(*(undefined8 *)(param_2 + 0x1b8),0x400000);
          if (pcVar5 != (char *)0x0) {
            SSL_CTX_set_cipher_list(*(SSL_CTX **)(param_2 + 0x1b8),pcVar5);
          }
          if ((*(byte *)(param_1 + 100) >> 6 & 1) == 0) {
            SSL_CTX_set_default_verify_paths(*(SSL_CTX **)(param_2 + 0x1b8));
          }
          if (CAfile == (char *)0x0) {
            iVar2 = SSL_CTX_load_verify_locations
                              (*(SSL_CTX **)(param_2 + 0x1b8),(char *)0x0,"../share");
            if (iVar2 == 0) {
              _lws_log(1,
                       "Unable to load SSL Client certs from %s (set by LWS_OPENSSL_CLIENT_CERTS) -- client ssl isn\'t going to work\n"
                       ,"../share");
            }
LAB_01050b44:
                    /* try { // try from 01050b44 to 01150b57 has its CatchHandler @ 01053694 */
            if (pcVar4 == (char *)0x0) goto LAB_01050b8c;
LAB_01050b48:
                    /* try { // try from 01050b5c to 01150b83 has its CatchHandler @ 0105384c */
            _lws_log(4,"%s: doing cert filepath\n","lws_context_init_client_ssl");
            iVar2 = SSL_CTX_use_certificate_chain_file(*(SSL_CTX **)(param_2 + 0x1b8),pcVar4);
            if (0 < iVar2) {
              _lws_log(4,"Loaded client cert %s\n",pcVar4);
              goto LAB_01050b8c;
            }
                    /* try { // try from 01050c48 to 01150c5b has its CatchHandler @ 01053824 */
                    /* try { // try from 01050c60 to 01150c83 has its CatchHandler @ 0105394c */
            _lws_log(1,"problem %d getting cert \'%s\'\n",iVar2,pcVar4);
LAB_01050c64:
            FUN_0104f1b8();
            if (*(long *)(lVar1 + 0x28) == local_58) {
              return 1;
            }
            goto LAB_01050a14;
          }
          iVar2 = SSL_CTX_load_verify_locations(*(SSL_CTX **)(param_2 + 0x1b8),CAfile,(char *)0x0);
          if (iVar2 != 0) goto LAB_01050b44;
          _lws_log(1,
                   "Unable to load SSL Client certs file from %s -- client ssl isn\'t going to work\n"
                   ,*(undefined8 *)(param_1 + 0x128));
          FUN_0104f1b8();
          if (pcVar4 != (char *)0x0) goto LAB_01050b48;
LAB_01050b8c:
          if (file != (char *)0x0) {
            _lws_log(4,"%s: doing private key filepath\n","lws_context_init_client_ssl");
            FUN_0104f214(*(undefined8 *)(param_2 + 0x1b8),param_1);
            iVar2 = SSL_CTX_use_PrivateKey_file(*(SSL_CTX **)(param_2 + 0x1b8),file,1);
            if (iVar2 != 1) {
              _lws_log(1,"use_PrivateKey_file \'%s\'\n",file);
              goto LAB_01050c64;
            }
                    /* try { // try from 01050bd4 to 01150bdb has its CatchHandler @ 010534a4 */
                    /* try { // try from 01050bdc to 01150c47 has its CatchHandler @ 01050340 */
            _lws_log(4,"Loaded client cert private key %s\n",file);
            iVar2 = SSL_CTX_check_private_key(*(SSL_CTX **)(param_2 + 0x1b8));
            if (iVar2 == 0) {
              _lws_log(1,"Private SSL key doesn\'t match cert\n");
                    /* try { // try from 01050c98 to 01150cab has its CatchHandler @ 01053820 */
              if (*(long *)(lVar1 + 0x28) == local_58) {
                return 1;
              }
              goto LAB_01050a14;
            }
          }
          memset(auStack_368,0,0x310);
          local_148 = *(undefined8 *)(param_2 + 0x150);
          local_140 = param_2;
          (**(code **)(*(long *)(param_2 + 0x188) + 8))
                    (auStack_368,0x15,*(undefined8 *)(param_2 + 0x1b8),0,0);
          goto LAB_010509b4;
        }
        e = ERR_get_error();
        pcVar4 = ERR_error_string(e,*(char **)(*(long *)(param_2 + 0x150) + 0x7b8));
        pcVar5 = "problem creating ssl context %lu: %s\n";
      }
                    /* try { // try from 01050af4 to 01150b07 has its CatchHandler @ 01053698 */
      _lws_log(1,pcVar5,e,pcVar4);
                    /* try { // try from 01050b0c to 01150b33 has its CatchHandler @ 01053850 */
      if (*(long *)(lVar1 + 0x28) == local_58) {
        return 1;
      }
      goto LAB_01050a14;
    }
  }
LAB_010509b4:
                    /* try { // try from 010509c4 to 011509cf has its CatchHandler @ 01053a8c */
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 010509dc to 011509e7 has its CatchHandler @ 01053a08 */
    return 0;
  }
LAB_01050a14:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

