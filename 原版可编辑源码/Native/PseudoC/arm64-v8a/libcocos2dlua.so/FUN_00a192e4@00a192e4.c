
void FUN_00a192e4(long param_1,char *param_2,uint param_3,ulong param_4)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  undefined4 uVar10;
  char cVar11;
  byte bVar12;
  uint uVar13;
  undefined *puVar14;
  char *pcVar15;
  undefined2 local_4c;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  iVar1 = *(int *)(param_1 + 0x44);
  cVar8 = (char)param_3;
  if (param_3 < 0x80) {
    local_4c = CONCAT11(local_4c._1_1_,cVar8);
    if (cVar8 < '\0') {
      if ((param_3 != 0x5c) && (param_3 != 0x7e)) {
        local_4c = CONCAT11(local_4c._1_1_,cVar8);
      }
      goto LAB_00a193a4;
    }
    uVar9 = 4;
    if (iVar1 == 0) {
      uVar9 = 1;
    }
    uVar6 = (ulong)uVar9;
    if (uVar6 <= param_4) {
      if (iVar1 != 0) {
        param_2[0] = '\x1b';
        param_2[1] = '(';
        param_2[2] = 'B';
        param_2 = param_2 + 3;
      }
      *param_2 = cVar8;
      *(undefined4 *)(param_1 + 0x44) = 0;
      goto LAB_00a19874;
    }
LAB_00a19848:
    uVar6 = 0xfffffffe;
  }
  else {
    if (param_3 == 0x203e) {
      uVar7 = 0x7e;
LAB_00a193a0:
      local_4c = CONCAT11(local_4c._1_1_,uVar7);
LAB_00a193a4:
      iVar5 = FUN_00a153d0(param_1,&local_4c,param_3,2);
      if (iVar5 == 2) {
        cVar8 = (char)local_4c;
        if (-1 < (char)local_4c) goto LAB_00a193ec;
        goto LAB_00a195cc;
      }
      if (iVar5 != -1) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar9 = param_3 - 0x2110;
      if (uVar9 < 0x60) {
        puVar14 = &DAT_0132a092;
LAB_00a19478:
        cVar11 = puVar14[uVar9];
        if (cVar11 == '\0') {
LAB_00a1959c:
          if (param_3 == 0x663b) {
            cVar11 = '6';
            cVar8 = 'z';
          }
          else if (param_3 == 0xffe4) {
            cVar8 = '|';
            cVar11 = '|';
          }
          else {
            if (param_3 != 0xffe2) goto LAB_00a195cc;
            cVar11 = '{';
            cVar8 = '|';
          }
          local_4c = CONCAT11(cVar11,cVar8);
          goto LAB_00a19684;
        }
      }
      else {
        uVar9 = param_3 - 0x2210;
        if (uVar9 < 0x20) {
          puVar14 = &DAT_012fcc74;
          goto LAB_00a19478;
        }
        if (param_3 != 0x22bf) {
          uVar9 = param_3 - 0x2460;
          if (uVar9 < 0x18) {
            puVar14 = &DAT_0132a0f2;
            goto LAB_00a19478;
          }
          if (param_3 >> 3 == 0x603) {
            uVar6 = (ulong)(param_3 - 0x3018);
            puVar14 = &DAT_012fd17c;
LAB_00a19570:
            cVar11 = puVar14[uVar6];
            if (cVar11 != '\0') goto LAB_00a19484;
          }
          else {
            if ((param_3 & 0xfffffff0) == 0x32a0) {
              uVar6 = (ulong)(param_3 - 0x32a0);
              puVar14 = &DAT_012fc654;
              goto LAB_00a19570;
            }
            if ((param_3 & 0xfffffff0) == 0x3230) {
              uVar6 = (ulong)(param_3 - 0x3230);
              puVar14 = &DAT_012fc644;
              goto LAB_00a19570;
            }
            uVar9 = param_3 - 0x3300;
            if (uVar9 < 0xd0) {
              puVar14 = &DAT_0132a10a;
              goto LAB_00a19478;
            }
          }
          goto LAB_00a1959c;
        }
        cVar11 = 'Y';
      }
LAB_00a19484:
      cVar8 = '-';
      cVar11 = cVar11 + ' ';
      local_4c = CONCAT11(cVar11,0x2d);
      if (cVar11 < '\0') goto LAB_00a195cc;
LAB_00a19684:
      uVar9 = 2;
      if (iVar1 != 3) {
        uVar9 = 5;
      }
      uVar6 = (ulong)uVar9;
      if (param_4 < uVar6) goto LAB_00a19848;
      if (iVar1 != 3) {
        param_2[0] = '\x1b';
        param_2[1] = '$';
        param_2[2] = 'B';
        param_2 = param_2 + 3;
      }
      *param_2 = cVar8;
      param_2[1] = cVar11;
      uVar10 = 3;
    }
    else {
      if (param_3 == 0xa5) {
        uVar7 = 0x5c;
        goto LAB_00a193a0;
      }
      if (param_3 - 0xff61 < 0x3f) {
        local_4c = CONCAT11(local_4c._1_1_,cVar8 + '@');
        if ((char)(cVar8 + '@') < '\0') {
          uVar9 = 4;
          if (iVar1 == 2) {
            uVar9 = 1;
          }
          uVar6 = (ulong)uVar9;
          if (uVar6 <= param_4) {
            if (iVar1 != 2) {
              param_2[0] = '\x1b';
              param_2[1] = '(';
              param_2[2] = 'I';
              param_2 = param_2 + 3;
            }
            *param_2 = cVar8 + -0x40;
            *(undefined4 *)(param_1 + 0x44) = 2;
            goto LAB_00a19874;
          }
          goto LAB_00a19848;
        }
        goto LAB_00a193a4;
      }
      if (0x3ab < param_3 - 0xe000) goto LAB_00a193a4;
      cVar11 = (char)((param_3 + 0x2000 & 0xffff) / 0x5e);
      cVar8 = cVar11 + 'u';
      local_4c = CONCAT11((char)(param_3 + 0x2000) + cVar11 * -0x5e + '!',cVar8);
LAB_00a193ec:
      cVar11 = local_4c._1_1_;
      if (-1 < (short)local_4c) goto LAB_00a19684;
LAB_00a195cc:
      if (param_3 - 0xe3ac < 0x3ac) {
        cVar8 = (char)((param_3 + 0x1c54 & 0xffff) / 0x5e);
        cVar11 = cVar8 + 'u';
        bVar12 = (char)(param_3 + 0x1c54) + cVar8 * -0x5e;
LAB_00a19828:
        cVar8 = bVar12 + 0x21;
        local_4c = CONCAT11(cVar8,cVar11);
      }
      else {
        uVar9 = param_3 >> 4;
        if (0x45f < param_3) {
          if (param_3 - 0x2100 < 0x30) {
            uVar9 = uVar9 - 0x210;
            puVar14 = &UNK_0130e872;
            goto LAB_00a196e4;
          }
          if (param_3 - 0x4e00 >> 4 < 0x51b) {
            uVar9 = uVar9 - 0x4e0;
            puVar14 = &UNK_0130e87e;
            goto LAB_00a196e4;
          }
          if (param_3 - 0xff00 < 0x60) {
            uVar9 = uVar9 - 0xff0;
            puVar14 = &DAT_0130fcea;
            goto LAB_00a196e4;
          }
LAB_00a1976c:
          if ((param_3 & 0xfffffff0) == 0x2170) {
            uVar6 = (ulong)(param_3 - 0x2170);
            puVar14 = &DAT_012fc664;
            goto LAB_00a1978c;
          }
          if (param_3 == 0x4efc) {
            cVar8 = '\x1b';
          }
          else if (param_3 == 0x51ec) {
            cVar8 = '\x1d';
          }
          else if (param_3 == 0x50f4) {
            cVar8 = '\x1c';
          }
          else if (param_3 - 0x5300 < 0x28) {
            cVar8 = (&DAT_0132a1da)[param_3 - 0x5300];
joined_r0x00a19ab4:
            if (cVar8 == '\0') goto LAB_00a19798;
          }
          else if ((int)param_3 < 0x6085) {
            if ((int)param_3 < 0x5bec) {
              if (param_3 == 0x548a) {
                cVar8 = '!';
              }
              else if (param_3 == 0x5759) {
                cVar8 = '\"';
              }
              else {
                if (param_3 != 0x589e) goto LAB_00a199f0;
                cVar8 = '%';
              }
            }
            else if ((int)param_3 < 0x5d53) {
              if (param_3 == 0x5bec) {
                cVar8 = '&';
              }
              else if (param_3 == 0x5cf5) {
                cVar8 = '\'';
              }
              else {
LAB_00a199f0:
                if ((param_3 & 0xfffffff0) == 0x6df0) {
                  uVar6 = (ulong)(param_3 - 0x6df0);
                  puVar14 = &DAT_012fc674;
LAB_00a1978c:
                  cVar8 = puVar14[uVar6];
                  goto joined_r0x00a19ab4;
                }
                if (param_3 == 0x7028) {
                  cVar8 = '9';
                }
                else if (param_3 == 0x7501) {
                  cVar8 = '<';
                }
                else if (param_3 == 0x70bb) {
                  cVar8 = '\x1a';
                }
                else {
                  if (param_3 >> 5 == 0x3b4) {
                    uVar6 = (ulong)(param_3 - 0x7680);
                    puVar14 = &DAT_012fcc94;
                    goto LAB_00a1978c;
                  }
                  if (param_3 == 0x7930) {
                    cVar8 = '@';
                  }
                  else if (param_3 == 0x7ae7) {
                    cVar8 = 'E';
                  }
                  else {
                    uVar9 = param_3 - 0x7da0;
                    if (uVar9 < 0x38) {
                      puVar14 = &DAT_0132a202;
                      goto LAB_00a19aac;
                    }
                    if ((int)param_3 < 0x8cf4) {
                      if ((int)param_3 < 0x8807) {
                        if (param_3 == 0x8362) {
                          cVar8 = 'K';
                        }
                        else if (param_3 == 0x85b0) {
                          cVar8 = 'M';
                        }
                        else {
LAB_00a19b94:
                          uVar9 = param_3 - 0x9738;
                          if (uVar9 < 0x20) {
                            puVar14 = &DAT_012fccb4;
LAB_00a19aac:
                            cVar8 = puVar14[uVar9];
                            goto joined_r0x00a19ab4;
                          }
                          if ((int)param_3 < 0x9ed1) {
                            if (param_3 == 0x999e) {
                              cVar8 = 'f';
                            }
                            else if (param_3 == 0x9ad9) {
                              cVar8 = 'g';
                            }
                            else {
                              if (param_3 != 0x9b72) {
LAB_00a19c34:
                                uVar9 = param_3 - 0xfa08;
                                if (0x27 < uVar9) {
                                  if (param_3 >> 3 != 0x1fe0) goto LAB_00a19798;
                                  uVar6 = (ulong)(param_3 - 0xff00);
                                  puVar14 = &DAT_012fd184;
                                  goto LAB_00a1978c;
                                }
                                puVar14 = &DAT_0132a23a;
                                goto LAB_00a19aac;
                              }
                              cVar8 = 'h';
                            }
                          }
                          else if (param_3 == 0x9ed1) {
                            cVar8 = 'j';
                          }
                          else if (param_3 == 0xf929) {
                            cVar8 = '1';
                          }
                          else {
                            if (param_3 != 0xf9dc) goto LAB_00a19c34;
                            cVar8 = '^';
                          }
                        }
                      }
                      else if (param_3 == 0x8807) {
                        cVar8 = 'P';
                      }
                      else {
                        if (param_3 != 0x8b7f) goto LAB_00a19b94;
                        cVar8 = 'R';
                      }
                    }
                    else if ((int)param_3 < 0x90de) {
                      if (param_3 == 0x8cf4) {
                        cVar8 = 'S';
                      }
                      else {
                        if (param_3 != 0x8d76) goto LAB_00a19b94;
                        cVar8 = 'T';
                      }
                    }
                    else if (param_3 == 0x90de) {
                      cVar8 = 'X';
                    }
                    else if (param_3 == 0x9115) {
                      cVar8 = 'Z';
                    }
                    else {
                      if (param_3 != 0x9592) goto LAB_00a19b94;
                      cVar8 = ']';
                    }
                  }
                }
              }
            }
            else if (param_3 == 0x5d53) {
              cVar8 = '(';
            }
            else {
              if (param_3 != 0x5fb7) goto LAB_00a199f0;
              cVar8 = '*';
            }
          }
          else if ((int)param_3 < 0x6665) {
            if (param_3 == 0x6085) {
              cVar8 = '+';
            }
            else if (param_3 == 0x6120) {
              cVar8 = ',';
            }
            else {
              if (param_3 != 0x654e) goto LAB_00a199f0;
              cVar8 = '-';
            }
          }
          else if ((int)param_3 < 0x6a6b) {
            if (param_3 == 0x6665) {
              cVar8 = '/';
            }
            else {
              if (param_3 != 0x6801) goto LAB_00a199f0;
              cVar8 = '2';
            }
          }
          else if (param_3 == 0x6a6b) {
            cVar8 = '5';
          }
          else {
            if (param_3 != 0x6ae2) goto LAB_00a199f0;
            cVar8 = '6';
          }
          cVar11 = (byte)(cVar8 - 1U) / 0x5e + 0x73;
          bVar12 = (byte)(cVar8 - 1U) % 0x5e;
          goto LAB_00a19828;
        }
        puVar14 = &DAT_0130e75a;
LAB_00a196e4:
        uVar3 = 1 << (ulong)(param_3 & 0xf);
        uVar13 = (uint)*(ushort *)((long)(puVar14 + (ulong)uVar9 * 4) + 2);
        if ((uVar3 & uVar13) == 0) goto LAB_00a1976c;
        uVar13 = uVar13 & uVar3 - 1;
        uVar13 = (uVar13 >> 1 & 0x55555555) + (uVar13 & 0x55555555);
        uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
        uVar13 = (uVar13 >> 4 & 0xffffff0f) + (uVar13 & 0xf0f0f0f);
        uVar2 = *(ushort *)
                 (&DAT_0130fd02 +
                 ((ulong)*(ushort *)(puVar14 + (ulong)uVar9 * 4) +
                 (ulong)((uVar13 & 0xf) + (uVar13 >> 8))) * 2);
        cVar8 = (char)uVar2;
        cVar11 = (char)(uVar2 >> 8);
        local_4c = uVar2 >> 8 | uVar2 << 8;
        if (((ushort)(uVar2 >> 8 | uVar2) >> 7 & 1) != 0) {
LAB_00a19798:
          uVar6 = 0xffffffff;
          goto LAB_00a19874;
        }
      }
      uVar9 = 2;
      if (iVar1 != 4) {
        uVar9 = 6;
      }
      uVar6 = (ulong)uVar9;
      if (param_4 < uVar6) goto LAB_00a19848;
      pcVar15 = param_2;
      if (iVar1 != 4) {
        pcVar15 = param_2 + 4;
        builtin_strncpy(param_2,"\x1b$(D",4);
      }
      *pcVar15 = cVar11;
      uVar10 = 4;
      pcVar15[1] = cVar8;
    }
    *(undefined4 *)(param_1 + 0x44) = uVar10;
  }
LAB_00a19874:
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

