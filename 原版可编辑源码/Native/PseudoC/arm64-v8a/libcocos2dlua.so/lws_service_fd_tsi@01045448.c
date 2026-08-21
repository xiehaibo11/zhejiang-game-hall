
/* WARNING: Removing unreachable block (ram,0x01045a50) */

void lws_service_fd_tsi(ulong *param_1,int *param_2,int param_3)

{
  short sVar1;
  ushort uVar2;
  long lVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  __pid_t __pid;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  ulong uVar14;
  char cVar15;
  uint *puVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong local_170;
  ulong local_168;
  uint local_160;
  undefined1 local_69;
  long local_68;
  
                    /* try { // try from 01045460 to 0114546b has its CatchHandler @ 010457c8 */
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if ((*(byte *)((long)param_1 + 0xc94) >> 4 & 1) == 0) {
                    /* try { // try from 0104548c to 0114549b has its CatchHandler @ 010457b8 */
    lws_protocol_init(param_1);
  }
  time((time_t *)&local_170);
                    /* try { // try from 010454a4 to 011454c7 has its CatchHandler @ 010458a4 */
  if (((long)param_1[2] < 0x57442252) && (0x57442252 < (long)local_170)) {
    param_1[2] = local_170;
  }
  lVar21 = (long)param_3;
                    /* try { // try from 010454c8 to 011454d3 has its CatchHandler @ 01045798 */
  if (*param_1 != local_170) {
                    /* try { // try from 010454f4 to 01145503 has its CatchHandler @ 01045788 */
    *param_1 = local_170;
    lws_plat_service_periodic(param_1);
    FUN_0104ac10(param_1,0);
                    /* try { // try from 0104550c to 0114552f has its CatchHandler @ 01045880 */
    if (((*(byte *)((long)param_1 + 0xc94) & 1) == 0) || ((int)param_1[0x18e] != 0)) {
      if (param_2 == (int *)0x0) {
                    /* try { // try from 01045530 to 0114553b has its CatchHandler @ 01045768 */
        iVar7 = 0;
      }
      else {
        iVar7 = *param_2;
      }
      if (param_1[lVar21 * 0xdf + 0x1f] == 0) {
        bVar4 = false;
      }
      else {
        bVar4 = false;
        uVar14 = param_1[lVar21 * 0xdf + 0x1f];
        do {
                    /* try { // try from 0104555c to 01145563 has its CatchHandler @ 01045758 */
          uVar20 = local_170;
                    /* try { // try from 01045564 to 0114558b has its CatchHandler @ 01045864 */
          uVar19 = *(ulong *)(uVar14 + 0x260);
          iVar9 = *(int *)(uVar14 + 0x2d0);
          iVar6 = FUN_010566c8(uVar14,0x12,0,local_170 & 0xffffffff);
          if (iVar6 < 0) {
LAB_010455ec:
            bVar5 = 0;
          }
          else {
            bVar5 = 0;
            if (*(char *)(uVar14 + 0x303) != '\0') {
              if ((long)(uVar20 & 0xffffffff) <= *(long *)(uVar14 + 0x218)) goto LAB_010455ec;
              *(uint *)(uVar14 + 0x2f4) = *(uint *)(uVar14 + 0x2f4) | 0x40;
              if (*(char *)(uVar14 + 0x2fe) == '\'') {
                    /* try { // try from 010455c4 to 011455d3 has its CatchHandler @ 01045830 */
                (**(code **)(*(long *)(*(long *)(uVar14 + 0x228) + 0x188) + 8))
                          (uVar14,1,*(undefined8 *)(uVar14 + 0x270),"Timed out waiting SSL",0x15);
              }
              FUN_010417b8(uVar14,0);
              bVar5 = 1;
            }
          }
                    /* try { // try from 010455f8 to 01145607 has its CatchHandler @ 01045754 */
          if ((bool)(iVar9 == iVar7 & bVar5)) {
            bVar4 = true;
          }
          uVar14 = uVar19;
        } while (uVar19 != 0);
      }
                    /* try { // try from 01045610 to 01145633 has its CatchHandler @ 01045860 */
      plVar18 = (long *)param_1[lVar21 * 0xdf + 0x22];
      if (plVar18 != (long *)0x0) {
        do {
                    /* try { // try from 01045634 to 0114564b has its CatchHandler @ 0104585c */
          while ((((*(char *)((long)plVar18 + 0xb8a) != '\0' && (lVar17 = plVar18[1], lVar17 != 0))
                  && (plVar18[0x5f] != 0)) &&
                 ((*(long *)(lVar17 + 0x228) == 0 ||
                  ((long)*(int *)(*(long *)(lVar17 + 0x228) + 0x1f0) + 0x3c <=
                   (long)(local_170 - plVar18[0x5f])))))) {
                    /* try { // try from 0104567c to 01145693 has its CatchHandler @ 01045740 */
            local_168 = local_168 & 0xffffffffffffff00;
            lws_get_peer_simple(lVar17,&local_168,0x100);
                    /* try { // try from 01045694 to 01145a3f has its CatchHandler @ 01044928 */
            _lws_log(4,
                     "ah excessive hold: wsi %p\n  peer address: %s\n  ah rxpos %u, rxlen %u, pos %u\n"
                     ,lVar17,&local_168,(long)*(short *)((long)plVar18 + 0xb5c),
                     (long)*(short *)((long)plVar18 + 0xb5e),(int)plVar18[0x16c]);
            local_168 = local_168 & 0xffffffffffffff00;
            pcVar11 = (char *)lws_token_to_string(0);
            if (pcVar11 != (char *)0x0) {
              iVar9 = 0;
              do {
                if (*pcVar11 == '\0') break;
                iVar6 = lws_hdr_total_length(lVar17,iVar9);
                if ((iVar6 - 1U < 0xff) &&
                   (iVar6 = lws_hdr_copy(lVar17,&local_168,0x100,iVar9), 0 < iVar6)) {
                    /* catch() { ... } // from try @ 01044b20 with catch @ 0104570c */
                  local_69 = 0;
                  _lws_log(4,"   %s = %s\n",pcVar11,&local_168);
                }
                iVar9 = iVar9 + 1;
                pcVar11 = (char *)lws_token_to_string(iVar9);
              } while (pcVar11 != (char *)0x0);
            }
                    /* catch() { ... } // from try @ 01044af8 with catch @ 0104572c */
            FUN_01047a8c(lVar17);
            FUN_01047ae8(lVar17,0);
                    /* catch() { ... } // from try @ 0104567c with catch @ 01045740 */
                    /* catch() { ... } // from try @ 01044b7c with catch @ 01045744 */
            if (*(int *)(lVar17 + 0x2d0) == iVar7) {
              bVar4 = true;
            }
            FUN_010417b8(lVar17,0);
                    /* catch() { ... } // from try @ 010455f8 with catch @ 01045754 */
            plVar18 = (long *)param_1[lVar21 * 0xdf + 0x22];
                    /* catch() { ... } // from try @ 0104555c with catch @ 01045758 */
            if (plVar18 == (long *)0x0) goto LAB_01045760;
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
LAB_01045760:
      sVar1 = *(short *)((long)param_1 + 0xcae);
      uVar14 = local_170;
      goto joined_r0x01045764;
    }
                    /* catch() { ... } // from try @ 01044e54 with catch @ 01045994 */
                    /* catch() { ... } // from try @ 01044dc4 with catch @ 01045998 */
                    /* catch() { ... } // from try @ 01044cec with catch @ 0104599c */
                    /* catch() { ... } // from try @ 01044e9c with catch @ 010459a0 */
                    /* catch() { ... } // from try @ 01044e0c with catch @ 010459a4 */
                    /* catch() { ... } // from try @ 01044d34 with catch @ 010459a8 */
    _lws_log(4,"%s: ending deprecated context\n","lws_service_fd_tsi");
                    /* catch() { ... } // from try @ 01044ee4 with catch @ 010459ac */
    __pid = getpid();
    kill(__pid,2);
LAB_010459b8:
    uVar19 = 0;
                    /* catch() { ... } // from try @ 01045380 with catch @ 010459bc */
                    /* catch() { ... } // from try @ 01044bd0 with catch @ 010459c0 */
                    /* catch() { ... } // from try @ 01044bc4 with catch @ 010459c4 */
    if (*(long *)(lVar3 + 0x28) == local_68) {
      return;
    }
    goto LAB_0104589c;
  }
  bVar4 = false;
  sVar1 = *(short *)((long)param_1 + 0xcae);
  uVar14 = local_170;
joined_r0x01045764:
  if (sVar1 != 0) {
                    /* catch() { ... } // from try @ 01045530 with catch @ 01045768 */
    if ((long)param_1[1] < (long)(uVar14 + 10)) {
      uVar20 = param_1[0x106];
      param_1[1] = uVar14;
                    /* catch() { ... } // from try @ 010454f4 with catch @ 01045788 */
      local_170 = uVar14;
      if (uVar20 == 0) goto LAB_010458a0;
      do {
        while (0 < *(int *)(uVar20 + 0x1dc)) {
                    /* catch() { ... } // from try @ 010454c8 with catch @ 01045798 */
          uVar19 = 0;
          do {
            for (lVar17 = *(long *)(*(long *)(uVar20 + 0x1a8) + uVar19 * 8); lVar17 != 0;
                lVar17 = *(long *)(lVar17 + 600)) {
                    /* catch() { ... } // from try @ 0104548c with catch @ 010457b8 */
              if ((*(char *)(lVar17 + 0x2ff) == '\x05') &&
                 ((*(byte *)(lVar17 + 0x2f4) >> 6 & 1) == 0)) {
                uVar8 = *(uint *)(lVar17 + 0x106);
                    /* catch() { ... } // from try @ 01045460 with catch @ 010457c8 */
                if (((uVar8 >> 0x10 & 1) == 0) &&
                   ((*(long *)(lVar17 + 0x58) != 0 && (*(long *)(lVar17 + 0x58) < (long)uVar14)))) {
                  *(uint *)(lVar17 + 0x106) = uVar8 | 0x10000;
                    /* catch() { ... } // from try @ 01045424 with catch @ 010457e8 */
                    /* catch() { ... } // from try @ 01044a74 with catch @ 010457ec */
                  lws_set_timeout(lVar17,0x10,(int)param_1[400]);
                    /* catch() { ... } // from try @ 01045358 with catch @ 010457f0 */
                  lws_callback_on_writable(lVar17);
                  *(ulong *)(lVar17 + 0x58) =
                       local_170 + *(ushort *)(*(long *)(lVar17 + 0x220) + 0xcae);
                  uVar14 = local_170;
                }
              }
                    /* catch() { ... } // from try @ 0104516c with catch @ 01045810 */
            }
                    /* catch() { ... } // from try @ 01045124 with catch @ 01045814 */
                    /* catch() { ... } // from try @ 010450f8 with catch @ 01045818 */
            uVar19 = uVar19 + 1;
                    /* catch() { ... } // from try @ 010450bc with catch @ 0104581c */
                    /* catch() { ... } // from try @ 01045090 with catch @ 01045820 */
          } while ((long)uVar19 < (long)*(int *)(uVar20 + 0x1dc));
                    /* catch() { ... } // from try @ 01045054 with catch @ 01045824 */
          uVar20 = *(ulong *)(uVar20 + 0x158);
                    /* catch() { ... } // from try @ 01045028 with catch @ 01045828 */
          if (uVar20 == 0) goto joined_r0x01045840;
        }
                    /* catch() { ... } // from try @ 010455c4 with catch @ 01045830 */
        uVar19 = 0;
                    /* catch() { ... } // from try @ 010453f0 with catch @ 01045834 */
        uVar20 = *(ulong *)(uVar20 + 0x158);
                    /* catch() { ... } // from try @ 01044fec with catch @ 01045838 */
      } while (uVar20 != 0);
    }
    else {
LAB_010458a0:
      uVar19 = 0;
                    /* catch() { ... } // from try @ 010454a4 with catch @ 010458a4 */
    }
joined_r0x01045840:
                    /* catch() { ... } // from try @ 01044f84 with catch @ 01045840 */
    if (param_2 != (int *)0x0) goto LAB_01045844;
LAB_010458ac:
    uVar19 = 0;
    if (*(long *)(lVar3 + 0x28) == local_68) {
      return;
    }
    goto LAB_0104589c;
  }
  uVar19 = 0;
  if (param_2 == (int *)0x0) goto LAB_010458ac;
LAB_01045844:
                    /* catch() { ... } // from try @ 010449d8 with catch @ 01045844 */
  if (bVar4) goto LAB_010458ac;
                    /* catch() { ... } // from try @ 01044988 with catch @ 01045848 */
  plVar18 = *(long **)(param_1[0x105] + (long)*param_2 * 8);
  if (plVar18 == (long *)0x0) goto LAB_010459b8;
                    /* catch() { ... } // from try @ 01045634 with catch @ 0104585c */
                    /* catch() { ... } // from try @ 01045610 with catch @ 01045860 */
                    /* catch() { ... } // from try @ 01045564 with catch @ 01045864 */
  if (((*(ushort *)((long)param_2 + 6) & 0x18) != 0) &&
     ((*(ushort *)((long)param_2 + 6) & *(ushort *)(param_2 + 1) & 1) == 0)) {
switchD_0104596c_caseD_2:
    *(uint *)((long)plVar18 + 0x2f4) = *(uint *)((long)plVar18 + 0x2f4) | 0x40;
LAB_0104587c:
                    /* catch() { ... } // from try @ 0104550c with catch @ 01045880 */
    FUN_010417b8(plVar18,0);
    goto LAB_01045888;
  }
                    /* catch() { ... } // from try @ 010453cc with catch @ 010458dc */
                    /* catch() { ... } // from try @ 01045244 with catch @ 010458e0 */
                    /* catch() { ... } // from try @ 01045180 with catch @ 010458e4 */
                    /* catch() { ... } // from try @ 01045138 with catch @ 010458e8 */
                    /* catch() { ... } // from try @ 01044ca0 with catch @ 010458ec */
                    /* catch() { ... } // from try @ 01045314 with catch @ 010458f0 */
                    /* catch() { ... } // from try @ 010452e8 with catch @ 010458f4 */
                    /* catch() { ... } // from try @ 010450d4 with catch @ 010458f8 */
  if ((*(char *)((long)plVar18 + 0x2ff) == '\f') &&
     ((iVar7 = lws_is_ssl(plVar18), iVar7 != 0 && ((SSL *)plVar18[0x56] != (SSL *)0x0)))) {
                    /* catch() { ... } // from try @ 0104506c with catch @ 010458fc */
    iVar7 = SSL_shutdown((SSL *)plVar18[0x56]);
                    /* catch() { ... } // from try @ 01045004 with catch @ 01045900 */
                    /* catch() { ... } // from try @ 01044c54 with catch @ 01045904 */
    if (iVar7 == 0) {
LAB_01045938:
                    /* catch() { ... } // from try @ 01044db0 with catch @ 01045938 */
      uVar12 = 1;
    }
    else {
                    /* catch() { ... } // from try @ 01044c18 with catch @ 01045908 */
                    /* catch() { ... } // from try @ 010452ac with catch @ 0104590c */
                    /* catch() { ... } // from try @ 01045280 with catch @ 01045910 */
      if ((iVar7 == 1) || (uVar8 = SSL_get_error((SSL *)plVar18[0x56],iVar7), (uVar8 | 4) == 5)) {
LAB_01045b68:
        shutdown((int)plVar18[0x5a],1);
        goto LAB_0104587c;
      }
      iVar7 = SSL_want((SSL *)plVar18[0x56]);
                    /* catch() { ... } // from try @ 01044f9c with catch @ 01045930 */
                    /* catch() { ... } // from try @ 01044e88 with catch @ 01045934 */
      if (iVar7 == 3) goto LAB_01045938;
      iVar7 = SSL_want((SSL *)plVar18[0x56]);
      if (iVar7 != 2) goto LAB_01045b68;
      uVar12 = 4;
    }
                    /* catch() { ... } // from try @ 01044cd8 with catch @ 0104593c */
                    /* catch() { ... } // from try @ 01044f18 with catch @ 01045940 */
                    /* catch() { ... } // from try @ 01044e40 with catch @ 01045944 */
    FUN_01046364(plVar18,0,uVar12);
                    /* catch() { ... } // from try @ 01044d68 with catch @ 01045948 */
    uVar19 = 0;
                    /* catch() { ... } // from try @ 01044d20 with catch @ 0104594c */
    goto LAB_01045dd4;
  }
                    /* catch() { ... } // from try @ 01044ed0 with catch @ 01045950 */
                    /* catch() { ... } // from try @ 01044df8 with catch @ 01045954 */
                    /* catch() { ... } // from try @ 01044c30 with catch @ 01045958 */
                    /* catch() { ... } // from try @ 0104525c with catch @ 0104595c */
                    /* catch() { ... } // from try @ 010452c4 with catch @ 0104596c */
  switch(*(undefined1 *)((long)plVar18 + 0x2fe)) {
  case 0:
  case 1:
  case 6:
  case 8:
  case 10:
  case 0x20:
    if (*(char *)((long)plVar18 + 0x2ff) == '\x06') goto LAB_01045dd4;
  case 0xc:
    iVar7 = lws_server_socket_service(param_1,plVar18,param_2);
                    /* catch() { ... } // from try @ 01044d7c with catch @ 0104598c */
joined_r0x01045ac0:
    if (iVar7 != 0) {
LAB_01045888:
      uVar19 = 1;
      if (*(long *)(lVar3 + 0x28) == local_68) {
        return;
      }
      goto LAB_0104589c;
    }
    break;
  case 2:
    goto switchD_0104596c_caseD_2;
  case 3:
  case 4:
  case 5:
  case 0x21:
                    /* catch() { ... } // from try @ 01045330 with catch @ 010459d0
                       catch() { ... } // from try @ 01045360 with catch @ 010459d0
                       catch() { ... } // from try @ 0104539c with catch @ 010459d0 */
                    /* catch() { ... } // from try @ 010451d0 with catch @ 010459d4 */
                    /* catch() { ... } // from try @ 010451e8 with catch @ 010459e4 */
                    /* catch() { ... } // from try @ 010451f8 with catch @ 010459f4 */
    if (((((*(byte *)((long)param_2 + 6) >> 2 & 1) != 0) &&
         (*(byte *)((long)plVar18 + 0x2ff) < 0x10)) &&
        ((1 << (ulong)(*(byte *)((long)plVar18 + 0x2ff) & 0x1f) & 52000U) != 0)) &&
       (iVar7 = lws_handle_POLLOUT_event(plVar18,param_2), iVar7 != 0)) {
      if (*(char *)((long)plVar18 + 0x2ff) == '\t') {
        *(undefined1 *)((long)plVar18 + 0x2ff) = 0xb;
      }
      goto LAB_0104587c;
    }
    if (*(byte *)((long)plVar18 + 0x2ff) - 8 < 3) {
      lws_rx_flow_control(plVar18,1);
                    /* try { // try from 01045a40 to 01145b2b has its CatchHandler @ 01045a40
                       catch() { ... } // from try @ 01045a40 with catch @ 01045a40
                       catch() { ... } // from try @ 01045b84 with catch @ 01045a40
                       catch() { ... } // from try @ 01045d30 with catch @ 01045a40 */
      uVar8 = *(uint *)((long)plVar18 + 0x106) & 0xffff7fff;
      *(uint *)((long)plVar18 + 0x106) = uVar8;
LAB_01045a60:
      if (*(char *)((long)plVar18 + 0x307) == '\0') {
        cVar15 = *(char *)((long)plVar18 + 0x2ff);
        if (((uVar8 >> 0xe & 1) != 0) && (cVar15 == '\x05')) {
          if (*(char *)((long)plVar18 + 0x2fe) == '\x04') {
            uVar8 = FUN_0104e820(plVar18,0);
            uVar19 = (ulong)(uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU));
          }
          else {
            uVar19 = FUN_010490d8(plVar18,0);
            uVar19 = uVar19 & 0xffffffff;
          }
          goto LAB_01045dd4;
        }
        if ((uVar8 >> 0xe & 1) == 0) {
          if (plVar18[0x50] != 0) {
                    /* try { // try from 01045b84 to 01145d1f has its CatchHandler @ 01045a40 */
            bVar4 = true;
            local_168 = plVar18[0x50] + (ulong)*(uint *)((long)plVar18 + 0x2dc);
            local_160 = (int)plVar18[0x5b] - *(uint *)((long)plVar18 + 0x2dc);
            goto LAB_01045ba0;
          }
          if ((*(ushort *)((long)param_2 + 6) & *(ushort *)(param_2 + 1) & 1) != 0) {
            bVar4 = false;
            uVar8 = 0;
            while (*(char *)((long)plVar18 + 0x307) == '\0') {
              lVar17 = *plVar18;
              if (lVar17 == 0) {
                if (*(char *)((long)plVar18 + 0x2fe) != '!') {
                  local_168 = param_1[lVar21 * 0xdf + 0xf7];
                    /* try { // try from 01045d20 to 01145d2f has its CatchHandler @ 01045d94 */
                  if ((cVar15 == '\x05') && (*(char *)((long)plVar18 + 0x2fc) != '\0')) {
                    puVar16 = (uint *)(plVar18 + 8);
                  }
                  else {
                    puVar16 = (uint *)((long)param_1 + 0xc84);
                  }
                    /* catch() { ... } // from try @ 01045b2c with catch @ 01045d94
                       catch() { ... } // from try @ 01045d20 with catch @ 01045d94 */
                  local_160 = *(uint *)((long)param_1 + 0xc84);
                  if (*puVar16 <= *(uint *)((long)param_1 + 0xc84)) {
                    local_160 = *puVar16;
                  }
                  uVar10 = local_160;
                  if ((int)uVar8 <= (int)local_160) {
                    uVar10 = uVar8;
                  }
                  uVar8 = local_160;
                  if (uVar10 != 0) {
                    uVar8 = uVar10;
                  }
                  local_160 = lws_ssl_capable_read(plVar18,local_168,uVar8);
                  if (local_160 + 1 < 2) goto LAB_0104587c;
                  if (local_160 != -2) {
LAB_01045ba0:
                    cVar15 = *(char *)((long)plVar18 + 0x2fe);
                    goto joined_r0x01045ba8;
                  }
                  break;
                }
LAB_01045bac:
                if ((*(uint *)((long)plVar18 + 0x2f4) >> 0x11 & 1) == 0) {
                  *(uint *)((long)plVar18 + 0x2f4) = *(uint *)((long)plVar18 + 0x2f4) | 0x8000000;
                  FUN_01046364(plVar18,1,0);
                  iVar7 = FUN_01043028(*(undefined8 *)(plVar18[0x49] + 8),plVar18,0x2e,plVar18[0x4e]
                                       ,0,0);
                  if (iVar7 != 0) goto LAB_0104587c;
                  break;
                }
              }
              else {
                local_160 = (int)*(short *)(lVar17 + 0xb5e) - (int)*(short *)(lVar17 + 0xb5c);
                local_168 = *plVar18 + (long)*(short *)(*plVar18 + 0xb5c) + 0x35b;
                cVar15 = *(char *)((long)plVar18 + 0x2fe);
joined_r0x01045ba8:
                if (cVar15 == '!') goto LAB_01045bac;
              }
              do {
                iVar7 = FUN_010566c8(plVar18,0xb,&local_168,0);
                if (iVar7 < 0) goto LAB_0104587c;
                if ((local_160 != 0) && (iVar9 = lws_read(plVar18,local_168), iVar9 < 0))
                goto LAB_01045dd0;
                local_168 = 0;
                local_160 = 0;
              } while (iVar7 != 0);
              if (*plVar18 != 0) {
                FUN_01047a8c(plVar18);
                FUN_01047ae8(plVar18,0);
              }
              uVar10 = lws_ssl_pending(plVar18);
              if (uVar10 == 0) {
                if (((bVar4) && (plVar18[0x50] != 0)) &&
                   (*(int *)((long)plVar18 + 0x2dc) == (int)plVar18[0x5b])) {
                  thunk_FUN_0104b1cc(plVar18[0x50],0,"free");
                  plVar18[0x50] = 0;
                  FUN_01042eb8(plVar18);
                }
                break;
              }
              cVar15 = *(char *)((long)plVar18 + 0x2ff);
              if ((cVar15 == '\x05') && (*(char *)((long)plVar18 + 0x2fc) != '\0')) {
                cVar15 = '\x05';
                uVar8 = *(uint *)(plVar18 + 8);
                if (uVar10 <= *(uint *)(plVar18 + 8)) {
                  uVar8 = uVar10;
                }
              }
              else {
                    /* try { // try from 01045d30 to 01145daf has its CatchHandler @ 01045a40 */
                uVar8 = *(uint *)((long)param_1 + 0xc84);
                if (uVar10 <= *(uint *)((long)param_1 + 0xc84)) {
                  uVar8 = uVar10;
                }
              }
            }
          }
        }
      }
    }
    else {
      uVar8 = *(uint *)((long)plVar18 + 0x106);
      if ((uVar8 >> 0xf & 1) == 0) goto LAB_01045a60;
    }
    break;
  default:
    if (((*(byte *)((long)param_2 + 6) >> 2 & 1) != 0) &&
       (iVar7 = lws_handle_POLLOUT_event(plVar18,param_2), iVar7 != 0)) goto LAB_0104587c;
    iVar7 = FUN_0104c03c(param_1,plVar18,param_2);
    goto joined_r0x01045ac0;
  case 0xd:
    uVar2 = *(ushort *)((long)param_2 + 6);
    if ((uVar2 >> 2 & 1) != 0) {
      iVar7 = FUN_01044dc0(plVar18);
      iVar9 = FUN_01046364(plVar18,4,0);
      if (iVar9 == 0) {
        if (iVar7 != 0) goto LAB_0104587c;
        uVar2 = *(ushort *)((long)param_2 + 6);
        goto joined_r0x01045b08;
      }
      goto LAB_01045888;
    }
joined_r0x01045b08:
    if ((uVar2 & 1) != 0) {
      uVar13 = 0x40;
                    /* try { // try from 01045b2c to 01145b83 has its CatchHandler @ 01045d94 */
      if (*(char *)((long)plVar18 + 0x2fe) != '\r') {
        uVar13 = 0x3b;
      }
      iVar7 = FUN_01043028(*(undefined8 *)(plVar18[0x49] + 8),plVar18,uVar13,plVar18[0x4e],0,0);
      if (iVar7 != 0) goto LAB_0104587c;
      uVar2 = *(ushort *)((long)param_2 + 6);
    }
    if ((uVar2 & 0x18) != 0) goto LAB_0104587c;
  }
LAB_01045dd0:
  uVar19 = 0;
LAB_01045dd4:
  *(undefined2 *)((long)param_2 + 6) = 0;
  uVar19 = uVar19 & 0xffffffff;
  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* catch() { ... } // from try @ 0104543c with catch @ 010458c8 */
    return;
  }
LAB_0104589c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar19);
}

