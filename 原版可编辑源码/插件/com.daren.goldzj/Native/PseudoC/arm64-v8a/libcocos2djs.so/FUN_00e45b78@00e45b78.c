
/* WARNING: Type propagation algorithm not settling */

ulong FUN_00e45b78(long param_1,ulong *param_2,uint param_3)

{
  undefined **ppuVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined6 uVar8;
  short sVar9;
  ushort uVar10;
  undefined4 *puVar11;
  undefined4 *puVar14;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  void *pvVar21;
  undefined2 *puVar22;
  byte *pbVar23;
  undefined1 *puVar24;
  code *pcVar25;
  ulong uVar26;
  int *piVar27;
  uint *puVar28;
  int iVar29;
  undefined4 *puVar30;
  byte *pbVar31;
  ulong uVar32;
  undefined **ppuVar33;
  long lVar34;
  ulong uVar35;
  byte *pbVar36;
  undefined4 *puVar37;
  byte *pbVar38;
  long lVar39;
  ulong uVar40;
  ulong uVar41;
  size_t __n;
  byte *pbVar42;
  int iVar43;
  int iVar44;
  undefined8 uVar45;
  undefined1 auVar46 [16];
  ulong uVar47;
  undefined1 auVar48 [16];
  byte *local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  uint local_68;
  uint local_64;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar15;
  undefined4 *puVar16;
  
  uVar17 = FUN_00e1bb5c(param_1,0);
  if (uVar17 != 0) {
    return (ulong)uVar17;
  }
  uVar17 = FUN_00e1dd74(param_1,&DAT_01977406,param_2 + 0x1f);
  if (uVar17 != 0) {
    return (ulong)uVar17;
  }
  *(int *)((long)param_2 + 0x11c) = *(int *)((long)param_2 + 0x11c) + (int)param_2[0x28] * 0x10000;
  local_68 = 0;
  if (((((int)param_2[0x1f] != 0x50465230) || (4 < *(uint *)((long)param_2 + 0xfc))) ||
      (*(uint *)((long)param_2 + 0x104) < 0x3a)) || ((int)param_2[0x20] != 0xd0a)) {
    return 2;
  }
  uVar17 = *(uint *)((long)param_2 + 0x10c);
  uVar18 = FUN_00e1bb5c(param_1,(ulong)uVar17);
  local_78 = (ulong *)CONCAT44(local_78._4_4_,uVar18);
  if (uVar18 != 0) {
    return (ulong)uVar18;
  }
  uVar18 = FUN_00e1bcf8(param_1,&local_78);
  if ((uint)local_78 != 0) {
    return (ulong)local_78 & 0xffffffff;
  }
  uVar18 = uVar18 & 0xffff;
  if (((0x3332 < uVar18) || (*(ulong *)(param_1 + 8) - (ulong)uVar17 <= (ulong)(uVar18 * 5 + 2))) ||
     (*(ulong *)(param_1 + 8) <= (ulong)(uVar18 * 0x17 + 0x5f))) {
    return 8;
  }
  local_68 = 0;
  *param_2 = (ulong)uVar18;
  if ((int)param_3 < 0) {
    return 0;
  }
  param_3 = param_3 & 0xffff;
  if ((ulong)uVar18 <= (ulong)param_3) {
    return 6;
  }
  uVar40 = param_2[0x28];
  uVar17 = FUN_00e1bb5c(param_1,*(undefined4 *)((long)param_2 + 0x10c));
  local_78 = (ulong *)CONCAT44(local_78._4_4_,uVar17);
  if (uVar17 != 0) {
    return (ulong)uVar17;
  }
  uVar17 = FUN_00e1bcf8(param_1,&local_78);
  if ((uint)local_78 != 0) {
    return (ulong)local_78 & 0xffffffff;
  }
  if ((uVar17 & 0xffff) <= param_3) {
    return 6;
  }
  uVar17 = FUN_00e1bc6c(param_1,param_3 * 5);
  local_78 = (ulong *)CONCAT44(local_78._4_4_,uVar17);
  if (uVar17 != 0) {
    return (ulong)uVar17;
  }
  uVar17 = FUN_00e1bcf8(param_1,&local_78);
  if ((uint)local_78 != 0) {
    return (ulong)local_78 & 0xffffffff;
  }
  uVar19 = FUN_00e1dbfc(param_1,&local_78);
  if ((uint)local_78 != 0) {
    return (ulong)local_78 & 0xffffffff;
  }
  uVar17 = uVar17 & 0xffff;
  *(undefined4 *)(param_2 + 0x2d) = uVar19;
  *(uint *)((long)param_2 + 0x164) = uVar17;
  uVar18 = FUN_00e1bb5c(param_1,uVar19);
  if (uVar18 != 0) {
    return (ulong)uVar18;
  }
  local_78._0_4_ = uVar18;
  uVar18 = FUN_00e1d718(param_1,(ulong)uVar17);
  if (uVar18 != 0) {
    return (ulong)uVar18;
  }
  if (uVar17 < 0xd) {
LAB_00e45f9c:
    local_78._0_4_ = 8;
  }
  else {
    pbVar36 = *(byte **)(param_1 + 0x40);
    *(uint *)((long)param_2 + 0x16c) =
         (uint)*pbVar36 << 0x10 | (uint)pbVar36[1] << 8 | (uint)pbVar36[2];
    *(uint *)(param_2 + 0x2e) = (uint)pbVar36[3] << 0x10 | (uint)pbVar36[4] << 8 | (uint)pbVar36[5];
    *(uint *)((long)param_2 + 0x174) =
         (uint)pbVar36[6] << 0x10 | (uint)pbVar36[7] << 8 | (uint)pbVar36[8];
    *(uint *)(param_2 + 0x2f) =
         (uint)pbVar36[9] << 0x10 | (uint)pbVar36[10] << 8 | (uint)pbVar36[0xb];
    bVar3 = pbVar36[0xc];
    if ((bVar3 >> 2 & 1) == 0) {
      uVar18 = 0;
    }
    else {
      uVar20 = 1;
      if ((bVar3 & 8) != 0) {
        uVar20 = 2;
      }
      uVar18 = uVar20 + 3;
      if ((bVar3 & 3) != 0) {
        uVar18 = uVar20;
      }
    }
    if ((bVar3 >> 4 & 1) != 0) {
      iVar29 = 1;
      if ((bVar3 & 0x20) != 0) {
        iVar29 = 2;
      }
      uVar18 = uVar18 + iVar29;
    }
    pbVar42 = pbVar36 + 0xd;
    pbVar23 = pbVar36 + uVar17;
    if (pbVar23 < pbVar42 + uVar18) goto LAB_00e45f9c;
    if ((bVar3 >> 2 & 1) != 0) {
      if ((bVar3 >> 3 & 1) == 0) {
        pbVar42 = pbVar36 + 0xe;
        *(uint *)(param_2 + 0x30) = (uint)pbVar36[0xd];
      }
      else {
        pbVar42 = pbVar36 + 0xf;
        *(uint *)(param_2 + 0x30) = (int)(short)((ushort)pbVar36[0xd] << 8) | (uint)pbVar36[0xe];
      }
      if ((bVar3 & 3) == 0) {
        bVar4 = *pbVar42;
        pbVar36 = pbVar42 + 1;
        pbVar31 = pbVar42 + 2;
        pbVar42 = pbVar42 + 3;
        *(uint *)(param_2 + 0x31) = (uint)bVar4 << 0x10 | (uint)*pbVar36 << 8 | (uint)*pbVar31;
      }
    }
    pbVar36 = pbVar42;
    if ((bVar3 >> 4 & 1) != 0) {
      if ((bVar3 >> 5 & 1) == 0) {
        pbVar36 = pbVar42 + 1;
        uVar17 = (uint)*pbVar42;
      }
      else {
        pbVar36 = pbVar42 + 2;
        uVar17 = (int)(short)((ushort)*pbVar42 << 8) | (uint)pbVar42[1];
      }
      *(uint *)((long)param_2 + 0x184) = uVar17;
    }
    pbVar42 = pbVar36;
    if ((bVar3 >> 6 & 1) != 0) {
      pbVar42 = pbVar36 + 1;
      if (pbVar23 < pbVar42) goto LAB_00e45f9c;
      if (*pbVar36 != 0) {
        iVar29 = -(uint)*pbVar36;
        do {
          if ((pbVar23 < pbVar42 + 2) || (pbVar42 = pbVar42 + 2 + *pbVar42, pbVar23 < pbVar42))
          goto LAB_00e45f9c;
          iVar29 = iVar29 + 1;
        } while (iVar29 != 0);
      }
    }
    local_78._0_4_ = 0;
    if (pbVar23 < pbVar42 + 5) goto LAB_00e45f9c;
    bVar3 = *pbVar42;
    bVar4 = pbVar42[1];
    *(uint *)((long)param_2 + 0x18c) = (uint)CONCAT11(bVar3,bVar4);
    *(uint *)(param_2 + 0x32) = (uint)pbVar42[2] << 0x10 | (uint)pbVar42[3] << 8 | (uint)pbVar42[4];
    if ((int)uVar40 != 0) {
      if (pbVar23 < pbVar42 + 6) goto LAB_00e45f9c;
      *(uint *)((long)param_2 + 0x18c) = (uint)CONCAT12(pbVar42[5],CONCAT11(bVar3,bVar4));
    }
  }
  FUN_00e1d90c(param_1);
  local_68 = (uint)local_78;
  if ((uint)local_78 != 0) {
    return (ulong)(uint)local_78;
  }
  uVar17 = (uint)param_2[0x32];
  uVar40 = *(ulong *)(param_1 + 0x38);
  uVar18 = *(uint *)((long)param_2 + 0x18c);
  uVar41 = (ulong)uVar18;
  param_2[0x4d] = 0;
  param_2[0x33] = uVar40;
  *(uint *)(param_2 + 0x34) = uVar17;
  param_2[0x4e] = (ulong)(param_2 + 0x4d);
  local_64 = FUN_00e1bb5c(param_1,(ulong)uVar17);
  if (local_64 != 0) {
    return (ulong)local_64;
  }
  uVar20 = FUN_00e1d718(param_1,uVar41);
  if (uVar20 != 0) {
    return (ulong)uVar20;
  }
  puVar24 = *(undefined1 **)(param_1 + 0x40);
  param_2[0x50] = (ulong)puVar24;
  if (0xe < uVar18) {
    *(uint *)((long)param_2 + 0x1a4) = (uint)CONCAT11(*puVar24,puVar24[1]);
    *(uint *)(param_2 + 0x35) = (uint)CONCAT11(puVar24[2],puVar24[3]);
    *(uint *)((long)param_2 + 0x1ac) = (uint)CONCAT11(puVar24[4],puVar24[5]);
    param_2[0x36] = (long)(short)((ushort)(byte)puVar24[6] << 8) | (ulong)(byte)puVar24[7];
    param_2[0x37] = (long)(short)((ushort)(byte)puVar24[8] << 8) | (ulong)(byte)puVar24[9];
    param_2[0x38] = (long)(short)((ushort)(byte)puVar24[10] << 8) | (ulong)(byte)puVar24[0xb];
    param_2[0x39] = (long)(short)((ushort)(byte)puVar24[0xc] << 8) | (ulong)(byte)puVar24[0xd];
    bVar3 = puVar24[0xe];
    uVar32 = (ulong)bVar3;
    *(uint *)(param_2 + 0x3a) = (uint)bVar3;
    iVar29 = (int)(uVar32 & 4);
    if (iVar29 == 0) {
      if (uVar18 < 0x11) goto LAB_00e46460;
      pbVar36 = puVar24 + 0x11;
      *(uint *)((long)param_2 + 0x1d4) =
           (int)(short)((ushort)(byte)puVar24[0xf] << 8) | (uint)(byte)puVar24[0x10];
    }
    else {
      pbVar36 = puVar24 + 0xf;
    }
    pbVar42 = pbVar36;
    if ((char)bVar3 < '\0') {
      local_88 = puVar24 + uVar41;
      pbVar42 = pbVar36 + 1;
      if (local_88 < pbVar42) {
LAB_00e46138:
        uVar20 = 8;
        goto LAB_00e46468;
      }
      uVar18 = (uint)*pbVar36;
      if (*pbVar36 != 0) {
        local_64 = 0;
        pbVar36 = pbVar42;
        do {
          pbVar23 = pbVar36 + 2;
          if ((local_88 < pbVar23) || (pbVar42 = pbVar23 + *pbVar36, local_88 < pbVar42))
          goto LAB_00e46138;
          pcVar25 = FUN_00e47cec;
          ppuVar33 = &PTR_FUN_01c94f70;
          if (pbVar36[1] != 1) {
            do {
              pcVar25 = (code *)*ppuVar33;
              if (pcVar25 == (code *)0x0) goto LAB_00e461c0;
              ppuVar1 = ppuVar33 + -1;
              ppuVar33 = ppuVar33 + 2;
            } while (*(uint *)ppuVar1 != (uint)pbVar36[1]);
          }
          uVar20 = (*pcVar25)(pbVar23,pbVar42,param_2 + 0x33);
          if (uVar20 != 0) goto LAB_00e46468;
LAB_00e461c0:
          uVar18 = uVar18 - 1;
          pbVar36 = pbVar42;
        } while (uVar18 != 0);
      }
    }
    local_64 = 0;
    local_88 = puVar24 + uVar41;
    pbVar36 = pbVar42 + 3;
    if (pbVar36 <= local_88) {
      uVar41 = (ulong)*pbVar42 << 0x10 | (ulong)pbVar42[1] << 8 | (ulong)pbVar42[2];
      pbVar42 = pbVar36;
      if (uVar41 != 0) {
        pbVar42 = pbVar36 + uVar41;
        if (local_88 < pbVar42) goto LAB_00e46460;
        while (pbVar23 = pbVar36 + 4, pbVar23 <= pbVar42) {
          uVar35 = (ulong)CONCAT11(*pbVar36,pbVar36[1]);
          uVar18 = (uint)CONCAT11(*pbVar36,pbVar36[1]);
          uVar20 = uVar18 - 4;
          __n = (size_t)uVar20;
          if ((uVar18 < 4) || (uVar41 < uVar35)) break;
          sVar9 = CONCAT11(pbVar36[2],pbVar36[3]);
          if (sVar9 == 3) {
            local_78._0_4_ = 0;
            if (param_2[0x43] != 0) {
              FUN_00e139fc(uVar40);
              param_2[0x43] = 0;
            }
            if ((uVar20 == 0) ||
               ((uVar18 = uVar18 - 5, pbVar23[uVar18] == 0 && (__n = (size_t)uVar18, uVar18 == 0))))
            {
LAB_00e46418:
              param_2[0x43] = 0;
LAB_00e46420:
              local_64 = 0;
            }
            else {
              uVar26 = 0;
              do {
                if ((pbVar23[uVar26] < 0x20) || ((char)pbVar23[uVar26] < '\0')) goto LAB_00e46418;
                uVar18 = (int)uVar26 + 1;
                uVar26 = (ulong)uVar18;
              } while (uVar18 < (uint)__n);
              pvVar21 = (void *)FUN_00e1388c(uVar40,(uint)__n + 1,&local_78);
              if ((uint)local_78 != 0) {
                param_2[0x43] = (ulong)pvVar21;
LAB_00e46a00:
                return (ulong)(uint)local_78;
              }
              memcpy(pvVar21,pbVar23,__n);
              *(undefined1 *)((long)pvVar21 + __n) = 0;
              param_2[0x43] = (ulong)pvVar21;
              local_64 = (uint)local_78;
joined_r0x00e463a0:
              local_78._0_4_ = local_64;
              if (local_64 != 0) {
                return (ulong)local_64;
              }
            }
          }
          else if (sVar9 == 2) {
            if (0x23 < uVar18) {
              *(uint *)(param_2 + 0x3b) =
                   (int)(short)((ushort)pbVar36[0xe] << 8) | (uint)pbVar36[0xf];
              *(uint *)((long)param_2 + 0x1dc) =
                   (int)(short)((ushort)pbVar36[0x10] << 8) | (uint)pbVar36[0x11];
              *(uint *)(param_2 + 0x3c) =
                   (int)(short)((ushort)pbVar36[0x12] << 8) | (uint)pbVar36[0x13];
            }
          }
          else if (sVar9 == 1) {
            local_78._0_4_ = 0;
            if (param_2[0x42] != 0) {
              FUN_00e139fc(uVar40);
              param_2[0x42] = 0;
            }
            if ((uVar20 == 0) ||
               ((uVar18 = uVar18 - 5, pbVar23[uVar18] == 0 && (__n = (size_t)uVar18, uVar18 == 0))))
            {
LAB_00e4640c:
              param_2[0x42] = 0;
              goto LAB_00e46420;
            }
            uVar26 = 0;
            do {
              if ((pbVar23[uVar26] < 0x20) || ((char)pbVar23[uVar26] < '\0')) goto LAB_00e4640c;
              uVar18 = (int)uVar26 + 1;
              uVar26 = (ulong)uVar18;
            } while (uVar18 < (uint)__n);
            pvVar21 = (void *)FUN_00e1388c(uVar40,(uint)__n + 1,&local_78);
            if ((uint)local_78 != 0) {
              param_2[0x42] = (ulong)pvVar21;
              goto LAB_00e46a00;
            }
            memcpy(pvVar21,pbVar23,__n);
            *(undefined1 *)((long)pvVar21 + __n) = 0;
            param_2[0x42] = (ulong)pvVar21;
            local_64 = (uint)local_78;
            goto joined_r0x00e463a0;
          }
          uVar41 = uVar41 - uVar35;
          pbVar36 = pbVar36 + uVar35;
          if (uVar41 == 0) break;
        }
      }
      pbVar36 = pbVar42 + 1;
      if (pbVar36 <= local_88) {
        bVar4 = *pbVar42;
        uVar41 = (ulong)bVar4;
        *(uint *)(param_2 + 0x46) = (uint)bVar4;
        if (pbVar36 + uVar41 * 2 <= local_88) {
          pbVar23 = (byte *)FUN_00e13bcc(uVar40,4,0,uVar41,0,&local_64);
          param_2[0x47] = (ulong)pbVar23;
          uVar20 = local_64;
          if (local_64 != 0) goto LAB_00e46468;
          if (bVar4 != 0) {
            if ((bVar4 < 4) ||
               ((pbVar23 < pbVar42 + (uVar41 << 1 | 1) && (pbVar36 < pbVar23 + uVar41 * 4)))) {
              uVar35 = 0;
              pbVar31 = pbVar36;
LAB_00e467e0:
              lVar34 = uVar41 - uVar35;
              puVar28 = (uint *)(pbVar23 + uVar35 * 4);
              do {
                bVar5 = *pbVar31;
                pbVar36 = pbVar31 + 1;
                lVar34 = lVar34 + -1;
                pbVar31 = pbVar31 + 2;
                *puVar28 = (int)(short)((ushort)bVar5 << 8) | (uint)*pbVar36;
                puVar28 = puVar28 + 1;
              } while (lVar34 != 0);
            }
            else {
              uVar35 = uVar41 & 0xfc;
              pbVar31 = pbVar36 + uVar35 * 2;
              uVar26 = uVar35;
              pbVar38 = pbVar23;
              do {
                uVar45 = *(undefined8 *)pbVar36;
                uVar26 = uVar26 - 4;
                uVar47 = NEON_rev16(uVar45,1);
                uVar47 = uVar47 & 0xff00ff00ff00ff;
                sVar9 = CONCAT11((char)uVar45,(char)uVar47);
                uVar19 = CONCAT13((char)((ulong)uVar45 >> 0x10),
                                  CONCAT12((char)(uVar47 >> 0x10),sVar9));
                uVar8 = CONCAT15((char)((ulong)uVar45 >> 0x20),
                                 CONCAT14((char)(uVar47 >> 0x20),uVar19));
                auVar46._0_8_ = CONCAT44((int)(short)((uint)uVar19 >> 0x10),(int)sVar9);
                auVar46._8_4_ = (int)(short)((uint6)uVar8 >> 0x20);
                auVar46._12_4_ =
                     (int)(short)(CONCAT17((char)((ulong)uVar45 >> 0x30),
                                           CONCAT16((char)(uVar47 >> 0x30),uVar8)) >> 0x30);
                *(long *)(pbVar38 + 8) = auVar46._8_8_;
                *(undefined8 *)pbVar38 = auVar46._0_8_;
                pbVar38 = pbVar38 + 0x10;
                pbVar36 = pbVar36 + 8;
              } while (uVar26 != 0);
              if (uVar35 != uVar41) goto LAB_00e467e0;
            }
            pbVar36 = pbVar42 + (ulong)(bVar4 - 1) * 2 + 3;
          }
          pbVar42 = pbVar36 + 8;
          if (pbVar42 <= local_88) {
            *(uint *)(param_2 + 0x48) = (uint)*pbVar36;
            *(uint *)((long)param_2 + 0x244) = (uint)pbVar36[1];
            *(uint *)(param_2 + 0x3f) = (uint)CONCAT11(pbVar36[2],pbVar36[3]);
            *(uint *)(param_2 + 0x3d) = (uint)CONCAT11(pbVar36[4],pbVar36[5]);
            uVar18 = 4;
            if ((bVar3 & 2) != 0) {
              uVar18 = 5;
            }
            uVar10 = CONCAT11(pbVar36[6],pbVar36[7]);
            uVar41 = (ulong)uVar10;
            *(uint *)(param_2 + 0x49) = (uint)uVar10;
            param_2[0x4a] = (ulong)(pbVar42 + ((ulong)uVar17 - *(long *)(param_1 + 0x40)));
            if (pbVar42 + uVar41 * (((ulong)(bVar3 >> 4) & 1) + ((uVar32 & 8) >> 3) +
                                    ((uVar32 & 0x20) >> 5) + ((ulong)uVar18 | (uVar32 & 4) >> 1)) <=
                local_88) {
              uVar40 = FUN_00e13bcc(uVar40,0x10,0,uVar41,0,&local_64);
              param_2[0x4b] = uVar40;
              uVar20 = local_64;
              if ((uVar10 != 0) && (local_64 == 0)) {
                iVar44 = (int)(uVar32 & 8);
                iVar43 = (int)(uVar32 & 0x20);
                if ((bVar3 >> 1 & 1) == 0) {
                  if (iVar29 == 0) {
                    lVar34 = 1;
                    if (iVar44 != 0) {
                      lVar34 = 2;
                    }
                    uVar17 = *(uint *)((long)param_2 + 0x1d4);
                    if ((bVar3 & 0x10) == 0) {
                      puVar28 = (uint *)(uVar40 + 8);
                      do {
                        puVar28[-2] = (uint)*pbVar42;
                        puVar28[-1] = uVar17;
                        pbVar36 = pbVar42 + lVar34;
                        pbVar23 = pbVar36 + 1;
                        *puVar28 = (uint)*pbVar36;
                        if (iVar43 == 0) {
                          pbVar42 = pbVar36 + 3;
                          lVar39 = 1;
                          uVar18 = (uint)*pbVar23 << 8;
                        }
                        else {
                          pbVar42 = pbVar36 + 4;
                          uVar18 = (uint)*pbVar23 << 0x10 | (uint)pbVar36[2] << 8;
                          lVar39 = 2;
                        }
                        uVar41 = uVar41 - 1;
                        puVar28[1] = uVar18 | pbVar23[lVar39];
                        puVar28 = puVar28 + 4;
                      } while (uVar41 != 0);
                    }
                    else {
                      puVar28 = (uint *)(uVar40 + 8);
                      do {
                        pbVar23 = pbVar42 + lVar34;
                        puVar28[-2] = (uint)*pbVar42;
                        puVar28[-1] = uVar17;
                        pbVar36 = pbVar23 + 2;
                        *puVar28 = (uint)CONCAT11(*pbVar23,pbVar23[1]);
                        if (iVar43 == 0) {
                          pbVar42 = pbVar23 + 4;
                          lVar39 = 1;
                          uVar18 = (uint)*pbVar36 << 8;
                        }
                        else {
                          pbVar42 = pbVar23 + 5;
                          uVar18 = (uint)*pbVar36 << 0x10 | (uint)pbVar23[3] << 8;
                          lVar39 = 2;
                        }
                        uVar41 = uVar41 - 1;
                        puVar28[1] = uVar18 | pbVar36[lVar39];
                        puVar28 = puVar28 + 4;
                      } while (uVar41 != 0);
                    }
                  }
                  else {
                    lVar34 = 3;
                    if (iVar44 != 0) {
                      lVar34 = 4;
                    }
                    puVar28 = (uint *)(uVar40 + 8);
                    do {
                      puVar28[-2] = (uint)*pbVar42;
                      puVar28[-1] = (int)(short)((ushort)pbVar42[1] << 8) | (uint)pbVar42[2];
                      pbVar42 = pbVar42 + lVar34;
                      if ((bVar3 & 0x10) == 0) {
                        pbVar36 = pbVar42 + 1;
                        *puVar28 = (uint)*pbVar42;
                        if (iVar43 != 0) goto LAB_00e46a60;
LAB_00e46a88:
                        pbVar42 = pbVar36 + 2;
                        lVar39 = 1;
                        uVar17 = (uint)*pbVar36 << 8;
                      }
                      else {
                        pbVar36 = pbVar42 + 2;
                        *puVar28 = (uint)CONCAT11(*pbVar42,pbVar42[1]);
                        if (iVar43 == 0) goto LAB_00e46a88;
LAB_00e46a60:
                        pbVar42 = pbVar36 + 3;
                        uVar17 = (uint)*pbVar36 << 0x10 | (uint)pbVar36[1] << 8;
                        lVar39 = 2;
                      }
                      uVar41 = uVar41 - 1;
                      puVar28[1] = uVar17 | pbVar36[lVar39];
                      puVar28 = puVar28 + 4;
                    } while (uVar41 != 0);
                  }
                }
                else if (iVar29 == 0) {
                  lVar34 = 2;
                  if (iVar44 != 0) {
                    lVar34 = 3;
                  }
                  uVar17 = *(uint *)((long)param_2 + 0x1d4);
                  if ((bVar3 & 0x10) == 0) {
                    puVar28 = (uint *)(uVar40 + 8);
                    do {
                      puVar28[-2] = (uint)CONCAT11(*pbVar42,pbVar42[1]);
                      puVar28[-1] = uVar17;
                      pbVar36 = pbVar42 + lVar34;
                      pbVar23 = pbVar36 + 1;
                      *puVar28 = (uint)*pbVar36;
                      if (iVar43 == 0) {
                        pbVar42 = pbVar36 + 3;
                        lVar39 = 1;
                        uVar18 = (uint)*pbVar23 << 8;
                      }
                      else {
                        pbVar42 = pbVar36 + 4;
                        uVar18 = (uint)*pbVar23 << 0x10 | (uint)pbVar36[2] << 8;
                        lVar39 = 2;
                      }
                      uVar41 = uVar41 - 1;
                      puVar28[1] = uVar18 | pbVar23[lVar39];
                      puVar28 = puVar28 + 4;
                    } while (uVar41 != 0);
                  }
                  else {
                    puVar28 = (uint *)(uVar40 + 8);
                    do {
                      pbVar23 = pbVar42 + lVar34;
                      puVar28[-2] = (uint)CONCAT11(*pbVar42,pbVar42[1]);
                      puVar28[-1] = uVar17;
                      pbVar36 = pbVar23 + 2;
                      *puVar28 = (uint)CONCAT11(*pbVar23,pbVar23[1]);
                      if (iVar43 == 0) {
                        pbVar42 = pbVar23 + 4;
                        lVar39 = 1;
                        uVar18 = (uint)*pbVar36 << 8;
                      }
                      else {
                        pbVar42 = pbVar23 + 5;
                        uVar18 = (uint)*pbVar36 << 0x10 | (uint)pbVar23[3] << 8;
                        lVar39 = 2;
                      }
                      uVar41 = uVar41 - 1;
                      puVar28[1] = uVar18 | pbVar36[lVar39];
                      puVar28 = puVar28 + 4;
                    } while (uVar41 != 0);
                  }
                }
                else {
                  lVar34 = 4;
                  if (iVar44 != 0) {
                    lVar34 = 5;
                  }
                  puVar28 = (uint *)(uVar40 + 8);
                  do {
                    puVar28[-2] = (uint)CONCAT11(*pbVar42,pbVar42[1]);
                    puVar28[-1] = (int)(short)((ushort)pbVar42[2] << 8) | (uint)pbVar42[3];
                    pbVar42 = pbVar42 + lVar34;
                    if ((bVar3 & 0x10) == 0) {
                      pbVar36 = pbVar42 + 1;
                      *puVar28 = (uint)*pbVar42;
                      if (iVar43 != 0) goto LAB_00e46958;
LAB_00e46980:
                      pbVar42 = pbVar36 + 2;
                      lVar39 = 1;
                      uVar17 = (uint)*pbVar36 << 8;
                    }
                    else {
                      pbVar36 = pbVar42 + 2;
                      *puVar28 = (uint)CONCAT11(*pbVar42,pbVar42[1]);
                      if (iVar43 == 0) goto LAB_00e46980;
LAB_00e46958:
                      pbVar42 = pbVar36 + 3;
                      uVar17 = (uint)*pbVar36 << 0x10 | (uint)pbVar36[1] << 8;
                      lVar39 = 2;
                    }
                    uVar41 = uVar41 - 1;
                    puVar28[1] = uVar17 | pbVar36[lVar39];
                    puVar28 = puVar28 + 4;
                  } while (uVar41 != 0);
                }
              }
              goto LAB_00e46468;
            }
          }
        }
      }
    }
  }
LAB_00e46460:
  local_64 = 8;
  uVar20 = local_64;
LAB_00e46468:
  local_64 = uVar20;
  FUN_00e1d90c(param_1);
  uVar40 = FUN_00e1d4a0(param_1);
  param_2[0x4f] = uVar40;
  param_2[0x50] = 0;
  uVar40 = (ulong)local_64;
  local_68 = local_64;
  if (local_64 == 0) {
    uVar17 = (uint)param_2[0x49];
    uVar40 = param_2[2] | 1;
    param_2[4] = (ulong)uVar17 + 1;
    param_2[1] = (ulong)param_3;
    param_2[2] = uVar40;
    if (uVar17 == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = 0;
      do {
        if (*(int *)(param_2[0x4b] + (ulong)uVar18 * 0x10 + 0xc) != 0) break;
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar17);
    }
    if (uVar18 == uVar17) {
      if ((int)param_2[0x44] == 0) {
        return 3;
      }
      uVar40 = 0;
      param_2[2] = 0;
    }
    uVar17 = (uint)param_2[0x3a];
    if ((uVar17 >> 2 & 1) == 0) {
      uVar40 = uVar40 | 4;
      param_2[2] = uVar40;
    }
    iVar29 = (int)param_2[0x44];
    uVar41 = 0x10;
    if ((uVar17 & 1) != 0) {
      uVar41 = 0x20;
    }
    uVar40 = uVar40 | uVar41;
    param_2[2] = uVar40;
    if (iVar29 != 0) {
      uVar40 = uVar40 | 2;
      param_2[2] = uVar40;
    }
    if ((int)param_2[0x4c] != 0) {
      param_2[2] = uVar40 | 0x40;
    }
    param_2[5] = param_2[0x42];
    if (param_2[0x42] == 0) {
      param_2[5] = param_2[0x41];
    }
    *(undefined4 *)(param_2 + 7) = 0;
    param_2[8] = 0;
    uVar20 = (uint)param_2[0x35];
    param_2[6] = param_2[0x43];
    *(short *)(param_2 + 0x11) = (short)uVar20;
    param_2[0x10] = SUB168(*(undefined1 (*) [16])(param_2 + 0x38),8);
    param_2[0xf] = SUB168(*(undefined1 (*) [16])(param_2 + 0x38),0);
    param_2[0xe] = SUB168(*(undefined1 (*) [16])(param_2 + 0x36),8);
    param_2[0xd] = SUB168(*(undefined1 (*) [16])(param_2 + 0x36),0);
    *(short *)((long)param_2 + 0x8a) = (short)param_2[0x39];
    uVar18 = (int)(short)param_2[0x39] - (int)(short)param_2[0x37];
    uVar20 = (((uVar20 & 0xffff) + (uVar20 & 0xffff) * 2) * 4) / 10;
    if ((int)uVar18 <= (int)(short)uVar20) {
      uVar18 = uVar20;
    }
    *(short *)((long)param_2 + 0x8c) = (short)param_2[0x37];
    *(short *)((long)param_2 + 0x8e) = (short)uVar18;
    if (iVar29 != 0) {
      puVar22 = (undefined2 *)
                FUN_00e13bcc(*(undefined8 *)(param_2[0x18] + 0x38),0x20,0,iVar29,0,&local_68);
      param_2[8] = (ulong)puVar22;
      if (local_68 != 0) {
        return (ulong)local_68;
      }
      piVar27 = (int *)(param_2[0x45] + 4);
      iVar44 = iVar29;
      do {
        iVar43 = *piVar27;
        iVar44 = iVar44 + -1;
        *puVar22 = (short)iVar43;
        iVar2 = piVar27[-1];
        uVar40 = (ulong)(uint)(iVar43 << 6);
        piVar27 = piVar27 + 10;
        *(ulong *)(puVar22 + 4) = uVar40;
        puVar22[1] = (short)iVar2;
        *(ulong *)(puVar22 + 8) = (ulong)(uint)(iVar2 << 6);
        *(ulong *)(puVar22 + 0xc) = uVar40;
        puVar22 = puVar22 + 0x10;
      } while (iVar44 != 0);
      uVar17 = (uint)param_2[0x3a];
      *(int *)(param_2 + 7) = iVar29;
    }
    if ((uVar17 >> 2 & 1) == 0) {
      iVar29 = *(int *)((long)param_2 + 0x1d4);
    }
    else {
      uVar17 = (uint)param_2[0x49];
      if (uVar17 == 0) {
        iVar29 = 0;
      }
      else {
        uVar41 = param_2[0x4b];
        uVar40 = (ulong)(uVar17 - 1) + 1;
        if (uVar40 < 9) {
          iVar44 = 0;
        }
        else {
          uVar18 = 8;
          if ((uVar17 & 7) != 0) {
            uVar18 = uVar17 & 7;
          }
          lVar34 = uVar40 - uVar18;
          puVar30 = (undefined4 *)(uVar41 + 0x44);
          auVar46 = ZEXT816(0);
          uVar41 = uVar41 + lVar34 * 0x10;
          uVar17 = uVar17 - (int)lVar34;
          auVar48 = ZEXT816(0);
          do {
            puVar37 = puVar30 + -0x10;
            uVar19 = *puVar30;
            puVar11 = puVar30 + 4;
            puVar12 = puVar30 + 8;
            puVar13 = puVar30 + 0xc;
            puVar14 = puVar30 + -0xc;
            puVar15 = puVar30 + -8;
            puVar16 = puVar30 + -4;
            lVar34 = lVar34 + -8;
            puVar30 = puVar30 + 0x20;
            auVar6._4_4_ = *puVar11;
            auVar6._0_4_ = uVar19;
            auVar6._8_4_ = *puVar12;
            auVar6._12_4_ = *puVar13;
            auVar48 = NEON_smax(auVar48,auVar6,4);
            auVar7._4_4_ = *puVar14;
            auVar7._0_4_ = *puVar37;
            auVar7._8_4_ = *puVar15;
            auVar7._12_4_ = *puVar16;
            auVar46 = NEON_smax(auVar46,auVar7,4);
          } while (lVar34 != 0);
          auVar46 = NEON_smax(auVar46,auVar48,4);
          iVar44 = NEON_smaxv(auVar46,4);
        }
        piVar27 = (int *)(uVar41 + 4);
        do {
          iVar29 = *piVar27;
          if (*piVar27 <= iVar44) {
            iVar29 = iVar44;
          }
          uVar17 = uVar17 - 1;
          piVar27 = piVar27 + 4;
          iVar44 = iVar29;
        } while (uVar17 != 0);
      }
    }
    *(short *)(param_2 + 0x12) = (short)iVar29;
    *(undefined2 *)((long)param_2 + 0x92) = *(undefined2 *)((long)param_2 + 0x8e);
    lVar34 = (ulong)(ushort)param_2[0x11] * -0x66666667;
    *(ushort *)((long)param_2 + 0x96) = (ushort)param_2[0x11] / 0x1e;
    *(short *)((long)param_2 + 0x94) =
         (short)(uint)((ulong)lVar34 >> 0x22) - (short)(lVar34 >> 0x3f);
    uStack_70 = 0x10003756e6963;
    local_78 = param_2;
    uVar17 = FUN_00e17cf8(&DAT_01c94e00,0,&local_78,0);
    uVar40 = (ulong)uVar17;
    if ((int)param_2[0x4c] != 0) {
      param_2[2] = param_2[2] | 0x40;
    }
  }
  return uVar40;
}

