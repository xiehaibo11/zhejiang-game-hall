
int FUN_00e50074(char *param_1,long param_2,undefined8 param_3,undefined8 *param_4,ulong *param_5)

{
  ulong *puVar1;
  ushort uVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  void *pvVar9;
  size_t sVar10;
  undefined4 uVar11;
  long lVar12;
  undefined2 uVar13;
  short sVar14;
  ulong uVar15;
  char cVar16;
  short sVar17;
  ushort uVar18;
  short sVar19;
  byte *pbVar20;
  undefined8 uVar21;
  char *pcVar22;
  uint uVar23;
  long lVar24;
  ulong uVar25;
  char *__src;
  undefined8 *puVar26;
  undefined **ppuVar27;
  ulong uVar28;
  int local_1a4;
  long local_1a0 [5];
  int local_178 [70];
  
  lVar4 = tpidr_el0;
  lVar12 = *(long *)(lVar4 + 0x28);
  local_1a4 = 0;
  uVar28 = param_5[7];
  if (uVar28 == 0) {
    uVar21 = 0;
  }
  else {
    uVar21 = *(undefined8 *)(uVar28 + 0xb8);
  }
  iVar6 = strncmp(param_1,"COMMENT",7);
  if (iVar6 == 0) {
    bVar3 = param_1[7];
    if ((bVar3 < 0x21) && ((1L << ((ulong)bVar3 & 0x3f) & 0x100002601U) != 0)) {
      iVar6 = 0;
      iVar7 = local_1a4;
      if ((uVar28 != 0) && (*(int *)(param_5[8] + 8) != 0)) {
        local_178[0] = 0;
        lVar24 = -8;
        if (bVar3 == 0) {
          lVar24 = -7;
        }
        sVar10 = lVar24 + param_2;
        lVar24 = FUN_00e13bcc(*(undefined8 *)(uVar28 + 0xb8),1,*(long *)(uVar28 + 0xa0),
                              *(long *)(uVar28 + 0xa0) + sVar10 + 1,*(undefined8 *)(uVar28 + 0x98),
                              local_178);
        *(long *)(uVar28 + 0x98) = lVar24;
        iVar6 = local_178[0];
        iVar7 = local_178[0];
        if (local_178[0] == 0) {
          pbVar20 = (byte *)(param_1 + 7);
          if (bVar3 != 0) {
            pbVar20 = (byte *)(param_1 + 8);
          }
          pvVar9 = (void *)(lVar24 + *(long *)(uVar28 + 0xa0));
          memcpy(pvVar9,pbVar20,sVar10);
          *(undefined1 *)((long)pvVar9 + sVar10) = 10;
          *(size_t *)(uVar28 + 0xa0) = *(long *)(uVar28 + 0xa0) + sVar10 + 1;
          iVar6 = local_178[0];
          iVar7 = local_178[0];
        }
      }
      goto LAB_00e50724;
    }
  }
  uVar23 = (uint)*param_5;
  if ((*param_5 & 1) == 0) {
    uVar28 = param_5[0xd];
    iVar6 = strncmp(param_1,"STARTFONT",9);
    if (((iVar6 == 0) && ((byte)param_1[9] < 0x21)) &&
       ((1L << ((ulong)(byte)param_1[9] & 0x3f) & 0x100002601U) != 0)) {
      *param_5 = 1;
      param_5[7] = 0;
      uVar8 = FUN_00e1388c(uVar28,0xf8,&local_1a4);
      iVar6 = local_1a4;
      iVar7 = local_1a4;
      if (local_1a4 == 0) {
        param_5[7] = uVar8;
        *(ulong *)(uVar8 + 0xb8) = param_5[0xd];
        param_5[0xd] = 0;
        iVar6 = FUN_00e14470(uVar8 + 0xd0,uVar28);
        iVar7 = iVar6;
        if (iVar6 == 0) {
          uVar25 = 0;
          ppuVar27 = &PTR_s_ADD_STYLE_NAME_01c958c0;
          do {
            local_1a4 = 0;
            iVar6 = thunk_FUN_00e145f4(*ppuVar27,uVar25,uVar8 + 0xd0,uVar28);
            iVar7 = iVar6;
            if (iVar6 != 0) goto LAB_00e50724;
            uVar25 = uVar25 + 1;
            ppuVar27 = ppuVar27 + 3;
          } while (uVar25 < 0x53);
          local_1a4 = iVar6;
          uVar21 = FUN_00e1388c(uVar28,0x28,&local_1a4);
          *(undefined8 *)(param_5[7] + 0xa8) = uVar21;
          iVar6 = local_1a4;
          iVar7 = local_1a4;
          if ((local_1a4 == 0) && (iVar6 = FUN_00e14470(uVar21,uVar28), iVar7 = iVar6, iVar6 == 0))
          {
            uVar28 = param_5[7];
            uVar11 = *(undefined4 *)(param_5[8] + 0xc);
            *(undefined8 *)(uVar28 + 0x38) = 0xffffffffffffffff;
            *(undefined4 *)(uVar28 + 0x30) = uVar11;
          }
        }
      }
    }
    else {
      iVar6 = 0xb0;
      iVar7 = iVar6;
    }
    goto LAB_00e50724;
  }
  iVar6 = strncmp(param_1,"STARTPROPERTIES",0xf);
  if (((iVar6 != 0) || (0x20 < (byte)param_1[0xf])) ||
     ((1L << ((ulong)(byte)param_1[0xf] & 0x3f) & 0x100002601U) == 0)) {
    iVar6 = strncmp(param_1,"FONTBOUNDINGBOX",0xf);
    if (((iVar6 != 0) || (0x20 < (byte)param_1[0xf])) ||
       ((1L << ((ulong)(byte)param_1[0xf] & 0x3f) & 0x100002601U) == 0)) {
      iVar6 = strncmp(param_1,"FONT",4);
      if (((iVar6 == 0) && ((byte)param_1[4] < 0x21)) &&
         ((1L << ((ulong)(byte)param_1[4] & 0x3f) & 0x100002601U) != 0)) {
        puVar1 = param_5 + 9;
        local_1a4 = FUN_00e51094(puVar1," +",param_1,param_2);
        iVar6 = local_1a4;
        iVar7 = local_1a4;
        if (local_1a4 != 0) goto LAB_00e50724;
        if (param_5[0xb] != 0) {
          uVar28 = param_5[0xb] - 1;
          if (uVar28 == 0) {
            param_5[0xb] = 0;
          }
          else {
            uVar8 = 0;
            do {
              puVar26 = (undefined8 *)(*puVar1 + uVar8 * 8);
              uVar8 = uVar8 + 1;
              *puVar26 = puVar26[1];
            } while (uVar28 != uVar8);
            param_5[0xb] = uVar28;
            if (uVar28 != 0) {
              lVar24 = 0;
              uVar8 = 0;
              __src = *(char **)*puVar1;
              cVar16 = *__src;
              pcVar22 = __src;
              if (cVar16 == '\0') goto LAB_00e5082c;
LAB_00e507f8:
              do {
                __src[lVar24] = cVar16;
                cVar16 = pcVar22[1];
                lVar24 = lVar24 + 1;
                pcVar22 = pcVar22 + 1;
              } while (cVar16 != '\0');
              uVar28 = param_5[0xb];
              uVar8 = uVar8 + 1;
              if (uVar28 <= uVar8) goto LAB_00e50844;
              do {
                __src[lVar24] = ' ';
                uVar28 = param_5[0xb];
                lVar24 = lVar24 + 1;
LAB_00e50844:
                do {
                  if (uVar28 <= uVar8) {
                    if ((__src != "") && (__src[lVar24] = '\0', __src == (char *)0x0))
                    goto LAB_00e5023c;
                    FUN_00e139fc(uVar21,*(undefined8 *)param_5[7]);
                    *(undefined8 *)param_5[7] = 0;
                    pvVar9 = (void *)FUN_00e13bcc(uVar21,1,0,lVar24 + 1U,0,&local_1a4);
                    *(void **)param_5[7] = pvVar9;
                    iVar6 = local_1a4;
                    iVar7 = local_1a4;
                    if (local_1a4 != 0) goto LAB_00e50724;
                    memcpy(pvVar9,__src,lVar24 + 1U);
                    puVar26 = (undefined8 *)param_5[7];
                    if (((puVar26 == (undefined8 *)0x0) ||
                        (pcVar22 = (char *)*puVar26, pcVar22 == (char *)0x0)) || (*pcVar22 == '\0'))
                    goto LAB_00e5071c;
                    local_1a0[3] = puVar26[0x17];
                    local_1a0[1] = 0;
                    local_1a0[2] = 0;
                    local_1a0[0] = 0;
                    *(undefined4 *)(puVar26 + 6) = *(undefined4 *)(param_5[8] + 0xc);
                    sVar10 = strlen(pcVar22);
                    uVar28 = sVar10 + 1;
                    if (0xff < uVar28) goto LAB_00e5071c;
                    memcpy(local_178,pcVar22,uVar28);
                    iVar6 = FUN_00e51094(local_1a0,&DAT_019b5d6c,local_178,uVar28);
                    if (((iVar6 == 0) && (local_1a0[2] == 0xf)) &&
                       (uVar23 = **(byte **)(local_1a0[0] + 0x58) - 0x43, uVar28 = (ulong)uVar23,
                       uVar23 < 0x2e)) {
                      if ((1L << (uVar28 & 0x3f) & 0x100000001U) == 0) {
                        if ((1L << (uVar28 & 0x3f) & 0x40000000400U) == 0) {
                          if ((1L << (uVar28 & 0x3f) & 0x200000002000U) == 0) goto LAB_00e50e80;
                          uVar11 = 8;
                        }
                        else {
                          uVar11 = 0x10;
                        }
                      }
                      else {
                        uVar11 = 0x20;
                      }
                      *(undefined4 *)(puVar26 + 6) = uVar11;
                    }
LAB_00e50e80:
                    if (local_1a0[3] != 0) {
                      FUN_00e139fc(local_1a0[3],local_1a0[0]);
                      local_1a0[1] = 0;
                      local_1a0[0] = 0;
                      local_1a0[3] = 0;
                      local_1a0[2] = 0;
                    }
                    iVar7 = iVar6;
                    if (iVar6 == 0) {
                      *param_5 = *param_5 | 2;
                    }
                    goto LAB_00e50724;
                  }
                  pcVar22 = *(char **)(*puVar1 + uVar8 * 8);
                  cVar16 = *pcVar22;
                  if (cVar16 != '\0') goto LAB_00e507f8;
LAB_00e5082c:
                  uVar8 = uVar8 + 1;
                } while (uVar28 <= uVar8);
              } while( true );
            }
          }
        }
      }
      else {
        iVar6 = strncmp(param_1,"SIZE",4);
        if (((iVar6 == 0) && ((byte)param_1[4] < 0x21)) &&
           ((1L << ((ulong)(byte)param_1[4] & 0x3f) & 0x100002601U) != 0)) {
          if ((uVar23 >> 1 & 1) == 0) {
            iVar6 = 0xb1;
            iVar7 = iVar6;
            goto LAB_00e50724;
          }
          iVar7 = FUN_00e51094(param_5 + 9," +",param_1,param_2);
          iVar6 = iVar7;
          if (iVar7 != 0) goto LAB_00e50724;
          uVar28 = param_5[9];
          pbVar20 = *(byte **)(uVar28 + 8);
          if (pbVar20 == (byte *)0x0) {
LAB_00e5098c:
            uVar8 = param_5[7];
            *(undefined8 *)(uVar8 + 0x18) = 0;
            pbVar20 = *(byte **)(uVar28 + 0x10);
            if (pbVar20 == (byte *)0x0) goto LAB_00e50c94;
LAB_00e50c14:
            bVar3 = *pbVar20;
            if (((ulong)bVar3 == 0) ||
               ((1 << (ulong)(bVar3 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar3 >> 3]) == 0))
            goto LAB_00e50c94;
            uVar15 = 0;
            uVar25 = (ulong)bVar3;
            do {
              pbVar20 = pbVar20 + 1;
              if (0x1999999999999997 < uVar15) {
                uVar15 = 0xffffffffffffffff;
                break;
              }
              bVar3 = *pbVar20;
              uVar15 = (ulong)(byte)(&DAT_01977bbf)[uVar25] + uVar15 * 10;
              uVar25 = (ulong)bVar3;
            } while ((1 << (ulong)(bVar3 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar3 >> 3]) != 0);
            *(ulong *)(uVar8 + 0x20) = uVar15;
            pbVar20 = *(byte **)(uVar28 + 0x18);
            if (pbVar20 != (byte *)0x0) goto LAB_00e50cb8;
LAB_00e50d38:
            *(undefined8 *)(uVar8 + 0x28) = 0;
            if (param_5[0xb] == 5) goto LAB_00e50d6c;
LAB_00e50d4c:
            uVar13 = 1;
LAB_00e50d50:
            *(undefined2 *)(uVar8 + 0xb0) = uVar13;
          }
          else {
            bVar3 = *pbVar20;
            if (((ulong)bVar3 == 0) ||
               ((1 << (ulong)(bVar3 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar3 >> 3]) == 0))
            goto LAB_00e5098c;
            uVar25 = 0;
            uVar8 = (ulong)bVar3;
            do {
              pbVar20 = pbVar20 + 1;
              if (0x1999999999999997 < uVar25) {
                uVar25 = 0xffffffffffffffff;
                break;
              }
              bVar3 = *pbVar20;
              uVar25 = (ulong)(byte)(&DAT_01977bbf)[uVar8] + uVar25 * 10;
              uVar8 = (ulong)bVar3;
            } while ((1 << (ulong)(bVar3 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar3 >> 3]) != 0);
            uVar8 = param_5[7];
            *(ulong *)(uVar8 + 0x18) = uVar25;
            pbVar20 = *(byte **)(uVar28 + 0x10);
            if (pbVar20 != (byte *)0x0) goto LAB_00e50c14;
LAB_00e50c94:
            *(undefined8 *)(uVar8 + 0x20) = 0;
            pbVar20 = *(byte **)(uVar28 + 0x18);
            if (pbVar20 == (byte *)0x0) goto LAB_00e50d38;
LAB_00e50cb8:
            bVar3 = *pbVar20;
            if (((ulong)bVar3 == 0) ||
               ((1 << (ulong)(bVar3 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar3 >> 3]) == 0))
            goto LAB_00e50d38;
            uVar15 = 0;
            uVar25 = (ulong)bVar3;
            do {
              pbVar20 = pbVar20 + 1;
              if (0x1999999999999997 < uVar15) {
                uVar15 = 0xffffffffffffffff;
                break;
              }
              bVar3 = *pbVar20;
              uVar15 = (ulong)(byte)(&DAT_01977bbf)[uVar25] + uVar15 * 10;
              uVar25 = (ulong)bVar3;
            } while ((1 << (ulong)(bVar3 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar3 >> 3]) != 0);
            *(ulong *)(uVar8 + 0x28) = uVar15;
            if (param_5[0xb] != 5) goto LAB_00e50d4c;
LAB_00e50d6c:
            pbVar20 = *(byte **)(uVar28 + 0x20);
            if ((pbVar20 != (byte *)0x0) && (bVar3 = *pbVar20, bVar3 != 0)) {
              bVar5 = bVar3 != 0x2d;
              if (!bVar5) {
                pbVar20 = pbVar20 + 1;
                bVar3 = *pbVar20;
              }
              if ((1 << (ulong)(bVar3 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar3 >> 3]) == 0) {
                uVar18 = 0;
              }
              else {
                uVar18 = 0;
                do {
                  pbVar20 = pbVar20 + 1;
                  uVar28 = (ulong)bVar3;
                  if (0xcca < (short)uVar18) {
                    uVar18 = 0x7fff;
                    break;
                  }
                  bVar3 = *pbVar20;
                  uVar18 = (ushort)(byte)(&DAT_01977bbf)[uVar28] + uVar18 * 10;
                } while ((1 << (ulong)(bVar3 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar3 >> 3]) != 0);
              }
              uVar2 = -uVar18;
              if (bVar5) {
                uVar2 = uVar18;
              }
              if (uVar2 < 5) {
                if (uVar2 < 3) {
                  if (uVar2 != 2) goto LAB_00e50d94;
                  uVar13 = 2;
                  goto LAB_00e50d98;
                }
                uVar13 = 4;
              }
              else {
                uVar13 = 8;
              }
              goto LAB_00e50d50;
            }
LAB_00e50d94:
            uVar13 = 1;
LAB_00e50d98:
            *(undefined2 *)(uVar8 + 0xb0) = uVar13;
          }
          *param_5 = *param_5 | 4;
          iVar6 = 0;
          goto LAB_00e50724;
        }
        iVar6 = strncmp(param_1,"CHARS",5);
        if (((iVar6 == 0) && ((byte)param_1[5] < 0x21)) &&
           ((1L << ((ulong)(byte)param_1[5] & 0x3f) & 0x100002601U) != 0)) {
          if ((uVar23 >> 3 & 1) != 0) {
            *(long *)(uVar28 + 0x40) = (long)(int)*(short *)(uVar28 + 0x10);
            sprintf((char *)local_178,"%hd");
            local_1a4 = FUN_00e519c0(param_5[7],"FONT_ASCENT",local_178);
            iVar6 = local_1a4;
            iVar7 = local_1a4;
            if (local_1a4 == 0) {
              *(long *)(param_5[7] + 0x48) = (long)(int)*(short *)(param_5[7] + 0x12);
              sprintf((char *)local_178,"%hd");
              iVar6 = FUN_00e519c0(param_5[7],"FONT_DESCENT",local_178);
              iVar7 = iVar6;
              if (iVar6 == 0) {
                iVar6 = -1;
                *param_4 = FUN_00e52180;
                iVar7 = iVar6;
              }
            }
            goto LAB_00e50724;
          }
          goto LAB_00e50364;
        }
      }
LAB_00e5023c:
      iVar6 = 3;
      iVar7 = iVar6;
      goto LAB_00e50724;
    }
    if ((uVar23 >> 2 & 1) == 0) {
      iVar6 = 0xb2;
      iVar7 = iVar6;
      goto LAB_00e50724;
    }
    iVar7 = FUN_00e51094(param_5 + 9," +",param_1,param_2);
    iVar6 = iVar7;
    if (iVar7 != 0) goto LAB_00e50724;
    uVar28 = param_5[9];
    pbVar20 = *(byte **)(uVar28 + 8);
    if (pbVar20 == (byte *)0x0) {
LAB_00e5075c:
      uVar8 = param_5[7];
      *(undefined2 *)(uVar8 + 8) = 0;
      pbVar20 = *(byte **)(uVar28 + 0x10);
      if (pbVar20 == (byte *)0x0) goto LAB_00e50a54;
LAB_00e509dc:
      bVar3 = *pbVar20;
      if (((ulong)bVar3 == 0) ||
         ((1 << (ulong)(bVar3 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar3 >> 3]) == 0))
      goto LAB_00e50a54;
      uVar23 = 0;
      uVar25 = (ulong)bVar3;
      do {
        pbVar20 = pbVar20 + 1;
        if (0x332 < (uVar23 >> 3 & 0x1fff)) {
          sVar14 = -1;
          break;
        }
        bVar3 = *pbVar20;
        uVar23 = (uint)(byte)(&DAT_01977bbf)[uVar25] + uVar23 * 10;
        sVar14 = (short)uVar23;
        uVar25 = (ulong)bVar3;
      } while ((1 << (ulong)(bVar3 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar3 >> 3]) != 0);
      *(short *)(uVar8 + 10) = sVar14;
      pbVar20 = *(byte **)(uVar28 + 0x18);
      if (pbVar20 != (byte *)0x0) goto LAB_00e50a8c;
LAB_00e50a64:
      *(undefined2 *)(uVar8 + 0xc) = 0;
      pbVar20 = *(byte **)(uVar28 + 0x20);
      if (pbVar20 != (byte *)0x0) goto LAB_00e50b38;
LAB_00e50a74:
      sVar17 = 0;
    }
    else {
      bVar3 = *pbVar20;
      if (((ulong)bVar3 == 0) ||
         ((1 << (ulong)(bVar3 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar3 >> 3]) == 0))
      goto LAB_00e5075c;
      uVar23 = 0;
      uVar8 = (ulong)bVar3;
      do {
        pbVar20 = pbVar20 + 1;
        if (0x332 < (uVar23 >> 3 & 0x1fff)) {
          uVar13 = 0xffff;
          break;
        }
        bVar3 = *pbVar20;
        uVar23 = (uint)(byte)(&DAT_01977bbf)[uVar8] + uVar23 * 10;
        uVar13 = (undefined2)uVar23;
        uVar8 = (ulong)bVar3;
      } while ((1 << (ulong)(bVar3 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar3 >> 3]) != 0);
      uVar8 = param_5[7];
      *(undefined2 *)(uVar8 + 8) = uVar13;
      pbVar20 = *(byte **)(uVar28 + 0x10);
      if (pbVar20 != (byte *)0x0) goto LAB_00e509dc;
LAB_00e50a54:
      sVar14 = 0;
      *(undefined2 *)(uVar8 + 10) = 0;
      pbVar20 = *(byte **)(uVar28 + 0x18);
      if (pbVar20 == (byte *)0x0) goto LAB_00e50a64;
LAB_00e50a8c:
      bVar3 = *pbVar20;
      sVar17 = 0;
      if (bVar3 != 0) {
        bVar5 = bVar3 == 0x2d;
        if (bVar5) {
          pbVar20 = pbVar20 + 1;
          bVar3 = *pbVar20;
        }
        if ((1 << (ulong)(bVar3 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar3 >> 3]) == 0) {
          sVar19 = 0;
        }
        else {
          sVar19 = 0;
          do {
            pbVar20 = pbVar20 + 1;
            uVar25 = (ulong)bVar3;
            if (0xcca < sVar19) {
              sVar19 = 0x7fff;
              break;
            }
            bVar3 = *pbVar20;
            sVar19 = (ushort)(byte)(&DAT_01977bbf)[uVar25] + sVar19 * 10;
          } while ((1 << (ulong)(bVar3 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar3 >> 3]) != 0);
        }
        sVar17 = -sVar19;
        if (!bVar5) {
          sVar17 = sVar19;
        }
      }
      *(short *)(uVar8 + 0xc) = sVar17;
      pbVar20 = *(byte **)(uVar28 + 0x20);
      if (pbVar20 == (byte *)0x0) goto LAB_00e50a74;
LAB_00e50b38:
      bVar3 = *pbVar20;
      sVar17 = 0;
      if (bVar3 != 0) {
        bVar5 = bVar3 == 0x2d;
        if (bVar5) {
          pbVar20 = pbVar20 + 1;
          bVar3 = *pbVar20;
        }
        if ((1 << (ulong)(bVar3 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar3 >> 3]) == 0) {
          sVar19 = 0;
        }
        else {
          sVar19 = 0;
          do {
            pbVar20 = pbVar20 + 1;
            uVar28 = (ulong)bVar3;
            if (0xcca < sVar19) {
              sVar19 = 0x7fff;
              break;
            }
            bVar3 = *pbVar20;
            sVar19 = (ushort)(byte)(&DAT_01977bbf)[uVar28] + sVar19 * 10;
          } while ((1 << (ulong)(bVar3 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar3 >> 3]) != 0);
        }
        sVar17 = -sVar19;
        if (!bVar5) {
          sVar17 = sVar19;
        }
      }
    }
    *(short *)(uVar8 + 0xe) = sVar17;
    *(short *)(uVar8 + 0x10) = sVar17 + sVar14;
    *(short *)(uVar8 + 0x12) = -sVar17;
    *param_5 = *param_5 | 8;
    iVar6 = 0;
    goto LAB_00e50724;
  }
  if ((uVar23 >> 3 & 1) == 0) {
LAB_00e50364:
    iVar6 = 0xb3;
    iVar7 = iVar6;
    goto LAB_00e50724;
  }
  local_1a4 = FUN_00e51094(param_5 + 9," +",param_1,param_2);
  iVar6 = local_1a4;
  iVar7 = local_1a4;
  if (local_1a4 != 0) goto LAB_00e50724;
  pbVar20 = *(byte **)(param_5[9] + 8);
  if (pbVar20 == (byte *)0x0) {
LAB_00e506fc:
    uVar28 = 0;
  }
  else {
    bVar3 = *pbVar20;
    if (((ulong)bVar3 == 0) ||
       ((1 << (ulong)(bVar3 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar3 >> 3]) == 0))
    goto LAB_00e506fc;
    uVar28 = 0;
    uVar8 = (ulong)bVar3;
    do {
      pbVar20 = pbVar20 + 1;
      if (0x1999999999999997 < uVar28) {
        uVar28 = 0xffffffffffffffff;
        break;
      }
      bVar3 = *pbVar20;
      uVar28 = (ulong)(byte)(&DAT_01977bbf)[uVar8] + uVar28 * 10;
      uVar8 = (ulong)bVar3;
    } while ((1 << (ulong)(bVar3 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar3 >> 3]) != 0);
  }
  uVar8 = param_5[7];
  *(ulong *)(uVar8 + 0x80) = uVar28;
  param_5[1] = uVar28;
  if (param_5[0xe] >> 2 < uVar28) {
    *(undefined8 *)(uVar8 + 0x80) = 0;
LAB_00e5071c:
    iVar6 = 6;
    iVar7 = iVar6;
  }
  else {
    uVar21 = FUN_00e13bcc(uVar21,0x18,0,uVar28,0,&local_1a4);
    uVar28 = param_5[7];
    *(undefined8 *)(uVar28 + 0x90) = uVar21;
    iVar6 = local_1a4;
    iVar7 = local_1a4;
    if (local_1a4 == 0) {
      *param_5 = *param_5 | 0x10;
      *param_4 = FUN_00e51504;
    }
    else {
      *(undefined8 *)(uVar28 + 0x80) = 0;
    }
  }
LAB_00e50724:
  local_1a4 = iVar7;
  if (*(long *)(lVar4 + 0x28) != lVar12) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar6;
}

