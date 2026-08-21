
void lws_server_socket_service(long param_1,long *param_2,int *param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  short sVar14;
  uint uVar15;
  socklen_t local_ec;
  sockaddr asStack_e8 [8];
  
  lVar13 = tpidr_el0;
  lVar11 = *(long *)(lVar13 + 0x28);
                    /* catch() { ... } // from try @ 00ab2544 with catch @ 00ab2608 */
                    /* catch() { ... } // from try @ 00ab2500 with catch @ 00ab2614 */
  if (*(byte *)((long)param_2 + 0x2fe) < 0xd) {
    uVar15 = (uint)*(byte *)((long)param_2 + 0x2fe);
    if ((1 << (ulong)(uVar15 & 0x1f) & 0x1023U) == 0) {
      if (uVar15 == 10) {
        lVar10 = param_1 + (ulong)*(byte *)((long)param_2 + 0x304) * 0x6f8;
        uVar15 = 6;
        do {
          if ((((*(byte *)((long)param_3 + 6) & 1) == 0) || ((*(byte *)(param_3 + 1) & 1) == 0)) ||
             ((*(int *)(param_2[0x45] + 0x1f8) != 0 &&
              ((*(int *)(param_1 + 0xc8c) != 0 &&
               (*(int *)(param_1 + 0xc90) == *(int *)(param_1 + 0xc8c))))))) {
LAB_00ab2918:
            uVar9 = 0;
            lVar13 = *(long *)(lVar13 + 0x28);
            goto joined_r0x00ab2954;
          }
          local_ec = 0x80;
          iVar5 = accept(*param_3,asStack_e8,&local_ec);
          if (iVar5 < 0) {
            piVar7 = (int *)__errno();
            if (*piVar7 != 0xb) {
                    /* catch() { ... } // from try @ 00ab2874 with catch @ 00ab2900 */
              pcVar8 = strerror(*piVar7);
              _lws_log(1,"ERROR on accept: %s\n",pcVar8);
            }
            goto LAB_00ab2918;
          }
          lws_plat_set_socket_options(param_2[0x45],iVar5);
          iVar6 = (**(code **)(*(long *)(param_2[0x45] + 0x188) + 8))(param_2,0x11,0,(long)iVar5,0);
          if (iVar6 != 0) {
            close(iVar5);
            uVar9 = 0;
LAB_00ab2944:
            lVar13 = *(long *)(lVar13 + 0x28);
            goto joined_r0x00ab2954;
          }
          uVar15 = uVar15 | 1;
          if ((*(uint *)(param_2[0x45] + 0x1d8) & 0x400000) != 0) {
            uVar15 = 2;
          }
          lVar12 = lws_adopt_descriptor_vhost(param_2[0x45],uVar15,iVar5,0,0);
          if (lVar12 == 0) {
            uVar9 = 1;
            goto LAB_00ab2944;
          }
                    /* try { // try from 00ab27b0 to 00bb27b7 has its CatchHandler @ 00ab2824 */
          if (*(int *)(param_1 + 0xc7c) - 1U <= *(uint *)(lVar10 + 0x7c8)) goto LAB_00ab2918;
                    /* try { // try from 00ab27b8 to 00bb2817 has its CatchHandler @ 00ab2690 */
          iVar5 = lws_poll_listen_fd(*(long *)(lVar10 + 0xe0) +
                                     (long)*(int *)((long)param_2 + 0x2d4) * 8);
          uVar9 = 0;
        } while (0 < iVar5);
        goto LAB_00ab29ec;
      }
      goto LAB_00ab29cc;
    }
                    /* catch() { ... } // from try @ 00ab24d0 with catch @ 00ab2630 */
    if ((int)param_2[0x5d] != 0) {
      if ((*(ushort *)((long)param_3 + 6) >> 2 & 1) == 0) goto LAB_00ab29cc;
      iVar5 = FUN_00aa408c(param_2,param_2[0x51] + (ulong)*(uint *)((long)param_2 + 0x2e4));
joined_r0x00ab2654:
      if (-1 < iVar5) goto LAB_00ab29cc;
      goto LAB_00ab29dc;
    }
    uVar3 = (uint)(short)(*(ushort *)(param_3 + 1) & *(ushort *)((long)param_3 + 6));
    if ((uVar3 & 1) == 0) {
LAB_00ab2694:
      bVar2 = *(byte *)((long)param_3 + 6);
joined_r0x00ab2a4c:
      if ((bVar2 >> 2 & 1) == 0) goto LAB_00ab29cc;
      iVar5 = FUN_00aa3be0(param_2,4,0);
      if (iVar5 == 0) {
        if (*(char *)((long)param_2 + 0x2fe) != '\f') {
          if ((*(byte *)((long)param_2 + 0x2f4) & 1) != 0) {
            if (*(char *)((long)param_2 + 0x2ff) != '\x01') {
              lVar12 = param_2[0x49];
              lVar10 = param_2[0x4e];
              uVar9 = 0x10;
              goto LAB_00ab29b4;
            }
            iVar5 = lws_serve_http_file_fragment(param_2);
            if (iVar5 < 0) goto LAB_00ab29dc;
          }
          goto LAB_00ab29cc;
        }
        lVar12 = param_2[0x49];
        lVar10 = param_2[0x4e];
        uVar9 = 0x3d;
LAB_00ab29b4:
        iVar5 = FUN_00aa08a4(*(undefined8 *)(lVar12 + 8),param_2,uVar9,lVar10,0,0);
        goto joined_r0x00ab2654;
      }
      _lws_log(4,"%s a\n","lws_server_socket_service");
      goto LAB_00ab29dc;
    }
                    /* catch() { ... } // from try @ 00ab248c with catch @ 00ab2674 */
    if (((uVar3 >> 2 & 1) != 0) && ((*(uint *)((long)param_2 + 0x2f4) >> 0xe & 1) != 0)) {
      _lws_log(4,"favouring pollout\n");
      uVar15 = *(uint *)((long)param_2 + 0x2f4) & 0xffffbfff;
LAB_00ab2690:
                    /* try { // try from 00ab2690 to 00bb27af has its CatchHandler @ 00ab2690
                       catch() { ... } // from try @ 00ab2690 with catch @ 00ab2690
                       catch() { ... } // from try @ 00ab27b8 with catch @ 00ab2690
                       catch() { ... } // from try @ 00ab2820 with catch @ 00ab2690 */
      *(uint *)((long)param_2 + 0x2f4) = uVar15;
      goto LAB_00ab2694;
    }
    if ((uVar15 == 0xc) || (2 < *(byte *)((long)param_2 + 0x2ff))) {
      lVar10 = param_1 + (ulong)*(byte *)((long)param_2 + 0x304) * 0x6f8;
                    /* try { // try from 00ab2874 to 00bb2883 has its CatchHandler @ 00ab2900 */
      iVar5 = lws_ssl_capable_read
                        (param_2,*(undefined8 *)(lVar10 + 0x7b8),*(undefined4 *)(param_1 + 0xc84));
                    /* try { // try from 00ab2884 to 00bb291b has its CatchHandler @ 00ab2840 */
      if (iVar5 + 1U < 2) goto LAB_00ab29dc;
      if (iVar5 == -2) goto LAB_00ab2694;
      if (-1 < iVar5) {
        puVar1 = (undefined8 *)(lVar10 + 0x7b8);
        if (*(char *)((long)param_2 + 0x2fe) == '\f') {
          iVar5 = FUN_00aa08a4(*(undefined8 *)(param_2[0x49] + 8),param_2,0x3b,param_2[0x4e],*puVar1
                               ,(long)iVar5);
          if (-1 < iVar5) goto LAB_00ab2694;
          goto LAB_00ab29dc;
        }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ab2a7c with catch @ 00ab2a1c
                       catch(type#1 @ 00000000) { ... } // from try @ 00ab2c44 with catch @ 00ab2a1c
                        */
        if ((*(char *)((long)param_2 + 0x2ff) == '\x01') ||
           (*(char *)((long)param_2 + 0x2ff) == '\v')) {
          if ((*(byte *)((long)param_3 + 6) >> 2 & 1) != 0) {
            uVar15 = *(uint *)((long)param_2 + 0x2f4) | 0x4000;
            goto LAB_00ab2690;
          }
          goto LAB_00ab2694;
        }
        iVar5 = lws_read(param_2,*puVar1,(long)iVar5);
        if (-1 < iVar5) {
          if ((*(byte *)((long)param_3 + 6) >> 2 & 1) == 0) goto LAB_00ab29cc;
          *(uint *)((long)param_2 + 0x2f4) = *(uint *)((long)param_2 + 0x2f4) | 0x4000;
          uVar9 = lws_server_socket_service_ssl(param_2,0xffffffff);
          iVar5 = (int)uVar9;
          goto joined_r0x00ab2b78;
        }
        goto LAB_00ab29e8;
      }
      goto LAB_00ab29dc;
    }
    lVar10 = *param_2;
    if (lVar10 != 0) {
      sVar4 = *(short *)(lVar10 + 0xb5c);
      sVar14 = *(short *)(lVar10 + 0xb5e);
      if (sVar4 != sVar14) goto LAB_00ab2a70;
LAB_00ab2800:
      sVar4 = lws_ssl_capable_read(param_2,lVar10 + 0x35b,0x800);
                    /* try { // try from 00ab2818 to 00bb281f has its CatchHandler @ 00ab2824 */
      *(short *)(lVar10 + 0xb5e) = sVar4;
                    /* try { // try from 00ab2820 to 00bb283f has its CatchHandler @ 00ab2690 */
      *(undefined2 *)(lVar10 + 0xb5c) = 0;
                    /* catch() { ... } // from try @ 00ab27b0 with catch @ 00ab2824
                       catch() { ... } // from try @ 00ab2818 with catch @ 00ab2824 */
      if (sVar4 != -2) {
        if (sVar4 == -1) goto LAB_00ab29dc;
        if (sVar4 == 0) {
                    /* try { // try from 00ab2840 to 00bb2873 has its CatchHandler @ 00ab2840
                       catch() { ... } // from try @ 00ab2840 with catch @ 00ab2840
                       catch() { ... } // from try @ 00ab2884 with catch @ 00ab2840 */
          *(uint *)((long)param_2 + 0x2f4) = *(uint *)((long)param_2 + 0x2f4) | 0x800000;
          FUN_00aa3be0(param_2,1,0);
          if ((*(byte *)((long)param_2 + 0x107) & 0xc0) != 0) goto LAB_00ab2694;
          goto LAB_00ab29dc;
        }
        if (sVar4 != 0) {
          *(uint *)((long)param_2 + 0x2f4) = *(uint *)((long)param_2 + 0x2f4) | 0x200;
          sVar4 = *(short *)(lVar10 + 0xb5c);
          sVar14 = *(short *)(lVar10 + 0xb5e);
          goto LAB_00ab2a70;
        }
        sVar4 = 0;
        sVar14 = 0;
        goto LAB_00ab2ac4;
      }
      *(undefined4 *)(lVar10 + 0xb5c) = 0;
      bVar2 = *(byte *)((long)param_3 + 6);
      goto joined_r0x00ab2a4c;
    }
    iVar5 = FUN_00aa50ac(param_2,0);
    if (iVar5 != 0) goto LAB_00ab2694;
    lVar10 = *param_2;
    sVar4 = *(short *)(lVar10 + 0xb5c);
    sVar14 = *(short *)(lVar10 + 0xb5e);
    if (sVar4 == sVar14) goto LAB_00ab2800;
LAB_00ab2a70:
                    /* try { // try from 00ab2a74 to 00bb2a7b has its CatchHandler @ 00ab2d90 */
    if ((sVar4 == sVar14) || (sVar14 == 0)) {
LAB_00ab2ac4:
      _lws_log(1,"%s: assert: rxpos %d, rxlen %d\n","lws_server_socket_service",(int)sVar4,
               (int)sVar14);
    }
    if ((*(char *)((long)param_2 + 0x2ff) == '\x01') || (*(char *)((long)param_2 + 0x2ff) == '\v'))
    goto LAB_00ab2694;
    iVar5 = lws_read(param_2,lVar10 + *(short *)(lVar10 + 0xb5c) + 0x35b,
                     (long)*(short *)(lVar10 + 0xb5e) - (long)*(short *)(lVar10 + 0xb5c));
    if (-1 < iVar5) {
      lVar10 = *param_2;
      if (lVar10 == 0) goto LAB_00ab29cc;
      if (*(short *)(lVar10 + 0xb5e) != 0) {
        *(short *)(lVar10 + 0xb5c) = (short)iVar5 + *(short *)(lVar10 + 0xb5c);
      }
      iVar5 = FUN_00aa5330(param_2);
      if ((iVar5 == 0) ||
         ((*(byte *)((long)param_2 + 0x2fe) < 6 &&
          ((1 << (ulong)(*(byte *)((long)param_2 + 0x2fe) & 0x1f) & 0x23U) != 0))))
      goto LAB_00ab29cc;
      FUN_00aa5364(param_2,1);
      uVar9 = lws_server_socket_service_ssl(param_2,0xffffffff);
      iVar5 = (int)uVar9;
      goto joined_r0x00ab2b78;
    }
  }
  else {
LAB_00ab29cc:
    uVar9 = lws_server_socket_service_ssl(param_2,0xffffffff);
    iVar5 = (int)uVar9;
joined_r0x00ab2b78:
    if (iVar5 == 0) goto LAB_00ab29ec;
LAB_00ab29dc:
    FUN_00a9f034(param_2,0);
  }
LAB_00ab29e8:
  uVar9 = 1;
LAB_00ab29ec:
  lVar13 = *(long *)(lVar13 + 0x28);
joined_r0x00ab2954:
  if (lVar13 != lVar11) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}

