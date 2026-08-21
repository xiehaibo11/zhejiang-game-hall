
void lws_server_socket_service_ssl(void *param_1,int param_2)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  SSL *pSVar7;
  BIO *pBVar8;
  ssize_t sVar9;
  int *piVar10;
  SSL_CTX *pSVar11;
  ulong uVar12;
  char *pcVar13;
  undefined1 uVar14;
  long lVar15;
  long lVar16;
  SSL_CTX *pSVar17;
  char acStack_158 [256];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((*(int *)(*(long *)((long)param_1 + 0x228) + 0x1f8) == 0) ||
     (3 < *(byte *)((long)param_1 + 0x2fe) - 6)) {
    uVar5 = 0;
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return;
    }
    goto LAB_00aad210;
  }
  lVar15 = *(long *)((long)param_1 + 0x220);
  bVar1 = *(byte *)((long)param_1 + 0x304);
  switch((uint)*(byte *)((long)param_1 + 0x2fe)) {
  default:
switchD_00aad1d8_caseD_6:
    iVar3 = FUN_00aa3be0(param_1,4,0);
    if (iVar3 == 0) {
      if (*(int *)(*(long *)((long)param_1 + 0x228) + 0x1fc) == 0) {
LAB_00aad4c0:
        puVar6 = (undefined4 *)__errno();
        *puVar6 = 0;
        iVar3 = SSL_accept(*(SSL **)((long)param_1 + 0x2b0));
                    /* catch() { ... } // from try @ 00aad410 with catch @ 00aad4d4 */
                    /* catch() { ... } // from try @ 00aad458 with catch @ 00aad4d8 */
        if (iVar3 == 1) {
LAB_00aad4dc:
          lVar16 = *(long *)(lVar15 + 0x830);
          goto joined_r0x00aad4e0;
        }
        if (*(SSL **)((long)param_1 + 0x2b0) == (SSL *)0x0) {
          uVar4 = 99;
          iVar3 = SSL_want((SSL *)0x0);
          if (iVar3 == 3) goto LAB_00aad588;
LAB_00aad5a0:
          if ((uVar4 != 3) && (iVar3 = SSL_want(*(SSL **)((long)param_1 + 0x2b0)), iVar3 != 2))
          goto LAB_00aad530;
                    /* try { // try from 00aad5c4 to 00bad5cb has its CatchHandler @ 00aad634 */
          uVar5 = FUN_00aa3be0(param_1,0,4);
          iVar3 = (int)uVar5;
        }
        else {
          uVar4 = SSL_get_error(*(SSL **)((long)param_1 + 0x2b0),iVar3);
          if ((uVar4 | 4) == 5) {
LAB_00aad530:
            *(uint *)((long)param_1 + 0x2f4) = *(uint *)((long)param_1 + 0x2f4) | 0x40;
            uVar12 = ERR_get_error();
            while (uVar12 != 0) {
                    /* try { // try from 00aad54c to 00bad54f has its CatchHandler @ 00aad630 */
              ERR_error_string_n(uVar12,acStack_158,0x100);
              uVar12 = ERR_get_error();
            }
            break;
          }
          if ((uVar4 != 2) && (iVar3 = SSL_want(*(SSL **)((long)param_1 + 0x2b0)), iVar3 != 3))
          goto LAB_00aad5a0;
LAB_00aad588:
          uVar5 = FUN_00aa3be0(param_1,0,1);
          iVar3 = (int)uVar5;
        }
        if (iVar3 != 0) break;
      }
      else {
        lVar16 = lVar15 + (ulong)bVar1 * 0x6f8;
        sVar9 = recv(*(int *)((long)param_1 + 0x2d0),*(void **)(lVar16 + 0x7b8),
                     (ulong)*(uint *)(lVar15 + 0xc84),2);
        if ((int)sVar9 < 1) {
          if ((int)sVar9 == 0) break;
          piVar10 = (int *)__errno();
          if (*piVar10 != 0xb) goto LAB_00aad4c0;
          goto LAB_00aad588;
        }
        if (**(byte **)(lVar16 + 0x7b8) < 0x20) goto LAB_00aad4c0;
                    /* try { // try from 00aad378 to 00bad40f has its CatchHandler @ 00aad378
                       catch() { ... } // from try @ 00aad378 with catch @ 00aad378
                       catch() { ... } // from try @ 00aad498 with catch @ 00aad378 */
        *(byte *)((long)param_1 + 0x2f8) = *(byte *)((long)param_1 + 0x2f8) & 0xf0;
        SSL_shutdown(*(SSL **)((long)param_1 + 0x2b0));
        SSL_free(*(SSL **)((long)param_1 + 0x2b0));
        *(undefined8 *)((long)param_1 + 0x2b0) = 0;
        if ((~*(uint *)(lVar15 + 0xc78) & 0x1800) != 0) goto LAB_00aad4dc;
        *(byte *)((long)param_1 + 0x2f8) = *(byte *)((long)param_1 + 0x2f8) | 0x10;
        lVar16 = *(long *)(lVar15 + 0x830);
joined_r0x00aad4e0:
        for (; lVar16 != 0; lVar16 = *(long *)(lVar16 + 0x158)) {
                    /* catch() { ... } // from try @ 00aad5cc with catch @ 00aad4f4
                       catch() { ... } // from try @ 00aad630 with catch @ 00aad4f4 */
          if ((((*(byte *)(lVar16 + 0x200) >> 2 & 1) == 0) &&
              (*(SSL **)((long)param_1 + 0x2b0) != (SSL *)0x0)) &&
             (pSVar17 = *(SSL_CTX **)(lVar16 + 0x1b0),
             pSVar11 = SSL_get_SSL_CTX(*(SSL **)((long)param_1 + 0x2b0)), pSVar17 == pSVar11)) {
            *(long *)((long)param_1 + 0x228) = lVar16;
            break;
          }
        }
        lws_set_timeout(param_1,3,*(undefined4 *)(lVar15 + 0xc80));
        uVar5 = 0;
        uVar14 = 0xc;
        if (*(char *)((long)param_1 + 0x2fe) != '\b') {
          uVar14 = 0;
        }
        *(undefined1 *)((long)param_1 + 0x2fe) = uVar14;
      }
      if (*(long *)(lVar2 + 0x28) == local_58) {
        return;
      }
      goto LAB_00aad210;
    }
    pcVar13 = "%s: lws_change_pollfd failed\n";
LAB_00aad470:
    _lws_log(1,pcVar13,"lws_server_socket_service_ssl");
    break;
  case 7:
  case 9:
    if (*(long *)((long)param_1 + 0x2b0) != 0) {
      _lws_log(1,"%s: leaking ssl\n","lws_server_socket_service_ssl");
    }
    if ((*(int *)(lVar15 + 0xc8c) == 0) || (*(int *)(lVar15 + 0xc90) < *(int *)(lVar15 + 0xc8c))) {
      puVar6 = (undefined4 *)__errno();
      *puVar6 = 0;
      pSVar7 = SSL_new(*(SSL_CTX **)(*(long *)((long)param_1 + 0x228) + 0x1b0));
      *(SSL **)((long)param_1 + 0x2b0) = pSVar7;
      if (pSVar7 != (SSL *)0x0) {
        if ((*(int *)(lVar15 + 0xc8c) != 0) &&
           (iVar3 = *(int *)(lVar15 + 0xc90) + 1, *(int *)(lVar15 + 0xc90) = iVar3,
           iVar3 == *(int *)(lVar15 + 0xc8c))) {
          lVar16 = *(long *)(lVar15 + 0x830);
          *(byte *)(lVar15 + 0xc94) = *(byte *)(lVar15 + 0xc94) | 0x20;
          for (; lVar16 != 0; lVar16 = *(long *)(lVar16 + 0x158)) {
            if ((*(int *)(lVar16 + 0x1f8) != 0) && (*(long *)(lVar16 + 0x168) != 0)) {
              FUN_00aa3be0(*(long *)(lVar16 + 0x168),1,0);
            }
          }
        }
        SSL_set_ex_data(*(SSL **)((long)param_1 + 0x2b0),DAT_01d54498,param_1);
        SSL_set_fd(*(SSL **)((long)param_1 + 0x2b0),param_2);
        SSL_ctrl(*(SSL **)((long)param_1 + 0x2b0),0x21,2,(void *)0x0);
        pBVar8 = SSL_get_rbio(*(SSL **)((long)param_1 + 0x2b0));
        if (pBVar8 == (BIO *)0x0) {
          _lws_log(4,"NULL rbio\n");
          pBVar8 = SSL_get_wbio(*(SSL **)((long)param_1 + 0x2b0));
          if (pBVar8 == (BIO *)0x0) goto LAB_00aad430;
LAB_00aad318:
          BIO_ctrl(pBVar8,0x66,1,(void *)0x0);
        }
        else {
          BIO_ctrl(pBVar8,0x66,1,(void *)0x0);
          pBVar8 = SSL_get_wbio(*(SSL **)((long)param_1 + 0x2b0));
          if (pBVar8 != (BIO *)0x0) goto LAB_00aad318;
LAB_00aad430:
          _lws_log(4,"NULL rbio\n");
        }
        uVar14 = 6;
                    /* try { // try from 00aad458 to 00bad497 has its CatchHandler @ 00aad4d8 */
        if (*(char *)((long)param_1 + 0x2fe) != '\a') {
          uVar14 = 8;
        }
        *(undefined1 *)((long)param_1 + 0x2fe) = uVar14;
        iVar3 = FUN_00aa3824(lVar15,param_1);
        if (iVar3 == 0) {
                    /* try { // try from 00aad498 to 00bad4f3 has its CatchHandler @ 00aad378 */
          lws_set_timeout(param_1,9,*(undefined4 *)(lVar15 + 0xc80));
          goto switchD_00aad1d8_caseD_6;
        }
        pcVar13 = "%s: failed to insert into fds\n";
        goto LAB_00aad470;
      }
      _lws_log(1,"SSL_new failed: %d (errno %d)\n",99,*puVar6);
      uVar12 = ERR_get_error();
      while (uVar12 != 0) {
        ERR_error_string_n(uVar12,acStack_158,0x100);
        uVar12 = ERR_get_error();
      }
      if (param_2 != -1) {
        close(param_2);
                    /* try { // try from 00aad410 to 00bad42f has its CatchHandler @ 00aad4d4 */
      }
    }
    else {
      _lws_log(4,"unable to deal with SSL connection\n");
    }
  }
  uVar5 = 1;
  if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 00aad620 to 00bad62f has its CatchHandler @ 00aad630 */
    return;
  }
LAB_00aad210:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

