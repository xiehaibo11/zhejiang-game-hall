
/* WARNING: Removing unreachable block (ram,0x00aa32cc) */

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
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if ((*(byte *)((long)param_1 + 0xc94) >> 4 & 1) == 0) {
    lws_protocol_init(param_1);
  }
  time((time_t *)&local_170);
  if (((long)param_1[2] < 0x57442252) && (0x57442252 < (long)local_170)) {
    param_1[2] = local_170;
  }
  lVar21 = (long)param_3;
  if (*param_1 != local_170) {
    *param_1 = local_170;
    lws_plat_service_periodic(param_1);
    FUN_00aa848c(param_1,0);
    if (((*(byte *)((long)param_1 + 0xc94) & 1) == 0) || ((int)param_1[0x18e] != 0)) {
      if (param_2 == (int *)0x0) {
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
          uVar20 = local_170;
          uVar19 = *(ulong *)(uVar14 + 0x260);
          iVar9 = *(int *)(uVar14 + 0x2d0);
          iVar6 = FUN_00ab3f44(uVar14,0x12,0,local_170 & 0xffffffff);
          if (iVar6 < 0) {
LAB_00aa2e68:
            bVar5 = 0;
          }
          else {
            bVar5 = 0;
            if (*(char *)(uVar14 + 0x303) != '\0') {
              if ((long)(uVar20 & 0xffffffff) <= *(long *)(uVar14 + 0x218)) goto LAB_00aa2e68;
              *(uint *)(uVar14 + 0x2f4) = *(uint *)(uVar14 + 0x2f4) | 0x40;
              if (*(char *)(uVar14 + 0x2fe) == '\'') {
                (**(code **)(*(long *)(*(long *)(uVar14 + 0x228) + 0x188) + 8))
                          (uVar14,1,*(undefined8 *)(uVar14 + 0x270),"Timed out waiting SSL",0x15);
              }
              FUN_00a9f034(uVar14,0);
              bVar5 = 1;
            }
          }
          if ((bool)(iVar9 == iVar7 & bVar5)) {
            bVar4 = true;
          }
          uVar14 = uVar19;
        } while (uVar19 != 0);
      }
      plVar18 = (long *)param_1[lVar21 * 0xdf + 0x22];
      if (plVar18 != (long *)0x0) {
        do {
          while ((((*(char *)((long)plVar18 + 0xb8a) != '\0' && (lVar17 = plVar18[1], lVar17 != 0))
                  && (plVar18[0x5f] != 0)) &&
                 ((*(long *)(lVar17 + 0x228) == 0 ||
                  ((long)*(int *)(*(long *)(lVar17 + 0x228) + 0x1f0) + 0x3c <=
                   (long)(local_170 - plVar18[0x5f])))))) {
            local_168 = local_168 & 0xffffffffffffff00;
            lws_get_peer_simple(lVar17,&local_168,0x100);
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
                  local_69 = 0;
                  _lws_log(4,"   %s = %s\n",pcVar11,&local_168);
                }
                iVar9 = iVar9 + 1;
                pcVar11 = (char *)lws_token_to_string(iVar9);
              } while (pcVar11 != (char *)0x0);
            }
            FUN_00aa5308(lVar17);
            FUN_00aa5364(lVar17,0);
            if (*(int *)(lVar17 + 0x2d0) == iVar7) {
              bVar4 = true;
            }
            FUN_00a9f034(lVar17,0);
            plVar18 = (long *)param_1[lVar21 * 0xdf + 0x22];
            if (plVar18 == (long *)0x0) goto LAB_00aa2fdc;
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
LAB_00aa2fdc:
      sVar1 = *(short *)((long)param_1 + 0xcae);
      uVar14 = local_170;
      goto joined_r0x00aa2fe0;
    }
    _lws_log(4,"%s: ending deprecated context\n","lws_service_fd_tsi");
    __pid = getpid();
    kill(__pid,2);
LAB_00aa3234:
    uVar19 = 0;
    if (*(long *)(lVar3 + 0x28) == local_68) {
      return;
    }
    goto LAB_00aa3118;
  }
  bVar4 = false;
  sVar1 = *(short *)((long)param_1 + 0xcae);
  uVar14 = local_170;
