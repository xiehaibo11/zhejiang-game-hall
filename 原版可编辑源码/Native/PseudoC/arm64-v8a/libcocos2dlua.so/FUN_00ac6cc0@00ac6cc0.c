
ulong FUN_00ac6cc0(SSL *param_1,int param_2,ulong param_3,SSL *param_4)

{
  ulong uVar1;
  int iVar2;
  undefined8 *puVar3;
  BIO *append;
  undefined8 *puVar4;
  undefined8 extraout_x0;
  long lVar5;
  BIO *b;
  time_t tVar6;
  int type;
  ulong uVar7;
  SSL *pSVar8;
  undefined8 uVar9;
  
  uVar7 = param_3;
  puVar3 = (undefined8 *)BIO_get_data();
  iVar2 = (int)uVar7;
  append = BIO_next((BIO *)param_1);
  pSVar8 = (SSL *)*puVar3;
  if ((param_2 != 0x6d) && (pSVar8 == (SSL *)0x0)) {
    return 0;
  }
                    /* try { // try from 00ac6d28 to 00bc6d3f has its CatchHandler @ 00ac6e8c */
  uVar7 = 0;
  switch(param_2) {
  case 1:
    SSL_shutdown(pSVar8);
    if ((_func_3058 *)pSVar8->handshake_func == pSVar8->method->ssl_read) {
      SSL_set_connect_state(pSVar8);
    }
    else if (pSVar8->handshake_func == (_func_3149 *)pSVar8->method->ssl_connect) {
      SSL_set_accept_state(pSVar8);
    }
    iVar2 = SSL_clear(pSVar8);
    if (iVar2 == 0) {
      return 0;
    }
    if (append != (BIO *)0x0) {
      param_2 = 1;
      goto LAB_00ac7084;
    }
    append = pSVar8->rbio;
    if (append != (BIO *)0x0) {
      param_2 = 1;
      goto LAB_00ac7084;
    }
    goto LAB_00ac7038;
  default:
    append = pSVar8->rbio;
    goto LAB_00ac7084;
  case 3:
  case 0xe:
    break;
  case 6:
    if ((append != (BIO *)0x0) && (append != pSVar8->rbio)) {
      BIO_up_ref(append);
      SSL_set_bio(pSVar8,append,append);
    }
    goto LAB_00ac7038;
  case 7:
    if (param_4 == param_1) {
      SSL_set_bio(pSVar8,(BIO *)0x0,(BIO *)0x0);
    }
    goto LAB_00ac7038;
  case 8:
    iVar2 = BIO_get_shutdown(param_1);
    uVar7 = (ulong)iVar2;
    break;
  case 9:
    BIO_set_shutdown(param_1,param_3 & 0xffffffff);
    goto LAB_00ac7038;
  case 10:
    iVar2 = SSL_pending(pSVar8);
    if (iVar2 == 0) {
      lVar5 = BIO_ctrl(pSVar8->rbio,10,0,(void *)0x0);
      uVar7 = (ulong)(int)lVar5;
    }
    else {
      uVar7 = (ulong)iVar2;
    }
    break;
  case 0xb:
    BIO_clear_flags((BIO *)param_1,0xf);
    uVar7 = BIO_ctrl(pSVar8->wbio,0xb,param_3,param_4);
    BIO_copy_next_retry((BIO *)param_1);
    return uVar7;
  case 0xc:
    puVar4 = (undefined8 *)BIO_get_data(param_4);
    SSL_free((SSL *)*puVar4);
    pSVar8 = SSL_dup(pSVar8);
    *puVar4 = pSVar8;
    uVar7 = (ulong)(pSVar8 != (SSL *)0x0);
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
    uVar9 = puVar3[2];
    puVar4[3] = puVar3[3];
    puVar4[2] = uVar9;
    uVar9 = puVar3[4];
    puVar4[5] = puVar3[5];
    puVar4[4] = uVar9;
    break;
  case 0xd:
    append = pSVar8->wbio;
    param_2 = 0xd;
    goto LAB_00ac7084;
  case 0xf:
    SSL_get_info_callback(pSVar8,type,iVar2);
    param_4->version = (int)extraout_x0;
    param_4->type = (int)((ulong)extraout_x0 >> 0x20);
    goto LAB_00ac7038;
  case 0x65:
    BIO_clear_flags((BIO *)param_1,0xf);
    BIO_set_retry_reason(param_1,0);
    iVar2 = SSL_do_handshake(pSVar8);
    uVar7 = (ulong)iVar2;
    iVar2 = SSL_get_error(pSVar8,iVar2);
    switch(iVar2) {
    case 2:
      iVar2 = 9;
      break;
    case 3:
      iVar2 = 10;
      break;
    case 4:
      BIO_set_flags((BIO *)param_1,0xc);
      iVar2 = 1;
      goto LAB_00ac70e0;
    default:
      goto switchD_00ac6ed8_caseD_5;
    case 7:
      BIO_set_flags((BIO *)param_1,0xc);
      iVar2 = BIO_get_retry_reason(append);
LAB_00ac70e0:
      BIO_set_retry_reason(param_1,iVar2);
      goto switchD_00ac6ed8_caseD_5;
    }
    BIO_set_flags((BIO *)param_1,iVar2);
    break;
  case 0x69:
    append = pSVar8->rbio;
    param_2 = 0x69;
LAB_00ac7084:
    uVar7 = BIO_ctrl(append,param_2,param_3,param_4);
    return uVar7;
  case 0x6d:
    if (pSVar8 != (SSL *)0x0) {
      FUN_00ac7170(param_1);
      lVar5 = CRYPTO_zalloc(0x30,"ssl/bio_ssl.c",0x37);
      if (lVar5 == 0) {
        ERR_put_error(0x20,0x76,0x41,"ssl/bio_ssl.c",0x3a);
        return 0;
      }
      BIO_set_init(param_1,0);
      BIO_set_data(param_1,lVar5);
      BIO_clear_flags((BIO *)param_1,-1);
    }
    BIO_set_shutdown(param_1,param_3 & 0xffffffff);
    *puVar3 = param_4;
    b = SSL_get_rbio(param_4);
    if (b != (BIO *)0x0) {
      if (append != (BIO *)0x0) {
        BIO_push(b,append);
      }
      BIO_set_next(param_1,b);
      BIO_up_ref(b);
    }
    uVar7 = 1;
    BIO_set_init(param_1,1);
    break;
  case 0x6e:
    if (param_4 == (SSL *)0x0) {
      return 0;
    }
    *(SSL **)param_4 = pSVar8;
    goto LAB_00ac7038;
  case 0x77:
    if (param_3 == 0) {
      SSL_set_accept_state(pSVar8);
    }
    else {
      SSL_set_connect_state(pSVar8);
    }
LAB_00ac7038:
    uVar7 = 1;
    break;
  case 0x7d:
    uVar7 = puVar3[2];
    if (0x1ff < (long)param_3) {
      puVar3[2] = param_3;
    }
    break;
  case 0x7e:
    uVar7 = (ulong)*(int *)(puVar3 + 1);
    break;
  case 0x7f:
    uVar7 = puVar3[4];
    uVar1 = 5;
    if (0x3b < (long)param_3) {
      uVar1 = param_3;
    }
    puVar3[4] = uVar1;
    tVar6 = time((time_t *)0x0);
    puVar3[5] = tVar6;
  }
switchD_00ac6ed8_caseD_5:
  return uVar7;
}

