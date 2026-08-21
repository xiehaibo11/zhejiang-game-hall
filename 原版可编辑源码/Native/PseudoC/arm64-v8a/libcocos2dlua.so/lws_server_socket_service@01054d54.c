
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
  if (*(byte *)((long)param_2 + 0x2fe) < 0xd) {
    uVar15 = (uint)*(byte *)((long)param_2 + 0x2fe);
    if ((1 << (ulong)(uVar15 & 0x1f) & 0x1023U) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01054ccc with catch @ 01054e54
                        */
      if (uVar15 == 10) {
        lVar10 = param_1 + (ulong)*(byte *)((long)param_2 + 0x304) * 0x6f8;
        uVar15 = 6;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01054b68 with catch @ 01054e68
                        */
                    /* try { // try from 01054e6c to 01154f53 has its CatchHandler @ 01054e6c
                       catch() { ... } // from try @ 01054e6c with catch @ 01054e6c
                       catch() { ... } // from try @ 01054fb8 with catch @ 01054e6c */
        do {
          if ((((*(byte *)((long)param_3 + 6) & 1) == 0) || ((*(byte *)(param_3 + 1) & 1) == 0)) ||
             ((*(int *)(param_2[0x45] + 0x1f8) != 0 &&
              ((*(int *)(param_1 + 0xc8c) != 0 &&
               (*(int *)(param_1 + 0xc90) == *(int *)(param_1 + 0xc8c))))))) {
LAB_0105509c:
            uVar9 = 0;
            lVar13 = *(long *)(lVar13 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01055100 with catch @ 010550a4
                       catch(type#1 @ 00000000) { ... } // from try @ 010552d4 with catch @ 010550a4
                        */
            goto joined_r0x010550d8;
          }
          local_ec = 0x80;
          iVar5 = accept(*param_3,asStack_e8,&local_ec);
          if (iVar5 < 0) {
            piVar7 = (int *)__errno();
                    /* catch() { ... } // from try @ 01054fb0 with catch @ 01055080 */
            if (*piVar7 != 0xb) {
              pcVar8 = strerror(*piVar7);
                    /* catch() { ... } // from try @ 01054f54 with catch @ 01055090 */
              _lws_log(1,"ERROR on accept: %s\n",pcVar8);
            }
            goto LAB_0105509c;
          }
          lws_plat_set_socket_options(param_2[0x45],iVar5);
          iVar6 = (**(code **)(*(long *)(param_2[0x45] + 0x188) + 8))(param_2,0x11,0,(long)iVar5,0);
          if (iVar6 != 0) {
            close(iVar5);
            uVar9 = 0;
LAB_010550c8:
            lVar13 = *(long *)(lVar13 + 0x28);
            goto joined_r0x010550d8;
          }
          uVar15 = uVar15 | 1;
          if ((*(uint *)(param_2[0x45] + 0x1d8) & 0x400000) != 0) {
            uVar15 = 2;
          }
          lVar12 = lws_adopt_descriptor_vhost(param_2[0x45],uVar15,iVar5,0,0);
          if (lVar12 == 0) {
            uVar9 = 1;
            goto LAB_010550c8;
          }
          if (*(int *)(param_1 + 0xc7c) - 1U <= *(uint *)(lVar10 + 0x7c8)) goto LAB_0105509c;
          iVar5 = lws_poll_listen_fd(*(long *)(lVar10 + 0xe0) +
                                     (long)*(int *)((long)param_2 + 0x2d4) * 8);
          uVar9 = 0;
        } while (0 < iVar5);
        goto LAB_01055170;
      }
      goto LAB_01055150;
    }
    if ((int)param_2[0x5d] != 0) {
      if ((*(ushort *)((long)param_3 + 6) >> 2 & 1) == 0) goto LAB_01055150;
      iVar5 = FUN_01046810(param_2,param_2[0x51] + (ulong)*(uint *)((long)param_2 + 0x2e4));
joined_r0x01054dd8:
      if (-1 < iVar5) goto LAB_01055150;
      goto LAB_01055160;
    }
    uVar3 = (uint)(short)(*(ushort *)(param_3 + 1) & *(ushort *)((long)param_3 + 6));
    if ((uVar3 & 1) == 0) {
LAB_01054e18:
      bVar2 = *(byte *)((long)param_3 + 6);
joined_r0x010551d0:
      if ((bVar2 >> 2 & 1) == 0) goto LAB_01055150;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01054d3c with catch @ 01054e24
                        */
      iVar5 = FUN_01046364(param_2,4,0);
      if (iVar5 == 0) {
        if (*(char *)((long)param_2 + 0x2fe) != '\f') {
          if ((*(byte *)((long)param_2 + 0x2f4) & 1) != 0) {
            if (*(char *)((long)param_2 + 0x2ff) != '\x01') {
              lVar12 = param_2[0x49];
              lVar10 = param_2[0x4e];
              uVar9 = 0x10;
              goto LAB_01055138;
            }
                    /* try { // try from 010550f8 to 011550ff has its CatchHandler @ 010553f8 */
            iVar5 = lws_serve_http_file_fragment(param_2);
            if (iVar5 < 0) goto LAB_01055160;
          }
          goto LAB_01055150;
        }
        lVar12 = param_2[0x49];
        lVar10 = param_2[0x4e];
        uVar9 = 0x3d;
LAB_01055138:
        iVar5 = FUN_01043028(*(undefined8 *)(lVar12 + 8),param_2,uVar9,lVar10,0,0);
        goto joined_r0x01054dd8;
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01054cdc with catch @ 01054e3c
                        */
      _lws_log(4,"%s a\n","lws_server_socket_service");
      goto LAB_01055160;
    }
    if (((uVar3 >> 2 & 1) != 0) && ((*(uint *)((long)param_2 + 0x2f4) >> 0xe & 1) != 0)) {
      _lws_log(4,"favouring pollout\n");
      uVar15 = *(uint *)((long)param_2 + 0x2f4) & 0xffffbfff;
LAB_01054e14:
      *(uint *)((long)param_2 + 0x2f4) = uVar15;
      goto LAB_01054e18;
    }
    if ((uVar15 == 0xc) || (2 < *(byte *)((long)param_2 + 0x2ff))) {
      lVar10 = param_1 + (ulong)*(byte *)((long)param_2 + 0x304) * 0x6f8;
      iVar5 = lws_ssl_capable_read
                        (param_2,*(undefined8 *)(lVar10 + 0x7b8),*(undefined4 *)(param_1 + 0xc84));
      if (iVar5 + 1U < 2) goto LAB_01055160;
      if (iVar5 == -2) goto LAB_01054e18;
      if (-1 < iVar5) {
        puVar1 = (undefined8 *)(lVar10 + 0x7b8);
        if (*(char *)((long)param_2 + 0x2fe) == '\f') {
          iVar5 = FUN_01043028(*(undefined8 *)(param_2[0x49] + 8),param_2,0x3b,param_2[0x4e],*puVar1
                               ,(long)iVar5);
          if (-1 < iVar5) goto LAB_01054e18;
          goto LAB_01055160;
        }
        if ((*(char *)((long)param_2 + 0x2ff) == '\x01') ||
           (*(char *)((long)param_2 + 0x2ff) == '\v')) {
          if ((*(byte *)((long)param_3 + 6) >> 2 & 1) != 0) {
            uVar15 = *(uint *)((long)param_2 + 0x2f4) | 0x4000;
            goto LAB_01054e14;
          }
          goto LAB_01054e18;
        }
        iVar5 = lws_read(param_2,*puVar1,(long)iVar5);
        if (-1 < iVar5) {
          if ((*(byte *)((long)param_3 + 6) >> 2 & 1) == 0) goto LAB_01055150;
          *(uint *)((long)param_2 + 0x2f4) = *(uint *)((long)param_2 + 0x2f4) | 0x4000;
          uVar9 = lws_server_socket_service_ssl(param_2,0xffffffff);
          iVar5 = (int)uVar9;
          goto joined_r0x010552fc;
        }
        goto LAB_0105516c;
      }
      goto LAB_01055160;
    }
    lVar10 = *param_2;
    if (lVar10 != 0) {
      sVar4 = *(short *)(lVar10 + 0xb5c);
      sVar14 = *(short *)(lVar10 + 0xb5e);
      if (sVar4 != sVar14) goto LAB_010551f4;
LAB_01054f84:
      sVar4 = lws_ssl_capable_read(param_2,lVar10 + 0x35b,0x800);
      *(short *)(lVar10 + 0xb5e) = sVar4;
      *(undefined2 *)(lVar10 + 0xb5c) = 0;
      if (sVar4 != -2) {
                    /* try { // try from 01054fb0 to 01154fb7 has its CatchHandler @ 01055080 */
        if (sVar4 == -1) goto LAB_01055160;
                    /* try { // try from 01054fb8 to 011550a3 has its CatchHandler @ 01054e6c */
        if (sVar4 == 0) {
          *(uint *)((long)param_2 + 0x2f4) = *(uint *)((long)param_2 + 0x2f4) | 0x800000;
          FUN_01046364(param_2,1,0);
          if ((*(byte *)((long)param_2 + 0x107) & 0xc0) != 0) goto LAB_01054e18;
          goto LAB_01055160;
        }
        if (sVar4 != 0) {
          *(uint *)((long)param_2 + 0x2f4) = *(uint *)((long)param_2 + 0x2f4) | 0x200;
          sVar4 = *(short *)(lVar10 + 0xb5c);
          sVar14 = *(short *)(lVar10 + 0xb5e);
          goto LAB_010551f4;
        }
        sVar4 = 0;
        sVar14 = 0;
        goto LAB_01055248;
      }
      *(undefined4 *)(lVar10 + 0xb5c) = 0;
      bVar2 = *(byte *)((long)param_3 + 6);
      goto joined_r0x010551d0;
    }
    iVar5 = FUN_01047830(param_2,0);
    if (iVar5 != 0) goto LAB_01054e18;
    lVar10 = *param_2;
    sVar4 = *(short *)(lVar10 + 0xb5c);
    sVar14 = *(short *)(lVar10 + 0xb5e);
    if (sVar4 == sVar14) goto LAB_01054f84;
LAB_010551f4:
    if ((sVar4 == sVar14) || (sVar14 == 0)) {
LAB_01055248:
                    /* try { // try from 0105525c to 01155267 has its CatchHandler @ 010553e4 */
      _lws_log(1,"%s: assert: rxpos %d, rxlen %d\n","lws_server_socket_service",(int)sVar4,
               (int)sVar14);
    }
                    /* try { // try from 0105526c to 01155277 has its CatchHandler @ 010553cc */
    if ((*(char *)((long)param_2 + 0x2ff) == '\x01') || (*(char *)((long)param_2 + 0x2ff) == '\v'))
    goto LAB_01054e18;
    iVar5 = lws_read(param_2,lVar10 + *(short *)(lVar10 + 0xb5c) + 0x35b,
                     (long)*(short *)(lVar10 + 0xb5e) - (long)*(short *)(lVar10 + 0xb5c));
    if (-1 < iVar5) {
      lVar10 = *param_2;
      if (lVar10 == 0) goto LAB_01055150;
      if (*(short *)(lVar10 + 0xb5e) != 0) {
        *(short *)(lVar10 + 0xb5c) = (short)iVar5 + *(short *)(lVar10 + 0xb5c);
      }
      iVar5 = FUN_01047ab4(param_2);
                    /* try { // try from 010552cc to 011552d3 has its CatchHandler @ 010553b4 */
                    /* try { // try from 010552d4 to 011553fb has its CatchHandler @ 010550a4 */
      if ((iVar5 == 0) ||
         ((*(byte *)((long)param_2 + 0x2fe) < 6 &&
          ((1 << (ulong)(*(byte *)((long)param_2 + 0x2fe) & 0x1f) & 0x23U) != 0))))
      goto LAB_01055150;
      FUN_01047ae8(param_2,1);
      uVar9 = lws_server_socket_service_ssl(param_2,0xffffffff);
      iVar5 = (int)uVar9;
      goto joined_r0x010552fc;
    }
  }
  else {
LAB_01055150:
    uVar9 = lws_server_socket_service_ssl(param_2,0xffffffff);
    iVar5 = (int)uVar9;
joined_r0x010552fc:
    if (iVar5 == 0) goto LAB_01055170;
LAB_01055160:
    FUN_010417b8(param_2,0);
  }
LAB_0105516c:
  uVar9 = 1;
LAB_01055170:
  lVar13 = *(long *)(lVar13 + 0x28);
joined_r0x010550d8:
  if (lVar13 != lVar11) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}