joined_r0x00aa2fe0:
  if (sVar1 != 0) {
    if ((long)param_1[1] < (long)(uVar14 + 10)) {
      uVar20 = param_1[0x106];
      param_1[1] = uVar14;
      local_170 = uVar14;
      if (uVar20 == 0) goto LAB_00aa311c;
      do {
        while (0 < *(int *)(uVar20 + 0x1dc)) {
          uVar19 = 0;
          do {
            for (lVar17 = *(long *)(*(long *)(uVar20 + 0x1a8) + uVar19 * 8); lVar17 != 0;
                lVar17 = *(long *)(lVar17 + 600)) {
              if ((*(char *)(lVar17 + 0x2ff) == '\x05') &&
                 ((*(byte *)(lVar17 + 0x2f4) >> 6 & 1) == 0)) {
                uVar8 = *(uint *)(lVar17 + 0x106);
                if (((uVar8 >> 0x10 & 1) == 0) &&
                   ((*(long *)(lVar17 + 0x58) != 0 && (*(long *)(lVar17 + 0x58) < (long)uVar14)))) {
                  *(uint *)(lVar17 + 0x106) = uVar8 | 0x10000;
                  lws_set_timeout(lVar17,0x10,(int)param_1[400]);
                  lws_callback_on_writable(lVar17);
                  *(ulong *)(lVar17 + 0x58) =
                       local_170 + *(ushort *)(*(long *)(lVar17 + 0x220) + 0xcae);
                  uVar14 = local_170;
                }
              }
            }
            uVar19 = uVar19 + 1;
          } while ((long)uVar19 < (long)*(int *)(uVar20 + 0x1dc));
          uVar20 = *(ulong *)(uVar20 + 0x158);
          if (uVar20 == 0) goto joined_r0x00aa30bc;
        }
        uVar19 = 0;
        uVar20 = *(ulong *)(uVar20 + 0x158);
      } while (uVar20 != 0);
    }
    else {
LAB_00aa311c:
      uVar19 = 0;
    }
joined_r0x00aa30bc:
    if (param_2 != (int *)0x0) goto LAB_00aa30c0;
LAB_00aa3128:
    uVar19 = 0;
    if (*(long *)(lVar3 + 0x28) == local_68) {
      return;
    }
    goto LAB_00aa3118;
  }
  uVar19 = 0;
  if (param_2 == (int *)0x0) goto LAB_00aa3128;
