
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00e5f214(long *param_1,long param_2)

{
  ulong *puVar1;
  long *plVar2;
  ulong *puVar3;
  char cVar4;
  ushort uVar5;
  short sVar6;
  long lVar7;
  long **pplVar8;
  bool bVar9;
  char *pcVar10;
  int iVar11;
  char *pcVar12;
  long lVar13;
  ulong *puVar14;
  undefined1 uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  int iVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  uint *puVar29;
  uint uVar30;
  uint uVar31;
  long *local_3c8;
  long *local_3c0;
  ulong local_3b8 [51];
  uint local_21c;
  ulong local_218;
  ulong local_210;
  ulong uStack_208;
  undefined4 local_200;
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  uVar28 = *(undefined8 *)(param_2 + 0xa8);
  *(uint *)(param_1 + 9) = (uint)*(ushort *)(param_2 + 0x88);
  iVar11 = FT_Select_Charmap(param_2,0x756e6963);
  if (iVar11 == 0) {
    FUN_00e62308(param_1,param_2);
    puVar29 = (uint *)(&DAT_0197959c + (ulong)*(uint *)(*param_1 + 0xc) * 8);
    uVar16 = *puVar29;
    if (uVar16 != 0x1469) {
      local_3c0 = param_1 + 10;
      local_3c8 = param_1 + 0x71f;
      do {
        pcVar12 = &DAT_01978130 + uVar16;
        cVar4 = *pcVar12;
        pplVar8 = &local_3c8;
        if ((puVar29[1] & 2) != 0) {
          pplVar8 = &local_3c0;
        }
        plVar2 = *pplVar8;
        if (cVar4 == '\0') {
          uVar16 = 0;
          uVar31 = 0;
        }
        else {
          uVar16 = 0;
          bVar9 = true;
          uVar31 = 0;
          do {
            while( true ) {
              while (pcVar10 = pcVar12 + 1, cVar4 == ' ') {
                pcVar12 = pcVar10;
                cVar4 = *pcVar10;
              }
              if (cVar4 != '|') break;
              bVar9 = false;
              cVar4 = *pcVar10;
              pcVar12 = pcVar10;
joined_r0x00e5f4d0:
              if (cVar4 == '\0') goto LAB_00e5f508;
            }
            pcVar12 = (char *)FUN_00e62148(pcVar12,param_1,&local_218,&local_21c);
            uVar30 = uVar16;
            if ((((1 < local_21c) || (local_218 == 0)) ||
                (iVar11 = FT_Load_Glyph(param_2,local_218,1), iVar11 != 0)) ||
               (lVar20 = *(long *)(param_2 + 0x98), *(short *)(lVar20 + 0xca) < 3)) {
LAB_00e5f4cc:
              cVar4 = *pcVar12;
              uVar16 = uVar30;
              goto joined_r0x00e5f4d0;
            }
            if (*(short *)(lVar20 + 200) < 1) {
              uVar19 = 0;
            }
            else {
              lVar18 = *(long *)(lVar20 + 0xd0);
              uVar17 = 0;
              iVar11 = 0;
              uVar19 = 0;
              iVar25 = -1;
              do {
                sVar6 = *(short *)(*(long *)(lVar20 + 0xe0) + uVar17 * 2);
                if (iVar11 < sVar6) {
                  uVar5 = (ushort)puVar29[1];
                  lVar13 = (long)iVar11;
                  lVar26 = (long)(int)sVar6;
                  if ((uVar5 >> 1 & 1) == 0) {
                    if ((uVar5 & 1) == 0) {
                      lVar27 = lVar13 + -1;
                      puVar14 = (ulong *)(lVar18 + 8 + lVar13 * 0x10);
                      iVar11 = iVar25;
                      do {
                        lVar27 = lVar27 + 1;
                        iVar25 = (int)lVar27;
                        uVar24 = *puVar14;
                        if (-1 < iVar11 && (long)uVar19 <= (long)*puVar14) {
                          iVar25 = iVar11;
                          uVar24 = uVar19;
                        }
                        uVar19 = uVar24;
                        puVar14 = puVar14 + 2;
                        iVar11 = iVar25;
                      } while (lVar27 < lVar26);
                    }
                    else {
                      lVar27 = lVar13 + -1;
                      puVar14 = (ulong *)(lVar18 + 8 + lVar13 * 0x10);
                      iVar11 = iVar25;
                      do {
                        lVar27 = lVar27 + 1;
                        iVar25 = (int)lVar27;
                        uVar24 = *puVar14;
                        if (-1 < iVar11 && (long)*puVar14 <= (long)uVar19) {
                          iVar25 = iVar11;
                          uVar24 = uVar19;
                        }
                        uVar19 = uVar24;
                        puVar14 = puVar14 + 2;
                        iVar11 = iVar25;
                      } while (lVar27 < lVar26);
                    }
                  }
                  else if ((uVar5 & 1) == 0) {
                    lVar27 = lVar13 + -1;
                    puVar14 = (ulong *)(lVar18 + lVar13 * 0x10);
                    iVar11 = iVar25;
                    do {
                      lVar27 = lVar27 + 1;
                      iVar25 = (int)lVar27;
                      uVar24 = *puVar14;
                      if (-1 < iVar11 && (long)uVar19 <= (long)*puVar14) {
                        iVar25 = iVar11;
                        uVar24 = uVar19;
                      }
                      uVar19 = uVar24;
                      puVar14 = puVar14 + 2;
                      iVar11 = iVar25;
                    } while (lVar27 < lVar26);
                  }
                  else {
                    lVar27 = lVar13 + -1;
                    puVar14 = (ulong *)(lVar18 + lVar13 * 0x10);
                    iVar11 = iVar25;
                    do {
                      lVar27 = lVar27 + 1;
                      iVar25 = (int)lVar27;
                      uVar24 = *puVar14;
                      if (-1 < iVar11 && (long)*puVar14 <= (long)uVar19) {
                        iVar25 = iVar11;
                        uVar24 = uVar19;
                      }
                      uVar19 = uVar24;
                      puVar14 = puVar14 + 2;
                      iVar11 = iVar25;
                    } while (lVar27 < lVar26);
                  }
                }
                uVar17 = uVar17 + 1;
                iVar11 = sVar6 + 1;
              } while (uVar17 != ((long)*(short *)(lVar20 + 200) & 0xffffffffU));
            }
            if (bVar9) {
              uVar30 = uVar16 + 1;
              (&local_210)[uVar16] = uVar19;
              goto LAB_00e5f4cc;
            }
            uVar30 = uVar31 + 1;
            bVar9 = false;
            local_3b8[uVar31] = uVar19;
            cVar4 = *pcVar12;
            uVar31 = uVar30;
          } while (cVar4 != '\0');
        }
LAB_00e5f508:
        if (uVar16 != 0 || uVar31 != 0) {
          if (1 < uVar16) {
            uVar17 = 0;
            uVar19 = 1;
            do {
              uVar21 = (&local_210)[uVar19];
              uVar24 = uVar17;
              do {
                uVar23 = (&local_210)[uVar24 & 0xffffffff];
                if ((long)uVar23 <= (long)uVar21) break;
                uVar22 = uVar24 - 1;
                *(ulong *)((long)&uStack_208 + uVar24 * 8) = uVar23;
                (&local_210)[uVar24 & 0xffffffff] = uVar21;
                uVar24 = uVar22;
              } while ((int)uVar22 != -1);
              uVar19 = uVar19 + 1;
              uVar17 = uVar17 + 1;
            } while (uVar19 != uVar16);
          }
          if (1 < uVar31) {
            uVar17 = 0;
            uVar19 = 1;
            do {
              uVar21 = local_3b8[uVar19];
              uVar24 = uVar17;
              do {
                uVar23 = local_3b8[uVar24 & 0xffffffff];
                if ((long)uVar23 <= (long)uVar21) break;
                uVar22 = uVar24 - 1;
                local_3b8[uVar24 + 1] = uVar23;
                local_3b8[uVar24 & 0xffffffff] = uVar21;
                uVar24 = uVar22;
              } while ((int)uVar22 != -1);
              uVar19 = uVar19 + 1;
              uVar17 = uVar17 + 1;
            } while (uVar19 != uVar31);
          }
          uVar19 = (ulong)*(uint *)((long)plVar2 + 0x1ac);
          puVar14 = (ulong *)(plVar2 + uVar19 * 7 + 0x36);
          puVar1 = (ulong *)(plVar2 + uVar19 * 7 + 0x39);
          *(uint *)((long)plVar2 + 0x1ac) = *(uint *)((long)plVar2 + 0x1ac) + 1;
          if ((uVar31 == 0) || (uVar16 == 0)) {
            puVar3 = &local_210;
            if (uVar31 != 0) {
              puVar3 = local_3b8;
              uVar16 = uVar31;
            }
            uVar17 = puVar3[uVar16 >> 1];
            *puVar1 = uVar17;
            *puVar14 = uVar17;
LAB_00e5f648:
            uVar16 = (uint)(ushort)puVar29[1];
          }
          else {
            uVar17 = (&local_210)[uVar16 >> 1];
            *puVar14 = uVar17;
            uVar24 = local_3b8[uVar31 >> 1];
            *puVar1 = uVar24;
            if (uVar24 == uVar17) goto LAB_00e5f648;
            uVar16 = (uint)(ushort)puVar29[1];
            if (((ushort)puVar29[1] & 1) != (ushort)((long)uVar24 < (long)uVar17)) {
              lVar20 = uVar24 + uVar17;
              if (lVar20 < 0) {
                lVar20 = lVar20 + 1;
              }
              *puVar1 = lVar20 >> 1;
              *puVar14 = lVar20 >> 1;
            }
          }
          *(uint *)(plVar2 + uVar19 * 7 + 0x3c) = (uVar16 & 1) << 1;
        }
        puVar29 = puVar29 + 2;
        uVar16 = *puVar29;
      } while (uVar16 != 0x1469);
    }
    bVar9 = false;
    puVar14 = &local_210;
    local_3b8[0] = 0;
    local_200 = 0x392038;
    uStack_208._0_1_ = '4';
    uStack_208._1_1_ = ' ';
    uStack_208._2_1_ = '5';
    uStack_208._3_1_ = ' ';
    uStack_208._4_1_ = '6';
    uStack_208._5_1_ = ' ';
    uStack_208._6_1_ = '7';
    uStack_208._7_1_ = ' ';
    local_210._0_1_ = '0';
    local_210._1_1_ = ' ';
    local_210._2_1_ = '1';
    local_210._3_1_ = ' ';
    local_210._4_1_ = '2';
    local_210._5_1_ = ' ';
    local_210._6_1_ = '3';
    local_210._7_1_ = ' ';
    uVar19 = 0;
LAB_00e5f698:
    do {
      puVar14 = (ulong *)FUN_00e62148(puVar14,param_1,&local_218,&local_21c);
      uVar17 = local_218;
      if ((local_21c < 2) &&
         (FT_Get_Advance(*(undefined8 *)param_1[8],local_218 & 0xffffffff,0x803,local_3b8),
         uVar17 != 0)) {
        if (!bVar9) {
          bVar9 = true;
          uVar19 = local_3b8[0];
          if ((char)*puVar14 == '\0') break;
          goto LAB_00e5f698;
        }
        if (local_3b8[0] != uVar19) {
          uVar15 = 0;
          goto LAB_00e5f710;
        }
      }
    } while ((char)*puVar14 != '\0');
    uVar15 = 1;
LAB_00e5f710:
    *(undefined1 *)(param_1 + 7) = uVar15;
  }
  FT_Set_Charmap(param_2,uVar28);
  if (*(long *)(lVar7 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

