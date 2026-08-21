
/* WARNING: Type propagation algorithm not settling */

ulong FUN_00e52180(char *param_1,long param_2,undefined8 param_3,undefined8 *param_4,ulong *param_5)

{
  size_t __n;
  undefined8 *puVar1;
  byte bVar2;
  ushort uVar3;
  bool bVar4;
  undefined2 uVar5;
  short sVar6;
  int iVar7;
  undefined8 uVar8;
  void *pvVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  ulong *puVar13;
  long lVar14;
  short sVar15;
  long lVar16;
  short sVar17;
  char cVar18;
  byte *pbVar19;
  long lVar20;
  ulong uVar21;
  short sVar22;
  short sVar23;
  char *pcVar24;
  undefined8 uVar25;
  char *__src;
  short *psVar26;
  ulong uVar27;
  uint uVar28;
  ulong uVar29;
  uint local_58;
  uint local_54;
  
  local_58 = 0;
  uVar27 = param_5[7];
  uVar25 = *(undefined8 *)(uVar27 + 0xb8);
  iVar7 = strncmp(param_1,"COMMENT",7);
  if (iVar7 == 0) {
    bVar2 = param_1[7];
    if ((0x20 < bVar2) || ((1L << ((ulong)bVar2 & 0x3f) & 0x100002601U) == 0)) goto LAB_00e521cc;
    local_54 = 0;
    lVar16 = -8;
    if (bVar2 == 0) {
      lVar16 = -7;
    }
    __n = lVar16 + param_2;
    lVar16 = FUN_00e13bcc(uVar25,1,*(long *)(uVar27 + 0xa0),*(long *)(uVar27 + 0xa0) + __n + 1,
                          *(undefined8 *)(uVar27 + 0x98),&local_54);
    *(long *)(uVar27 + 0x98) = lVar16;
    uVar10 = local_54;
    if (local_54 == 0) {
      pbVar19 = (byte *)(param_1 + 7);
      if (bVar2 != 0) {
        pbVar19 = (byte *)(param_1 + 8);
      }
      pvVar9 = (void *)(lVar16 + *(long *)(uVar27 + 0xa0));
      memcpy(pvVar9,pbVar19,__n);
      *(undefined1 *)((long)pvVar9 + __n) = 10;
      *(size_t *)(uVar27 + 0xa0) = *(long *)(uVar27 + 0xa0) + __n + 1;
      uVar10 = local_54;
    }
    goto joined_r0x00e52c4c;
  }
LAB_00e521cc:
  uVar29 = *param_5;
  uVar28 = (uint)uVar29;
  if ((uVar28 >> 5 & 1) == 0) {
    iVar7 = strncmp(param_1,"CHARS",5);
    if (((iVar7 != 0) || (0x20 < (byte)param_1[5])) ||
       ((1L << ((ulong)(byte)param_1[5] & 0x3f) & 0x100002601U) == 0)) {
      uVar29 = 0xb4;
      local_58 = 0xb4;
      bVar2 = (byte)*param_5;
      goto joined_r0x00e52df0;
    }
    uVar29 = FUN_00e51094(param_5 + 9," +",param_1,param_2);
    local_58 = (uint)uVar29;
    if (local_58 != 0) goto LAB_00e5333c;
    pbVar19 = *(byte **)(param_5[9] + 8);
    if (pbVar19 == (byte *)0x0) {
LAB_00e52624:
      uVar29 = 0;
    }
    else {
      bVar2 = *pbVar19;
      if (((ulong)bVar2 == 0) ||
         ((1 << (ulong)(bVar2 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar2 >> 3]) == 0))
      goto LAB_00e52624;
      uVar29 = 0;
      uVar11 = (ulong)bVar2;
      do {
        pbVar19 = pbVar19 + 1;
        if (0x1999999999999997 < uVar29) {
          uVar29 = 0xffffffffffffffff;
          break;
        }
        bVar2 = *pbVar19;
        uVar29 = (ulong)(byte)(&DAT_01977bbf)[uVar11] + uVar29 * 10;
        uVar11 = (ulong)bVar2;
      } while ((1 << (ulong)(bVar2 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar2 >> 3]) != 0);
    }
    *(ulong *)(uVar27 + 0x50) = uVar29;
    param_5[1] = uVar29;
    uVar11 = param_5[0xe] / 0x14;
    if (uVar11 < uVar29) {
      *(ulong *)(uVar27 + 0x50) = uVar11;
      param_5[1] = uVar11;
      uVar29 = uVar11;
    }
    if (uVar29 == 0) {
      uVar29 = 0x40;
      *(undefined8 *)(uVar27 + 0x50) = 0x40;
    }
    else if (0x10ffff < uVar29) {
      uVar29 = 6;
      local_58 = 6;
      bVar2 = (byte)*param_5;
      goto joined_r0x00e52df0;
    }
    uVar8 = FUN_00e13bcc(uVar25,0x38,0,uVar29,0,&local_58);
    *(undefined8 *)(uVar27 + 0x60) = uVar8;
    uVar29 = (ulong)local_58;
    if (local_58 == 0) {
      *param_5 = *param_5 | 0x20;
      return 0;
    }
  }
  else {
    iVar7 = strncmp(param_1,"ENDFONT",7);
    if (((iVar7 == 0) && ((byte)param_1[7] < 0x21)) &&
       ((1L << ((ulong)(byte)param_1[7] & 0x3f) & 0x100002601U) != 0)) {
      if ((uVar29 & 0xfc0) != 0) {
        uVar29 = 0xba;
        local_58 = 0xba;
        bVar2 = (byte)*param_5;
        goto joined_r0x00e52df0;
      }
      qsort(*(void **)(uVar27 + 0x60),*(size_t *)(uVar27 + 0x58),0x38,FUN_00e5337c);
      *param_5 = *param_5 & 0xfffffffe;
      *param_4 = FUN_00e53394;
      uVar10 = local_58;
    }
    else {
      iVar7 = strncmp(param_1,"ENDCHAR",7);
      uVar10 = local_58;
      if (((iVar7 == 0) && ((byte)param_1[7] < 0x21)) &&
         ((1L << ((ulong)(byte)param_1[7] & 0x3f) & 0x100002601U) != 0)) {
        param_5[6] = 0;
        *param_5 = uVar29 & 0xfffff03f;
      }
      else if ((((uVar28 >> 6 & 1) == 0) || (param_5[6] != 0xffffffffffffffff)) ||
              (*(int *)(param_5[8] + 4) != 0)) {
        iVar7 = strncmp(param_1,"STARTCHAR",9);
        if (((iVar7 == 0) && ((byte)param_1[9] < 0x21)) &&
           ((1L << ((ulong)(byte)param_1[9] & 0x3f) & 0x100002601U) != 0)) {
          if ((uVar29 & 0xfc0) == 0) {
            FUN_00e139fc(uVar25,param_5[5]);
            puVar13 = param_5 + 9;
            param_5[5] = 0;
            uVar29 = FUN_00e51094(puVar13," +",param_1,param_2);
            local_58 = (uint)uVar29;
            if (local_58 == 0) {
              if (param_5[0xb] != 0) {
                uVar27 = param_5[0xb] - 1;
                if (uVar27 == 0) {
                  param_5[0xb] = 0;
                }
                else {
                  uVar29 = 0;
                  do {
                    puVar1 = (undefined8 *)(*puVar13 + uVar29 * 8);
                    uVar29 = uVar29 + 1;
                    *puVar1 = puVar1[1];
                  } while (uVar27 != uVar29);
                  param_5[0xb] = uVar27;
                  if (uVar27 != 0) {
                    lVar16 = 0;
                    uVar29 = 0;
                    __src = *(char **)*puVar13;
                    cVar18 = *__src;
                    pcVar24 = __src;
                    if (cVar18 == '\0') goto LAB_00e52bc4;
LAB_00e52b90:
                    do {
                      __src[lVar16] = cVar18;
                      cVar18 = pcVar24[1];
                      lVar16 = lVar16 + 1;
                      pcVar24 = pcVar24 + 1;
                    } while (cVar18 != '\0');
                    uVar27 = param_5[0xb];
                    uVar29 = uVar29 + 1;
                    if (uVar27 <= uVar29) goto LAB_00e52bdc;
                    do {
                      __src[lVar16] = ' ';
                      uVar27 = param_5[0xb];
                      lVar16 = lVar16 + 1;
LAB_00e52bdc:
                      do {
                        if (uVar27 <= uVar29) {
                          if ((__src != "") && (__src[lVar16] = '\0', __src == (char *)0x0))
                          goto LAB_00e52610;
                          pvVar9 = (void *)FUN_00e13bcc(uVar25,1,0,lVar16 + 1U,0,&local_58);
                          param_5[5] = (ulong)pvVar9;
                          uVar29 = (ulong)local_58;
                          if (local_58 != 0) goto LAB_00e5333c;
                          memcpy(pvVar9,__src,lVar16 + 1U);
                          *param_5 = *param_5 | 0x40;
                          uVar10 = local_58;
                          goto joined_r0x00e52c4c;
                        }
                        pcVar24 = *(char **)(*puVar13 + uVar29 * 8);
                        cVar18 = *pcVar24;
                        if (cVar18 != '\0') goto LAB_00e52b90;
LAB_00e52bc4:
                        uVar29 = uVar29 + 1;
                      } while (uVar27 <= uVar29);
                    } while( true );
                  }
                }
              }
LAB_00e52610:
              uVar29 = 3;
              local_58 = 3;
              bVar2 = (byte)*param_5;
              goto joined_r0x00e52df0;
            }
            goto LAB_00e5333c;
          }
LAB_00e5256c:
          uVar29 = 0xb5;
          local_58 = 0xb5;
          bVar2 = (byte)*param_5;
          goto joined_r0x00e52df0;
        }
        iVar7 = strncmp(param_1,"ENCODING",8);
        if (((iVar7 == 0) && ((byte)param_1[8] < 0x21)) &&
           ((1L << ((ulong)(byte)param_1[8] & 0x3f) & 0x100002601U) != 0)) {
          if ((uVar28 >> 6 & 1) == 0) goto LAB_00e5256c;
          uVar29 = FUN_00e51094(param_5 + 9," +",param_1,param_2);
          local_58 = (uint)uVar29;
          if (local_58 != 0) goto LAB_00e5333c;
          uVar29 = param_5[9];
          pbVar19 = *(byte **)(uVar29 + 8);
          if ((pbVar19 == (byte *)0x0) || (bVar2 = *pbVar19, bVar2 == 0)) {
            uVar11 = 0;
            param_5[6] = 0;
LAB_00e52974:
            lVar16 = *(long *)(uVar27 + 0x58);
            if (lVar16 == *(long *)(uVar27 + 0x50)) {
              lVar20 = FUN_00e13bcc(uVar25,0x38,lVar16,lVar16 + 0x40,*(undefined8 *)(uVar27 + 0x60),
                                    &local_58);
              *(long *)(uVar27 + 0x60) = lVar20;
              uVar29 = (ulong)local_58;
              if (local_58 != 0) goto LAB_00e5333c;
              lVar16 = *(long *)(uVar27 + 0x58);
              *(long *)(uVar27 + 0x50) = *(long *)(uVar27 + 0x50) + 0x40;
              uVar11 = param_5[6];
            }
            else {
              lVar20 = *(long *)(uVar27 + 0x60);
            }
            *(long *)(uVar27 + 0x58) = lVar16 + 1;
            puVar13 = (ulong *)(lVar20 + lVar16 * 0x38);
            *puVar13 = param_5[5];
            puVar13[1] = uVar11;
          }
          else {
            bVar4 = bVar2 != 0x2d;
            if (!bVar4) {
              pbVar19 = pbVar19 + 1;
              bVar2 = *pbVar19;
            }
            if ((1 << (ulong)(bVar2 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar2 >> 3]) == 0) {
              uVar21 = 0;
            }
            else {
              uVar21 = 0;
              do {
                pbVar19 = pbVar19 + 1;
                uVar11 = (ulong)bVar2;
                if (0xcccccccccccccca < (long)uVar21) {
                  uVar21 = 0x7fffffffffffffff;
                  break;
                }
                bVar2 = *pbVar19;
                uVar21 = (ulong)(byte)(&DAT_01977bbf)[uVar11] + uVar21 * 10;
              } while ((1 << (ulong)(bVar2 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar2 >> 3]) != 0);
            }
            uVar11 = -uVar21;
            if (bVar4) {
              uVar11 = uVar21;
            }
            puVar13 = param_5 + 6;
            if ((long)uVar11 < -1) {
              *puVar13 = 0xffffffffffffffff;
              uVar11 = param_5[0xb];
joined_r0x00e52e20:
              if (2 < uVar11) {
                pbVar19 = *(byte **)(uVar29 + 0x10);
                if (pbVar19 == (byte *)0x0) {
                  uVar11 = 0;
                }
                else {
                  bVar2 = *pbVar19;
                  uVar11 = 0;
                  if (bVar2 != 0) {
                    bVar4 = bVar2 == 0x2d;
                    if (bVar4) {
                      pbVar19 = pbVar19 + 1;
                      bVar2 = *pbVar19;
                    }
                    if ((1 << (ulong)(bVar2 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar2 >> 3]) == 0) {
                      uVar29 = 0;
                    }
                    else {
                      uVar29 = 0;
                      do {
                        pbVar19 = pbVar19 + 1;
                        uVar11 = (ulong)bVar2;
                        if (0xcccccccccccccca < (long)uVar29) {
                          uVar29 = 0x7fffffffffffffff;
                          break;
                        }
                        bVar2 = *pbVar19;
                        uVar29 = (ulong)(byte)(&DAT_01977bbf)[uVar11] + uVar29 * 10;
                      } while ((1 << (ulong)(bVar2 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar2 >> 3])
                               != 0);
                    }
                    uVar11 = -uVar29;
                    if (!bVar4) {
                      uVar11 = uVar29;
                    }
                  }
                }
                *puVar13 = uVar11;
                goto LAB_00e53268;
              }
LAB_00e532a8:
              if (*(int *)(param_5[8] + 4) != 0) goto LAB_00e532b4;
LAB_00e53290:
              FUN_00e139fc(uVar25,param_5[5]);
            }
            else {
              *puVar13 = uVar11;
              if (uVar11 == 0xffffffffffffffff) {
                uVar11 = param_5[0xb];
                goto joined_r0x00e52e20;
              }
LAB_00e53268:
              if (uVar11 + 1 < 0x110001) {
                if (-1 < (long)uVar11) goto LAB_00e52974;
                goto LAB_00e532a8;
              }
              *puVar13 = 0xffffffffffffffff;
              if (*(int *)(param_5[8] + 4) == 0) goto LAB_00e53290;
LAB_00e532b4:
              uVar29 = *(ulong *)(uVar27 + 0x70);
              if (uVar29 == *(ulong *)(uVar27 + 0x68)) {
                lVar16 = FUN_00e13bcc(uVar25,0x38,uVar29,uVar29 + 4,*(undefined8 *)(uVar27 + 0x78),
                                      &local_58);
                *(long *)(uVar27 + 0x78) = lVar16;
                uVar29 = (ulong)local_58;
                if (local_58 != 0) goto LAB_00e5333c;
                uVar29 = *(ulong *)(uVar27 + 0x70);
                *(long *)(uVar27 + 0x68) = *(long *)(uVar27 + 0x68) + 4;
              }
              else {
                lVar16 = *(long *)(uVar27 + 0x78);
              }
              puVar13 = (ulong *)(lVar16 + uVar29 * 0x38);
              *puVar13 = param_5[5];
              *(ulong *)(uVar27 + 0x70) = uVar29 + 1;
              puVar13[1] = uVar29;
            }
            param_5[5] = 0;
          }
          param_5[5] = 0;
          *param_5 = *param_5 & 0xffffffff3fffffff | 0x80;
          uVar10 = local_58;
          goto joined_r0x00e52c4c;
        }
        if ((uVar28 >> 7 & 1) == 0) {
          uVar29 = 0xb6;
          local_58 = 0xb6;
          bVar2 = (byte)*param_5;
          goto joined_r0x00e52df0;
        }
        lVar16 = 0x70;
        lVar20 = 0x78;
        if (param_5[6] != 0xffffffffffffffff) {
          lVar16 = 0x58;
          lVar20 = 0x60;
        }
        lVar20 = *(long *)(uVar27 + lVar20);
        lVar16 = *(long *)(uVar27 + lVar16) + -1;
        if ((uVar28 >> 0xb & 1) != 0) {
          uVar10 = local_58;
          if (param_5[2] < (ulong)*(ushort *)(lVar20 + lVar16 * 0x38 + 0x16)) {
            lVar12 = lVar20 + lVar16 * 0x38;
            lVar14 = *(long *)(lVar12 + 0x28);
            uVar27 = lVar14 * 2;
            pbVar19 = (byte *)(*(long *)(lVar12 + 0x20) + lVar14 * param_5[2]);
            if (uVar27 == 0) {
              uVar29 = 0;
              uVar3 = *(ushort *)(lVar20 + lVar16 * 0x38 + 0x14);
            }
            else {
              uVar11 = 0;
              do {
                bVar2 = param_1[uVar11];
                if ((1 << (ulong)(bVar2 & 7) & (uint)(byte)(&DAT_01977c5f)[bVar2 >> 3]) == 0) {
                  uVar29 = uVar11;
                  if (((uint)*param_5 >> 0x1e & 1) == 0) {
                    *param_5 = *param_5 | 0x40000000;
                  }
                  break;
                }
                uVar29 = uVar11 + 1;
                *pbVar19 = (&DAT_01977bbf)[bVar2] + *pbVar19 * '\x10';
                if ((uVar29 < uVar27) && ((uVar11 & 1) != 0)) {
                  pbVar19 = pbVar19 + 1;
                  *pbVar19 = 0;
                }
                uVar11 = uVar29;
              } while (uVar29 < uVar27);
              uVar3 = *(ushort *)(lVar20 + lVar16 * 0x38 + 0x14);
            }
            if (uVar3 != 0) {
              *pbVar19 = *pbVar19 &
                         (&DAT_01977848)
                         [(ulong)((uint)*(ushort *)(param_5[7] + 0xb0) * (uint)uVar3) & 7];
            }
            if (((uVar29 == uVar27) &&
                ((1 << (ulong)((byte)param_1[uVar27] & 7) &
                 (uint)(byte)(&DAT_01977c5f)[(byte)param_1[uVar27] >> 3]) != 0)) &&
               (((uint)*param_5 >> 0x1e & 1) == 0)) {
              *param_5 = *param_5 | 0x40000000;
            }
            param_5[2] = param_5[2] + 1;
          }
          else if (-1 < (int)uVar28) {
            *param_5 = uVar29 | 0x80000000;
          }
          goto joined_r0x00e52c4c;
        }
        iVar7 = strncmp(param_1,"SWIDTH",6);
        if (((iVar7 == 0) && ((byte)param_1[6] < 0x21)) &&
           ((1L << ((ulong)(byte)param_1[6] & 0x3f) & 0x100002601U) != 0)) {
          uVar29 = FUN_00e51094(param_5 + 9," +",param_1,param_2);
          local_58 = (uint)uVar29;
          if (local_58 == 0) {
            pbVar19 = *(byte **)(param_5[9] + 8);
            if (pbVar19 != (byte *)0x0) {
              bVar2 = *pbVar19;
              if (((ulong)bVar2 != 0) &&
                 ((1 << (ulong)(bVar2 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar2 >> 3]) != 0)) {
                uVar27 = 0;
                uVar11 = (ulong)bVar2;
                do {
                  pbVar19 = pbVar19 + 1;
                  if (0x1999999999999997 < uVar27) {
                    uVar27 = 0xffffffffffffffff;
                    break;
                  }
                  bVar2 = *pbVar19;
                  uVar27 = (ulong)(byte)(&DAT_01977bbf)[uVar11] + uVar27 * 10;
                  uVar11 = (ulong)bVar2;
                } while ((1 << (ulong)(bVar2 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar2 >> 3]) != 0);
                goto LAB_00e52cb4;
              }
            }
            uVar27 = 0;
LAB_00e52cb4:
            *(short *)(lVar20 + lVar16 * 0x38 + 0x10) = (short)uVar27;
            *param_5 = *param_5 | 0x100;
            return uVar29 & 0xffffffff;
          }
          goto LAB_00e5333c;
        }
        iVar7 = strncmp(param_1,"DWIDTH",6);
        if (((iVar7 == 0) && ((byte)param_1[6] < 0x21)) &&
           ((1L << ((ulong)(byte)param_1[6] & 0x3f) & 0x100002601U) != 0)) {
          uVar29 = FUN_00e51094(param_5 + 9," +",param_1,param_2);
          local_58 = (uint)uVar29;
          if (local_58 != 0) goto LAB_00e5333c;
          pbVar19 = *(byte **)(param_5[9] + 8);
          if (pbVar19 == (byte *)0x0) {
LAB_00e52d54:
            uVar29 = 0;
          }
          else {
            bVar2 = *pbVar19;
            if (((ulong)bVar2 == 0) ||
               ((1 << (ulong)(bVar2 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar2 >> 3]) == 0))
            goto LAB_00e52d54;
            uVar29 = 0;
            uVar11 = (ulong)bVar2;
            do {
              pbVar19 = pbVar19 + 1;
              if (0x1999999999999997 < uVar29) {
                uVar29 = 0xffffffffffffffff;
                break;
              }
              bVar2 = *pbVar19;
              uVar29 = (ulong)(byte)(&DAT_01977bbf)[uVar11] + uVar29 * 10;
              uVar11 = (ulong)bVar2;
            } while ((1 << (ulong)(bVar2 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar2 >> 3]) != 0);
          }
          *(short *)(lVar20 + lVar16 * 0x38 + 0x12) = (short)uVar29;
          uVar11 = *param_5;
          if (((uint)uVar11 >> 8 & 1) == 0) {
            uVar5 = FT_MulDiv(uVar29 & 0xffff,72000,
                              *(long *)(uVar27 + 0x20) * *(long *)(uVar27 + 0x18));
            *(undefined2 *)(lVar20 + lVar16 * 0x38 + 0x10) = uVar5;
            uVar11 = *param_5;
          }
          *param_5 = uVar11 | 0x200;
          uVar10 = local_58;
          goto joined_r0x00e52c4c;
        }
        iVar7 = strncmp(param_1,"BBX",3);
        if (((iVar7 == 0) && ((byte)param_1[3] < 0x21)) &&
           ((1L << ((ulong)(byte)param_1[3] & 0x3f) & 0x100002601U) != 0)) {
          uVar29 = FUN_00e51094(param_5 + 9," +",param_1,param_2);
          local_58 = (uint)uVar29;
          if (local_58 == 0) {
            uVar29 = param_5[9];
            pbVar19 = *(byte **)(uVar29 + 8);
            if (pbVar19 == (byte *)0x0) {
LAB_00e52ed4:
              sVar6 = 0;
            }
            else {
              bVar2 = *pbVar19;
              if (((ulong)bVar2 == 0) ||
                 ((1 << (ulong)(bVar2 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar2 >> 3]) == 0))
              goto LAB_00e52ed4;
              uVar10 = 0;
              uVar11 = (ulong)bVar2;
              do {
                pbVar19 = pbVar19 + 1;
                if (0x332 < (uVar10 >> 3 & 0x1fff)) {
                  sVar6 = -1;
                  break;
                }
                bVar2 = *pbVar19;
                uVar10 = (uint)(byte)(&DAT_01977bbf)[uVar11] + uVar10 * 10;
                sVar6 = (short)uVar10;
                uVar11 = (ulong)bVar2;
              } while ((1 << (ulong)(bVar2 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar2 >> 3]) != 0);
            }
            *(short *)(lVar20 + lVar16 * 0x38 + 0x14) = sVar6;
            pbVar19 = *(byte **)(uVar29 + 0x10);
            if (pbVar19 == (byte *)0x0) {
LAB_00e52f64:
              sVar15 = 0;
            }
            else {
              bVar2 = *pbVar19;
              if (((ulong)bVar2 == 0) ||
                 ((1 << (ulong)(bVar2 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar2 >> 3]) == 0))
              goto LAB_00e52f64;
              uVar10 = 0;
              uVar11 = (ulong)bVar2;
              do {
                pbVar19 = pbVar19 + 1;
                if (0x332 < (uVar10 >> 3 & 0x1fff)) {
                  sVar15 = -1;
                  break;
                }
                bVar2 = *pbVar19;
                uVar10 = (uint)(byte)(&DAT_01977bbf)[uVar11] + uVar10 * 10;
                sVar15 = (short)uVar10;
                uVar11 = (ulong)bVar2;
              } while ((1 << (ulong)(bVar2 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar2 >> 3]) != 0);
            }
            *(short *)(lVar20 + lVar16 * 0x38 + 0x16) = sVar15;
            pbVar19 = *(byte **)(uVar29 + 0x18);
            if (pbVar19 == (byte *)0x0) {
              sVar17 = 0;
            }
            else {
              bVar2 = *pbVar19;
              sVar17 = 0;
              if (bVar2 != 0) {
                bVar4 = bVar2 == 0x2d;
                if (bVar4) {
                  pbVar19 = pbVar19 + 1;
                  bVar2 = *pbVar19;
                }
                if ((1 << (ulong)(bVar2 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar2 >> 3]) == 0) {
                  sVar22 = 0;
                }
                else {
                  sVar22 = 0;
                  do {
                    pbVar19 = pbVar19 + 1;
                    uVar11 = (ulong)bVar2;
                    if (0xcca < sVar22) {
                      sVar22 = 0x7fff;
                      break;
                    }
                    bVar2 = *pbVar19;
                    sVar22 = (ushort)(byte)(&DAT_01977bbf)[uVar11] + sVar22 * 10;
                  } while ((1 << (ulong)(bVar2 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar2 >> 3]) != 0)
                  ;
                }
                sVar17 = -sVar22;
                if (!bVar4) {
                  sVar17 = sVar22;
                }
              }
            }
            *(short *)(lVar20 + lVar16 * 0x38 + 0x18) = sVar17;
            pbVar19 = *(byte **)(uVar29 + 0x20);
            if (pbVar19 == (byte *)0x0) {
              sVar22 = 0;
            }
            else {
              bVar2 = *pbVar19;
              sVar22 = 0;
              if (bVar2 != 0) {
                bVar4 = bVar2 == 0x2d;
                if (bVar4) {
                  pbVar19 = pbVar19 + 1;
                  bVar2 = *pbVar19;
                }
                if ((1 << (ulong)(bVar2 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar2 >> 3]) == 0) {
                  sVar23 = 0;
                }
                else {
                  sVar23 = 0;
                  do {
                    pbVar19 = pbVar19 + 1;
                    uVar29 = (ulong)bVar2;
                    if (0xcca < sVar23) {
                      sVar23 = 0x7fff;
                      break;
                    }
                    bVar2 = *pbVar19;
                    sVar23 = (ushort)(byte)(&DAT_01977bbf)[uVar29] + sVar23 * 10;
                  } while ((1 << (ulong)(bVar2 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar2 >> 3]) != 0)
                  ;
                }
                sVar22 = -sVar23;
                if (!bVar4) {
                  sVar22 = sVar23;
                }
              }
            }
            sVar15 = sVar22 + sVar15;
            lVar14 = lVar20 + lVar16 * 0x38;
            *(short *)(lVar14 + 0x1a) = sVar22;
            *(short *)(lVar14 + 0x1c) = sVar15;
            *(short *)(lVar14 + 0x1e) = -sVar22;
            if (sVar15 <= *(short *)((long)param_5 + 0x1e)) {
              sVar15 = *(short *)((long)param_5 + 0x1e);
            }
            *(short *)((long)param_5 + 0x1e) = sVar15;
            sVar23 = (short)param_5[4];
            sVar15 = sVar17 + sVar6;
            *(short *)((long)param_5 + 0x22) = sVar15;
            if (sVar23 < -sVar22) {
              sVar23 = -sVar22;
            }
            *(short *)(param_5 + 4) = sVar23;
            if (sVar15 <= *(short *)((long)param_5 + 0x1c)) {
              sVar15 = *(short *)((long)param_5 + 0x1c);
            }
            *(short *)((long)param_5 + 0x1c) = sVar15;
            sVar15 = sVar17;
            if ((short)param_5[3] <= sVar17) {
              sVar15 = (short)param_5[3];
            }
            *(short *)(param_5 + 3) = sVar15;
            uVar29 = *param_5;
            if (sVar17 <= *(short *)((long)param_5 + 0x1a)) {
              sVar17 = *(short *)((long)param_5 + 0x1a);
            }
            *(short *)((long)param_5 + 0x1a) = sVar17;
            if (((uint)uVar29 >> 9 & 1) == 0) {
              *(short *)(lVar20 + lVar16 * 0x38 + 0x12) = sVar6;
            }
            if (*(int *)param_5[8] != 0) {
              lVar20 = lVar20 + lVar16 * 0x38;
              sVar6 = FT_MulDiv(*(undefined2 *)(lVar20 + 0x12),72000,
                                *(long *)(uVar27 + 0x20) * *(long *)(uVar27 + 0x18));
              psVar26 = (short *)(lVar20 + 0x10);
              if (*psVar26 == sVar6) {
                *param_5 = *param_5 | 0x400;
                uVar10 = local_58;
                goto joined_r0x00e52c4c;
              }
              *psVar26 = sVar6;
              uVar29 = *param_5 | 0x1000;
              *param_5 = uVar29;
            }
            *param_5 = uVar29 | 0x400;
            uVar10 = local_58;
            goto joined_r0x00e52c4c;
          }
        }
        else {
          iVar7 = strncmp(param_1,"BITMAP",6);
          if (((iVar7 != 0) || (0x20 < (byte)param_1[6])) ||
             ((1L << ((ulong)(byte)param_1[6] & 0x3f) & 0x100002601U) == 0)) goto LAB_00e52610;
          if ((uVar28 >> 10 & 1) == 0) {
            uVar29 = 0xb7;
            local_58 = 0xb7;
            bVar2 = (byte)*param_5;
            goto joined_r0x00e52df0;
          }
          lVar14 = lVar20 + lVar16 * 0x38;
          uVar29 = (ulong)((uint)*(ushort *)(uVar27 + 0xb0) * (uint)*(ushort *)(lVar14 + 0x14) + 7
                          >> 3);
          uVar27 = uVar29 * *(ushort *)(lVar14 + 0x16);
          *(ulong *)(lVar14 + 0x28) = uVar29;
          if (((uVar27 | uVar29) & 0x1fffffff0000) != 0) {
            uVar29 = 0xb8;
            local_58 = 0xb8;
            bVar2 = (byte)*param_5;
            goto joined_r0x00e52df0;
          }
          lVar20 = lVar20 + lVar16 * 0x38;
          *(short *)(lVar20 + 0x30) = (short)uVar27;
          uVar8 = FUN_00e13bcc(uVar25,1,0,uVar27 & 0xffff,0,&local_58);
          *(undefined8 *)(lVar20 + 0x20) = uVar8;
          uVar29 = (ulong)local_58;
          if (local_58 == 0) {
            param_5[2] = 0;
            *param_5 = *param_5 | 0x800;
            return 0;
          }
        }
        goto LAB_00e5333c;
      }
    }
joined_r0x00e52c4c:
    local_58 = uVar10;
    uVar29 = (ulong)local_58;
    if (local_58 == 0) {
      return 0;
    }
  }
LAB_00e5333c:
  bVar2 = (byte)*param_5;
joined_r0x00e52df0:
  if ((bVar2 >> 6 & 1) != 0) {
    FUN_00e139fc(uVar25,param_5[5]);
    param_5[5] = 0;
    uVar29 = (ulong)local_58;
  }
  return uVar29;
}