LAB_00aa30c0:
  if (bVar4) goto LAB_00aa3128;
  plVar18 = *(long **)(param_1[0x105] + (long)*param_2 * 8);
  if (plVar18 == (long *)0x0) goto LAB_00aa3234;
  if (((*(ushort *)((long)param_2 + 6) & 0x18) != 0) &&
     ((*(ushort *)((long)param_2 + 6) & *(ushort *)(param_2 + 1) & 1) == 0)) {
switchD_00aa31e8_caseD_2:
    *(uint *)((long)plVar18 + 0x2f4) = *(uint *)((long)plVar18 + 0x2f4) | 0x40;
LAB_00aa30f8:
    FUN_00a9f034(plVar18,0);
    goto LAB_00aa3104;
  }
  if ((*(char *)((long)plVar18 + 0x2ff) == '\f') &&
     ((iVar7 = lws_is_ssl(plVar18), iVar7 != 0 && ((SSL *)plVar18[0x56] != (SSL *)0x0)))) {
    iVar7 = SSL_shutdown((SSL *)plVar18[0x56]);
    if (iVar7 == 0) {
LAB_00aa31b4:
      uVar12 = 1;
    }
    else {
      if ((iVar7 == 1) || (uVar8 = SSL_get_error((SSL *)plVar18[0x56],iVar7), (uVar8 | 4) == 5)) {
LAB_00aa33e4:
        shutdown((int)plVar18[0x5a],1);
        goto LAB_00aa30f8;
      }
      iVar7 = SSL_want((SSL *)plVar18[0x56]);
      if (iVar7 == 3) goto LAB_00aa31b4;
      iVar7 = SSL_want((SSL *)plVar18[0x56]);
      if (iVar7 != 2) goto LAB_00aa33e4;
      uVar12 = 4;
    }
    FUN_00aa3be0(plVar18,0,uVar12);
    uVar19 = 0;
    goto LAB_00aa3650;
  }
  switch(*(undefined1 *)((long)plVar18 + 0x2fe)) {
  case 0:
  case 1:
  case 6:
  case 8:
  case 10:
  case 0x20:
    if (*(char *)((long)plVar18 + 0x2ff) == '\x06') goto LAB_00aa3650;
  case 0xc:
    iVar7 = lws_server_socket_service(param_1,plVar18,param_2);
joined_r0x00aa333c:
    if (iVar7 != 0) {
LAB_00aa3104:
      uVar19 = 1;
      if (*(long *)(lVar3 + 0x28) == local_68) {
        return;
      }
      goto LAB_00aa3118;
    }
    break;
  case 2:
    goto switchD_00aa31e8_caseD_2;
  case 3:
  case 4:
  case 5:
  case 0x21:
    if (((((*(byte *)((long)param_2 + 6) >> 2 & 1) != 0) &&
         (*(byte *)((long)plVar18 + 0x2ff) < 0x10)) &&
        ((1 << (ulong)(*(byte *)((long)plVar18 + 0x2ff) & 0x1f) & 52000U) != 0)) &&
       (iVar7 = lws_handle_POLLOUT_event(plVar18,param_2), iVar7 != 0)) {
      if (*(char *)((long)plVar18 + 0x2ff) == '\t') {
        *(undefined1 *)((long)plVar18 + 0x2ff) = 0xb;
      }
      goto LAB_00aa30f8;
    }
    if (*(byte *)((long)plVar18 + 0x2ff) - 8 < 3) {
      lws_rx_flow_control(plVar18,1);
      uVar8 = *(uint *)((long)plVar18 + 0x106) & 0xffff7fff;
      *(uint *)((long)plVar18 + 0x106) = uVar8;
LAB_00aa32dc:
      if (*(char *)((long)plVar18 + 0x307) == '\0') {
        cVar15 = *(char *)((long)plVar18 + 0x2ff);
        if (((uVar8 >> 0xe & 1) != 0) && (cVar15 == '\x05')) {
          if (*(char *)((long)plVar18 + 0x2fe) == '\x04') {
            uVar8 = FUN_00aac09c(plVar18,0);
            uVar19 = (ulong)(uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU));
          }
          else {
            uVar19 = FUN_00aa6954(plVar18,0);
            uVar19 = uVar19 & 0xffffffff;
          }
          goto LAB_00aa3650;
        }
        if ((uVar8 >> 0xe & 1) == 0) {
          if (plVar18[0x50] != 0) {
            bVar4 = true;
            local_168 = plVar18[0x50] + (ulong)*(uint *)((long)plVar18 + 0x2dc);
            local_160 = (int)plVar18[0x5b] - *(uint *)((long)plVar18 + 0x2dc);
            goto LAB_00aa341c;
          }
          if ((*(ushort *)((long)param_2 + 6) & *(ushort *)(param_2 + 1) & 1) != 0) {
            bVar4 = false;
            uVar8 = 0;
            while (*(char *)((long)plVar18 + 0x307) == '\0') {
              lVar17 = *plVar18;
              if (lVar17 == 0) {
                if (*(char *)((long)plVar18 + 0x2fe) != '!') {
                  local_168 = param_1[lVar21 * 0xdf + 0xf7];
                  if ((cVar15 == '\x05') && (*(char *)((long)plVar18 + 0x2fc) != '\0')) {
                    puVar16 = (uint *)(plVar18 + 8);
                  }
                  else {
                    puVar16 = (uint *)((long)param_1 + 0xc84);
                  }
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
                  if (local_160 + 1 < 2) goto LAB_00aa30f8;
                  if (local_160 != -2) {
LAB_00aa341c:
                    cVar15 = *(char *)((long)plVar18 + 0x2fe);
                    goto joined_r0x00aa3424;
                  }
                  break;
                }
LAB_00aa3428:
                if ((*(uint *)((long)plVar18 + 0x2f4) >> 0x11 & 1) == 0) {
                  *(uint *)((long)plVar18 + 0x2f4) = *(uint *)((long)plVar18 + 0x2f4) | 0x8000000;
                  FUN_00aa3be0(plVar18,1,0);
                  iVar7 = FUN_00aa08a4(*(undefined8 *)(plVar18[0x49] + 8),plVar18,0x2e,plVar18[0x4e]
                                       ,0,0);
                  if (iVar7 != 0) goto LAB_00aa30f8;
                  break;
                }
              }
              else {
                local_160 = (int)*(short *)(lVar17 + 0xb5e) - (int)*(short *)(lVar17 + 0xb5c);
                local_168 = *plVar18 + (long)*(short *)(*plVar18 + 0xb5c) + 0x35b;
                cVar15 = *(char *)((long)plVar18 + 0x2fe);
joined_r0x00aa3424:
                if (cVar15 == '!') goto LAB_00aa3428;
              }
              do {
                iVar7 = FUN_00ab3f44(plVar18,0xb,&local_168,0);
                if (iVar7 < 0) goto LAB_00aa30f8;
                if ((local_160 != 0) && (iVar9 = lws_read(plVar18,local_168), iVar9 < 0))
                goto LAB_00aa364c;
                local_168 = 0;
                local_160 = 0;
              } while (iVar7 != 0);
              if (*plVar18 != 0) {
                FUN_00aa5308(plVar18);
                FUN_00aa5364(plVar18,0);
              }
              uVar10 = lws_ssl_pending(plVar18);
              if (uVar10 == 0) {
                if (((bVar4) && (plVar18[0x50] != 0)) &&
                   (*(int *)((long)plVar18 + 0x2dc) == (int)plVar18[0x5b])) {
                  thunk_FUN_00aa8a48(plVar18[0x50],0,"free");
                  plVar18[0x50] = 0;
                  FUN_00aa0734(plVar18);
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
      if ((uVar8 >> 0xf & 1) == 0) goto LAB_00aa32dc;
    }
    break;
  default:
    if (((*(byte *)((long)param_2 + 6) >> 2 & 1) != 0) &&
       (iVar7 = lws_handle_POLLOUT_event(plVar18,param_2), iVar7 != 0)) goto LAB_00aa30f8;
    iVar7 = FUN_00aa98b8(param_1,plVar18,param_2);
    goto joined_r0x00aa333c;
  case 0xd:
    uVar2 = *(ushort *)((long)param_2 + 6);
    if ((uVar2 >> 2 & 1) != 0) {
      iVar7 = FUN_00aa263c(plVar18);
      iVar9 = FUN_00aa3be0(plVar18,4,0);
      if (iVar9 == 0) {
        if (iVar7 != 0) goto LAB_00aa30f8;
        uVar2 = *(ushort *)((long)param_2 + 6);
        goto joined_r0x00aa3384;
      }
      goto LAB_00aa3104;
    }
joined_r0x00aa3384:
    if ((uVar2 & 1) != 0) {
      uVar13 = 0x40;
      if (*(char *)((long)plVar18 + 0x2fe) != '\r') {
        uVar13 = 0x3b;
      }
      iVar7 = FUN_00aa08a4(*(undefined8 *)(plVar18[0x49] + 8),plVar18,uVar13,plVar18[0x4e],0,0);
      if (iVar7 != 0) goto LAB_00aa30f8;
      uVar2 = *(ushort *)((long)param_2 + 6);
    }
    if ((uVar2 & 0x18) != 0) goto LAB_00aa30f8;
  }
LAB_00aa364c:
  uVar19 = 0;
LAB_00aa3650:
  *(undefined2 *)((long)param_2 + 6) = 0;
  uVar19 = uVar19 & 0xffffffff;
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
LAB_00aa3118:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar19);
}

