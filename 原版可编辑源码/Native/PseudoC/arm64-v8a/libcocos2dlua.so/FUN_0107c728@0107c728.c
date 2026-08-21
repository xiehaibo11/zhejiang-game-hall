
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0107c728(long param_1,ulong *param_2,int param_3,undefined4 param_4,undefined8 param_5)

{
  bool bVar1;
  undefined1 (*pauVar2) [16];
  long *plVar3;
  char cVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  ushort uVar12;
  char cVar13;
  short sVar14;
  undefined2 uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long *plVar27;
  size_t sVar28;
  char *pcVar29;
  size_t sVar30;
  char *pcVar31;
  undefined2 *puVar32;
  undefined *__src;
  undefined4 uVar33;
  ulong uVar34;
  long lVar35;
  ulong uVar36;
  ulong uVar37;
  long *plVar38;
  long lVar39;
  char *pcVar40;
  undefined1 (*pauVar41) [16];
  ushort *puVar42;
  ulong uVar43;
  undefined8 *puVar44;
  long *plVar45;
  uint uVar46;
  long lVar47;
  ulong uVar48;
  long *plVar49;
  char *pcVar50;
  void *pvVar51;
  int iVar52;
  ulong *puVar53;
  undefined8 uVar54;
  ulong uVar55;
  ushort uVar56;
  short sVar58;
  short sVar59;
  short sVar60;
  short sVar61;
  short sVar62;
  short sVar63;
  undefined1 auVar57 [16];
  undefined1 auVar64 [16];
  long lVar66;
  undefined1 auVar65 [16];
  long lVar67;
  long lVar68;
  int local_134;
  uint local_e4;
  void *local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  ulong *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  uint local_70;
  int local_6c;
  uint local_68;
  undefined4 uStack_64;
  
  uVar54 = *(undefined8 *)(param_2[0x16] + 8);
  lVar24 = FT_Get_Module_Interface(uVar54,&DAT_0145cf10);
  if (lVar24 == 0) {
    return 0xb;
  }
  lVar25 = ft_module_get_service(param_2[0x16],"postscript-cmaps");
  lVar26 = FT_Get_Module_Interface(uVar54,"pshinter");
  local_e4 = FT_Stream_Seek(param_1,0);
  if (local_e4 != 0) {
    return local_e4;
  }
  local_e4 = (**(code **)(lVar24 + 8))(param_1,param_2,param_3,param_4,param_5);
  if (local_e4 == 0) {
    if (param_2[0x23] != 0x4f54544f) {
      return 2;
    }
    if (param_3 < 0) {
      return 0;
    }
    local_e4 = (*(code *)param_2[0x66])(param_2,0x68656164,param_1,0);
    if (local_e4 == 0) {
      uVar16 = (**(code **)(lVar24 + 0x10))(param_1,param_2,param_3,param_4,param_5);
      if (uVar16 != 0) {
        return uVar16;
      }
      bVar11 = false;
    }
    else {
      uVar16 = (**(code **)(lVar24 + 0x40))(param_2,param_1);
      if (uVar16 != 0) {
        return uVar16;
      }
      bVar11 = true;
    }
    local_e4 = 0;
                    /* try { // try from 0107ca08 to 0117ca0f has its CatchHandler @ 0107cbe0 */
    uVar16 = (*(code *)param_2[0x66])(param_2,0x43464620,param_1,0);
    if (uVar16 != 0) {
      return uVar16;
    }
    bVar10 = true;
  }
  else {
    uVar16 = FT_Stream_Seek(param_1,0);
    if (uVar16 != 0) {
      return uVar16;
    }
    bVar10 = false;
    bVar11 = true;
  }
  local_e4 = 0;
  uVar55 = param_2[0x17];
  plVar27 = (long *)ft_mem_alloc(uVar55,0x12b0,&local_e4);
  if (local_e4 != 0) {
    return local_e4;
  }
                    /* try { // try from 0107c830 to 0117ca07 has its CatchHandler @ 0107c830
                       catch() { ... } // from try @ 0107c830 with catch @ 0107c830
                       catch() { ... } // from try @ 0107cb7c with catch @ 0107c830 */
  param_2[0x85] = (ulong)plVar27;
  lVar47 = *(long *)(param_1 + 0x38);
  memset(plVar27 + 2,0,0x12a0);
  local_a8 = (ulong *)0x0;
  uStack_a0 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_98 = 0;
  *plVar27 = param_1;
  plVar27[1] = lVar47;
  lVar24 = FT_Stream_Pos(param_1);
  local_70 = FT_Stream_ReadFields(param_1,&DAT_0145f010,plVar27);
  uVar16 = local_70;
  if (local_70 == 0) {
    if ((((char)plVar27[3] == '\x01') && (3 < (ulong)*(byte *)((long)plVar27 + 0x1a))) &&
       (*(byte *)((long)plVar27 + 0x1b) < 5)) {
      local_70 = FT_Stream_Skip(param_1,(ulong)*(byte *)((long)plVar27 + 0x1a) - 4);
      uVar16 = local_70;
      if (local_70 == 0) {
        plVar49 = plVar27 + 4;
        local_70 = FUN_01086fdc(plVar49,param_1,0);
        uVar16 = local_70;
        if (local_70 == 0) {
          local_70 = FUN_01086fdc(plVar27 + 0xa8,param_1,0);
          uVar16 = local_70;
          if ((local_70 == 0) &&
             (local_70 = FUN_01086fdc(&local_a8,param_1,1), uVar16 = local_70, local_70 == 0)) {
            local_70 = FUN_01086fdc(plVar27 + 0x12,param_1,1);
            uVar16 = local_70;
            if ((local_70 == 0) &&
               (local_70 = FUN_01087160(&local_a8,plVar27 + 0xc0,plVar27 + 0xc1), uVar16 = local_70,
               local_70 == 0)) {
                    /* try { // try from 0107cae4 to 0117cb57 has its CatchHandler @ 0107cbf8 */
              uVar46 = *(uint *)(plVar27 + 6);
              *(undefined4 *)(plVar27 + 0xbf) = (undefined4)local_98;
              if (bVar11) {
                if (param_3 < (int)uVar46) {
                  *(uint *)(plVar27 + 2) = uVar46;
                  local_134 = param_3;
LAB_0107d504:
                  if (((-1 < param_3) &&
                      (local_70 = FUN_010874b4(plVar27 + 0xc2,plVar27 + 0xa8,local_134,param_1,
                                               lVar24,uVar54), uVar16 = local_70, local_70 == 0)) &&
                     ((local_70 = FT_Stream_Seek(param_1,plVar27[0xda] + lVar24), uVar16 = local_70,
                      local_70 == 0 &&
                      (local_70 = FUN_01086fdc(plVar27 + 0xa1,param_1,0), uVar16 = local_70,
                      local_70 == 0)))) {
                    if (*(int *)((long)plVar27 + 0x6f4) == 0xffff) {
                      *(undefined4 *)(plVar27 + 0x14a) = 0;
                      local_70 = 0;
                    }
                    else {
                      local_70 = FT_Stream_Seek(param_1,plVar27[0xe6] + lVar24);
                      uVar16 = local_70;
                      if ((local_70 != 0) ||
                         (local_70 = FUN_01086fdc(&local_e0,param_1,0), uVar16 = local_70,
                         local_70 != 0)) goto LAB_0107c8bc;
                      if ((uint)local_d0 < 0x101) {
                        *(uint *)(plVar27 + 0x14a) = (uint)local_d0;
                        lVar47 = ft_mem_realloc(lVar47,0x440,0,local_d0 & 0xffffffff,0,&local_70);
                        uVar16 = local_70;
                        uVar46 = local_70;
                        if (local_70 == 0) {
                          if ((uint)local_d0 != 0) {
                            if ((uint)local_d0 < 4) {
                              lVar39 = 0;
LAB_0107dd50:
                              lVar35 = (local_d0 & 0xffffffff) - lVar39;
                              lVar47 = lVar47 + lVar39 * 0x440;
                              plVar38 = plVar27 + lVar39 + 0x14b;
                              do {
                                *plVar38 = lVar47;
                                lVar35 = lVar35 + -1;
                                lVar47 = lVar47 + 0x440;
                                plVar38 = plVar38 + 1;
                              } while (lVar35 != 0);
                            }
                            else {
                              lVar39 = (local_d0 & 0xffffffff) - (ulong)((uint)local_d0 & 3);
                              if (lVar39 == 0) goto LAB_0107dd50;
                              plVar38 = plVar27 + 0x14d;
                              lVar35 = lVar39;
                              auVar57 = _DAT_013ce780;
                              do {
                                lVar66 = auVar57._8_8_;
                                lVar67 = lVar47 + auVar57._0_8_ * 0x440;
                                lVar68 = lVar47 + lVar66 * 0x440;
                                auVar57._0_8_ = auVar57._0_8_ + 4;
                                auVar57._8_8_ = lVar66 + 4;
                                lVar35 = lVar35 + -4;
                                plVar38[-1] = lVar68;
                                plVar38[-2] = lVar67;
                                plVar38[1] = lVar68 + 0x880;
                                *plVar38 = lVar67 + 0x880;
                                plVar38 = plVar38 + 4;
                              } while (lVar35 != 0);
                              if ((local_d0 & 3) != 0) goto LAB_0107dd50;
                            }
                            uVar19 = 0;
                            do {
                              local_70 = uVar16;
                              uVar46 = FUN_010874b4(plVar27[(ulong)uVar19 + 0x14b],&local_e0,uVar19,
                                                    param_1,lVar24,uVar54);
                              uVar16 = uVar46;
                              if (uVar46 != 0) goto joined_r0x0107e0f8;
                              uVar19 = uVar19 + 1;
                              local_70 = 0;
                              uVar16 = 0;
                            } while (uVar19 < (uint)local_d0);
                          }
                          iVar18 = (int)plVar27[0xa3];
                          local_68 = FT_Stream_Seek(param_1,plVar27[0xe7] + lVar24);
                          uVar16 = local_68;
                          uVar46 = local_68;
                          if ((local_68 == 0) &&
                             (cVar13 = FT_Stream_ReadChar(param_1,&local_68), uVar16 = local_68,
                             uVar46 = local_68, local_68 == 0)) {
                            *(char *)(plVar27 + 0x24b) = cVar13;
                            *(undefined4 *)(plVar27 + 0x24e) = 0;
                            if (cVar13 == '\0') {
LAB_0107de38:
                              *(int *)(plVar27 + 0x24d) = iVar18;
                              uVar46 = FT_Stream_ExtractFrame(param_1,iVar18,plVar27 + 0x24c);
                              uVar16 = uVar46;
                              local_68 = uVar46;
                            }
                            else {
                              if (cVar13 == '\x03') {
                                uVar19 = FT_Stream_ReadUShort(param_1,&local_68);
                                uVar16 = local_68;
                                uVar46 = local_68;
                                if (local_68 != 0) goto joined_r0x0107e0f8;
                                if ((uVar19 & 0xffff) != 0) {
                                  iVar18 = (uVar19 & 0xffff) * 3 + 2;
                                  goto LAB_0107de38;
                                }
                              }
                              uVar46 = 3;
                              uVar16 = uVar46;
                              local_68 = uVar46;
                            }
                          }
                        }
                      }
                      else {
                        uVar46 = 0;
                      }
joined_r0x0107e0f8:
                      local_70 = uVar16;
                      if (local_e0 != (void *)0x0) {
                        uVar54 = *(undefined8 *)((long)local_e0 + 0x38);
                        if (local_b0 != 0) {
                          FT_Stream_ReleaseFrame(local_e0,&local_b0);
                        }
                        ft_mem_free(uVar54,uStack_b8);
                        uStack_d8 = 0;
                        local_e0 = (void *)0x0;
                        uStack_c8 = 0;
                        local_d0 = 0;
                        local_b0 = 0;
                        uStack_b8 = 0;
                        local_c0 = 0;
                        uVar46 = local_70;
                      }
                      uVar16 = local_70;
                      if (uVar46 != 0) goto LAB_0107c8bc;
                    }
                    if (plVar27[0xda] == 0) goto LAB_0107d4ec;
                    *(int *)((long)plVar27 + 0x14) = (int)plVar27[0xa3];
                    local_70 = FUN_01087160(plVar27 + 0x12,plVar27 + 0xbe,0);
                    uVar16 = local_70;
                    if (local_70 != 0) goto LAB_0107c8bc;
                    uVar16 = *(uint *)((long)plVar27 + 0x14);
                    uVar48 = (ulong)uVar16;
                    if (uVar16 != 0) {
                      iVar18 = *(int *)((long)plVar27 + 0x6f4);
                      uVar34 = plVar27[0xd8];
                      uVar54 = *(undefined8 *)(param_1 + 0x38);
                      local_68 = 0;
                      if (uVar34 < 3) {
                        iVar17 = (int)uVar34;
                        plVar27[0x9d] = uVar34;
                        if (iVar17 == 2) {
                          if (0x57 < uVar16) goto LAB_0107d8e0;
                          pvVar51 = (void *)ft_mem_realloc(uVar54,2,0,uVar48,0,&local_68);
                          plVar27[0x9e] = (long)pvVar51;
                          if (local_68 == 0) {
                            __src = &DAT_0145f38e;
                            goto LAB_0107dc6c;
                          }
                        }
                        else if (iVar17 == 1) {
                          if (0xa6 < uVar16) goto LAB_0107d8e0;
                          pvVar51 = (void *)ft_mem_realloc(uVar54,2,0,uVar48,0,&local_68);
                          plVar27[0x9e] = (long)pvVar51;
                          if (local_68 == 0) {
                            __src = &DAT_0145f242;
                            goto LAB_0107dc6c;
                          }
                        }
                        else if ((iVar17 == 0) && (uVar16 < 0xe6)) {
                          pvVar51 = (void *)ft_mem_realloc(uVar54,2,0,uVar48,0,&local_68);
                          plVar27[0x9e] = (long)pvVar51;
                          if (local_68 == 0) {
                            __src = &DAT_0145f078;
LAB_0107dc6c:
                            memcpy(pvVar51,__src,uVar48 << 1);
                            goto joined_r0x0107dff4;
                          }
                        }
                        else {
LAB_0107d8e0:
                          local_68 = 3;
                        }
LAB_0107d8e8:
                        ft_mem_free(uVar54,plVar27[0x9e]);
                        plVar27[0x9e] = 0;
                        ft_mem_free(uVar54,plVar27[0x9f]);
                        *(undefined4 *)(plVar27 + 0x9c) = 0;
                        plVar27[0x9d] = 0;
                        plVar27[0x9f] = 0;
                        plVar27[0x9e] = 0;
                        local_70 = local_68;
                        uVar16 = local_70;
                        if (local_68 != 0) goto LAB_0107c8bc;
                      }
                      else {
                        plVar27[0x9d] = uVar34 + lVar24;
                        local_68 = FT_Stream_Seek(param_1);
                        if (local_68 != 0) goto LAB_0107d8e8;
                        uVar46 = FT_Stream_ReadChar(param_1,&local_68);
                        *(uint *)(plVar27 + 0x9c) = uVar46 & 0xff;
                        if (local_68 != 0) goto LAB_0107d8e8;
                        puVar32 = (undefined2 *)ft_mem_realloc(uVar54,2,0,uVar48,0,&local_68);
                    /* try { // try from 0107d628 to 0117d6c3 has its CatchHandler @ 0107d628
                       catch() { ... } // from try @ 0107d628 with catch @ 0107d628
                       catch() { ... } // from try @ 0107d6fc with catch @ 0107d628 */
                        plVar27[0x9e] = (long)puVar32;
                        if (local_68 != 0) goto LAB_0107d8e8;
                        *puVar32 = 0;
                        if ((int)plVar27[0x9c] - 1U < 2) {
                          if (1 < uVar16) {
                            uVar34 = 1;
                            do {
                              uVar46 = FT_Stream_ReadUShort(param_1,&local_68);
                              sVar14 = (short)uVar46;
                              if (local_68 != 0) goto LAB_0107d8e8;
                              if ((int)plVar27[0x9c] == 2) {
                                uVar19 = FT_Stream_ReadUShort();
                                if (local_68 != 0) goto LAB_0107d8e8;
                                uVar19 = uVar19 & 0xffff;
                              }
                              else {
                                uVar19 = FT_Stream_ReadChar(param_1,&local_68);
                    /* try { // try from 0107d6c4 to 0117d6fb has its CatchHandler @ 0107d734 */
                                if (local_68 != 0) goto LAB_0107d8e8;
                                uVar19 = uVar19 & 0xff;
                              }
                              uVar23 = ~uVar46 & 0xffff;
                              if ((uVar46 & 0xffff) <= (uVar19 ^ 0xffff)) {
                                uVar23 = uVar19;
                              }
                              if ((uint)uVar34 < uVar16) {
                                uVar43 = uVar34 & 0xffffffff;
                                uVar36 = uVar43 - uVar48;
                    /* try { // try from 0107d6fc to 0117d747 has its CatchHandler @ 0107d628 */
                                lVar47 = plVar27[0x9e];
                                if (uVar36 <= ~(ulong)uVar23) {
                                  uVar36 = ~(ulong)uVar23;
                                }
                                uVar36 = -uVar36;
                                if (uVar36 < 0x10) {
                                  uVar37 = 0;
                                }
                                else {
                                  uVar37 = uVar36 & 0x1fffffff0;
                                  if (uVar37 != 0) {
                                    uVar34 = uVar37 + uVar43;
                    /* catch() { ... } // from try @ 0107d6c4 with catch @ 0107d734 */
                                    uVar46 = uVar46 + (int)uVar37;
                                    auVar65._2_2_ = sVar14 + 1;
                                    auVar65._0_2_ = sVar14;
                                    auVar65._4_2_ = sVar14 + 2;
                                    auVar65._6_2_ = sVar14 + 3;
                                    auVar65._8_2_ = sVar14 + 4;
                                    auVar65._10_2_ = sVar14 + 5;
                                    auVar65._12_2_ = sVar14 + 6;
                                    auVar65._14_2_ = sVar14 + 7;
                                    puVar44 = (undefined8 *)(lVar47 + uVar43 * 2 + 0x10);
                                    uVar43 = uVar37;
                                    do {
                                      puVar44[-1] = auVar65._8_8_;
                                      puVar44[-2] = auVar65._0_8_;
                                      uVar43 = uVar43 - 0x10;
                                      sVar14 = auVar65._2_2_;
                                      sVar58 = auVar65._4_2_;
                                      sVar59 = auVar65._6_2_;
                                      auVar64._0_8_ =
                                           CONCAT26(sVar59 + 8,
                                                    CONCAT24(sVar58 + 8,
                                                             CONCAT22(sVar14 + 8,auVar65._0_2_ + 8))
                                                   );
                                      sVar60 = auVar65._8_2_;
                                      auVar64._8_2_ = sVar60 + 8;
                                      sVar61 = auVar65._10_2_;
                                      auVar64._10_2_ = sVar61 + 8;
                                      sVar62 = auVar65._12_2_;
                                      auVar64._12_2_ = sVar62 + 8;
                                      sVar63 = auVar65._14_2_;
                                      auVar64._14_2_ = sVar63 + 8;
                                      puVar44[1] = auVar64._8_8_;
                                      *puVar44 = auVar64._0_8_;
                                      auVar65._0_2_ = auVar65._0_2_ + 0x10;
                                      auVar65._2_2_ = sVar14 + 0x10;
                                      auVar65._4_2_ = sVar58 + 0x10;
                                      auVar65._6_2_ = sVar59 + 0x10;
                                      auVar65._8_2_ = sVar60 + 0x10;
                                      auVar65._10_2_ = sVar61 + 0x10;
                                      auVar65._12_2_ = sVar62 + 0x10;
                                      auVar65._14_2_ = sVar63 + 0x10;
                                      puVar44 = puVar44 + 4;
                                    } while (uVar43 != 0);
                                    uVar43 = uVar34;
                                    if (uVar37 == uVar36) goto LAB_0107d798;
                                  }
                                }
                                do {
                                  *(short *)(lVar47 + uVar43 * 2) = (short)uVar46;
                                  uVar34 = uVar43 + 1;
                                  if (uVar48 <= uVar34) break;
                                  uVar19 = (uint)uVar37;
                                  uVar37 = (ulong)(uVar19 + 1);
                                  uVar46 = uVar46 + 1;
                                  uVar43 = uVar34;
                                } while (uVar19 < uVar23);
                              }
LAB_0107d798:
                            } while ((uint)uVar34 < uVar16);
                          }
                        }
                        else {
                          if ((int)plVar27[0x9c] != 0) goto LAB_0107d8e0;
                          local_68 = FT_Stream_EnterFrame(param_1,uVar16 * 2 + -2);
                          if (local_68 != 0) goto LAB_0107d8e8;
                          if (1 < uVar16) {
                            uVar34 = 1;
                            do {
                              uVar15 = FT_Stream_GetUShort(param_1);
                              *(undefined2 *)(plVar27[0x9e] + uVar34 * 2) = uVar15;
                              uVar34 = uVar34 + 1;
                            } while (uVar48 != uVar34);
                          }
                          FT_Stream_ExitFrame(param_1);
                        }
joined_r0x0107dff4:
                        uVar46 = local_68;
                        if ((bVar11) && (iVar18 != 0xffff)) {
                          local_e0 = (void *)((ulong)local_e0 & 0xffffffff00000000);
                          uVar46 = 0;
                          if ((int)plVar27[0xa0] == 0) {
                            if (uVar16 < 0x10) {
                              lVar47 = 0;
LAB_0107e04c:
                              uVar56 = 0;
LAB_0107e050:
                              lVar39 = uVar48 - lVar47;
                              puVar42 = (ushort *)(plVar27[0x9e] + lVar47 * 2);
                              do {
                                lVar39 = lVar39 + -1;
                                uVar12 = *puVar42;
                                if (*puVar42 <= uVar56) {
                                  uVar12 = uVar56;
                                }
                                uVar56 = uVar12;
                                puVar42 = puVar42 + 1;
                              } while (lVar39 != 0);
                            }
                            else {
                              lVar47 = uVar48 - (uVar16 & 0xf);
                              if (lVar47 == 0) goto LAB_0107e04c;
                              pauVar41 = (undefined1 (*) [16])(plVar27[0x9e] + 0x10);
                              auVar57 = ZEXT816(0);
                              auVar65 = ZEXT816(0);
                              lVar39 = lVar47;
                              do {
                                pauVar2 = pauVar41 + -1;
                                uVar8 = *(undefined8 *)(pauVar41[-1] + 8);
                                auVar64 = *pauVar41;
                                lVar39 = lVar39 + -0x10;
                                pauVar41 = pauVar41 + 2;
                                auVar7._10_2_ = (short)((ulong)uVar8 >> 0x10);
                                auVar7._0_10_ = *(unkbyte10 *)*pauVar2;
                                auVar7._12_2_ = (short)((ulong)uVar8 >> 0x20);
                                auVar7._14_2_ = (short)((ulong)uVar8 >> 0x30);
                                auVar57 = NEON_umax(auVar7,auVar57,2);
                                auVar65 = NEON_umax(auVar64,auVar65,2);
                              } while (lVar39 != 0);
                              auVar57 = NEON_umax(auVar57,auVar65,2);
                              uVar56 = NEON_umaxv(auVar57,2);
                              if ((uVar16 & 0xf) != 0) goto LAB_0107e050;
                            }
                            lVar47 = ft_mem_realloc(uVar54,2,0,(ulong)uVar56 + 1,0,&local_e0);
                            plVar27[0x9f] = lVar47;
                            uVar46 = (uint)local_e0;
                            if ((uint)local_e0 == 0) {
                              lVar39 = plVar27[0x9e];
                              uVar48 = (ulong)(uVar16 - 1);
                              do {
                                *(short *)(lVar47 + (ulong)*(ushort *)(lVar39 + uVar48 * 2) * 2) =
                                     (short)uVar48;
                                bVar1 = 0 < (long)uVar48;
                                uVar48 = uVar48 - 1;
                              } while (bVar1);
                              *(uint *)(plVar27 + 0xa0) = (uint)uVar56;
                              *(uint *)((long)plVar27 + 0x504) = uVar16;
                              uVar46 = 0;
                            }
                          }
                        }
                        local_68 = uVar46;
                        if (local_68 != 0) goto LAB_0107d8e8;
                        local_70 = 0;
                      }
                      if (*(int *)((long)plVar27 + 0x6f4) == 0xffff) {
                        uVar46 = *(uint *)((long)plVar27 + 0x14);
                        uVar34 = (ulong)uVar46;
                        uVar48 = plVar27[0xd9];
                        local_68 = 0;
                        if (plVar27[0x9e] == 0) {
LAB_0107dcd0:
                          local_68 = 3;
                          uVar16 = local_68;
                          goto LAB_0107c8bc;
                        }
                        *(undefined8 *)((long)plVar27 + 0xe4) = 0;
                        *(undefined8 *)((long)plVar27 + 0xdc) = 0;
                        *(undefined8 *)((long)plVar27 + 0x2e4) = 0;
                        *(undefined8 *)((long)plVar27 + 0x2dc) = 0;
                        *(undefined8 *)((long)plVar27 + 0xf4) = 0;
                        *(undefined8 *)((long)plVar27 + 0xec) = 0;
                        *(undefined8 *)((long)plVar27 + 0x2f4) = 0;
                        *(undefined8 *)((long)plVar27 + 0x2ec) = 0;
                        *(undefined8 *)((long)plVar27 + 0x104) = 0;
                        *(undefined8 *)((long)plVar27 + 0xfc) = 0;
                    /* try { // try from 0107d974 to 0117d9db has its CatchHandler @ 0107d974
                       catch() { ... } // from try @ 0107d974 with catch @ 0107d974
                       catch() { ... } // from try @ 0107da14 with catch @ 0107d974 */
                        *(undefined8 *)((long)plVar27 + 0x304) = 0;
                        *(undefined8 *)((long)plVar27 + 0x2fc) = 0;
                        *(undefined8 *)((long)plVar27 + 0x114) = 0;
                        *(undefined8 *)((long)plVar27 + 0x10c) = 0;
                        *(undefined8 *)((long)plVar27 + 0x314) = 0;
                        *(undefined8 *)((long)plVar27 + 0x30c) = 0;
                        *(undefined8 *)((long)plVar27 + 0x124) = 0;
                        *(undefined8 *)((long)plVar27 + 0x11c) = 0;
                        *(undefined8 *)((long)plVar27 + 0x324) = 0;
                        *(undefined8 *)((long)plVar27 + 0x31c) = 0;
                        *(undefined8 *)((long)plVar27 + 0x134) = 0;
                        *(undefined8 *)((long)plVar27 + 300) = 0;
                        *(undefined8 *)((long)plVar27 + 0x334) = 0;
                        *(undefined8 *)((long)plVar27 + 0x32c) = 0;
                        *(undefined8 *)((long)plVar27 + 0x144) = 0;
                        *(undefined8 *)((long)plVar27 + 0x13c) = 0;
                        *(undefined8 *)((long)plVar27 + 0x344) = 0;
                        *(undefined8 *)((long)plVar27 + 0x33c) = 0;
                        *(undefined8 *)((long)plVar27 + 0x154) = 0;
                        *(undefined8 *)((long)plVar27 + 0x14c) = 0;
                        *(undefined8 *)((long)plVar27 + 0x354) = 0;
                        *(undefined8 *)((long)plVar27 + 0x34c) = 0;
                        *(undefined8 *)((long)plVar27 + 0x164) = 0;
                        *(undefined8 *)((long)plVar27 + 0x15c) = 0;
                        *(undefined8 *)((long)plVar27 + 0x364) = 0;
                        *(undefined8 *)((long)plVar27 + 0x35c) = 0;
                    /* try { // try from 0107d9dc to 0117da13 has its CatchHandler @ 0107da4c */
                        *(undefined8 *)((long)plVar27 + 0x174) = 0;
                        *(undefined8 *)((long)plVar27 + 0x16c) = 0;
                        *(undefined8 *)((long)plVar27 + 0x374) = 0;
                        *(undefined8 *)((long)plVar27 + 0x36c) = 0;
                        *(undefined8 *)((long)plVar27 + 0x184) = 0;
                        *(undefined8 *)((long)plVar27 + 0x17c) = 0;
                        *(undefined8 *)((long)plVar27 + 900) = 0;
                        *(undefined8 *)((long)plVar27 + 0x37c) = 0;
                        *(undefined8 *)((long)plVar27 + 0x194) = 0;
                        *(undefined8 *)((long)plVar27 + 0x18c) = 0;
                        *(undefined8 *)((long)plVar27 + 0x394) = 0;
                        *(undefined8 *)((long)plVar27 + 0x38c) = 0;
                        *(undefined8 *)((long)plVar27 + 0x1a4) = 0;
                        *(undefined8 *)((long)plVar27 + 0x19c) = 0;
                    /* try { // try from 0107da14 to 0117da5f has its CatchHandler @ 0107d974 */
                        *(undefined8 *)((long)plVar27 + 0x3a4) = 0;
                        *(undefined8 *)((long)plVar27 + 0x39c) = 0;
                        *(undefined8 *)((long)plVar27 + 0x1b4) = 0;
                        *(undefined8 *)((long)plVar27 + 0x1ac) = 0;
                        *(undefined8 *)((long)plVar27 + 0x3b4) = 0;
                        *(undefined8 *)((long)plVar27 + 0x3ac) = 0;
                        *(undefined8 *)((long)plVar27 + 0x1c4) = 0;
                        *(undefined8 *)((long)plVar27 + 0x1bc) = 0;
                        *(undefined8 *)((long)plVar27 + 0x3c4) = 0;
                        *(undefined8 *)((long)plVar27 + 0x3bc) = 0;
                        *(undefined8 *)((long)plVar27 + 0x1d4) = 0;
                        *(undefined8 *)((long)plVar27 + 0x1cc) = 0;
                        *(undefined8 *)((long)plVar27 + 0x3d4) = 0;
                        *(undefined8 *)((long)plVar27 + 0x3cc) = 0;
                    /* catch() { ... } // from try @ 0107d9dc with catch @ 0107da4c */
                        *(undefined8 *)((long)plVar27 + 0x1e4) = 0;
                        *(undefined8 *)((long)plVar27 + 0x1dc) = 0;
                        *(undefined8 *)((long)plVar27 + 0x3e4) = 0;
                        *(undefined8 *)((long)plVar27 + 0x3dc) = 0;
                        *(undefined8 *)((long)plVar27 + 500) = 0;
                        *(undefined8 *)((long)plVar27 + 0x1ec) = 0;
                        *(undefined8 *)((long)plVar27 + 0x3f4) = 0;
                        *(undefined8 *)((long)plVar27 + 0x3ec) = 0;
                        *(undefined8 *)((long)plVar27 + 0x204) = 0;
                        *(undefined8 *)((long)plVar27 + 0x1fc) = 0;
                        *(undefined8 *)((long)plVar27 + 0x404) = 0;
                        *(undefined8 *)((long)plVar27 + 0x3fc) = 0;
                        *(undefined8 *)((long)plVar27 + 0x214) = 0;
                        *(undefined8 *)((long)plVar27 + 0x20c) = 0;
                        *(undefined8 *)((long)plVar27 + 0x414) = 0;
                        *(undefined8 *)((long)plVar27 + 0x40c) = 0;
                        *(undefined8 *)((long)plVar27 + 0x224) = 0;
                        *(undefined8 *)((long)plVar27 + 0x21c) = 0;
                        *(undefined8 *)((long)plVar27 + 0x424) = 0;
                        *(undefined8 *)((long)plVar27 + 0x41c) = 0;
                        *(undefined8 *)((long)plVar27 + 0x234) = 0;
                        *(undefined8 *)((long)plVar27 + 0x22c) = 0;
                        *(undefined8 *)((long)plVar27 + 0x434) = 0;
                        *(undefined8 *)((long)plVar27 + 0x42c) = 0;
                        *(undefined8 *)((long)plVar27 + 0x244) = 0;
                        *(undefined8 *)((long)plVar27 + 0x23c) = 0;
                        *(undefined8 *)((long)plVar27 + 0x444) = 0;
                        *(undefined8 *)((long)plVar27 + 0x43c) = 0;
                        *(undefined8 *)((long)plVar27 + 0x254) = 0;
                        *(undefined8 *)((long)plVar27 + 0x24c) = 0;
                        *(undefined8 *)((long)plVar27 + 0x454) = 0;
                        *(undefined8 *)((long)plVar27 + 0x44c) = 0;
                        *(undefined8 *)((long)plVar27 + 0x264) = 0;
                        *(undefined8 *)((long)plVar27 + 0x25c) = 0;
                        *(undefined8 *)((long)plVar27 + 0x464) = 0;
                        *(undefined8 *)((long)plVar27 + 0x45c) = 0;
                        *(undefined8 *)((long)plVar27 + 0x274) = 0;
                        *(undefined8 *)((long)plVar27 + 0x26c) = 0;
                        *(undefined8 *)((long)plVar27 + 0x474) = 0;
                        *(undefined8 *)((long)plVar27 + 0x46c) = 0;
                        *(undefined8 *)((long)plVar27 + 0x284) = 0;
                        *(undefined8 *)((long)plVar27 + 0x27c) = 0;
                        *(undefined8 *)((long)plVar27 + 0x484) = 0;
                        *(undefined8 *)((long)plVar27 + 0x47c) = 0;
                        *(undefined8 *)((long)plVar27 + 0x294) = 0;
                        *(undefined8 *)((long)plVar27 + 0x28c) = 0;
                        *(undefined8 *)((long)plVar27 + 0x494) = 0;
                        *(undefined8 *)((long)plVar27 + 0x48c) = 0;
                        *(undefined8 *)((long)plVar27 + 0x2a4) = 0;
                        *(undefined8 *)((long)plVar27 + 0x29c) = 0;
                        *(undefined8 *)((long)plVar27 + 0x4a4) = 0;
                        *(undefined8 *)((long)plVar27 + 0x49c) = 0;
                        *(undefined8 *)((long)plVar27 + 0x2b4) = 0;
                        *(undefined8 *)((long)plVar27 + 0x2ac) = 0;
                        *(undefined8 *)((long)plVar27 + 0x4b4) = 0;
                        *(undefined8 *)((long)plVar27 + 0x4ac) = 0;
                        *(undefined8 *)((long)plVar27 + 0x2c4) = 0;
                        *(undefined8 *)((long)plVar27 + 700) = 0;
                        *(undefined8 *)((long)plVar27 + 0x4c4) = 0;
                        *(undefined8 *)((long)plVar27 + 0x4bc) = 0;
                        *(undefined8 *)((long)plVar27 + 0x2d4) = 0;
                        *(undefined8 *)((long)plVar27 + 0x2cc) = 0;
                        *(undefined8 *)((long)plVar27 + 0x4d4) = 0;
                        *(undefined8 *)((long)plVar27 + 0x4cc) = 0;
                        if (1 < uVar48) {
                          plVar27[0x1a] = uVar48 + lVar24;
                          local_68 = FT_Stream_Seek(param_1);
                          uVar16 = local_68;
                          if (local_68 == 0) {
                            uVar16 = FT_Stream_ReadChar(param_1,&local_68);
                            *(uint *)(plVar27 + 0x19) = uVar16 & 0xff;
                            uVar16 = local_68;
                            if ((local_68 == 0) &&
                               (uVar19 = FT_Stream_ReadChar(param_1,&local_68), uVar16 = local_68,
                               local_68 == 0)) {
                              uVar19 = uVar19 & 0xff;
                              if ((*(uint *)(plVar27 + 0x19) & 0x7f) == 1) {
                                *(undefined4 *)(plVar27 + 0x1b) = 0;
                                if (uVar19 != 0) {
                                  uVar23 = 0;
                                  uVar22 = 1;
                                  do {
                                    uVar20 = FT_Stream_ReadChar(param_1,&local_68);
                                    uVar16 = local_68;
                                    if ((local_68 != 0) ||
                                       (uVar21 = FT_Stream_ReadChar(param_1,&local_68),
                                       uVar16 = local_68, local_68 != 0)) goto LAB_0107c8bc;
                                    uVar16 = (uVar21 & 0xff) + 1;
                                    uVar9 = *(uint *)(plVar27 + 0x1b);
                                    if (*(uint *)(plVar27 + 0x1b) <= (uVar21 & 0xff)) {
                                      *(uint *)(plVar27 + 0x1b) = uVar16;
                                      uVar9 = uVar16;
                                    }
                                    uVar16 = uVar16 + uVar22;
                                    if (uVar22 < uVar16) {
                                      uVar20 = uVar20 & 0xff;
                                      uVar48 = (ulong)uVar22;
                                      do {
                                        if ((uVar48 < uVar34) && (uVar20 < 0x100)) {
                                          *(short *)((long)plVar27 + (ulong)uVar20 * 2 + 0x2dc) =
                                               (short)uVar48;
                                          *(undefined2 *)((long)plVar27 + (ulong)uVar20 * 2 + 0xdc)
                                               = *(undefined2 *)(plVar27[0x9e] + uVar48 * 2);
                                        }
                                        uVar48 = uVar48 + 1;
                                        uVar20 = uVar20 + 1;
                                      } while (uVar16 != uVar48);
                                    }
                                    uVar23 = uVar23 + 1;
                                    uVar22 = uVar16;
                                  } while (uVar23 < uVar19);
                                  if (0x100 < uVar9) {
                                    *(undefined4 *)(plVar27 + 0x1b) = 0x100;
                                  }
                                }
                              }
                              else {
                                if ((*(uint *)(plVar27 + 0x19) & 0x7f) != 0) goto LAB_0107dcd0;
                                *(uint *)(plVar27 + 0x1b) = uVar19 + 1;
                                local_68 = FT_Stream_EnterFrame(param_1,(ulong)uVar19);
                                uVar16 = local_68;
                                if (local_68 != 0) goto LAB_0107c8bc;
                                if (uVar19 != 0) {
                                  lVar24 = *(long *)(param_1 + 0x40);
                                  uVar48 = 1;
                                  do {
                                    if (uVar48 < uVar34) {
                                      bVar5 = *(byte *)(lVar24 + uVar48 + -1);
                                      *(short *)((long)plVar27 + (ulong)bVar5 * 2 + 0x2dc) =
                                           (short)uVar48;
                                      *(undefined2 *)((long)plVar27 + (ulong)bVar5 * 2 + 0xdc) =
                                           *(undefined2 *)(plVar27[0x9e] + uVar48 * 2);
                                    }
                                    uVar48 = uVar48 + 1;
                                  } while (uVar48 - uVar19 != 1);
                                }
                                FT_Stream_ExitFrame(param_1);
                              }
                              if ((char)plVar27[0x19] < '\0') {
                                uVar19 = FT_Stream_ReadChar(param_1,&local_68);
                                uVar19 = uVar19 & 0xff;
                                if ((uVar19 == 0) || (local_68 != 0)) goto LAB_0107e300;
                                if (uVar46 == 0) {
                                  uVar46 = 0;
                                  do {
                                    uVar23 = FT_Stream_ReadChar(param_1,&local_68);
                                    uVar16 = local_68;
                                    if ((local_68 != 0) ||
                                       (uVar15 = FT_Stream_ReadUShort(param_1,&local_68),
                                       uVar16 = local_68, local_68 != 0)) goto LAB_0107c8bc;
                                    uVar46 = uVar46 + 1;
                                    *(undefined2 *)
                                     ((long)plVar27 + (ulong)(uVar23 & 0xff) * 2 + 0xdc) = uVar15;
                                  } while (uVar46 < uVar19);
                                }
                                else {
                                  uVar23 = 0;
                                  do {
                                    uVar22 = FT_Stream_ReadChar(param_1,&local_68);
                                    uVar16 = local_68;
                                    if ((local_68 != 0) ||
                                       (sVar14 = FT_Stream_ReadUShort(param_1,&local_68),
                                       uVar16 = local_68, local_68 != 0)) goto LAB_0107c8bc;
                                    *(short *)((long)plVar27 + (ulong)(uVar22 & 0xff) * 2 + 0xdc) =
                                         sVar14;
                                    uVar16 = 0;
                                    do {
                                      if (*(short *)(plVar27[0x9e] + (ulong)uVar16 * 2) == sVar14) {
                                        *(short *)((long)plVar27 +
                                                  (ulong)(uVar22 & 0xff) * 2 + 0x2dc) =
                                             (short)uVar16;
                                        break;
                                      }
                                      uVar16 = uVar16 + 1;
                                    } while (uVar16 < uVar46);
                                    uVar23 = uVar23 + 1;
                                  } while (uVar23 < uVar19);
                                }
                                goto LAB_0107def8;
                              }
LAB_0107e300:
                              uVar16 = local_68;
                              local_70 = local_68;
                              if (local_68 == 0) goto LAB_0107defc;
                            }
                          }
                          goto LAB_0107c8bc;
                        }
                        if ((int)uVar48 == 1) {
                          puVar32 = (undefined2 *)&DAT_0145f43c;
                        }
                        else {
                          if ((int)uVar48 != 0) goto LAB_0107dcd0;
                          puVar32 = &DAT_0145ee10;
                        }
                        memcpy((void *)((long)plVar27 + 0xdc),puVar32,0x200);
                        *(undefined4 *)(plVar27 + 0x1b) = 0;
                        local_e0 = (void *)((ulong)local_e0 & 0xffffffff00000000);
                        uVar16 = *(uint *)(plVar27 + 0xa0);
                        if (uVar16 == 0) {
                          if (uVar46 == 0) {
                            uVar56 = 0;
                          }
                          else {
                            if (uVar46 < 0x10) {
                              lVar24 = 0;
LAB_0107e190:
                              uVar56 = 0;
                            }
                            else {
                              lVar24 = uVar34 - (uVar46 & 0xf);
                              if (lVar24 == 0) goto LAB_0107e190;
                              pauVar41 = (undefined1 (*) [16])(plVar27[0x9e] + 0x10);
                              auVar57 = ZEXT816(0);
                              auVar65 = ZEXT816(0);
                              lVar47 = lVar24;
                              do {
                                pauVar2 = pauVar41 + -1;
                                uVar54 = *(undefined8 *)(pauVar41[-1] + 8);
                                auVar64 = *pauVar41;
                                lVar47 = lVar47 + -0x10;
                                pauVar41 = pauVar41 + 2;
                                auVar6._10_2_ = (short)((ulong)uVar54 >> 0x10);
                                auVar6._0_10_ = *(unkbyte10 *)*pauVar2;
                                auVar6._12_2_ = (short)((ulong)uVar54 >> 0x20);
                                auVar6._14_2_ = (short)((ulong)uVar54 >> 0x30);
                                auVar57 = NEON_umax(auVar6,auVar57,2);
                                auVar65 = NEON_umax(auVar64,auVar65,2);
                              } while (lVar47 != 0);
                              auVar57 = NEON_umax(auVar57,auVar65,2);
                              uVar56 = NEON_umaxv(auVar57,2);
                              if ((uVar46 & 0xf) == 0) goto LAB_0107e1b0;
                            }
                            lVar47 = uVar34 - lVar24;
                            puVar42 = (ushort *)(plVar27[0x9e] + lVar24 * 2);
                            do {
                              lVar47 = lVar47 + -1;
                              uVar12 = *puVar42;
                              if (*puVar42 <= uVar56) {
                                uVar12 = uVar56;
                              }
                              uVar56 = uVar12;
                              puVar42 = puVar42 + 1;
                            } while (lVar47 != 0);
                          }
LAB_0107e1b0:
                          lVar24 = ft_mem_realloc(*(undefined8 *)(param_1 + 0x38),2,0,
                                                  (ulong)uVar56 + 1,0,&local_e0);
                          plVar27[0x9f] = lVar24;
                          uVar16 = (uint)local_e0;
                          local_68 = (uint)local_e0;
                          if ((uint)local_e0 != 0) goto LAB_0107c8bc;
                          lVar47 = plVar27[0x9e];
                          uVar48 = (ulong)(uVar46 - 1);
                          do {
                            *(short *)(lVar24 + (ulong)*(ushort *)(lVar47 + uVar48 * 2) * 2) =
                                 (short)uVar48;
                            bVar1 = 0 < (long)uVar48;
                            uVar48 = uVar48 - 1;
                          } while (bVar1);
                          uVar16 = (uint)uVar56;
                          *(uint *)(plVar27 + 0xa0) = uVar16;
                          *(uint *)((long)plVar27 + 0x504) = uVar46;
                        }
                        local_68 = 0;
                        lVar24 = 0;
                        do {
                          while( true ) {
                            puVar42 = (ushort *)((long)plVar27 + lVar24 * 2 + 0xdc);
                            uVar56 = *puVar42;
                            if (((uVar56 == 0) || (uVar16 < uVar56)) ||
                               (sVar14 = *(short *)(plVar27[0x9f] + (ulong)uVar56 * 2), sVar14 == 0)
                               ) break;
                            lVar47 = lVar24 + 1;
                            *(short *)((long)plVar27 + lVar24 * 2 + 0x2dc) = sVar14;
                            *(int *)(plVar27 + 0x1b) = (int)lVar47;
                            lVar24 = lVar47;
                            if (lVar47 == 0x100) goto LAB_0107def8;
                          }
                          lVar47 = lVar24 + 1;
                          *(undefined2 *)((long)plVar27 + lVar24 * 2 + 0x2dc) = 0;
                          *puVar42 = 0;
                          lVar24 = lVar47;
                        } while (lVar47 != 0x100);
LAB_0107def8:
                        local_70 = 0;
                      }
                    }
LAB_0107defc:
                    uVar54 = *(undefined8 *)(*plVar49 + 0x38);
                    local_6c = FUN_01080bdc(plVar49,local_134,&local_e0,&local_68);
                    if (local_6c == 0) {
                      sVar28 = CONCAT44(uStack_64,local_68);
                      pvVar51 = (void *)ft_mem_alloc(uVar54,sVar28 + 1,&local_6c);
                      if (local_6c == 0) {
                        memcpy(pvVar51,local_e0,sVar28);
                        *(undefined1 *)((long)pvVar51 + sVar28) = 0;
                      }
                      if (plVar27[10] == 0) {
                        FT_Stream_ReleaseFrame(*plVar49,&local_e0);
                      }
                    }
                    else {
                      pvVar51 = (void *)0x0;
                    }
                    plVar27[0xbd] = (long)pvVar51;
                    uVar16 = local_70;
                  }
                }
                else {
                  uVar16 = 6;
                }
              }
              else {
                if (uVar46 < 2) {
                  local_134 = 0;
                  goto LAB_0107d504;
                }
LAB_0107d4ec:
                uVar16 = 3;
              }
            }
          }
        }
      }
    }
    else {
      uVar16 = 2;
    }
  }
LAB_0107c8bc:
  local_70 = uVar16;
  if (local_a8 != (ulong *)0x0) {
    uVar48 = local_a8[7];
    if (local_78 != 0) {
      FT_Stream_ReleaseFrame(local_a8,&local_78);
    }
    ft_mem_free(uVar48,uStack_80);
    local_78 = 0;
    uStack_80 = 0;
    local_88 = 0;
    uStack_90 = 0;
    local_98 = 0;
    uStack_a0 = 0;
    local_a8 = (ulong *)0x0;
  }
  local_e4 = local_70;
  if (local_70 != 0) {
    return local_70;
  }
  plVar27[0x24f] = lVar26;
  plVar27[0x250] = lVar25;
  param_2[1] = (long)param_3;
  param_2[4] = (ulong)*(uint *)((long)plVar27 + 0x14);
  if ((lVar25 == 0) && (*(int *)((long)plVar27 + 0x6f4) == 0xffff)) {
    return 0xb;
  }
  if ((char)plVar27[0xce] == '\0') {
    if (bVar11) {
      uVar48 = 1000;
    }
    else {
      uVar48 = (ulong)(ushort)param_2[0x11];
    }
    plVar27[0xcf] = uVar48;
  }
  puVar53 = (ulong *)(plVar27 + 0xcf);
  lVar25 = plVar27[0xcd];
  lVar24 = -lVar25;
  if (-1 < lVar25) {
    lVar24 = lVar25;
  }
  if (lVar24 == 0x10000) {
    lVar24 = plVar27[0xd1];
  }
  else {
    lVar25 = FT_DivFix(plVar27[0xcf],lVar24);
    plVar27[0xcf] = lVar25;
    lVar25 = FT_DivFix(plVar27[0xca],lVar24);
    plVar27[0xca] = lVar25;
    lVar25 = FT_DivFix(plVar27[0xcc],lVar24);
                    /* try { // try from 0107cb6c to 0117cb7b has its CatchHandler @ 0107cbdc */
    plVar27[0xcc] = lVar25;
                    /* try { // try from 0107cb7c to 0117cc2b has its CatchHandler @ 0107c830 */
    lVar25 = FT_DivFix(plVar27[0xcb],lVar24);
    plVar27[0xcb] = lVar25;
    lVar25 = FT_DivFix(plVar27[0xcd],lVar24);
    plVar27[0xcd] = lVar25;
    lVar25 = FT_DivFix(plVar27[0xd0],lVar24);
    plVar27[0xd0] = lVar25;
    lVar24 = FT_DivFix(plVar27[0xd1],lVar24);
    plVar27[0xd1] = lVar24;
  }
  iVar18 = (int)plVar27[0x14a];
  plVar27[0xd0] = plVar27[0xd0] >> 0x10;
  plVar27[0xd1] = lVar24 >> 0x10;
                    /* catch() { ... } // from try @ 0107cb6c with catch @ 0107cbdc */
  if (iVar18 != 0) {
                    /* catch() { ... } // from try @ 0107ca08 with catch @ 0107cbe0 */
    plVar49 = plVar27 + 0xca;
    plVar38 = plVar27 + (ulong)(iVar18 - 1) + 0x14b;
    do {
                    /* catch() { ... } // from try @ 0107cae4 with catch @ 0107cbf8 */
      plVar45 = (long *)*plVar38;
      if ((char)plVar45[0xc] == '\0') {
        lVar24 = plVar27[0xcc];
        plVar45[0xb] = plVar27[0xcd];
        plVar45[10] = lVar24;
        lVar24 = *plVar49;
        plVar45[9] = plVar27[0xcb];
        plVar45[8] = lVar24;
        auVar57 = *(undefined1 (*) [16])(plVar27 + 0xd0);
        plVar45[0xf] = auVar57._8_8_;
        plVar45[0xe] = auVar57._0_8_;
        plVar45[0xd] = *puVar53;
      }
      else if ((char)plVar27[0xce] != '\0') {
        if ((*puVar53 < 2) || ((ulong)plVar45[0xd] < 2)) {
          lVar24 = 1;
        }
        else {
          plVar3 = plVar27 + 0xc2;
          if ((ulong)plVar45[0xd] <= *puVar53) {
            plVar3 = plVar45;
          }
          lVar24 = plVar3[0xd];
        }
        FT_Matrix_Multiply_Scaled(plVar49,plVar45 + 8,lVar24);
                    /* try { // try from 0107cc80 to 0117cddb has its CatchHandler @ 0107cc80
                       catch() { ... } // from try @ 0107cc80 with catch @ 0107cc80
                       catch() { ... } // from try @ 0107ce10 with catch @ 0107cc80 */
        FT_Vector_Transform_Scaled(plVar45 + 0xe,plVar49,lVar24);
        lVar24 = FT_MulDiv(plVar45[0xd],*puVar53,lVar24);
        plVar45[0xd] = lVar24;
      }
      lVar25 = plVar45[0xb];
      lVar24 = -lVar25;
      if (-1 < lVar25) {
        lVar24 = lVar25;
      }
      if (lVar24 == 0x10000) {
        lVar24 = plVar45[0xf];
      }
      else {
        lVar25 = FT_DivFix(plVar45[0xd],lVar24);
        plVar45[0xd] = lVar25;
        lVar25 = FT_DivFix(plVar45[8],lVar24);
        plVar45[8] = lVar25;
        lVar25 = FT_DivFix(plVar45[10],lVar24);
        plVar45[10] = lVar25;
        lVar25 = FT_DivFix(plVar45[9],lVar24);
        plVar45[9] = lVar25;
        lVar25 = FT_DivFix(plVar45[0xb],lVar24);
        plVar45[0xb] = lVar25;
        lVar25 = FT_DivFix(plVar45[0xe],lVar24);
        plVar45[0xe] = lVar25;
        lVar24 = FT_DivFix(plVar45[0xf],lVar24);
        plVar45[0xf] = lVar24;
      }
      iVar18 = iVar18 + -1;
      plVar38 = plVar38 + -1;
      plVar45[0xe] = plVar45[0xe] >> 0x10;
      plVar45[0xf] = lVar24 >> 0x10;
    } while (iVar18 != 0);
  }
  if (bVar11) {
    *param_2 = (ulong)*(uint *)(plVar27 + 2);
    if (*(int *)((long)plVar27 + 0x6f4) == 0xffff) {
      uVar16 = *(uint *)(plVar27 + 0xa3);
    }
    else {
      uVar16 = (int)plVar27[0xa0] + 1;
    }
    param_2[4] = (ulong)uVar16;
    param_2[0xd] = plVar27[0xd3] >> 0x10;
    lVar24 = plVar27[0xd4];
    param_2[0xe] = lVar24 >> 0x10;
    param_2[0xf] = plVar27[0xd5] + 0xffff >> 0x10;
    lVar25 = plVar27[0xd6];
                    /* try { // try from 0107cddc to 0117cde7 has its CatchHandler @ 0107ce74 */
    param_2[0x10] = lVar25 + 0xffff >> 0x10;
    lVar26 = plVar27[0xcf];
    sVar14 = (short)((ulong)(lVar25 + 0xffff) >> 0x10);
    *(short *)((long)param_2 + 0x8a) = sVar14;
    sVar58 = (short)((ulong)lVar24 >> 0x10);
    *(short *)((long)param_2 + 0x8c) = sVar58;
    uVar16 = (uint)lVar26;
    *(short *)(param_2 + 0x11) = (short)lVar26;
                    /* try { // try from 0107ce00 to 0117ce0f has its CatchHandler @ 0107ce70 */
    uVar46 = ((uVar16 & 0xffff) + (uVar16 & 0xffff) * 2) * 4;
                    /* try { // try from 0107ce10 to 0117cea7 has its CatchHandler @ 0107cc80 */
    uVar16 = (int)sVar14 - (int)sVar58;
    if ((int)uVar16 <= (int)(short)((ulong)uVar46 * 0x19999999a000 >> 0x30)) {
      uVar16 = uVar46 / 10;
    }
    *(short *)((long)param_2 + 0x8e) = (short)uVar16;
    *(short *)((long)param_2 + 0x94) = (short)((ulong)plVar27[199] >> 0x10);
    *(short *)((long)param_2 + 0x96) = (short)((ulong)plVar27[200] >> 0x10);
    plVar49 = plVar27 + 4;
    uVar54 = *(undefined8 *)(*plVar49 + 0x38);
    local_68 = FUN_01080bdc(plVar49,param_3,&local_a8,&local_e0);
    pvVar51 = local_e0;
    if (local_68 == 0) {
                    /* try { // try from 0107cea8 to 0117d017 has its CatchHandler @ 0107cea8
                       catch() { ... } // from try @ 0107cea8 with catch @ 0107cea8
                       catch() { ... } // from try @ 0107d12c with catch @ 0107cea8 */
      pcVar31 = (char *)ft_mem_alloc(uVar54,(long)local_e0 + 1,&local_68);
      if (local_68 == 0) {
        memcpy(pcVar31,local_a8,(size_t)pvVar51);
        pcVar31[(long)pvVar51] = '\0';
                    /* try { // try from 0107d108 to 0117d117 has its CatchHandler @ 0107d198 */
        if (plVar27[10] != 0) goto LAB_0107cec4;
LAB_0107d110:
        FT_Stream_ReleaseFrame(*plVar49,&local_a8);
        param_2[5] = (ulong)pcVar31;
      }
      else {
        if (plVar27[10] == 0) goto LAB_0107d110;
LAB_0107cec4:
        param_2[5] = (ulong)pcVar31;
      }
      if (pcVar31 != (char *)0x0) {
        uVar16 = *(uint *)((long)plVar27 + 0x61c);
        if (uVar16 == 0xffff) {
LAB_0107cedc:
          pcVar50 = (char *)0x0;
        }
        else if (uVar16 < 0x187) {
          if (plVar27[0x250] == 0) goto LAB_0107cedc;
          pcVar50 = (char *)(**(code **)(plVar27[0x250] + 0x28))();
          pcVar31 = (char *)param_2[5];
        }
        else {
          if (*(uint *)(plVar27 + 0xbf) <= uVar16 - 0x187) goto LAB_0107cedc;
          pcVar50 = *(char **)(plVar27[0xc0] + (ulong)(uVar16 - 0x187) * 8);
        }
        sVar28 = strlen(pcVar31);
        iVar18 = (int)sVar28;
        if (5 < iVar18) {
          iVar17 = 0;
          uVar16 = iVar18 + 0x1a;
          bVar1 = true;
          uVar46 = iVar18 + 1U;
          do {
            if (pcVar31[6] != '+') break;
            if (((((0x19 < (byte)(pcVar31[1] + 0xbfU) || 0x19 < (byte)(*pcVar31 + 0xbfU)) ||
                  0x19 < (byte)(pcVar31[2] + 0xbfU)) || 0x19 < (byte)(pcVar31[3] + 0xbfU)) ||
                0x19 < (byte)(pcVar31[4] + 0xbfU)) || 0x19 < (byte)(pcVar31[5] + 0xbfU)) {
              bVar1 = false;
            }
            if (!bVar1) break;
            if (7 < (int)uVar46) {
              uVar19 = iVar18 + 1U + iVar17 * -7;
              uVar48 = (ulong)uVar19 - 7;
              if (uVar48 < 0x20) {
LAB_0107cfe8:
                lVar24 = 7;
              }
              else {
                uVar19 = uVar19 + 0x19 & 0x1f;
                lVar24 = uVar48 - uVar19;
                if (lVar24 == 0) goto LAB_0107cfe8;
                lVar25 = ((ulong)uVar46 - 7) - (ulong)(uVar16 & 0x1f);
                lVar24 = lVar24 + 7;
                pcVar29 = pcVar31 + 0x10;
                do {
                  lVar25 = lVar25 + -0x20;
                  *(undefined8 *)(pcVar29 + -8) = *(undefined8 *)(pcVar29 + -1);
                  *(undefined8 *)(pcVar29 + -0x10) = *(undefined8 *)(pcVar29 + -9);
                  *(long *)(pcVar29 + 8) = SUB168(*(undefined1 (*) [16])(pcVar29 + 7),8);
                  *(long *)pcVar29 = SUB168(*(undefined1 (*) [16])(pcVar29 + 7),0);
                  pcVar29 = pcVar29 + 0x20;
                } while (lVar25 != 0);
                if (uVar19 == 0) goto LAB_0107d004;
              }
              lVar25 = (ulong)uVar46 - lVar24;
              pcVar29 = pcVar31 + lVar24 + -7;
              do {
                lVar25 = lVar25 + -1;
                *pcVar29 = pcVar29[7];
                pcVar29 = pcVar29 + 1;
              } while (lVar25 != 0);
            }
LAB_0107d004:
            uVar46 = uVar46 - 7;
            iVar17 = iVar17 + 1;
            uVar16 = uVar16 + 0x19;
          } while (6 < (int)uVar46);
        }
                    /* try { // try from 0107d018 to 0117d023 has its CatchHandler @ 0107d19c */
        uVar16 = *(uint *)(plVar27 + 0xc4);
        if (uVar16 != 0) {
          if (uVar16 == 0xffff) {
LAB_0107d02c:
            pcVar29 = (char *)0x0;
          }
          else if (uVar16 < 0x187) {
                    /* try { // try from 0107d128 to 0117d12b has its CatchHandler @ 0107d1a0 */
                    /* try { // try from 0107d12c to 0117d1d3 has its CatchHandler @ 0107cea8 */
            if (plVar27[0x250] == 0) goto LAB_0107d02c;
            pcVar29 = (char *)(**(code **)(plVar27[0x250] + 0x28))();
          }
          else {
            if (*(uint *)(plVar27 + 0xbf) <= uVar16 - 0x187) goto LAB_0107d02c;
            pcVar29 = *(char **)(plVar27[0xc0] + (ulong)(uVar16 - 0x187) * 8);
          }
          if (pcVar29 != (char *)0x0) {
            pcVar31 = pcVar29;
          }
        }
        if ((pcVar50 != (char *)0x0) && (pcVar31 != (char *)0x0)) {
          cVar13 = *pcVar50;
          while (cVar13 != '\0') {
            while (cVar4 = *pcVar31, cVar13 != cVar4) {
              if ((cVar13 == ' ') || (cVar13 == '-')) goto LAB_0107d08c;
              if ((cVar4 != ' ') && (cVar4 != '-')) {
                if (cVar4 != '\0') goto LAB_0107d238;
                pcVar31 = (char *)ft_mem_strdup(uVar55,pcVar50,&local_a8);
                pcVar50 = (char *)param_2[5];
                sVar28 = strlen(pcVar50);
                sVar30 = strlen(pcVar31);
                iVar17 = (int)sVar30;
                iVar52 = (int)sVar28;
                iVar18 = iVar52 - iVar17;
                if (iVar18 == 0 || iVar52 < iVar17) goto LAB_0107d4dc;
                if (iVar17 < 1) goto LAB_0107d1b8;
                pcVar29 = pcVar50 + iVar52;
                pcVar40 = pcVar31 + iVar17;
                lVar24 = 0;
                goto LAB_0107d194;
              }
              pcVar31 = pcVar31 + 1;
              if (cVar13 == '\0') goto LAB_0107d238;
            }
            pcVar31 = pcVar31 + 1;
LAB_0107d08c:
            pcVar50 = pcVar50 + 1;
            cVar13 = *pcVar50;
          }
        }
        goto LAB_0107d238;
      }
    }
    else {
      param_2[5] = 0;
    }
    uVar16 = *(uint *)(plVar27 + 0xe8);
                    /* catch() { ... } // from try @ 0107ce00 with catch @ 0107ce70 */
                    /* catch() { ... } // from try @ 0107cddc with catch @ 0107ce74 */
    if (uVar16 != 0xffff) {
      if (uVar16 < 0x187) {
        if (plVar27[0x250] != 0) {
          lVar24 = (**(code **)(plVar27[0x250] + 0x28))();
          goto joined_r0x0107d224;
        }
      }
      else if (uVar16 - 0x187 < *(uint *)(plVar27 + 0xbf)) {
        lVar24 = *(long *)(plVar27[0xc0] + (ulong)(uVar16 - 0x187) * 8);
joined_r0x0107d224:
        if (lVar24 != 0) {
          uVar48 = ft_mem_strdup(uVar55,lVar24,&local_a8);
          param_2[5] = uVar48;
        }
      }
    }
LAB_0107d238:
    pcVar31 = (char *)ft_mem_strdup(uVar55,"Regular",&local_a8);
    goto LAB_0107d250;
  }
  goto LAB_0107d35c;
  while (lVar24 = lVar24 + 1, lVar24 < iVar17) {
LAB_0107d194:
    pcVar29 = pcVar29 + -1;
    pcVar40 = pcVar40 + -1;
                    /* catch() { ... } // from try @ 0107d108 with catch @ 0107d198 */
                    /* catch() { ... } // from try @ 0107d018 with catch @ 0107d19c */
                    /* catch() { ... } // from try @ 0107d128 with catch @ 0107d1a0 */
    if (*pcVar29 != *pcVar40) goto LAB_0107d250;
  }
LAB_0107d1b8:
  if (1 < iVar18) {
    lVar24 = (long)iVar18;
    do {
      if ((0x3f < (byte)pcVar50[lVar24 + -1] - 0x20) ||
         ((1L << ((ulong)((byte)pcVar50[lVar24 + -1] - 0x20) & 0x3f) & 0x8000000000002801U) == 0)) {
        pcVar50[lVar24] = '\0';
        break;
      }
      bVar1 = 2 < lVar24;
      lVar24 = lVar24 + -1;
    } while (bVar1);
  }
LAB_0107d4dc:
  if (pcVar31 == (char *)0x0) goto LAB_0107d238;
LAB_0107d250:
  param_2[6] = (ulong)pcVar31;
  uVar16 = 0x811;
  if (bVar10) {
    uVar16 = 0x819;
  }
                    /* try { // try from 0107d274 to 0117d27b has its CatchHandler @ 0107d290 */
  if ((char)plVar27[0xc5] != '\0') {
    uVar16 = uVar16 | 4;
  }
                    /* try { // try from 0107d27c to 0117d2af has its CatchHandler @ 0107d20c */
  param_2[2] = param_2[2] | (ulong)uVar16;
  uVar16 = *(uint *)((long)plVar27 + 0x624);
                    /* catch() { ... } // from try @ 0107d274 with catch @ 0107d290 */
  uVar46 = (uint)(plVar27[0xc6] != 0);
  if (uVar16 == 0xffff) {
LAB_0107d2a0:
                    /* WARNING: Read-only address (ram,0x013ce780) is written */
    pcVar31 = (char *)param_2[6];
    if ((pcVar31 != (char *)0x0) &&
       ((iVar18 = strncmp(pcVar31,"Bold",4), iVar18 == 0 ||
        (iVar18 = strncmp(pcVar31,"Black",5), iVar18 == 0)))) {
      uVar46 = uVar46 | 2;
    }
  }
  else {
    if (0x186 < uVar16) {
      if ((uVar16 - 0x187 < *(uint *)(plVar27 + 0xbf)) &&
         (pcVar31 = *(char **)(plVar27[0xc0] + (ulong)(uVar16 - 0x187) * 8), pcVar31 != (char *)0x0)
         ) goto LAB_0107d320;
      goto LAB_0107d2a0;
    }
    if ((plVar27[0x250] == 0) ||
       (pcVar31 = (char *)(**(code **)(plVar27[0x250] + 0x28))(), pcVar31 == (char *)0x0))
    goto LAB_0107d2a0;
LAB_0107d320:
    iVar18 = strcmp(pcVar31,"Bold");
    if ((iVar18 != 0) && (iVar18 = strcmp(pcVar31,"Black"), iVar18 != 0)) goto LAB_0107d2a0;
    uVar46 = uVar46 | 2;
  }
  param_2[3] = (long)(int)uVar46;
LAB_0107d35c:
  if (*(int *)((long)plVar27 + 0x6f4) == 0xffff) {
    uVar55 = 0x200;
  }
  else {
    if ((!bVar11) || (*(int *)((long)plVar27 + 0x6f4) == 0xffff)) goto LAB_0107d394;
    uVar55 = 0x1000;
  }
  param_2[2] = param_2[2] | uVar55;
LAB_0107d394:
  uVar16 = (uint)param_2[9];
  if (uVar16 != 0) {
    uVar46 = 0;
    do {
      lVar24 = *(long *)(param_2[10] + (ulong)uVar46 * 8);
      sVar14 = *(short *)(lVar24 + 0xc);
      if (sVar14 == 3) {
        if (*(short *)(lVar24 + 0xe) == 1) goto LAB_0107d450;
      }
      else if (sVar14 == 0) goto LAB_0107d450;
      uVar46 = uVar46 + 1;
    } while (uVar46 < uVar16);
  }
  if ((!bVar11) || (*(int *)((long)plVar27 + 0x6f4) == 0xffff)) {
    uStack_a0 = 0x10003756e6963;
    local_a8 = param_2;
    local_e4 = FT_CMap_New(cff_cmap_unicode_class_rec,0,&local_a8,0);
    if ((local_e4 == 0) || ((local_e4 & 0xff) == 0xa3)) {
      local_e4 = 0;
      if ((param_2[0x15] == 0) && (uVar16 != (uint)param_2[9])) {
        param_2[0x15] = *(ulong *)(param_2[10] + (ulong)uVar16 * 8);
      }
LAB_0107d450:
      if ((int)plVar27[0x1b] != 0) {
        uVar33 = 0x41444243;
        if (plVar27[0x1a] == 0) {
          uStack_a0._4_4_ = 7;
          uVar33 = 0x41444f42;
        }
        else if (plVar27[0x1a] == 1) {
          uStack_a0._4_4_ = 0x10007;
          uVar33 = 0x41444245;
        }
        else {
          uStack_a0._4_4_ = 0x20007;
        }
        uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar33);
        local_a8 = param_2;
        local_e4 = FT_CMap_New(cff_cmap_encoding_class_rec,0,&local_a8,0);
      }
    }
  }
                    /* WARNING: Read-only address (ram,0x013ce780) is written */
  return local_e4;
}

