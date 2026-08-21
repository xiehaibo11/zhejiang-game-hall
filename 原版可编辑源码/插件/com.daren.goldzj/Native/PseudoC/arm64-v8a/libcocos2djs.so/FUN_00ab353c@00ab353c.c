
void FUN_00ab353c(long param_1,long param_2)

{
  long *plVar1;
  void *__dest;
  bool bVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  size_t __n;
  undefined8 uVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulong uVar13;
  byte bVar14;
  char *pcVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  code *pcVar19;
  undefined8 *puVar20;
  byte *pbVar21;
  byte *pbVar22;
  int local_124;
  char *local_118;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 *local_c8;
  undefined1 auStack_bc [20];
  char *local_a8;
  int local_9c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  bVar14 = *(byte *)(param_2 + 0x304);
  iVar6 = lws_hdr_total_length(param_2,3);
  if ((iVar6 != 0) && (iVar6 = lws_hdr_total_length(param_2,0x20), iVar6 != 0)) {
    iVar6 = lws_hdr_total_length(param_2,0x20);
    if (iVar6 < 0x80) {
      lVar18 = param_1 + (ulong)bVar14 * 0x6f8;
      pcVar15 = *(char **)(lVar18 + 0x7b8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ab346c with catch @ 00ab35d4
                        */
      uVar10 = FUN_00aa581c(param_2,0x20);
      iVar6 = sprintf(pcVar15,"%s258EAFA5-E914-47DA-95CA-C5AB0DC85B11",uVar10);
      lws_SHA1(*(undefined8 *)(lVar18 + 0x7b8),(long)iVar6,auStack_bc);
      iVar6 = lws_b64_encode_string
                        (auStack_bc,0x14,*(undefined8 *)(lVar18 + 0x7b8),
                         *(undefined4 *)(param_1 + 0xc84));
      if (iVar6 < 0) {
        _lws_log(2,"Base64 encoded hash too long\n");
      }
      else {
        iVar7 = FUN_00a9fbb0(param_2);
        if (iVar7 == 0) {
          plVar1 = (long *)(lVar18 + 0x7b8);
          lVar18 = *plVar1;
          __dest = (void *)(lVar18 + 0x90);
          memcpy(__dest,
                 "HTTP/1.1 101 Switching Protocols\r\nUpgrade: WebSocket\r\nConnection: Upgrade\r\nSec-WebSocket-Accept: "
                 ,0x62);
          pcVar9 = (char *)(lVar18 + 0xf1);
          strcpy(pcVar9,(char *)*plVar1);
          pcVar15 = pcVar9 + iVar6;
          iVar7 = lws_hdr_total_length(param_2,0xc);
          if (((iVar7 != 0) && ((char *)**(undefined8 **)(param_2 + 0x248) != (char *)0x0)) &&
             (*(char *)**(undefined8 **)(param_2 + 0x248) != '\0')) {
            builtin_strncpy(pcVar9 + iVar6,"\r\nSec-WebSocket-Protocol: ",0x1b);
            iVar6 = lws_snprintf(pcVar15 + 0x1a,0x80,"%s",**(undefined8 **)(param_2 + 0x248));
            pcVar15 = pcVar15 + 0x1a + iVar6;
          }
          lVar18 = *(long *)(param_2 + 0x220);
          bVar14 = *(byte *)(param_2 + 0x304);
          iVar6 = lws_hdr_total_length(param_2,9);
          local_118 = pcVar15;
          if (iVar6 != 0) {
            lVar16 = lVar18 + (ulong)bVar14 * 0x6f8;
            iVar6 = lws_hdr_copy(param_2,*(undefined8 *)(lVar16 + 0x7b8),
                                 *(undefined4 *)(lVar18 + 0xc84),9);
                    /* catch() { ... } // from try @ 00ab372c with catch @ 00ab36f4 */
            if (iVar6 < 0) goto LAB_00ab3bc0;
            pbVar21 = *(byte **)(lVar16 + 0x7b8);
            bVar5 = true;
            local_124 = 0;
            *(undefined1 *)(param_2 + 0x2fc) = 0;
            do {
              bVar4 = false;
                    /* try { // try from 00ab3724 to 00bb372b has its CatchHandler @ 00ab3740 */
              uVar12 = 0;
              pbVar22 = (byte *)0x0;
                    /* try { // try from 00ab372c to 00bb375b has its CatchHandler @ 00ab36f4 */
LAB_00ab3758:
              do {
                bVar14 = *pbVar21;
                if (bVar14 < 0x2c) goto LAB_00ab378c;
                while (bVar14 != 0x2c) {
                  if (bVar14 == 0x3b) {
                    pbVar21 = pbVar21 + 1;
                    bVar4 = true;
                    pbVar22 = pbVar21;
                    goto LAB_00ab3758;
                  }
                  while( true ) {
                    if (!bVar4) {
                      if (bVar14 != 0x20) {
                        bVar4 = false;
                        pbVar21 = pbVar21 + 1;
                        *(byte *)((long)&local_a8 + (long)(int)uVar12) = bVar14;
                        if (uVar12 < 0x3f) {
                          uVar12 = uVar12 + 1;
                        }
                        goto LAB_00ab3758;
                      }
                      bVar4 = false;
                    }
                    pbVar21 = pbVar21 + 1;
                    bVar14 = *pbVar21;
                    if (0x2b < bVar14) break;
LAB_00ab378c:
                    if ((bVar14 == 0) || (bVar14 == 9)) goto LAB_00ab37b0;
                  }
                }
LAB_00ab37b0:
                *(undefined1 *)((long)&local_a8 + (long)(int)uVar12) = 0;
                if (*pbVar21 == 0) {
                  bVar5 = false;
                  break;
                }
                bVar4 = false;
                pbVar21 = pbVar21 + 1;
                bVar2 = uVar12 == 0;
                uVar12 = 0;
              } while (bVar2);
              if (pbVar22 == (byte *)0x0) {
                pbVar22 = (byte *)0x0;
                puVar11 = *(undefined8 **)(*(long *)(param_2 + 0x228) + 0x1c0);
              }
              else {
                pbVar22 = pbVar22 + -1;
                do {
                  pbVar22 = pbVar22 + 1;
                } while (*pbVar22 == 0x20);
                puVar11 = *(undefined8 **)(*(long *)(param_2 + 0x228) + 0x1c0);
              }
              if (puVar11 != (undefined8 *)0x0) {
                plVar17 = puVar11 + 1;
                lVar18 = *plVar17;
                while (lVar18 != 0) {
                  while (iVar6 = strcmp((char *)&local_a8,(char *)*puVar11), iVar6 == 0) {
                    if ((ulong)*(byte *)(param_2 + 0x2fc) != 0) {
                      uVar13 = 0;
                      do {
                        if (*(undefined8 **)(param_2 + 0x290 + uVar13 * 8) == puVar11)
                        goto LAB_00ab3bc0;
                        uVar13 = uVar13 + 1;
                      } while (uVar13 < *(byte *)(param_2 + 0x2fc));
                    }
                    iVar6 = (**(code **)(*(long *)(param_2 + 0x248) + 8))
                                      (param_2,0x19,*(undefined8 *)(param_2 + 0x270),&local_a8,0);
                    if (iVar6 != 0) break;
                    *(undefined8 **)(param_2 + (ulong)*(byte *)(param_2 + 0x2fc) * 8 + 0x290) =
                         puVar11;
                    pcVar19 = (code *)*plVar17;
                    uVar10 = lws_get_context(param_2);
                    iVar6 = (*pcVar19)(uVar10,puVar11,param_2,4,
                                       param_2 + (ulong)*(byte *)(param_2 + 0x2fc) * 8 + 0x2a0,
                                       &local_c8,0);
                    if (iVar6 != 0) break;
                    if (local_124 < 1) {
                      pcVar9 = local_118 + 0x1c;
                      lVar18 = 0x1c;
                      builtin_strncpy(local_118,"\r\nSec-WebSocket-Extensions: ",0x1d);
                    }
                    else {
                      pcVar9 = local_118 + 1;
                      *local_118 = ',';
                      lVar18 = 1;
                    }
                    local_124 = local_124 + 1;
                    iVar6 = lws_snprintf(pcVar9,pcVar15 + (0xbf - (long)pcVar9),"%s",&local_a8);
                    local_118 = local_118 + iVar6 + lVar18;
                    if (pbVar22 != (byte *)0x0) {
                      uVar13 = (ulong)*pbVar22;
                      do {
                        iVar6 = (int)uVar13;
                        if (iVar6 == 0x20) {
                          do {
                            pbVar22 = pbVar22 + 1;
                          } while (*pbVar22 == 0x20);
                        }
                        else if ((iVar6 == 0) || (iVar6 == 0x2c)) break;
                        pcVar9 = (char *)*local_c8;
                        puVar20 = local_c8;
                        while (pcVar9 != (char *)0x0) {
                          if (*(int *)(puVar20 + 1) == 0) {
                            __n = strlen(pcVar9);
                            iVar6 = strncmp((char *)pbVar22,pcVar9,__n);
                            if (iVar6 == 0) {
                              local_e8 = 0;
                              local_d8 = 0;
                              local_e0 = (undefined4)((ulong)((long)puVar20 - (long)local_c8) >> 4);
                              pcVar19 = (code *)*plVar17;
                              uVar10 = lws_get_context(param_2);
                              iVar6 = (*pcVar19)(uVar10,puVar11,param_2,0x18,
                                                 *(undefined8 *)
                                                  (param_2 + (ulong)*(byte *)(param_2 + 0x2fc) * 8 +
                                                  0x2a0),&local_e8);
                              if (iVar6 == 0) {
                                iVar6 = lws_snprintf(local_118,pcVar15 + (0xbf - (long)local_118),
                                                     &DAT_019a95b0,*puVar20);
                                local_118 = local_118 + iVar6;
                              }
                            }
                          }
                          puVar20 = puVar20 + 2;
                          pcVar9 = (char *)*puVar20;
                        }
                        bVar14 = *pbVar22;
                        if (bVar14 < 0x3c) goto LAB_00ab3a48;
                        do {
                          do {
                            pbVar22 = pbVar22 + 1;
                            bVar14 = *pbVar22;
                          } while (0x3b < bVar14);
LAB_00ab3a48:
                          uVar13 = (ulong)bVar14;
                        } while ((1L << (uVar13 & 0x3f) & 0x800100000000001U) == 0);
                      } while (pbVar22 != (byte *)0x0);
                    }
                    *(char *)(param_2 + 0x2fc) = *(char *)(param_2 + 0x2fc) + '\x01';
                    plVar17 = puVar11 + 4;
                    puVar11 = puVar11 + 3;
                    if (*plVar17 == 0) goto LAB_00ab3aa0;
                  }
                  plVar17 = puVar11 + 4;
                  puVar11 = puVar11 + 3;
                  lVar18 = *plVar17;
                }
              }
LAB_00ab3aa0:
            } while (bVar5);
          }
          local_a8 = local_118 + 2;
          local_118[0] = '\r';
          local_118[1] = '\n';
          *local_a8 = '\0';
          local_9c = (*(int *)plVar1 + *(int *)(param_1 + 0xc84)) - (int)local_a8;
          iVar6 = FUN_00aa08a4(*(undefined8 *)(*(long *)(param_2 + 0x248) + 8),param_2,0x35,
                               *(undefined8 *)(param_2 + 0x270),&local_a8,0);
          if (iVar6 == 0) {
            local_a8[0] = '\r';
            local_a8[1] = '\n';
            local_a8[2] = '\0';
            lVar18 = (long)(local_a8 + 2) - (long)__dest;
            iVar6 = FUN_00ab4250(param_2,0xe,__dest,lVar18);
            if ((iVar6 != 0) || (iVar6 = lws_write(param_2,__dest,lVar18,8), lVar18 == iVar6)) {
              *(undefined1 *)(param_2 + 0x2ff) = 5;
              *(undefined1 *)(param_2 + 0x301) = 0;
              uVar10 = FUN_00aa581c(param_2,0);
              uVar8 = lws_hdr_total_length(param_2,0);
              lVar18 = FUN_00ab049c(param_2,uVar10,uVar8);
              if ((lVar18 == 0) ||
                 ((*(long *)(lVar18 + 0x28) == 0 ||
                  (iVar6 = (**(code **)(*(long *)(param_2 + 0x248) + 8))
                                     (param_2,0x38,*(undefined8 *)(param_2 + 0x270),
                                      *(long *)(lVar18 + 0x28),0), iVar6 == 0)))) {
                uVar10 = 0;
                if (*(long *)(lVar3 + 0x28) == local_68) {
                  return;
                }
              }
              else {
                uVar10 = 1;
                if (*(long *)(lVar3 + 0x28) == local_68) {
                  return;
                }
              }
              goto LAB_00ab3c08;
            }
          }
        }
      }
    }
    else {
      _lws_log(2,"Client key too long %d\n",0x80);
    }
  }
LAB_00ab3bc0:
  uVar10 = 0xffffffff;
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
LAB_00ab3c08:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}

