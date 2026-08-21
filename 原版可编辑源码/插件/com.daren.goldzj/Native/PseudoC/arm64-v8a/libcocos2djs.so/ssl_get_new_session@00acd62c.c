
undefined8 ssl_get_new_session(SSL *param_1,int param_2)

{
  uchar *id;
  uint uVar1;
  int iVar2;
  SSL_CTX *ses;
  _func_3092 *p_Var3;
  _func_3094 *p_Var4;
  int iVar5;
  code *pcVar6;
  code *pcVar7;
  uint local_34;
  
  ses = (SSL_CTX *)SSL_SESSION_new();
  if (ses == (SSL_CTX *)0x0) {
    return 0;
  }
  p_Var3 = *(_func_3092 **)&(param_1[1].bbio)->references;
  if (p_Var3 == (_func_3092 *)0x0) {
    p_Var3 = (_func_3092 *)SSL_get_default_timeout(param_1);
  }
  ses->app_gen_cookie_cb = p_Var3;
  SSL_SESSION_free((SSL_SESSION *)param_1->ctx);
  param_1->ctx = (SSL_CTX *)0x0;
  if (param_2 == 0) {
    *(undefined4 *)&ses->session_cache_tail = 0;
  }
  else {
    iVar2 = param_1->version;
    if (iVar2 < 0xfefd) {
      iVar5 = 0x301;
                    /* catch() { ... } // from try @ 00acd580 with catch @ 00acd6ac */
      switch(iVar2) {
      case 0x300:
      case 0x302:
      case 0x303:
switchD_00acd6ac_caseD_300:
        iVar5 = iVar2;
        break;
      case 0x301:
        break;
      default:
        iVar5 = iVar2;
        if (iVar2 != 0x100) {
LAB_00acd850:
          iVar2 = 0x103;
          iVar5 = 0x14d;
          goto LAB_00acd8b4;
        }
      }
    }
    else {
      if (iVar2 == 0xfefd) goto switchD_00acd6ac_caseD_300;
      iVar5 = iVar2;
      if (iVar2 != 0xfeff) goto LAB_00acd850;
    }
    *(int *)&ses->method = iVar5;
    *(undefined4 *)&ses->session_cache_tail = 0x20;
    if (*(int *)((long)&param_1->next_proto_negotiated + 4) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00acd784 with catch @ 00acd790
                        */
      CRYPTO_THREAD_read_lock(param_1[6].session);
      CRYPTO_THREAD_read_lock(param_1[1].bbio[7].num_read);
      pcVar7 = *(code **)&param_1->debug;
      if (*(code **)&param_1->debug == (code *)0x0) {
        pcVar6 = *(code **)&param_1[1].bbio[3].flags;
        pcVar7 = (code *)&UNK_00acd8d8;
        if (pcVar6 != (code *)0x0) {
          pcVar7 = pcVar6;
        }
      }
      CRYPTO_THREAD_unlock(param_1[1].bbio[7].num_read);
      CRYPTO_THREAD_unlock(param_1[6].session);
      uVar1 = *(uint *)&ses->session_cache_tail;
      id = (uchar *)((long)&ses->session_cache_tail + 4);
      memset(id,0,(ulong)uVar1);
      local_34 = uVar1;
      iVar2 = (*pcVar7)(param_1,id,&local_34);
      if (iVar2 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00acd808 with catch @ 00acd86c
                        */
        iVar2 = 0x12d;
        iVar5 = 0x175;
        goto LAB_00acd8b4;
      }
                    /* try { // try from 00acd808 to 00bcd81b has its CatchHandler @ 00acd86c */
      if ((local_34 == 0) || (*(uint *)&ses->session_cache_tail < local_34)) {
        iVar2 = 0x12f;
        iVar5 = 0x180;
        goto LAB_00acd8b4;
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00acd838 with catch @ 00acd888
                        */
      *(uint *)&ses->session_cache_tail = local_34;
      iVar2 = SSL_has_matching_session_id(param_1,id,local_34);
      if (iVar2 != 0) {
        iVar2 = 0x12e;
        iVar5 = 0x188;
        goto LAB_00acd8b4;
      }
    }
    else {
      *(undefined4 *)&ses->session_cache_tail = 0;
    }
    if (param_1->tlsext_ecpointformatlist != (uchar *)0x0) {
      p_Var4 = (_func_3094 *)
               CRYPTO_strdup((char *)param_1->tlsext_ecpointformatlist,"ssl/ssl_sess.c",399);
      ses->info_callback = p_Var4;
      if (p_Var4 == (_func_3094 *)0x0) {
                    /* try { // try from 00acd838 to 00bcd83b has its CatchHandler @ 00acd888 */
        iVar2 = 0x44;
        iVar5 = 0x191;
        goto LAB_00acd8b4;
      }
    }
  }
  if (*(uint *)&param_1->info_callback < 0x21) {
    memcpy(&ses->get_session_cb,(void *)((long)&param_1->info_callback + 4),
           (ulong)*(uint *)&param_1->info_callback);
    *(undefined4 *)((long)&ses->remove_session_cb + 4) = *(undefined4 *)&param_1->info_callback;
    iVar2 = param_1->version;
    param_1->ctx = ses;
    ses->default_passwd_callback_userdata = (void *)0x0;
    *(int *)&ses->method = iVar2;
    if ((*(byte *)(*(long *)&param_1->read_ahead + 1) >> 1 & 1) != 0) {
                    /* try { // try from 00acd784 to 00bcd787 has its CatchHandler @ 00acd790 */
      ses->verify_mode = ses->verify_mode | 1;
    }
    return 1;
  }
  iVar2 = 0x44;
  iVar5 = 0x19b;
LAB_00acd8b4:
  ERR_put_error(0x14,0xb5,iVar2,"ssl/ssl_sess.c",iVar5);
                    /* try { // try from 00acd8bc to 00bcd8bf has its CatchHandler @ 00acd8f8 */
  SSL_SESSION_free((SSL_SESSION *)ses);
  return 0;
}

