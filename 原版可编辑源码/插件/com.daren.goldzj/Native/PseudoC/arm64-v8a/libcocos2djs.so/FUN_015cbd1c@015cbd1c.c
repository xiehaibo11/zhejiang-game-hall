
/* WARNING: Removing unreachable block (ram,0x015d8514) */

void FUN_015cbd1c(Decoder *param_1)

{
  uchar *puVar1;
  SmallVector<v8::internal::compiler::Node*,8ul> SVar2;
  SmallVector<v8::internal::compiler::Node*,8ul> SVar3;
  byte bVar4;
  Decoder DVar5;
  Node NVar6;
  byte bVar7;
  char cVar8;
  Node NVar9;
  Node **ppNVar10;
  byte *pbVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  Node *pNVar18;
  Node *pNVar19;
  char *pcVar20;
  char *pcVar21;
  undefined8 *puVar22;
  undefined4 *puVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  char *pcVar27;
  char *pcVar28;
  uchar uVar29;
  undefined4 uVar30;
  Zone *pZVar31;
  long lVar32;
  byte *pbVar33;
  long *plVar34;
  uint *puVar35;
  uint *puVar36;
  ulong uVar37;
  long lVar38;
  undefined4 *puVar39;
  Decoder *pDVar40;
  ulong uVar41;
  ulong uVar42;
  ulong *puVar43;
  ulong uVar44;
  Node *pNVar45;
  uint *puVar46;
  byte *pbVar47;
  uint uVar48;
  uint uVar49;
  long *plVar50;
  Node NVar51;
  Decoder *pDVar52;
  undefined1 uVar53;
  uint uVar54;
  ulong *puVar55;
  size_t __n;
  Node *pNVar56;
  uint uVar57;
  int iVar58;
  undefined4 *puVar59;
  ushort uVar60;
  int *piVar61;
  ulong *puVar62;
  uint uVar63;
  byte *pbVar64;
  Decoder *pDVar65;
  byte *pbVar66;
  Node *pNVar67;
  Decoder *pDVar68;
  byte *pbVar69;
  undefined8 uVar70;
  ulong uVar71;
  void *local_2b0;
  undefined8 local_2a0;
  Node *local_298;
  Decoder *local_290;
  long *local_288;
  undefined8 *local_280;
  uint *local_278;
  Node **local_270;
  uint *local_268;
  uint *local_260;
  uint *local_258;
  uint *local_250;
  uint *local_248;
  Decoder *local_240;
  undefined8 *local_238;
  Decoder *local_230;
  WasmFeatures *local_228;
  Decoder *local_220;
  long local_218;
  byte *local_210;
  Decoder *local_208;
  Decoder *local_200;
  Decoder *local_1f8;
  Decoder *local_1f0;
  Decoder *local_1e8;
  Decoder *local_1e0;
  Decoder *local_1d8;
  Decoder *local_1d0;
  undefined8 local_1c8;
  Node *local_1c0;
  undefined4 uStack_1b8;
  undefined3 uStack_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  byte abStack_188 [64];
  undefined8 local_148 [16];
  undefined8 local_c8;
  Node *local_c0;
  undefined8 local_b8;
  uint local_b0 [2];
  int local_a8;
  long local_70 [2];
  
  lVar17 = tpidr_el0;
  local_70[0] = *(long *)(lVar17 + 0x28);
  lVar15 = FUN_015d8800(param_1,2);
  *(undefined4 *)(lVar15 + 0x18) = 0;
  uVar37 = **(ulong **)(param_1 + 0x60);
  iVar12 = (int)uVar37;
  *(int *)(lVar15 + 0x40) = iVar12;
  if (iVar12 != 0) {
    if (iVar12 == 1) {
      uVar53 = **(undefined1 **)(*(long *)(param_1 + 0x60) + 0x10);
      *(undefined8 *)(lVar15 + 0x48) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(lVar15 + 0x58) = 0;
      *(undefined1 *)(lVar15 + 0x50) = uVar53;
    }
    else {
      pZVar31 = *(Zone **)(param_1 + 0x70);
      uVar37 = uVar37 & 0xffffffff;
      uVar24 = uVar37 * 0x18;
      lVar16 = *(long *)(pZVar31 + 0x10);
      if (uVar24 < (ulong)(*(long *)(pZVar31 + 0x18) - lVar16) ||
          uVar24 - (*(long *)(pZVar31 + 0x18) - lVar16) == 0) {
        *(ulong *)(pZVar31 + 0x10) = lVar16 + uVar24;
      }
      else {
        lVar16 = v8::internal::Zone::NewExpand(pZVar31,uVar24);
      }
      lVar32 = 0;
      lVar38 = 0;
      *(long *)(lVar15 + 0x48) = lVar16;
      while( true ) {
        puVar22 = (undefined8 *)(lVar16 + lVar32);
        uVar53 = *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x60) + 0x10) + lVar38);
        *puVar22 = *(undefined8 *)(param_1 + 0x10);
        *(undefined1 *)(puVar22 + 1) = uVar53;
        puVar22[2] = 0;
        *(uint *)((long)puVar22 + 0xc) = CONCAT31(uStack_1b4,uStack_1b8._3_1_);
        *(undefined4 *)((long)puVar22 + 9) = uStack_1b8;
        if (uVar37 - 1 == lVar38) break;
        lVar16 = *(long *)(lVar15 + 0x48);
        lVar38 = lVar38 + 1;
        lVar32 = lVar32 + 0x18;
      }
    }
  }
  pDVar52 = param_1 + 0x10;
  pbVar64 = *(byte **)pDVar52;
  pDVar65 = param_1 + 0x18;
  pbVar33 = *(byte **)pDVar65;
  if (pbVar64 < pbVar33) {
    local_240 = param_1 + 0x78;
    local_200 = param_1 + 0x30;
    local_208 = param_1 + 0x38;
    local_1d0 = param_1 + 0xb0;
    local_1d8 = param_1 + 0xd8;
    local_1f8 = param_1 + 0xc0;
    local_230 = param_1 + 0x80;
    local_220 = param_1 + 200;
    local_228 = (WasmFeatures *)(param_1 + 0x50);
    local_270 = &local_1c0;
    local_210 = abStack_188;
    local_258 = (uint *)&local_b8;
    local_238 = &local_c8;
    local_248 = (uint *)((ulong)&local_1a0 | 4);
    local_268 = local_b0;
    local_260 = (uint *)&local_190;
    pDVar40 = param_1 + 0xb8;
    local_288 = local_70;
    local_250 = (uint *)&local_198;
    local_278 = (uint *)((ulong)&local_c8 | 4);
    local_280 = local_148;
    local_218 = lVar17;
    local_1f0 = param_1;
    local_1e8 = pDVar65;
    local_1e0 = pDVar40;
LAB_015cbf20:
    pbVar33 = local_1a0;
    bVar4 = *pbVar64;
    uVar60 = (ushort)bVar4;
    if (bVar4 != 0xff) {
      uVar37 = 1;
      uVar57 = (uint)bVar4;
      pDVar68 = param_1;
      switch(uVar60) {
      case 0:
        if (((byte)*local_200 & 1) == 0) {
          if ((byte)*local_200 >> 1 == 0) {
LAB_015cd0b0:
            if (*(char *)(*(long *)local_1d8 + -0x78) == '\0') {
              uVar70 = v8::internal::compiler::WasmGraphBuilder::Unreachable
                                 (*(WasmGraphBuilder **)(param_1 + 0x80),
                                  *(int *)(param_1 + 0x10) - *(int *)(param_1 + 8));
              FUN_015ddc44(local_240,param_1,uVar70);
            }
          }
        }
        else if (*(ulong *)local_208 == 0) goto LAB_015cd0b0;
LAB_015d3498:
        lVar17 = *(long *)(param_1 + 0xd8);
        lVar15 = *(long *)(param_1 + 0xb0) + (ulong)*(uint *)(lVar17 + -0x84) * 0x18;
        if (lVar15 != *(long *)(param_1 + 0xb8)) {
          *(long *)pDVar40 = lVar15;
        }
        DVar5 = *local_200;
        goto joined_r0x015cdfbc;
      case 1:
        break;
      case 2:
        v8::internal::wasm::BlockTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::
        BlockTypeImmediate((BlockTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)
                           &local_c8,local_228,param_1,pbVar64);
        plVar34 = local_b8;
        if (local_c8._4_1_ == '\n') {
          lVar17 = *(long *)(param_1 + 0x48);
          uVar37 = (ulong)local_c0 & 0xffffffff;
          if (lVar17 == 0) {
LAB_015cce74:
            uVar24 = 0;
          }
          else {
            uVar24 = *(long *)(lVar17 + 0x60) - *(long *)(lVar17 + 0x58) >> 3;
            if (uVar37 < uVar24) {
              plVar34 = *(long **)(*(long *)(lVar17 + 0x58) + uVar37 * 8);
              goto joined_r0x015cc734;
            }
          }
LAB_015cce78:
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,*(char **)(param_1 + 0x10),
                     "block type index %u out of bounds (%zu signatures)",uVar37,uVar24);
          goto LAB_015cbf04;
        }
joined_r0x015cc734:
        local_b8 = plVar34;
        if (plVar34 == (long *)0x0) {
          local_1a0 = local_210;
          local_198 = local_210;
          local_190 = local_238;
        }
        else {
          local_1a0 = local_210;
          local_198 = local_210;
          uVar57 = (uint)plVar34[1];
          lVar17 = (long)(int)uVar57;
          local_190 = local_238;
          if (8 < uVar57) {
            FUN_015de7a0(&local_1a0,lVar17);
          }
          local_198 = local_1a0 + lVar17 * 0x18;
          if (0 < (int)uVar57) {
            lVar15 = (long)(int)uVar57 * 0x18;
            local_290 = pDVar52;
            do {
              uVar57 = uVar57 - 1;
              lVar16 = *(long *)pDVar40;
              uVar24 = (ulong)*(uint *)(*(long *)local_1d8 + -0x84);
              bVar4 = *(byte *)(plVar34[2] + *plVar34 + lVar17 + -1);
              uVar37 = (lVar16 - *(long *)local_1d0 >> 3) * -0x5555555555555555;
              if (uVar37 < uVar24 || uVar37 - uVar24 == 0) {
                if (*(char *)(*(long *)local_1d8 + -0x78) != '\x02') {
                  pbVar64 = *(byte **)pDVar52;
                  if (pbVar64 < *(byte **)local_1e8) {
                    bVar7 = *pbVar64;
                    uVar60 = (ushort)bVar7;
                    uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                    if ((uVar37 & 1) != 0) {
                      if (*(byte **)local_1e8 <= pbVar64 + 1) {
                        pcVar20 = "<end>";
                        pDVar40 = local_1e0;
                        goto LAB_015cd300;
                      }
                      uVar60 = CONCAT11(bVar7,pbVar64[1]);
                    }
                    pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                    pDVar40 = local_1e0;
                  }
                  else {
                    pcVar20 = "<end>";
                  }
LAB_015cd300:
                  v8::internal::wasm::Decoder::errorf
                            ((uchar *)local_1f0,(char *)pbVar64,"%s found empty stack",pcVar20);
                }
                pbVar64 = *(byte **)pDVar52;
                uVar70 = 0;
                uVar54 = 10;
              }
              else {
                pbVar64 = *(byte **)(lVar16 + -0x18);
                uVar30 = *(undefined4 *)(lVar16 + -0xf);
                uVar54 = (uint)*(byte *)(lVar16 + -0x10);
                uStack_1b4 = (undefined3)((uint)*(undefined4 *)(lVar16 + -0xc) >> 8);
                uVar70 = *(undefined8 *)(lVar16 + -8);
                *(undefined8 **)pDVar40 = (undefined8 *)(lVar16 + -0x18);
                uStack_1b8._3_1_ = (undefined1)((uint)uVar30 >> 0x18);
                local_1b0._0_3_ = (undefined3)uVar30;
                local_1b0._0_7_ =
                     CONCAT43(CONCAT31(uStack_1b4,uStack_1b8._3_1_),(undefined3)local_1b0);
                uStack_1b8 = uVar30;
              }
              lVar17 = lVar17 + -1;
              if (uVar54 != bVar4) {
                if ((bVar4 != 7 || uVar54 != 8) && (bVar4 != 6 || 2 < uVar54 - 7)) {
                  if ((bVar4 != 10) && ((uVar54 != 10 && (bVar4 != 9 || uVar54 != 8)))) {
                    pbVar33 = *(byte **)pDVar52;
                    if (pbVar33 < *(byte **)local_1e8) {
                      bVar7 = *pbVar33;
                      uVar60 = (ushort)bVar7;
                      uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                      if ((uVar37 & 1) != 0) {
                        if (*(byte **)local_1e8 <= pbVar33 + 1) goto LAB_015cd3cc;
                        uVar60 = CONCAT11(bVar7,pbVar33[1]);
                      }
                      pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                    }
                    else {
LAB_015cd3cc:
                      pcVar20 = "<end>";
                    }
                    pDVar52 = local_290;
                    if (bVar4 < 10) {
                      pcVar27 = (&PTR_s_<stmt>_01cc9818)[(char)bVar4];
                    }
                    else {
                      pcVar27 = "<unknown>";
                    }
                    if (pbVar64 < *(byte **)local_1e8) {
                      bVar4 = *pbVar64;
                      uVar60 = (ushort)bVar4;
                      local_298 = (Node *)pcVar20;
                      uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                      if ((uVar37 & 1) == 0) {
LAB_015cd468:
                        pcVar21 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                      }
                      else {
                        if (pbVar64 + 1 < *(byte **)local_1e8) {
                          uVar60 = CONCAT11(bVar4,pbVar64[1]);
                          goto LAB_015cd468;
                        }
                        pcVar21 = "<end>";
                      }
                      pcVar20 = (char *)local_298;
                      if (uVar54 < 0xb) goto LAB_015cd19c;
LAB_015cd488:
                      pcVar28 = "<unknown>";
                    }
                    else {
                      pcVar21 = "<end>";
                      if (10 < uVar54) goto LAB_015cd488;
LAB_015cd19c:
                      pcVar28 = (&PTR_s_<stmt>_01cc9868)[(char)(byte)uVar54];
                    }
                    v8::internal::wasm::Decoder::errorf
                              ((uchar *)local_1f0,(char *)pbVar64,
                               "%s[%d] expected type %s, found %s of type %s",pcVar20,(ulong)uVar57,
                               pcVar27,pcVar21,pcVar28);
                    pDVar40 = local_1e0;
                  }
                }
              }
              *(byte **)(local_1a0 + lVar15 + -0x18) = pbVar64;
              local_1a0[lVar15 + -0x10] = (byte)uVar54;
              uVar30 = local_1b0._3_4_;
              *(undefined8 *)(local_1a0 + lVar15 + -8) = uVar70;
              *(undefined4 *)(local_1a0 + lVar15 + -0xc) = uVar30;
              *(undefined4 *)(local_1a0 + lVar15 + -0xf) = (undefined4)local_1b0;
              lVar15 = lVar15 + -0x18;
            } while (0 < lVar17);
          }
        }
        param_1 = local_1f0;
        lVar17 = FUN_015d8800(local_1f0,2);
        FUN_015d8a20(param_1,lVar17,&local_c8,local_1a0);
        pDVar65 = local_1e8;
        if (((byte)param_1[0x30] & 1) == 0) {
          uVar37 = (ulong)((byte)param_1[0x30] >> 1);
        }
        else {
          uVar37 = *(ulong *)local_208;
        }
        if ((uVar37 == 0) && (*(char *)(*(long *)local_1d8 + -0x78) == '\0')) {
          *(undefined8 *)(lVar17 + 0x68) = *(undefined8 *)(param_1 + 0x78);
          pZVar31 = *(Zone **)(param_1 + 0x70);
          puVar23 = *(undefined4 **)(param_1 + 0x78);
          puVar39 = *(undefined4 **)(pZVar31 + 0x10);
          if ((ulong)(*(long *)(pZVar31 + 0x18) - (long)puVar39) < 0x38) {
            puVar39 = (undefined4 *)v8::internal::Zone::NewExpand(pZVar31,0x38);
          }
          else {
            *(undefined4 **)(pZVar31 + 0x10) = puVar39 + 0xe;
          }
          *puVar39 = 2;
          *(undefined8 *)(puVar39 + 0xc) = *(undefined8 *)(puVar23 + 0xc);
          *(undefined8 *)(puVar39 + 2) = *(undefined8 *)(puVar23 + 2);
          *(undefined8 *)(puVar39 + 4) = *(undefined8 *)(puVar23 + 4);
          uVar25 = *(undefined8 *)(puVar23 + 8);
          uVar70 = *(undefined8 *)(puVar23 + 6);
          *(undefined8 *)(puVar39 + 10) = *(undefined8 *)(puVar23 + 10);
          *(undefined8 *)(puVar39 + 8) = uVar25;
          *(undefined8 *)(puVar39 + 6) = uVar70;
          *puVar23 = 1;
          *(undefined8 *)(puVar23 + 4) = 0;
          *(undefined8 *)(puVar23 + 2) = 0;
          *(undefined8 *)(puVar23 + 8) = 0;
          *(undefined8 *)(puVar23 + 6) = 0;
          *(undefined8 *)(puVar23 + 0xc) = 0;
          *(undefined8 *)(puVar23 + 10) = 0;
          *(undefined4 **)local_240 = puVar39;
          *(undefined4 **)(*(long *)local_230 + 0x18) = puVar39 + 2;
          *(undefined4 **)(*(long *)local_230 + 0x20) = puVar39 + 4;
          *(undefined4 **)(*(long *)local_230 + 0x28) = puVar39 + 6;
        }
        FUN_015d8c6c(param_1,lVar17,lVar17 + 0x18);
        uVar37 = (ulong)((int)local_c8 + 1);
        if (local_1a0 == local_210) break;
        goto LAB_015d5a50;
      case 3:
        v8::internal::wasm::BlockTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::
        BlockTypeImmediate((BlockTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)
                           &local_c8,local_228,param_1,pbVar64);
        if (local_c8._4_1_ == '\n') {
          lVar17 = *(long *)(param_1 + 0x48);
          uVar37 = (ulong)local_c0 & 0xffffffff;
          if (lVar17 == 0) goto LAB_015cce74;
          uVar24 = *(long *)(lVar17 + 0x60) - *(long *)(lVar17 + 0x58) >> 3;
          if (uVar24 <= uVar37) goto LAB_015cce78;
          local_b8 = *(long **)(*(long *)(lVar17 + 0x58) + uVar37 * 8);
          if (local_b8 != (long *)0x0) goto LAB_015cd4d8;
LAB_015cc798:
          local_1a0 = local_210;
          local_198 = local_210;
          local_190 = local_238;
        }
        else {
          if (local_b8 == (long *)0x0) goto LAB_015cc798;
LAB_015cd4d8:
          plVar34 = local_b8;
          local_1a0 = local_210;
          local_198 = local_210;
          uVar57 = (uint)local_b8[1];
          lVar17 = (long)(int)uVar57;
          local_190 = local_238;
          if (8 < uVar57) {
            FUN_015de7a0(&local_1a0,lVar17);
          }
          local_198 = local_1a0 + lVar17 * 0x18;
          if (0 < (int)uVar57) {
            lVar15 = (long)(int)uVar57 * 0x18;
            local_290 = pDVar52;
            do {
              uVar57 = uVar57 - 1;
              lVar16 = *(long *)pDVar40;
              uVar24 = (ulong)*(uint *)(*(long *)local_1d8 + -0x84);
              bVar4 = *(byte *)(plVar34[2] + *plVar34 + lVar17 + -1);
              uVar37 = (lVar16 - *(long *)local_1d0 >> 3) * -0x5555555555555555;
              if (uVar37 < uVar24 || uVar37 - uVar24 == 0) {
                if (*(char *)(*(long *)local_1d8 + -0x78) != '\x02') {
                  pbVar64 = *(byte **)pDVar52;
                  if (pbVar64 < *(byte **)local_1e8) {
                    bVar7 = *pbVar64;
                    uVar60 = (ushort)bVar7;
                    uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                    if ((uVar37 & 1) != 0) {
                      if (*(byte **)local_1e8 <= pbVar64 + 1) {
                        pcVar20 = "<end>";
                        pDVar40 = local_1e0;
                        goto LAB_015cd688;
                      }
                      uVar60 = CONCAT11(bVar7,pbVar64[1]);
                    }
                    pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                    pDVar40 = local_1e0;
                  }
                  else {
                    pcVar20 = "<end>";
                  }
LAB_015cd688:
                  v8::internal::wasm::Decoder::errorf
                            ((uchar *)local_1f0,(char *)pbVar64,"%s found empty stack",pcVar20);
                }
                pbVar64 = *(byte **)pDVar52;
                uVar70 = 0;
                uVar54 = 10;
              }
              else {
                pbVar64 = *(byte **)(lVar16 + -0x18);
                uVar30 = *(undefined4 *)(lVar16 + -0xf);
                uVar54 = (uint)*(byte *)(lVar16 + -0x10);
                uStack_1b4 = (undefined3)((uint)*(undefined4 *)(lVar16 + -0xc) >> 8);
                uVar70 = *(undefined8 *)(lVar16 + -8);
                *(undefined8 **)pDVar40 = (undefined8 *)(lVar16 + -0x18);
                uStack_1b8._3_1_ = (undefined1)((uint)uVar30 >> 0x18);
                local_1b0._0_3_ = (undefined3)uVar30;
                local_1b0._0_7_ =
                     CONCAT43(CONCAT31(uStack_1b4,uStack_1b8._3_1_),(undefined3)local_1b0);
                uStack_1b8 = uVar30;
              }
              lVar17 = lVar17 + -1;
              if (uVar54 != bVar4) {
                if ((bVar4 != 7 || uVar54 != 8) && (bVar4 != 6 || 2 < uVar54 - 7)) {
                  if ((bVar4 != 10) && ((uVar54 != 10 && (bVar4 != 9 || uVar54 != 8)))) {
                    pbVar33 = *(byte **)pDVar52;
                    if (pbVar33 < *(byte **)local_1e8) {
                      bVar7 = *pbVar33;
                      uVar60 = (ushort)bVar7;
                      uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                      if ((uVar37 & 1) != 0) {
                        if (*(byte **)local_1e8 <= pbVar33 + 1) goto LAB_015cd754;
                        uVar60 = CONCAT11(bVar7,pbVar33[1]);
                      }
                      pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                    }
                    else {
LAB_015cd754:
                      pcVar20 = "<end>";
                    }
                    pDVar52 = local_290;
                    if (bVar4 < 10) {
                      pcVar27 = (&PTR_s_<stmt>_01cc9818)[(char)bVar4];
                    }
                    else {
                      pcVar27 = "<unknown>";
                    }
                    if (pbVar64 < *(byte **)local_1e8) {
                      bVar4 = *pbVar64;
                      uVar60 = (ushort)bVar4;
                      local_298 = (Node *)pcVar20;
                      uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                      if ((uVar37 & 1) == 0) {
LAB_015cd7f0:
                        pcVar21 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                      }
                      else {
                        if (pbVar64 + 1 < *(byte **)local_1e8) {
                          uVar60 = CONCAT11(bVar4,pbVar64[1]);
                          goto LAB_015cd7f0;
                        }
                        pcVar21 = "<end>";
                      }
                      pcVar20 = (char *)local_298;
                      if (uVar54 < 0xb) goto LAB_015cd524;
LAB_015cd810:
                      pcVar28 = "<unknown>";
                    }
                    else {
                      pcVar21 = "<end>";
                      if (10 < uVar54) goto LAB_015cd810;
LAB_015cd524:
                      pcVar28 = (&PTR_s_<stmt>_01cc9868)[(char)(byte)uVar54];
                    }
                    v8::internal::wasm::Decoder::errorf
                              ((uchar *)local_1f0,(char *)pbVar64,
                               "%s[%d] expected type %s, found %s of type %s",pcVar20,(ulong)uVar57,
                               pcVar27,pcVar21,pcVar28);
                    pDVar40 = local_1e0;
                  }
                }
              }
              *(byte **)(local_1a0 + lVar15 + -0x18) = pbVar64;
              local_1a0[lVar15 + -0x10] = (byte)uVar54;
              uVar30 = local_1b0._3_4_;
              *(undefined8 *)(local_1a0 + lVar15 + -8) = uVar70;
              *(undefined4 *)(local_1a0 + lVar15 + -0xc) = uVar30;
              *(undefined4 *)(local_1a0 + lVar15 + -0xf) = (undefined4)local_1b0;
              lVar15 = lVar15 + -0x18;
            } while (0 < lVar17);
          }
        }
        param_1 = local_1f0;
        lVar17 = FUN_015d8800(local_1f0,3);
        FUN_015d8a20(param_1,*(long *)(param_1 + 0xd8) + -0x88,&local_c8,local_1a0);
        iVar12 = (int)local_c8;
        if (((byte)param_1[0x30] & 1) == 0) {
          if ((byte)param_1[0x30] >> 1 == 0) {
LAB_015cddf8:
            if (*(char *)(*(long *)local_1d8 + -0x78) == '\0') {
              pZVar31 = *(Zone **)(param_1 + 0x70);
              puVar23 = *(undefined4 **)(param_1 + 0x78);
              puVar39 = *(undefined4 **)(pZVar31 + 0x10);
              if ((ulong)(*(long *)(pZVar31 + 0x18) - (long)puVar39) < 0x38) {
                puVar39 = (undefined4 *)v8::internal::Zone::NewExpand(pZVar31,0x38);
              }
              else {
                *(undefined4 **)(pZVar31 + 0x10) = puVar39 + 0xe;
              }
              *puVar39 = 2;
              uVar57 = 1;
              *(undefined8 *)(puVar39 + 0xc) = *(undefined8 *)(puVar23 + 0xc);
              *(undefined8 *)(puVar39 + 2) = *(undefined8 *)(puVar23 + 2);
              *(undefined8 *)(puVar39 + 4) = *(undefined8 *)(puVar23 + 4);
              uVar25 = *(undefined8 *)(puVar23 + 6);
              uVar70 = *(undefined8 *)(puVar23 + 10);
              *(undefined8 *)(puVar39 + 8) = *(undefined8 *)(puVar23 + 8);
              *(undefined8 *)(puVar39 + 6) = uVar25;
              *(undefined8 *)(puVar39 + 10) = uVar70;
              *puVar23 = 1;
              *(undefined8 *)(puVar23 + 4) = 0;
              *(undefined8 *)(puVar23 + 2) = 0;
              *(undefined8 *)(puVar23 + 8) = 0;
              *(undefined8 *)(puVar23 + 6) = 0;
              *(undefined8 *)(puVar23 + 0xc) = 0;
              *(undefined8 *)(puVar23 + 10) = 0;
              *(undefined4 **)(lVar17 + 0x68) = puVar39;
              *puVar39 = 3;
              local_1c0 = (Node *)v8::internal::compiler::WasmGraphBuilder::Loop
                                            (*(WasmGraphBuilder **)(param_1 + 0x80),
                                             *(Node **)(puVar39 + 2));
              local_1c8 = *(Node **)(puVar39 + 4);
              *(Node **)(puVar39 + 2) = local_1c0;
              pNVar19 = (Node *)v8::internal::compiler::WasmGraphBuilder::EffectPhi
                                          (*(WasmGraphBuilder **)(param_1 + 0x80),1,
                                           (Node **)&local_1c8);
              *(Node **)(puVar39 + 4) = pNVar19;
              v8::internal::compiler::WasmGraphBuilder::TerminateLoop
                        (*(WasmGraphBuilder **)(param_1 + 0x80),pNVar19,*(Node **)(puVar39 + 2));
              piVar61 = *(int **)(param_1 + 0x68);
              if (piVar61 != (int *)0x0) {
                uVar57 = (piVar61[2] - *piVar61) + 1;
              }
              lVar15 = v8::internal::wasm::WasmDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1>
                       ::AnalyzeLoopAssignment
                                 (param_1,*(uchar **)(param_1 + 0x10),uVar57,
                                  *(Zone **)(param_1 + 0x70));
              if (((byte)param_1[0x30] & 1) == 0) {
                if ((byte)param_1[0x30] >> 1 == 0) {
LAB_015d0e14:
                  if (lVar15 == 0) {
                    lVar15 = *(long *)(param_1 + 0x90);
                    if (-1 < (int)(~(uint)lVar15 + (int)*(undefined8 *)(param_1 + 0x98))) {
                      iVar58 = ((int)*(undefined8 *)(param_1 + 0x98) - (uint)lVar15) + -2;
                      while( true ) {
                        lVar16 = (ulong)(iVar58 + 1) * 8;
                        local_1b0 = *(Node **)(*(long *)(puVar39 + 0xc) + lVar16);
                        local_1a8 = *(undefined8 *)(puVar39 + 2);
                        uVar70 = v8::internal::compiler::WasmGraphBuilder::Phi
                                           (*(WasmGraphBuilder **)local_230,
                                            *(undefined1 *)(lVar15 + (ulong)(iVar58 + 1)),1,
                                            &local_1b0);
                        *(undefined8 *)(*(long *)(puVar39 + 0xc) + lVar16) = uVar70;
                        if (iVar58 < 0) break;
                        lVar15 = *(long *)(param_1 + 0x90);
                        iVar58 = iVar58 + -1;
                      }
                    }
                    v8::internal::compiler::WasmGraphBuilder::PrepareInstanceCacheForLoop
                              (*(WasmGraphBuilder **)(param_1 + 0x80),
                               (WasmInstanceCacheNodes *)(puVar39 + 6),*(Node **)(puVar39 + 2));
                    puVar39 = (undefined4 *)FUN_015ddde4(param_1,puVar39);
                  }
                  else {
                    piVar61 = *(int **)(param_1 + 0x68);
                    if (piVar61 == (int *)0x0) {
                      uVar57 = 0;
                    }
                    else {
                      uVar57 = piVar61[2] - *piVar61;
                    }
                    iVar58 = *(int *)(lVar15 + 4);
                    puVar43 = (ulong *)(lVar15 + 8);
                    uVar54 = ~*(uint *)(param_1 + 0x90) + *(int *)(param_1 + 0x98);
                    param_1 = local_1f0;
                    for (; local_1f0 = param_1, -1 < (int)uVar54; uVar54 = uVar54 - 1) {
                      puVar55 = puVar43;
                      if (iVar58 != 1) {
                        puVar55 = (ulong *)(*puVar43 + (ulong)(uVar54 >> 6) * 8);
                      }
                      if ((*puVar55 >> ((ulong)uVar54 & 0x3f) & 1) != 0) {
                        lVar16 = (ulong)uVar54 * 8;
                        local_1b0 = *(Node **)(*(long *)(puVar39 + 0xc) + lVar16);
                        local_1a8 = *(undefined8 *)(puVar39 + 2);
                        uVar70 = v8::internal::compiler::WasmGraphBuilder::Phi
                                           (*(WasmGraphBuilder **)(param_1 + 0x80),
                                            *(undefined1 *)
                                             (*(long *)(param_1 + 0x90) + (ulong)uVar54),1,
                                            &local_1b0);
                        *(undefined8 *)(*(long *)(puVar39 + 0xc) + lVar16) = uVar70;
                        iVar58 = *(int *)(lVar15 + 4);
                      }
                      param_1 = local_1f0;
                    }
                    if (iVar58 != 1) {
                      uVar54 = uVar57 + 0x3f;
                      if (-1 < (int)uVar57) {
                        uVar54 = uVar57;
                      }
                      puVar43 = (ulong *)(*puVar43 + (long)((int)uVar54 >> 6) * 8);
                    }
                    if ((*puVar43 >> ((ulong)uVar57 & 0x3f) & 1) != 0) {
                      v8::internal::compiler::WasmGraphBuilder::PrepareInstanceCacheForLoop
                                (*(WasmGraphBuilder **)local_230,
                                 (WasmInstanceCacheNodes *)(puVar39 + 6),*(Node **)(puVar39 + 2));
                    }
                    puVar39 = (undefined4 *)FUN_015ddde4(param_1,puVar39);
                  }
                  v8::internal::compiler::WasmGraphBuilder::StackCheck
                            (*(WasmGraphBuilder **)(param_1 + 0x80),
                             *(int *)(param_1 + 0x10) - *(int *)(param_1 + 8),(Node **)(puVar39 + 4)
                             ,(Node **)(puVar39 + 2));
                }
              }
              else if (*(ulong *)local_208 == 0) goto LAB_015d0e14;
              *(undefined4 **)local_240 = puVar39;
              *(undefined4 **)(*(long *)local_230 + 0x18) = puVar39 + 2;
              *(undefined4 **)(*(long *)local_230 + 0x20) = puVar39 + 4;
              *(undefined4 **)(*(long *)local_230 + 0x28) = puVar39 + 6;
              if (**(int **)local_240 == 3) {
                **(int **)local_240 = 2;
              }
              if (((byte)*local_200 & 1) == 0) {
                if ((byte)*local_200 >> 1 == 0) {
LAB_015d46c8:
                  uVar37 = (ulong)*(uint *)(lVar17 + 0x18);
                  if (*(uint *)(lVar17 + 0x18) != 0) {
                    lVar15 = 0;
                    uVar24 = 0;
                    do {
                      plVar34 = (long *)(lVar17 + 0x20);
                      if ((int)uVar37 != 1) {
                        plVar34 = (long *)(*(long *)(lVar17 + 0x20) + lVar15);
                      }
                      local_1c8 = (Node *)plVar34[2];
                      local_1c0 = *(Node **)(*(long *)(lVar17 + 0x68) + 8);
                      lVar16 = v8::internal::compiler::WasmGraphBuilder::Phi
                                         (*(WasmGraphBuilder **)local_230,(char)plVar34[1],1,
                                          &local_1c8);
                      plVar34[2] = lVar16;
                      uVar37 = (ulong)*(uint *)(lVar17 + 0x18);
                      uVar24 = uVar24 + 1;
                      lVar15 = lVar15 + 0x18;
                    } while (uVar24 < uVar37);
                  }
                }
              }
              else if (*(ulong *)local_208 == 0) goto LAB_015d46c8;
            }
          }
        }
        else if (*(ulong *)local_208 == 0) goto LAB_015cddf8;
        uVar37 = (ulong)(iVar12 + 1);
        FUN_015d8c6c(param_1,lVar17,lVar17 + 0x18);
        pDVar40 = local_1e0;
        pDVar65 = local_1e8;
        if (local_1a0 != local_210) {
          free(local_1a0);
          pDVar40 = local_1e0;
          pDVar65 = local_1e8;
        }
        break;
      case 4:
        v8::internal::wasm::BlockTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::
        BlockTypeImmediate((BlockTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)
                           &local_c8,local_228,param_1,pbVar64);
        if (local_c8._4_1_ == '\n') {
          lVar17 = *(long *)(param_1 + 0x48);
          uVar37 = (ulong)local_c0 & 0xffffffff;
          if (lVar17 == 0) goto LAB_015cce74;
          uVar24 = *(long *)(lVar17 + 0x60) - *(long *)(lVar17 + 0x58) >> 3;
          if (uVar24 <= uVar37) goto LAB_015cce78;
          local_b8 = *(long **)(*(long *)(lVar17 + 0x58) + uVar37 * 8);
        }
        lVar17 = *(long *)pDVar40;
        uVar24 = (ulong)*(uint *)(*(long *)local_1d8 + -0x84);
        uVar37 = (lVar17 - *(long *)local_1d0 >> 3) * -0x5555555555555555;
        if (uVar37 < uVar24 || uVar37 - uVar24 == 0) {
          if (*(char *)(*(long *)local_1d8 + -0x78) == '\x02') {
            local_2a0 = (Node *)0x0;
          }
          else {
            pbVar64 = *(byte **)pDVar52;
            if (pbVar64 < *(byte **)pDVar65) {
              bVar4 = *pbVar64;
              uVar60 = (ushort)bVar4;
              uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
              if ((uVar37 & 1) != 0) {
                if (*(byte **)pDVar65 <= pbVar64 + 1) goto LAB_015cfc90;
                uVar60 = CONCAT11(bVar4,pbVar64[1]);
              }
              pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
            }
            else {
LAB_015cfc90:
              pcVar20 = "<end>";
            }
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pbVar64,"%s found empty stack",pcVar20);
            local_2a0 = (Node *)0x0;
          }
        }
        else {
          pbVar64 = *(byte **)(lVar17 + -0x18);
          bVar4 = *(byte *)(lVar17 + -0x10);
          local_2a0 = *(Node **)(lVar17 + -8);
          *(undefined8 **)pDVar40 = (undefined8 *)(lVar17 + -0x18);
          if ((bVar4 != 1) && (bVar4 != 10)) {
            pbVar33 = *(byte **)pDVar52;
            if (pbVar33 < *(byte **)pDVar65) {
              bVar7 = *pbVar33;
              uVar60 = (ushort)bVar7;
              uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
              if ((uVar37 & 1) != 0) {
                if (*(byte **)pDVar65 <= pbVar33 + 1) goto LAB_015d0904;
                uVar60 = CONCAT11(bVar7,pbVar33[1]);
              }
              pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
            }
            else {
LAB_015d0904:
              pcVar20 = "<end>";
            }
            if (pbVar64 < *(byte **)pDVar65) {
              bVar7 = *pbVar64;
              uVar60 = (ushort)bVar7;
              uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
              if ((uVar37 & 1) != 0) {
                if (*(byte **)pDVar65 <= pbVar64 + 1) goto LAB_015d1e00;
                uVar60 = CONCAT11(bVar7,pbVar64[1]);
              }
              pcVar27 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
            }
            else {
LAB_015d1e00:
              pcVar27 = "<end>";
            }
            pDVar40 = local_1e0;
            if (bVar4 < 10) {
              pcVar21 = (&PTR_s_<stmt>_01cc9910)[(char)bVar4];
            }
            else {
              pcVar21 = "<unknown>";
            }
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pbVar64,
                       "%s[%d] expected type %s, found %s of type %s",pcVar20,0,"i32",pcVar27,
                       pcVar21);
          }
        }
        plVar34 = local_b8;
        if (local_b8 == (long *)0x0) {
          local_1a0 = local_210;
          local_198 = local_210;
          local_190 = local_238;
        }
        else {
          local_1a0 = local_210;
          local_198 = local_210;
          uVar57 = (uint)local_b8[1];
          lVar17 = (long)(int)uVar57;
          local_190 = local_238;
          if (8 < uVar57) {
            FUN_015de7a0(&local_1a0,lVar17);
          }
          local_198 = local_1a0 + lVar17 * 0x18;
          if (0 < (int)uVar57) {
            lVar15 = (long)(int)uVar57 * 0x18;
            local_290 = pDVar52;
            do {
              uVar57 = uVar57 - 1;
              lVar16 = *(long *)pDVar40;
              uVar24 = (ulong)*(uint *)(*(long *)local_1d8 + -0x84);
              bVar4 = *(byte *)(plVar34[2] + *plVar34 + lVar17 + -1);
              uVar37 = (lVar16 - *(long *)local_1d0 >> 3) * -0x5555555555555555;
              if (uVar37 < uVar24 || uVar37 - uVar24 == 0) {
                if (*(char *)(*(long *)local_1d8 + -0x78) != '\x02') {
                  pbVar64 = *(byte **)pDVar52;
                  if (pbVar64 < *(byte **)pDVar65) {
                    bVar7 = *pbVar64;
                    uVar60 = (ushort)bVar7;
                    uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                    if ((uVar37 & 1) != 0) {
                      if (*(byte **)pDVar65 <= pbVar64 + 1) goto LAB_015d1ff0;
                      uVar60 = CONCAT11(bVar7,pbVar64[1]);
                    }
                    pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                  }
                  else {
LAB_015d1ff0:
                    pcVar20 = "<end>";
                  }
                  v8::internal::wasm::Decoder::errorf
                            ((uchar *)local_1f0,(char *)pbVar64,"%s found empty stack",pcVar20);
                }
                pbVar64 = *(byte **)pDVar52;
                uVar70 = 0;
                uVar54 = 10;
              }
              else {
                pbVar64 = *(byte **)(lVar16 + -0x18);
                uVar30 = *(undefined4 *)(lVar16 + -0xf);
                uVar54 = (uint)*(byte *)(lVar16 + -0x10);
                uStack_1b4 = (undefined3)((uint)*(undefined4 *)(lVar16 + -0xc) >> 8);
                uVar70 = *(undefined8 *)(lVar16 + -8);
                *(undefined8 **)pDVar40 = (undefined8 *)(lVar16 + -0x18);
                uStack_1b8._3_1_ = (undefined1)((uint)uVar30 >> 0x18);
                local_1b0._0_3_ = (undefined3)uVar30;
                local_1b0._0_7_ =
                     CONCAT43(CONCAT31(uStack_1b4,uStack_1b8._3_1_),(undefined3)local_1b0);
                uStack_1b8 = uVar30;
              }
              lVar17 = lVar17 + -1;
              if (uVar54 != bVar4) {
                if ((bVar4 != 7 || uVar54 != 8) && (bVar4 != 6 || 2 < uVar54 - 7)) {
                  if ((bVar4 != 10) && ((uVar54 != 10 && (bVar4 != 9 || uVar54 != 8)))) {
                    pbVar33 = *(byte **)pDVar52;
                    if (pbVar33 < *(byte **)local_1e8) {
                      bVar7 = *pbVar33;
                      uVar60 = (ushort)bVar7;
                      uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                      if ((uVar37 & 1) != 0) {
                        if (*(byte **)local_1e8 <= pbVar33 + 1) goto LAB_015d20d4;
                        uVar60 = CONCAT11(bVar7,pbVar33[1]);
                      }
                      pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                    }
                    else {
LAB_015d20d4:
                      pcVar20 = "<end>";
                    }
                    pDVar52 = local_290;
                    if (bVar4 < 10) {
                      pcVar27 = (&PTR_s_<stmt>_01cc9818)[(char)bVar4];
                    }
                    else {
                      pcVar27 = "<unknown>";
                    }
                    if (pbVar64 < *(byte **)local_1e8) {
                      bVar4 = *pbVar64;
                      uVar60 = (ushort)bVar4;
                      local_298 = (Node *)pcVar20;
                      uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                      if ((uVar37 & 1) == 0) {
LAB_015d2174:
                        pcVar21 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                      }
                      else {
                        if (pbVar64 + 1 < *(byte **)local_1e8) {
                          uVar60 = CONCAT11(bVar4,pbVar64[1]);
                          goto LAB_015d2174;
                        }
                        pcVar21 = "<end>";
                      }
                      pcVar20 = (char *)local_298;
                      if (uVar54 < 0xb) goto LAB_015d1ebc;
LAB_015d2198:
                      pcVar28 = "<unknown>";
                    }
                    else {
                      pcVar21 = "<end>";
                      if (10 < uVar54) goto LAB_015d2198;
LAB_015d1ebc:
                      pcVar28 = (&PTR_s_<stmt>_01cc9868)[(char)(byte)uVar54];
                    }
                    v8::internal::wasm::Decoder::errorf
                              ((uchar *)local_1f0,(char *)pbVar64,
                               "%s[%d] expected type %s, found %s of type %s",pcVar20,(ulong)uVar57,
                               pcVar27,pcVar21,pcVar28);
                  }
                }
              }
              *(byte **)(local_1a0 + lVar15 + -0x18) = pbVar64;
              local_1a0[lVar15 + -0x10] = (byte)uVar54;
              uVar30 = local_1b0._3_4_;
              *(undefined8 *)(local_1a0 + lVar15 + -8) = uVar70;
              *(undefined4 *)(local_1a0 + lVar15 + -0xc) = uVar30;
              *(undefined4 *)(local_1a0 + lVar15 + -0xf) = (undefined4)local_1b0;
              lVar15 = lVar15 + -0x18;
              pDVar40 = local_1e0;
              pDVar65 = local_1e8;
            } while (0 < lVar17);
          }
        }
        param_1 = local_1f0;
        if (((byte)*local_200 & 1) == 0) {
          uVar37 = (ulong)((byte)*local_200 >> 1);
        }
        else {
          uVar37 = *(ulong *)local_208;
        }
        if (uVar37 != 0) {
          uVar37 = 1;
          goto LAB_015d5a40;
        }
        lVar17 = FUN_015d8800(local_1f0,0);
        FUN_015d8a20(param_1,lVar17,&local_c8,local_1a0);
        if (((byte)param_1[0x30] & 1) == 0) {
          if ((byte)param_1[0x30] >> 1 == 0) {
LAB_015d2228:
            if (*(char *)(*(long *)local_1d8 + -0x78) == '\0') {
              local_1c8 = (Node *)0x0;
              local_1b0 = (Node *)0x0;
              uVar70 = v8::internal::compiler::WasmGraphBuilder::BranchNoHint
                                 (*(WasmGraphBuilder **)(param_1 + 0x80),local_2a0,
                                  (Node **)&local_1c8,(Node **)&local_1b0);
              FUN_015ddc44(local_240,param_1,uVar70);
              uVar70 = *(undefined8 *)(param_1 + 0x78);
              lVar15 = FUN_015ddde4(param_1,uVar70);
              *(Node **)(lVar15 + 8) = local_1b0;
              pZVar31 = *(Zone **)(param_1 + 0x70);
              puVar23 = *(undefined4 **)(param_1 + 0x78);
              puVar39 = *(undefined4 **)(pZVar31 + 0x10);
              if ((ulong)(*(long *)(pZVar31 + 0x18) - (long)puVar39) < 0x38) {
                puVar39 = (undefined4 *)v8::internal::Zone::NewExpand(pZVar31,0x38);
              }
              else {
                *(undefined4 **)(pZVar31 + 0x10) = puVar39 + 0xe;
              }
              *puVar39 = 2;
              *(undefined8 *)(puVar39 + 0xc) = *(undefined8 *)(puVar23 + 0xc);
              puVar43 = (ulong *)(puVar39 + 2);
              *puVar43 = *(ulong *)(puVar23 + 2);
              *(undefined8 *)(puVar39 + 4) = *(undefined8 *)(puVar23 + 4);
              uVar26 = *(undefined8 *)(puVar23 + 6);
              uVar25 = *(undefined8 *)(puVar23 + 10);
              *(undefined8 *)(puVar39 + 8) = *(undefined8 *)(puVar23 + 8);
              *(undefined8 *)(puVar39 + 6) = uVar26;
              *(undefined8 *)(puVar39 + 10) = uVar25;
              *puVar23 = 1;
              *(undefined8 *)(puVar23 + 4) = 0;
              *(undefined8 *)(puVar23 + 2) = 0;
              *(undefined8 *)(puVar23 + 8) = 0;
              *(undefined8 *)(puVar23 + 6) = 0;
              *(undefined8 *)(puVar23 + 0xc) = 0;
              *(undefined8 *)(puVar23 + 10) = 0;
              *puVar43 = (ulong)local_1c8;
              *(undefined8 *)(lVar17 + 0x68) = uVar70;
              *(long *)(lVar17 + 0x70) = lVar15;
              *(undefined4 **)local_240 = puVar39;
              *(ulong **)(*(long *)local_230 + 0x18) = puVar43;
              *(undefined4 **)(*(long *)local_230 + 0x20) = puVar39 + 4;
              *(undefined4 **)(*(long *)local_230 + 0x28) = puVar39 + 6;
              pDVar40 = local_1e0;
            }
          }
        }
        else if (*(ulong *)local_208 == 0) goto LAB_015d2228;
        uVar37 = (ulong)((int)local_c8 + 1);
        FUN_015d8c6c(param_1,lVar17,lVar17 + 0x18);
        goto LAB_015d5a40;
      case 5:
        lVar17 = *(long *)(param_1 + 0xd8);
        if (*(long *)(param_1 + 0xd0) == lVar17) {
          pcVar20 = "else does not match any if";
          goto LAB_015ccb40;
        }
        pbVar33 = (byte *)(lVar17 + -0x88);
        if (*pbVar33 < 2) {
          if (*pbVar33 != 1) {
            uVar24 = FUN_015d8f28(param_1);
            uVar37 = 1;
            if ((uVar24 & 1) == 0) break;
            *pbVar33 = 1;
            if (((byte)*local_200 & 1) == 0) {
              if ((byte)*local_200 >> 1 == 0) {
LAB_015d1370:
                if ((*(long *)(param_1 + 0xd8) - *(long *)(param_1 + 0xd0) == 0x88) ||
                   (*(char *)(*(long *)(param_1 + 0xd8) + -0x100) == '\0')) {
                  if (*(char *)(lVar17 + -0x78) == '\0') {
                    if (*(uint *)(lVar17 + -0x48) == 0) {
                      lVar15 = 0;
                    }
                    else {
                      lVar15 = *(long *)local_1e0 + (ulong)*(uint *)(lVar17 + -0x48) * -0x18;
                    }
                    piVar61 = *(int **)(lVar17 + -0x20);
                    iVar12 = *piVar61;
                    FUN_015ddeb8(local_240,local_1f0,*(undefined8 *)(local_1f0 + 0x78),piVar61);
                    uVar37 = (ulong)*(uint *)(lVar17 + -0x48);
                    if (*(uint *)(lVar17 + -0x48) != 0) {
                      lVar16 = 0;
                      uVar24 = 0;
                      do {
                        plVar34 = (long *)(lVar17 + -0x40);
                        if ((int)uVar37 != 1) {
                          plVar34 = (long *)(*(long *)(lVar17 + -0x40) + lVar16);
                        }
                        if (iVar12 == 1) {
                          lVar38 = *(long *)(lVar15 + 0x10 + lVar16);
                        }
                        else {
                          if (9 < *(byte *)(plVar34 + 1)) goto LAB_015d87ec;
                          uVar70 = 4;
                          switch(*(byte *)(plVar34 + 1)) {
                          case 0:
                            uVar70 = 0;
                            break;
                          case 1:
                            break;
                          case 2:
                            uVar70 = 5;
                            break;
                          case 3:
                            uVar70 = 0xb;
                            break;
                          case 4:
                            uVar70 = 0xc;
                            break;
                          case 5:
                            uVar70 = 0xd;
                            break;
                          default:
                            uVar70 = 7;
                          }
                          lVar38 = v8::internal::compiler::WasmGraphBuilder::CreateOrMergeIntoPhi
                                             (*(WasmGraphBuilder **)local_230,uVar70,
                                              *(undefined8 *)(piVar61 + 2),plVar34[2],
                                              *(undefined8 *)(lVar15 + 0x10 + lVar16));
                        }
                        plVar34[2] = lVar38;
                        uVar37 = (ulong)*(uint *)(lVar17 + -0x48);
                        uVar24 = uVar24 + 1;
                        lVar16 = lVar16 + 0x18;
                      } while (uVar24 < uVar37);
                    }
                  }
                  lVar15 = *(long *)(lVar17 + -0x18);
                  *(long *)local_240 = lVar15;
                  *(long *)(*(long *)local_230 + 0x18) = lVar15 + 8;
                  *(long *)(*(long *)local_230 + 0x20) = lVar15 + 0x10;
                  *(long *)(*(long *)local_230 + 0x28) = lVar15 + 0x18;
                  pDVar40 = local_1e0;
                  pDVar65 = local_1e8;
                  param_1 = local_1f0;
                }
              }
            }
            else if (*(ulong *)local_208 == 0) goto LAB_015d1370;
            if (*(char *)(lVar17 + -0x78) == '\0') {
              *(undefined1 *)(lVar17 + -0x28) = 1;
            }
            FUN_015d8c6c(param_1,pbVar33,lVar17 + -0x70);
            uVar37 = 1;
            *(bool *)(lVar17 + -0x78) = *(char *)(*(long *)(param_1 + 0xd8) + -0x100) != '\0';
            break;
          }
          pcVar20 = "else already present for if";
        }
        else {
          pcVar20 = "else does not match an if";
        }
LAB_015cded0:
        v8::internal::wasm::Decoder::error(param_1,pbVar64,pcVar20);
        goto LAB_015cbf04;
      case 6:
        if (((byte)*local_228 & 1) == 0) goto LAB_015cca00;
        **(uint **)(param_1 + 0x58) = **(uint **)(param_1 + 0x58) | 1;
        v8::internal::wasm::BlockTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::
        BlockTypeImmediate((BlockTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)
                           &local_c8,local_228,param_1,*(uchar **)(param_1 + 0x10));
        if (local_c8._4_1_ == '\n') {
          lVar17 = *(long *)(param_1 + 0x48);
          uVar37 = (ulong)local_c0 & 0xffffffff;
          if (lVar17 == 0) goto LAB_015cce74;
          uVar24 = *(long *)(lVar17 + 0x60) - *(long *)(lVar17 + 0x58) >> 3;
          if (uVar24 <= uVar37) goto LAB_015cce78;
          local_b8 = *(long **)(*(long *)(lVar17 + 0x58) + uVar37 * 8);
          if (local_b8 != (long *)0x0) goto LAB_015ce088;
LAB_015cc518:
          local_1a0 = local_210;
          local_198 = local_210;
          local_190 = local_238;
        }
        else {
          if (local_b8 == (long *)0x0) goto LAB_015cc518;
LAB_015ce088:
          plVar34 = local_b8;
          local_1a0 = local_210;
          local_198 = local_210;
          uVar57 = (uint)local_b8[1];
          lVar17 = (long)(int)uVar57;
          local_190 = local_238;
          if (8 < uVar57) {
            FUN_015de7a0(&local_1a0,lVar17);
          }
          local_198 = local_1a0 + lVar17 * 0x18;
          if (0 < (int)uVar57) {
            lVar15 = (long)(int)uVar57 * 0x18;
            local_290 = pDVar52;
            do {
              uVar57 = uVar57 - 1;
              lVar16 = *(long *)pDVar40;
              uVar24 = (ulong)*(uint *)(*(long *)local_1d8 + -0x84);
              bVar4 = *(byte *)(plVar34[2] + *plVar34 + lVar17 + -1);
              uVar37 = (lVar16 - *(long *)local_1d0 >> 3) * -0x5555555555555555;
              if (uVar37 < uVar24 || uVar37 - uVar24 == 0) {
                if (*(char *)(*(long *)local_1d8 + -0x78) != '\x02') {
                  pbVar64 = *(byte **)pDVar52;
                  if (pbVar64 < *(byte **)local_1e8) {
                    bVar7 = *pbVar64;
                    uVar60 = (ushort)bVar7;
                    uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                    if ((uVar37 & 1) != 0) {
                      if (*(byte **)local_1e8 <= pbVar64 + 1) {
                        pcVar20 = "<end>";
                        pDVar40 = local_1e0;
                        goto LAB_015ce238;
                      }
                      uVar60 = CONCAT11(bVar7,pbVar64[1]);
                    }
                    pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                    pDVar40 = local_1e0;
                  }
                  else {
                    pcVar20 = "<end>";
                  }
LAB_015ce238:
                  v8::internal::wasm::Decoder::errorf
                            ((uchar *)local_1f0,(char *)pbVar64,"%s found empty stack",pcVar20);
                }
                pbVar64 = *(byte **)pDVar52;
                uVar70 = 0;
                uVar54 = 10;
              }
              else {
                pbVar64 = *(byte **)(lVar16 + -0x18);
                uVar30 = *(undefined4 *)(lVar16 + -0xf);
                uVar54 = (uint)*(byte *)(lVar16 + -0x10);
                uStack_1b4 = (undefined3)((uint)*(undefined4 *)(lVar16 + -0xc) >> 8);
                uVar70 = *(undefined8 *)(lVar16 + -8);
                *(undefined8 **)pDVar40 = (undefined8 *)(lVar16 + -0x18);
                uStack_1b8._3_1_ = (undefined1)((uint)uVar30 >> 0x18);
                local_1b0._0_3_ = (undefined3)uVar30;
                local_1b0._0_7_ =
                     CONCAT43(CONCAT31(uStack_1b4,uStack_1b8._3_1_),(undefined3)local_1b0);
                uStack_1b8 = uVar30;
              }
              lVar17 = lVar17 + -1;
              if (uVar54 != bVar4) {
                if ((bVar4 != 7 || uVar54 != 8) && (bVar4 != 6 || 2 < uVar54 - 7)) {
                  if ((bVar4 != 10) && ((uVar54 != 10 && (bVar4 != 9 || uVar54 != 8)))) {
                    pbVar33 = *(byte **)pDVar52;
                    if (pbVar33 < *(byte **)local_1e8) {
                      bVar7 = *pbVar33;
                      uVar60 = (ushort)bVar7;
                      uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                      if ((uVar37 & 1) != 0) {
                        if (*(byte **)local_1e8 <= pbVar33 + 1) goto LAB_015ce304;
                        uVar60 = CONCAT11(bVar7,pbVar33[1]);
                      }
                      pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                    }
                    else {
LAB_015ce304:
                      pcVar20 = "<end>";
                    }
                    pDVar52 = local_290;
                    if (bVar4 < 10) {
                      pcVar27 = (&PTR_s_<stmt>_01cc9818)[(char)bVar4];
                    }
                    else {
                      pcVar27 = "<unknown>";
                    }
                    if (pbVar64 < *(byte **)local_1e8) {
                      bVar4 = *pbVar64;
                      uVar60 = (ushort)bVar4;
                      local_298 = (Node *)pcVar20;
                      uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                      if ((uVar37 & 1) == 0) {
LAB_015ce3a0:
                        pcVar21 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                      }
                      else {
                        if (pbVar64 + 1 < *(byte **)local_1e8) {
                          uVar60 = CONCAT11(bVar4,pbVar64[1]);
                          goto LAB_015ce3a0;
                        }
                        pcVar21 = "<end>";
                      }
                      pcVar20 = (char *)local_298;
                      if (uVar54 < 0xb) goto LAB_015ce0d4;
LAB_015ce3c0:
                      pcVar28 = "<unknown>";
                    }
                    else {
                      pcVar21 = "<end>";
                      if (10 < uVar54) goto LAB_015ce3c0;
LAB_015ce0d4:
                      pcVar28 = (&PTR_s_<stmt>_01cc9868)[(char)(byte)uVar54];
                    }
                    v8::internal::wasm::Decoder::errorf
                              ((uchar *)local_1f0,(char *)pbVar64,
                               "%s[%d] expected type %s, found %s of type %s",pcVar20,(ulong)uVar57,
                               pcVar27,pcVar21,pcVar28);
                    pDVar40 = local_1e0;
                  }
                }
              }
              *(byte **)(local_1a0 + lVar15 + -0x18) = pbVar64;
              local_1a0[lVar15 + -0x10] = (byte)uVar54;
              uVar30 = local_1b0._3_4_;
              *(undefined8 *)(local_1a0 + lVar15 + -8) = uVar70;
              *(undefined4 *)(local_1a0 + lVar15 + -0xc) = uVar30;
              *(undefined4 *)(local_1a0 + lVar15 + -0xf) = (undefined4)local_1b0;
              lVar15 = lVar15 + -0x18;
            } while (0 < lVar17);
          }
        }
        param_1 = local_1f0;
        lVar17 = FUN_015d8800(local_1f0,4);
        FUN_015d8a20(param_1,lVar17,&local_c8,local_1a0);
        pDVar65 = local_1e8;
        iVar12 = (int)local_c8;
        if (((byte)param_1[0x30] & 1) == 0) {
          uVar37 = (ulong)((byte)param_1[0x30] >> 1);
        }
        else {
          uVar37 = *(ulong *)local_208;
        }
        if ((uVar37 == 0) && (*(char *)(*(long *)local_1d8 + -0x78) == '\0')) {
          puVar59 = *(undefined4 **)(param_1 + 0x78);
          puVar23 = (undefined4 *)FUN_015ddde4(param_1,puVar59);
          *puVar23 = 1;
          pZVar31 = *(Zone **)(param_1 + 0x70);
          puVar39 = *(undefined4 **)(pZVar31 + 0x10);
          if ((ulong)(*(long *)(pZVar31 + 0x18) - (long)puVar39) < 0x38) {
            puVar39 = (undefined4 *)v8::internal::Zone::NewExpand(pZVar31,0x38);
          }
          else {
            *(undefined4 **)(pZVar31 + 0x10) = puVar39 + 0xe;
          }
          *puVar39 = 2;
          *(undefined8 *)(puVar39 + 0xc) = *(undefined8 *)(puVar59 + 0xc);
          *(undefined8 *)(puVar39 + 2) = *(undefined8 *)(puVar59 + 2);
          *(undefined8 *)(puVar39 + 4) = *(undefined8 *)(puVar59 + 4);
          uVar25 = *(undefined8 *)(puVar59 + 6);
          uVar70 = *(undefined8 *)(puVar59 + 10);
          *(undefined8 *)(puVar39 + 8) = *(undefined8 *)(puVar59 + 8);
          *(undefined8 *)(puVar39 + 6) = uVar25;
          *(undefined8 *)(puVar39 + 10) = uVar70;
          *puVar59 = 1;
          *(undefined8 *)(puVar59 + 4) = 0;
          *(undefined8 *)(puVar59 + 2) = 0;
          *(undefined8 *)(puVar59 + 8) = 0;
          *(undefined8 *)(puVar59 + 6) = 0;
          *(undefined8 *)(puVar59 + 0xc) = 0;
          *(undefined8 *)(puVar59 + 10) = 0;
          *(undefined4 **)(param_1 + 0x78) = puVar39;
          *(undefined4 **)(*(long *)(param_1 + 0x80) + 0x18) = puVar39 + 2;
          *(undefined4 **)(*(long *)(param_1 + 0x80) + 0x20) = puVar39 + 4;
          *(undefined4 **)(*(long *)(param_1 + 0x80) + 0x28) = puVar39 + 6;
          pZVar31 = *(Zone **)(param_1 + 0x70);
          puVar22 = *(undefined8 **)(pZVar31 + 0x10);
          if ((ulong)(*(long *)(pZVar31 + 0x18) - (long)puVar22) < 0x10) {
            puVar22 = (undefined8 *)v8::internal::Zone::NewExpand(pZVar31,0x10);
          }
          else {
            *(undefined8 **)(pZVar31 + 0x10) = puVar22 + 2;
          }
          *puVar22 = puVar23;
          puVar22[1] = 0;
          *(undefined4 **)(lVar17 + 0x68) = puVar59;
          *(undefined8 **)(lVar17 + 0x78) = puVar22;
          *(undefined4 *)(lVar17 + 0x80) = *(undefined4 *)(param_1 + 0x88);
          *(int *)(param_1 + 0x88) =
               (int)((ulong)(*(long *)(param_1 + 0xd8) - *(long *)(param_1 + 0xd0)) >> 3) *
               -0xf0f0f0f + -1;
        }
        uVar37 = (ulong)(iVar12 + 1);
        FUN_015d8c6c(param_1,lVar17,lVar17 + 0x18);
        pDVar40 = local_1e0;
        if (local_1a0 != local_210) {
          free(local_1a0);
          pDVar40 = local_1e0;
        }
        break;
      case 7:
        if (((byte)param_1[0x50] & 1) != 0) {
          **(uint **)(param_1 + 0x58) = **(uint **)(param_1 + 0x58) | 1;
          lVar17 = *(long *)(param_1 + 0xd8);
          if ((*(long *)(param_1 + 0xd0) == lVar17) || ((*(byte *)(lVar17 + -0x88) | 1) != 5)) {
            pcVar20 = "catch does not match any try";
          }
          else {
            if (*(byte *)(lVar17 + -0x88) == 4) {
              *(undefined1 *)(lVar17 + -0x88) = 5;
              uVar37 = FUN_015d8f28(param_1);
              if (((uVar37 & 1) != 0) && (*(char *)(lVar17 + -0x78) == '\0')) {
                if (*(char *)(lVar17 + -0x88) != '\x03') {
                  if (*(uint *)(lVar17 + -0x48) == 0) {
                    lVar15 = 0;
                  }
                  else {
                    lVar15 = *(long *)local_1e0 + (ulong)*(uint *)(lVar17 + -0x48) * -0x18;
                  }
                  piVar61 = *(int **)(lVar17 + -0x20);
                  iVar12 = *piVar61;
                  FUN_015ddeb8(local_240,local_1f0,*(undefined8 *)(local_1f0 + 0x78),piVar61);
                  uVar37 = (ulong)*(uint *)(lVar17 + -0x48);
                  if (*(uint *)(lVar17 + -0x48) != 0) {
                    lVar16 = 0;
                    uVar24 = 0;
                    do {
                      plVar34 = (long *)(lVar17 + -0x40);
                      if ((int)uVar37 != 1) {
                        plVar34 = (long *)(*(long *)(lVar17 + -0x40) + lVar16);
                      }
                      if (iVar12 == 1) {
                        lVar38 = *(long *)(lVar15 + 0x10 + lVar16);
                      }
                      else {
                        if (9 < *(byte *)(plVar34 + 1)) goto LAB_015d87ec;
                        uVar70 = 4;
                        switch(*(byte *)(plVar34 + 1)) {
                        case 0:
                          uVar70 = 0;
                          break;
                        case 1:
                          break;
                        case 2:
                          uVar70 = 5;
                          break;
                        case 3:
                          uVar70 = 0xb;
                          break;
                        case 4:
                          uVar70 = 0xc;
                          break;
                        case 5:
                          uVar70 = 0xd;
                          break;
                        default:
                          uVar70 = 7;
                        }
                        lVar38 = v8::internal::compiler::WasmGraphBuilder::CreateOrMergeIntoPhi
                                           (*(WasmGraphBuilder **)local_230,uVar70,
                                            *(undefined8 *)(piVar61 + 2),plVar34[2],
                                            *(undefined8 *)(lVar15 + 0x10 + lVar16));
                      }
                      plVar34[2] = lVar38;
                      uVar37 = (ulong)*(uint *)(lVar17 + -0x48);
                      uVar24 = uVar24 + 1;
                      lVar16 = lVar16 + 0x18;
                    } while (uVar24 < uVar37);
                  }
                }
                *(undefined1 *)(lVar17 + -0x28) = 1;
                pDVar40 = local_1e0;
                pDVar65 = local_1e8;
                param_1 = local_1f0;
              }
              lVar15 = *(long *)local_1d0 + (ulong)*(uint *)(lVar17 + -0x84) * 0x18;
              if (lVar15 != *(long *)pDVar40) {
                *(long *)pDVar40 = lVar15;
              }
              *(bool *)(lVar17 + -0x78) = *(char *)(*(long *)local_1d8 + -0x100) != '\0';
              puVar43 = *(ulong **)pDVar40;
              if (puVar43 < *(ulong **)local_1f8) {
                uVar37 = *(ulong *)pDVar52;
                *(undefined1 *)(puVar43 + 1) = 9;
                puVar43[2] = 0;
                *puVar43 = uVar37;
                puVar55 = *(ulong **)pDVar40;
                *(ulong **)pDVar40 = puVar55 + 3;
              }
              else {
                lVar15 = (long)puVar43 - *(long *)local_1d0 >> 3;
                uVar37 = lVar15 * -0x5555555555555555 + 1;
                if (0x5555555 < uVar37) goto LAB_015d87f8;
                lVar16 = (long)*(ulong **)local_1f8 - *(long *)local_1d0 >> 3;
                uVar24 = lVar16 * 0x5555555555555556;
                if (uVar37 <= uVar24) {
                  uVar37 = uVar24;
                }
                if (0x2aaaaa9 < (ulong)(lVar16 * -0x5555555555555555)) {
                  uVar37 = 0x5555555;
                }
                if (uVar37 == 0) {
                  lVar16 = 0;
                }
                else {
                  uVar24 = uVar37 * 0x18;
                  pZVar31 = *(Zone **)local_220;
                  lVar16 = *(long *)(pZVar31 + 0x10);
                  if (uVar24 < (ulong)(*(long *)(pZVar31 + 0x18) - lVar16) ||
                      uVar24 - (*(long *)(pZVar31 + 0x18) - lVar16) == 0) {
                    *(ulong *)(pZVar31 + 0x10) = lVar16 + uVar24;
                  }
                  else {
                    lVar16 = v8::internal::Zone::NewExpand(pZVar31,uVar24);
                  }
                }
                puVar55 = (ulong *)(lVar16 + lVar15 * 8);
                *puVar55 = *(ulong *)pDVar52;
                *(undefined1 *)(puVar55 + 1) = 9;
                puVar55[2] = 0;
                lVar38 = *(long *)local_1d0;
                puVar43 = puVar55;
                for (lVar15 = *(long *)pDVar40; lVar15 != lVar38; lVar15 = lVar15 + -0x18) {
                  uVar41 = *(ulong *)(lVar15 + -0x10);
                  uVar24 = *(ulong *)(lVar15 + -0x18);
                  puVar43[-1] = *(ulong *)(lVar15 + -8);
                  puVar43[-2] = uVar41;
                  puVar43[-3] = uVar24;
                  puVar43 = puVar43 + -3;
                }
                *(ulong **)local_1d0 = puVar43;
                *(ulong **)pDVar40 = puVar55 + 3;
                *(ulong *)local_1f8 = lVar16 + uVar37 * 0x18;
              }
              if (((byte)*local_200 & 1) == 0) {
                if ((byte)*local_200 >> 1 == 0) {
LAB_015d62c4:
                  if ((*(long *)(param_1 + 0xd8) - *(long *)(param_1 + 0xd0) == 0x88) ||
                     (*(char *)(*(long *)(param_1 + 0xd8) + -0x100) == '\0')) {
                    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(lVar17 + -8);
                    if ((*(long **)(lVar17 + -0x10))[1] == 0) {
                      *(undefined1 *)(lVar17 + -0x78) = 1;
                    }
                    else {
                      lVar15 = **(long **)(lVar17 + -0x10);
                      *(long *)local_240 = lVar15;
                      *(long *)(*(long *)local_230 + 0x18) = lVar15 + 8;
                      *(long *)(*(long *)local_230 + 0x20) = lVar15 + 0x10;
                      *(long *)(*(long *)local_230 + 0x28) = lVar15 + 0x18;
                      puVar55[2] = *(ulong *)(*(long *)(lVar17 + -0x10) + 8);
                    }
                  }
                }
              }
              else if (*(ulong *)local_208 == 0) goto LAB_015d62c4;
              goto LAB_015d3570;
            }
            pcVar20 = "catch already present for try";
          }
LAB_015d3568:
          v8::internal::wasm::Decoder::error(param_1,pcVar20);
          goto LAB_015d3570;
        }
        goto LAB_015cca00;
      case 8:
        if (((byte)param_1[0x50] & 1) == 0) goto LAB_015cca00;
        **(uint **)(param_1 + 0x58) = **(uint **)(param_1 + 0x58) | 1;
        local_c0 = (Node *)0x0;
        pbVar64 = (byte *)(*(long *)(param_1 + 0x10) + 1);
        if (pbVar64 < *(byte **)(param_1 + 0x18)) {
          uVar57 = *pbVar64 & 0x7f;
          uVar24 = (ulong)uVar57;
          if ((char)*pbVar64 < '\0') {
            uVar57 = v8::internal::wasm::Decoder::
                     read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                               (param_1,(uchar *)(*(long *)(param_1 + 0x10) + 2),local_258,
                                "exception index",uVar57);
            uVar24 = (ulong)uVar57;
          }
          else {
            local_b8 = (long *)CONCAT44(local_b8._4_4_,1);
          }
        }
        else {
          local_b8 = (long *)((ulong)local_b8._4_4_ << 0x20);
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pbVar64,"expected %s","exception index");
          uVar24 = 0;
        }
        local_c8 = (uint *)CONCAT44(local_c8._4_4_,(int)uVar24);
        lVar17 = *(long *)(param_1 + 0x48);
        uVar37 = (ulong)((uint)local_b8 + 1);
        if ((lVar17 == 0) ||
           (lVar15 = *(long *)(lVar17 + 0x100),
           (ulong)(*(long *)(lVar17 + 0x108) - lVar15 >> 3) <= uVar24)) {
          pbVar64 = (byte *)(*(long *)(param_1 + 0x10) + 1);
          pcVar20 = "Invalid exception index: %u";
          goto LAB_015d0150;
        }
        local_c0 = (Node *)(lVar15 + uVar24 * 8);
        plVar34 = *(long **)(lVar15 + uVar24 * 8);
        if (plVar34 == (long *)0x0) {
          local_1a0 = local_210;
          local_198 = local_210;
          local_190 = local_238;
        }
        else {
          uVar57 = (uint)plVar34[1];
          lVar17 = (long)(int)uVar57;
          local_1a0 = local_210;
          local_198 = local_210;
          local_190 = local_238;
          if (8 < uVar57) {
            FUN_015de7a0(&local_1a0,lVar17);
          }
          local_198 = local_1a0 + lVar17 * 0x18;
          if (0 < (int)uVar57) {
            lVar15 = (long)(int)uVar57 * 0x18;
            local_290 = pDVar52;
            do {
              uVar57 = uVar57 - 1;
              lVar16 = *(long *)pDVar40;
              uVar41 = (ulong)*(uint *)(*(long *)local_1d8 + -0x84);
              bVar4 = *(byte *)(plVar34[2] + *plVar34 + lVar17 + -1);
              uVar24 = (lVar16 - *(long *)local_1d0 >> 3) * -0x5555555555555555;
              if (uVar24 < uVar41 || uVar24 - uVar41 == 0) {
                if (*(char *)(*(long *)local_1d8 + -0x78) != '\x02') {
                  pbVar64 = *(byte **)pDVar52;
                  if (pbVar64 < *(byte **)local_1e8) {
                    bVar7 = *pbVar64;
                    uVar60 = (ushort)bVar7;
                    uVar24 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                    if ((uVar24 & 1) != 0) {
                      if (*(byte **)local_1e8 <= pbVar64 + 1) goto LAB_015d0298;
                      uVar60 = CONCAT11(bVar7,pbVar64[1]);
                    }
                    pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                  }
                  else {
LAB_015d0298:
                    pcVar20 = "<end>";
                  }
                  v8::internal::wasm::Decoder::errorf
                            ((uchar *)local_1f0,(char *)pbVar64,"%s found empty stack",pcVar20);
                }
                pbVar64 = *(byte **)pDVar52;
                uVar70 = 0;
                uVar54 = 10;
              }
              else {
                pbVar64 = *(byte **)(lVar16 + -0x18);
                uVar30 = *(undefined4 *)(lVar16 + -0xf);
                uVar54 = (uint)*(byte *)(lVar16 + -0x10);
                uStack_1b4 = (undefined3)((uint)*(undefined4 *)(lVar16 + -0xc) >> 8);
                uVar70 = *(undefined8 *)(lVar16 + -8);
                *(undefined8 **)pDVar40 = (undefined8 *)(lVar16 + -0x18);
                uStack_1b8._3_1_ = (undefined1)((uint)uVar30 >> 0x18);
                local_1b0._0_3_ = (undefined3)uVar30;
                local_1b0._0_7_ =
                     CONCAT43(CONCAT31(uStack_1b4,uStack_1b8._3_1_),(undefined3)local_1b0);
                uStack_1b8 = uVar30;
              }
              lVar17 = lVar17 + -1;
              if (uVar54 != bVar4) {
                if ((bVar4 != 7 || uVar54 != 8) && (bVar4 != 6 || 2 < uVar54 - 7)) {
                  if ((bVar4 != 10) && ((uVar54 != 10 && (bVar4 != 9 || uVar54 != 8)))) {
                    pbVar33 = *(byte **)pDVar52;
                    if (pbVar33 < *(byte **)local_1e8) {
                      local_298 = (Node *)CONCAT44(local_298._4_4_,(uint)*pbVar33);
                      uVar24 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode();
                      uVar63 = (uint)local_298;
                      if ((uVar24 & 1) != 0) {
                        if (*(byte **)local_1e8 <= pbVar33 + 1) goto LAB_015d0380;
                        uVar63 = (uint)pbVar33[1] | ((uint)local_298 & 0xff) << 8;
                      }
                      pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar63);
                    }
                    else {
LAB_015d0380:
                      pcVar20 = "<end>";
                    }
                    pDVar52 = local_290;
                    if (bVar4 < 10) {
                      pNVar19 = (Node *)(&PTR_s_<stmt>_01cc9818)[(char)bVar4];
                    }
                    else {
                      pNVar19 = (Node *)0x19affbb;
                    }
                    if (pbVar64 < *(byte **)local_1e8) {
                      bVar4 = *pbVar64;
                      uVar60 = (ushort)bVar4;
                      local_2a0 = pNVar19;
                      local_298 = (Node *)pcVar20;
                      uVar24 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                      if ((uVar24 & 1) == 0) {
LAB_015d041c:
                        pcVar27 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                      }
                      else {
                        if (pbVar64 + 1 < *(byte **)local_1e8) {
                          uVar60 = CONCAT11(bVar4,pbVar64[1]);
                          goto LAB_015d041c;
                        }
                        pcVar27 = "<end>";
                      }
                      pcVar20 = (char *)local_298;
                      pNVar19 = local_2a0;
                      if (uVar54 < 0xb) goto LAB_015d015c;
LAB_015d043c:
                      pcVar21 = "<unknown>";
                    }
                    else {
                      pcVar27 = "<end>";
                      if (10 < uVar54) goto LAB_015d043c;
LAB_015d015c:
                      pcVar21 = (&PTR_s_<stmt>_01cc9868)[(char)(byte)uVar54];
                    }
                    v8::internal::wasm::Decoder::errorf
                              ((uchar *)local_1f0,(char *)pbVar64,
                               "%s[%d] expected type %s, found %s of type %s",pcVar20,(ulong)uVar57,
                               pNVar19,pcVar27,pcVar21);
                  }
                }
              }
              *(byte **)(local_1a0 + lVar15 + -0x18) = pbVar64;
              local_1a0[lVar15 + -0x10] = (byte)uVar54;
              uVar30 = local_1b0._3_4_;
              *(undefined8 *)(local_1a0 + lVar15 + -8) = uVar70;
              *(undefined4 *)(local_1a0 + lVar15 + -0xc) = uVar30;
              *(undefined4 *)(local_1a0 + lVar15 + -0xf) = (undefined4)local_1b0;
              pDVar40 = local_1e0;
              lVar15 = lVar15 + -0x18;
            } while (0 < lVar17);
          }
        }
        pbVar64 = local_1a0;
        pDVar65 = local_1e8;
        param_1 = local_1f0;
        if (((byte)*local_200 & 1) == 0) {
          if ((byte)*local_200 >> 1 == 0) {
LAB_015d0ba4:
            if (*(char *)(*(long *)local_1d8 + -0x78) == '\0') {
              uVar24 = ((long)local_198 - (long)local_1a0 >> 3) * -0x5555555555555555;
              if (uVar24 << 0x20 == 0) {
                pbVar69 = (byte *)0x0;
                pbVar33 = (byte *)0x0;
              }
              else {
                uVar41 = (ulong)(int)uVar24;
                if (uVar41 >> 0x1c != 0) goto LAB_015d87f8;
                pZVar31 = *(Zone **)(local_1f0 + 0x70);
                uVar42 = (long)(uVar24 << 0x20) >> 0x1d;
                pbVar66 = *(byte **)(pZVar31 + 0x10);
                if ((ulong)(*(long *)(pZVar31 + 0x18) - (long)pbVar66) < uVar42) {
                  pbVar66 = (byte *)v8::internal::Zone::NewExpand(pZVar31,uVar42);
                  pbVar69 = pbVar66;
                }
                else {
                  *(byte **)(pZVar31 + 0x10) = pbVar66 + uVar42;
                  pbVar69 = pbVar66;
                }
                do {
                  pbVar33 = pbVar66 + 8;
                  pbVar66[0] = 0;
                  pbVar66[1] = 0;
                  pbVar66[2] = 0;
                  pbVar66[3] = 0;
                  pbVar66[4] = 0;
                  pbVar66[5] = 0;
                  pbVar66[6] = 0;
                  pbVar66[7] = 0;
                  uVar41 = uVar41 - 1;
                  pbVar66 = pbVar33;
                } while (uVar41 != 0);
              }
              if (0 < (int)uVar24) {
                uVar41 = uVar24 & 0xffffffff;
                if ((uVar41 < 5) ||
                   ((pbVar69 < pbVar64 + uVar41 * 0x18 && (pbVar64 + 0x10 < pbVar69 + uVar41 * 8))))
                {
                  lVar17 = 0;
                }
                else {
                  uVar42 = 4;
                  if ((uVar24 & 3) != 0) {
                    uVar42 = uVar24 & 3;
                  }
                  lVar17 = uVar41 - uVar42;
                  pbVar66 = pbVar64 + 0x40;
                  pbVar47 = pbVar69 + 0x10;
                  lVar15 = lVar17;
                  do {
                    uVar70 = *(undefined8 *)pbVar66;
                    uVar25 = *(undefined8 *)(pbVar66 + 0x18);
                    uVar26 = *(undefined8 *)(pbVar66 + -0x30);
                    pbVar11 = pbVar66 + -0x18;
                    pbVar66 = pbVar66 + 0x60;
                    lVar15 = lVar15 + -4;
                    *(undefined8 *)(pbVar47 + -8) = *(undefined8 *)pbVar11;
                    *(undefined8 *)(pbVar47 + -0x10) = uVar26;
                    *(undefined8 *)(pbVar47 + 8) = uVar25;
                    *(undefined8 *)pbVar47 = uVar70;
                    pbVar47 = pbVar47 + 0x20;
                  } while (lVar15 != 0);
                }
                lVar15 = uVar41 - lVar17;
                pbVar64 = pbVar64 + lVar17 * 0x18 + 0x10;
                pbVar66 = pbVar69 + lVar17 * 8;
                do {
                  lVar15 = lVar15 + -1;
                  *(undefined8 *)pbVar66 = *(undefined8 *)pbVar64;
                  pbVar64 = pbVar64 + 0x18;
                  pbVar66 = pbVar66 + 8;
                } while (lVar15 != 0);
              }
              uVar70 = v8::internal::compiler::WasmGraphBuilder::Throw
                                 (*(undefined8 *)(param_1 + 0x80),(ulong)local_c8 & 0xffffffff,
                                  local_c0,pbVar69,(long)pbVar33 - (long)pbVar69 >> 3,
                                  *(int *)(param_1 + 0x10) - *(int *)(param_1 + 8));
              FUN_015ddc44(local_240,param_1,uVar70);
              v8::internal::compiler::WasmGraphBuilder::TerminateThrow
                        (*(WasmGraphBuilder **)(param_1 + 0x80),
                         *(Node **)(*(long *)(param_1 + 0x78) + 0x10),
                         *(Node **)(*(long *)(param_1 + 0x78) + 8));
            }
          }
        }
        else if (*(ulong *)local_208 == 0) goto LAB_015d0ba4;
        lVar16 = *(long *)(param_1 + 0xd8);
        lVar17 = *(long *)(param_1 + 0xb0);
        lVar15 = *(long *)(param_1 + 0xb8);
        uVar57 = *(uint *)(lVar16 + -0x84);
LAB_015d535c:
        lVar17 = lVar17 + (ulong)uVar57 * 0x18;
        if (lVar17 != lVar15) {
          *(long *)pDVar40 = lVar17;
        }
        if (((byte)*local_200 & 1) == 0) {
          if ((byte)*local_200 >> 1 == 0) {
LAB_015d5390:
            if (*(char *)(*(long *)local_1d8 + -0x78) == '\0') {
              puVar39 = *(undefined4 **)(param_1 + 0x78);
              *puVar39 = 0;
              *(undefined8 *)(puVar39 + 4) = 0;
              *(undefined8 *)(puVar39 + 2) = 0;
              *(undefined8 *)(puVar39 + 8) = 0;
              *(undefined8 *)(puVar39 + 6) = 0;
              *(undefined8 *)(puVar39 + 0xc) = 0;
              *(undefined8 *)(puVar39 + 10) = 0;
            }
          }
        }
        else if (*(ulong *)local_208 == 0) goto LAB_015d5390;
        *(undefined1 *)(lVar16 + -0x78) = 2;
        goto LAB_015d5a40;
      case 9:
        if (((byte)param_1[0x50] & 1) != 0) {
          **(uint **)(param_1 + 0x58) = **(uint **)(param_1 + 0x58) | 1;
          lVar17 = *(long *)(param_1 + 0xb8);
          uVar24 = (ulong)*(uint *)(*(long *)(param_1 + 0xd8) + -0x84);
          uVar37 = (lVar17 - *(long *)(param_1 + 0xb0) >> 3) * -0x5555555555555555;
          if (uVar37 < uVar24 || uVar37 - uVar24 == 0) {
            if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) != '\x02') {
              pbVar64 = *(byte **)pDVar52;
              if (pbVar64 < *(byte **)pDVar65) {
                bVar4 = *pbVar64;
                uVar60 = (ushort)bVar4;
                uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                if ((uVar37 & 1) != 0) {
                  if (*(byte **)pDVar65 <= pbVar64 + 1) {
                    pcVar20 = "<end>";
                    goto LAB_015d3424;
                  }
                  uVar60 = CONCAT11(bVar4,pbVar64[1]);
                }
                pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
              }
              else {
                pcVar20 = "<end>";
              }
LAB_015d3424:
              v8::internal::wasm::Decoder::errorf
                        ((uchar *)param_1,(char *)pbVar64,"%s found empty stack",pcVar20);
            }
            pNVar19 = (Node *)0x0;
          }
          else {
            pbVar64 = *(byte **)(lVar17 + -0x18);
            bVar4 = *(byte *)(lVar17 + -0x10);
            pNVar19 = *(Node **)(lVar17 + -8);
            *(undefined8 **)pDVar40 = (undefined8 *)(lVar17 + -0x18);
            if (2 < (byte)(bVar4 - 8)) {
              pbVar33 = *(byte **)pDVar52;
              if (pbVar33 < *(byte **)pDVar65) {
                bVar7 = *pbVar33;
                uVar60 = (ushort)bVar7;
                uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                if ((uVar37 & 1) != 0) {
                  if (*(byte **)local_1e8 <= pbVar33 + 1) goto LAB_015d07b0;
                  uVar60 = CONCAT11(bVar7,pbVar33[1]);
                }
                pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
              }
              else {
LAB_015d07b0:
                pcVar20 = "<end>";
              }
              pDVar65 = local_1e8;
              if (pbVar64 < *(byte **)local_1e8) {
                bVar7 = *pbVar64;
                uVar60 = (ushort)bVar7;
                uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                if ((uVar37 & 1) != 0) {
                  if (*(byte **)pDVar65 <= pbVar64 + 1) goto LAB_015d1510;
                  uVar60 = CONCAT11(bVar7,pbVar64[1]);
                }
                pcVar27 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
              }
              else {
LAB_015d1510:
                pcVar27 = "<end>";
              }
              pDVar40 = local_1e0;
              if (bVar4 < 8) {
                pcVar21 = (&PTR_s_<stmt>_01cc9780)[(char)bVar4];
              }
              else {
                pcVar21 = "<unknown>";
              }
              v8::internal::wasm::Decoder::errorf
                        ((uchar *)param_1,(char *)pbVar64,
                         "%s[%d] expected type %s, found %s of type %s",pcVar20,0,"exn",pcVar27,
                         pcVar21);
            }
          }
          if (((byte)*local_200 & 1) == 0) {
            if ((byte)*local_200 >> 1 == 0) {
LAB_015d3460:
              if (*(char *)(*(long *)local_1d8 + -0x78) == '\0') {
                uVar70 = v8::internal::compiler::WasmGraphBuilder::Rethrow
                                   (*(WasmGraphBuilder **)(param_1 + 0x80),pNVar19);
                FUN_015ddc44(local_240,param_1,uVar70);
                v8::internal::compiler::WasmGraphBuilder::TerminateThrow
                          (*(WasmGraphBuilder **)(param_1 + 0x80),
                           *(Node **)(*(long *)(param_1 + 0x78) + 0x10),
                           *(Node **)(*(long *)(param_1 + 0x78) + 8));
              }
            }
          }
          else if (*(ulong *)local_208 == 0) goto LAB_015d3460;
          goto LAB_015d3498;
        }
LAB_015cca00:
        pcVar20 = "Invalid opcode (enable with --experimental-wasm-eh)";
LAB_015ccb40:
        v8::internal::wasm::Decoder::error(param_1,pcVar20);
        goto LAB_015cbf04;
      case 10:
        if (((byte)param_1[0x50] & 1) == 0) goto LAB_015cca00;
        **(uint **)(param_1 + 0x58) = **(uint **)(param_1 + 0x58) | 1;
        lVar17 = *(long *)(param_1 + 0x10);
        pbVar64 = (byte *)(lVar17 + 1);
        if (pbVar64 < *(byte **)(param_1 + 0x18)) {
          uVar57 = *pbVar64 & 0x7f;
          if ((char)*pbVar64 < '\0') {
            uVar57 = v8::internal::wasm::Decoder::
                     read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                               (param_1,(uchar *)(lVar17 + 2),local_278,"branch depth",uVar57);
          }
          else {
            local_c8 = (uint *)0x100000000;
          }
        }
        else {
          local_c8 = (uint *)((ulong)local_c8 & 0xffffffff);
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pbVar64,"expected %s","branch depth");
          uVar57 = 0;
        }
        local_c8 = (uint *)CONCAT44(local_c8._4_4_,uVar57);
        local_b8 = (long *)0x0;
        pbVar64 = (byte *)(lVar17 + (ulong)local_c8._4_4_ + 1);
        if (pbVar64 < *(byte **)pDVar65) {
          uVar57 = *pbVar64 & 0x7f;
          uVar37 = (ulong)uVar57;
          if ((char)*pbVar64 < '\0') {
            uVar57 = v8::internal::wasm::Decoder::
                     read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                               (param_1,(uchar *)(lVar17 + (ulong)local_c8._4_4_ + 2),local_268,
                                "exception index",uVar57);
            uVar37 = (ulong)uVar57;
          }
          else {
            local_b0[0] = 1;
          }
        }
        else {
          local_b0[0] = 0;
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pbVar64,"expected %s","exception index");
          uVar37 = 0;
        }
        uVar24 = (ulong)local_c8 & 0xffffffff;
        local_c0 = (Node *)CONCAT44(local_c0._4_4_,(int)uVar37);
        local_a8 = local_b0[0] + local_c8._4_4_;
        lVar17 = *(long *)(param_1 + 0xd8);
        pNVar19 = *(Node **)(param_1 + 0x10);
        uVar41 = (lVar17 - *(long *)(param_1 + 0xd0) >> 3) * -0xf0f0f0f0f0f0f0f;
        if (uVar41 < uVar24 || uVar41 - uVar24 == 0) {
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)(pNVar19 + 1),"invalid branch depth: %u",uVar24);
          pDVar65 = local_1e8;
          goto LAB_015cbf04;
        }
        lVar15 = *(long *)(param_1 + 0x48);
        pNVar18 = pNVar19 + 1;
        if ((lVar15 == 0) ||
           ((ulong)(*(long *)(lVar15 + 0x108) - *(long *)(lVar15 + 0x100) >> 3) <= uVar37)) {
          pNVar18 = pNVar18 + local_c8._4_4_;
          pcVar20 = "Invalid exception index: %u";
          goto LAB_015d159c;
        }
        local_b8 = (long *)(*(long *)(lVar15 + 0x100) + uVar37 * 8);
        lVar15 = *(long *)local_1e0;
        uVar37 = (lVar15 - *(long *)local_1d0 >> 3) * -0x5555555555555555;
        if (uVar37 < *(uint *)(lVar17 + -0x84) || uVar37 - *(uint *)(lVar17 + -0x84) == 0) {
          if (*(char *)(lVar17 + -0x78) == '\x02') {
            local_298 = (Node *)0x0;
            bVar4 = 10;
            local_2a0 = pNVar19;
          }
          else {
            if (pNVar19 < *(Node **)local_1e8) {
              NVar9 = *pNVar19;
              uVar60 = (ushort)(byte)NVar9;
              uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
              if ((uVar37 & 1) != 0) {
                if (*(Node **)local_1e8 <= pNVar18) goto LAB_015d3c34;
                uVar60 = CONCAT11(NVar9,*pNVar18);
              }
              pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
            }
            else {
LAB_015d3c34:
              pcVar20 = "<end>";
            }
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pNVar19,"%s found empty stack",pcVar20);
            local_2a0 = *(Node **)(param_1 + 0x10);
            local_298 = (Node *)0x0;
            bVar4 = 10;
          }
        }
        else {
          pNVar67 = *(Node **)(lVar15 + -0x18);
          uVar30 = *(undefined4 *)(lVar15 + -0xc);
          uStack_1b8 = *(undefined4 *)(lVar15 + -0xf);
          bVar4 = *(byte *)(lVar15 + -0x10);
          local_1a0._4_4_ = (uint)(CONCAT14(local_1a0._7_1_,uVar30) >> 8);
          local_1a0 = (byte *)CONCAT44(local_1a0._4_4_,uStack_1b8);
          local_298 = *(Node **)(lVar15 + -8);
          *(undefined8 **)local_1e0 = (undefined8 *)(lVar15 + -0x18);
          uStack_1b4 = (undefined3)((uint)uVar30 >> 8);
          local_2a0 = pNVar67;
          if ((long)(char)bVar4 == 9) {
            bVar4 = 9;
          }
          else if ((bVar4 | 2) != 10) {
            if (pNVar19 < *(Node **)local_1e8) {
              NVar9 = *pNVar19;
              uVar60 = (ushort)(byte)NVar9;
              uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
              if ((uVar37 & 1) != 0) {
                if (*(Node **)local_1e8 <= pNVar18) goto LAB_015d47d0;
                uVar60 = CONCAT11(NVar9,*pNVar18);
              }
              pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
            }
            else {
LAB_015d47d0:
              pcVar20 = "<end>";
            }
            if (pNVar67 < *(Node **)local_1e8) {
              NVar9 = *pNVar67;
              uVar60 = (ushort)(byte)NVar9;
              uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
              if ((uVar37 & 1) == 0) {
LAB_015d63b4:
                pcVar27 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
              }
              else {
                if (pNVar67 + 1 < *(Node **)local_1e8) {
                  uVar60 = CONCAT11(NVar9,pNVar67[1]);
                  goto LAB_015d63b4;
                }
                pcVar27 = "<end>";
              }
              if (bVar4 < 0xb) goto LAB_015d63a0;
LAB_015d656c:
              pcVar21 = "<unknown>";
            }
            else {
              pcVar27 = "<end>";
              if (10 < bVar4) goto LAB_015d656c;
LAB_015d63a0:
              pcVar21 = (&PTR_s_<stmt>_01cc97c0)[(char)bVar4];
            }
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pNVar67,
                       "%s[%d] expected type %s, found %s of type %s",pcVar20,0,"exn",pcVar27,
                       pcVar21);
          }
        }
        plVar34 = (long *)*local_b8;
        uVar41 = plVar34[1];
        if (uVar41 != 0) {
          uVar37 = 0;
          puVar43 = *(ulong **)local_1e0;
          do {
            uVar53 = *(undefined1 *)(plVar34[2] + *plVar34 + uVar37);
            if (puVar43 < *(ulong **)local_1f8) {
              uVar42 = *(ulong *)pDVar52;
              *(undefined1 *)(puVar43 + 1) = uVar53;
              puVar43[2] = 0;
              *puVar43 = uVar42;
              puVar43 = (ulong *)(*(long *)local_1e0 + 0x18);
              *(ulong **)local_1e0 = puVar43;
            }
            else {
              lVar15 = (long)puVar43 - *(long *)local_1d0 >> 3;
              uVar42 = lVar15 * -0x5555555555555555 + 1;
              if (0x5555555 < uVar42) goto LAB_015d87f8;
              lVar16 = (long)*(ulong **)local_1f8 - *(long *)local_1d0 >> 3;
              uVar44 = lVar16 * 0x5555555555555556;
              if (uVar42 <= uVar44) {
                uVar42 = uVar44;
              }
              if (0x2aaaaa9 < (ulong)(lVar16 * -0x5555555555555555)) {
                uVar42 = 0x5555555;
              }
              if (uVar42 == 0) {
                lVar16 = 0;
              }
              else {
                uVar44 = uVar42 * 0x18;
                pZVar31 = *(Zone **)local_220;
                lVar16 = *(long *)(pZVar31 + 0x10);
                if (uVar44 < (ulong)(*(long *)(pZVar31 + 0x18) - lVar16) ||
                    uVar44 - (*(long *)(pZVar31 + 0x18) - lVar16) == 0) {
                  *(ulong *)(pZVar31 + 0x10) = lVar16 + uVar44;
                }
                else {
                  lVar16 = v8::internal::Zone::NewExpand(pZVar31,uVar44);
                }
              }
              uVar44 = *(ulong *)pDVar52;
              puVar55 = (ulong *)(lVar16 + lVar15 * 8);
              *(undefined1 *)(puVar55 + 1) = uVar53;
              *puVar55 = uVar44;
              puVar55[2] = 0;
              lVar38 = *(long *)local_1d0;
              puVar43 = puVar55 + 3;
              for (lVar15 = *(long *)local_1e0; lVar15 != lVar38; lVar15 = lVar15 + -0x18) {
                uVar71 = *(ulong *)(lVar15 + -0x10);
                uVar44 = *(ulong *)(lVar15 + -0x18);
                puVar55[-1] = *(ulong *)(lVar15 + -8);
                puVar55[-2] = uVar71;
                puVar55[-3] = uVar44;
                puVar55 = puVar55 + -3;
              }
              *(ulong **)local_1d0 = puVar55;
              *(ulong **)local_1e0 = puVar43;
              *(ulong *)local_1f8 = lVar16 + uVar42 * 0x18;
            }
            uVar37 = uVar37 + 1;
          } while (uVar37 != uVar41);
        }
        pDVar65 = local_1e8;
        param_1 = local_1f0;
        lVar17 = lVar17 + uVar24 * -0x88;
        puVar36 = (uint *)(lVar17 + -0x70);
        if (*(char *)(lVar17 + -0x88) != '\x03') {
          puVar36 = (uint *)(lVar17 + -0x48);
        }
        if (*(char *)(*(long *)local_1d8 + -0x78) == '\0') {
          uVar57 = *puVar36;
          uVar54 = *(uint *)(lVar17 + -0x84);
          lVar15 = *(long *)local_1d0;
          if (uVar57 == 0) {
LAB_015d67e0:
            puVar36 = local_c8;
            pDVar40 = local_1f0;
            local_1c8 = (Node *)0x0;
            local_1b0 = (Node *)0x0;
            uVar70 = v8::internal::compiler::WasmGraphBuilder::GetExceptionTag
                               (*(WasmGraphBuilder **)(local_1f0 + 0x80),local_298);
            pDVar65 = local_240;
            pNVar19 = (Node *)FUN_015ddc44(local_240,pDVar40,uVar70);
            uVar70 = v8::internal::compiler::WasmGraphBuilder::LoadExceptionTagFromTable
                               (*(WasmGraphBuilder **)(pDVar40 + 0x80),(uint)local_c0);
            pNVar18 = (Node *)FUN_015ddc44(pDVar65,pDVar40,uVar70);
            uVar70 = v8::internal::compiler::WasmGraphBuilder::ExceptionTagEqual
                               (*(WasmGraphBuilder **)(pDVar40 + 0x80),pNVar19,pNVar18);
            pNVar19 = (Node *)FUN_015ddc44(pDVar65,pDVar40,uVar70);
            uVar70 = v8::internal::compiler::WasmGraphBuilder::BranchNoHint
                               (*(WasmGraphBuilder **)(pDVar40 + 0x80),pNVar19,(Node **)&local_1c8,
                                (Node **)&local_1b0);
            FUN_015ddc44(pDVar65,pDVar40,uVar70);
            lVar16 = FUN_015ddde4(pDVar40,*(undefined8 *)(pDVar40 + 0x78));
            pZVar31 = *(Zone **)(pDVar40 + 0x70);
            puVar23 = *(undefined4 **)(pDVar40 + 0x78);
            puVar39 = *(undefined4 **)(pZVar31 + 0x10);
            if ((ulong)(*(long *)(pZVar31 + 0x18) - (long)puVar39) < 0x38) {
              puVar39 = (undefined4 *)v8::internal::Zone::NewExpand(pZVar31,0x38);
            }
            else {
              *(undefined4 **)(pZVar31 + 0x10) = puVar39 + 0xe;
            }
            *puVar39 = 2;
            *(undefined8 *)(puVar39 + 0xc) = *(undefined8 *)(puVar23 + 0xc);
            puVar43 = (ulong *)(puVar39 + 2);
            *puVar43 = *(ulong *)(puVar23 + 2);
            *(undefined8 *)(puVar39 + 4) = *(undefined8 *)(puVar23 + 4);
            uVar25 = *(undefined8 *)(puVar23 + 6);
            uVar70 = *(undefined8 *)(puVar23 + 10);
            *(undefined8 *)(puVar39 + 8) = *(undefined8 *)(puVar23 + 8);
            *(undefined8 *)(puVar39 + 6) = uVar25;
            *(undefined8 *)(puVar39 + 10) = uVar70;
            *puVar23 = 1;
            *(undefined8 *)(puVar23 + 4) = 0;
            *(undefined8 *)(puVar23 + 2) = 0;
            *(undefined8 *)(puVar23 + 8) = 0;
            *(undefined8 *)(puVar23 + 6) = 0;
            *(undefined8 *)(puVar23 + 0xc) = 0;
            *(undefined8 *)(puVar23 + 10) = 0;
            *(undefined8 *)(lVar16 + 8) = local_1b0;
            *puVar43 = (ulong)local_1c8;
            *(undefined4 **)local_240 = puVar39;
            *(ulong **)(*(long *)local_230 + 0x18) = puVar43;
            *(undefined4 **)(*(long *)local_230 + 0x20) = puVar39 + 4;
            *(undefined4 **)(*(long *)local_230 + 0x28) = puVar39 + 6;
            local_1a0 = local_210;
            local_198 = local_210;
            local_190 = local_280;
            if (8 < uVar41) {
              v8::base::SmallVector<v8::internal::compiler::Node*,8ul>::Grow
                        ((SmallVector<v8::internal::compiler::Node*,8ul> *)&local_1a0,uVar41);
            }
            pbVar64 = local_1a0;
            pDVar65 = local_1f0;
            local_198 = local_1a0 + uVar41 * 8;
            uVar70 = v8::internal::compiler::WasmGraphBuilder::GetExceptionValues
                               (*(WasmGraphBuilder **)(local_1f0 + 0x80),local_298,local_b8,
                                local_1a0,(long)local_198 - (long)local_1a0 >> 3);
            FUN_015ddc44(local_240,pDVar65,uVar70);
            pDVar65 = local_1f0;
            if (uVar41 != 0) {
              puVar22 = (undefined8 *)(lVar15 + (ulong)uVar54 * 0x18 + 0x10);
              uVar37 = uVar41;
              do {
                uVar37 = uVar37 - 1;
                *puVar22 = *(undefined8 *)pbVar64;
                puVar22 = puVar22 + 3;
                pbVar64 = pbVar64 + 8;
              } while (uVar37 != 0);
            }
            FUN_015dee00(local_240,local_1f0,(ulong)puVar36 & 0xffffffff);
            *(long *)(pDVar65 + 0x78) = lVar16;
            *(undefined8 **)(*(long *)(pDVar65 + 0x80) + 0x18) = (undefined8 *)(lVar16 + 8);
            *(long *)(*(long *)(pDVar65 + 0x80) + 0x20) = lVar16 + 0x10;
            *(long *)(*(long *)(pDVar65 + 0x80) + 0x28) = lVar16 + 0x18;
            if (local_1a0 != local_210) {
              free(local_1a0);
            }
            puVar36 = (uint *)(lVar17 + -0x70);
            if (*(char *)(lVar17 + -0x88) != '\x03') {
              puVar36 = (uint *)(lVar17 + -0x48);
            }
            *(undefined1 *)(puVar36 + 8) = 1;
            pNVar19 = local_2a0;
            pDVar68 = local_1e8;
            iVar12 = local_a8;
            param_1 = local_1f0;
joined_r0x015d6a38:
            iVar58 = local_a8;
            pDVar65 = local_1e8;
            local_2a0 = pNVar19;
            local_a8 = iVar12;
            if (uVar41 != 0) {
              do {
                uVar24 = (ulong)*(uint *)(*(long *)local_1d8 + -0x84);
                uVar37 = (*(long *)local_1e0 - *(long *)local_1d0 >> 3) * -0x5555555555555555;
                if (uVar37 < uVar24 || uVar37 - uVar24 == 0) {
                  if (*(char *)(*(long *)local_1d8 + -0x78) != '\x02') goto code_r0x015d6a90;
                }
                else {
                  *(long *)local_1e0 = *(long *)local_1e0 + -0x18;
                }
                uVar41 = uVar41 - 1;
                if (uVar41 == 0) break;
              } while( true );
            }
            puVar43 = *(ulong **)local_1e0;
            if (puVar43 < *(ulong **)local_1f8) {
              uVar37 = *(ulong *)pDVar52;
              *(undefined1 *)(puVar43 + 1) = 9;
              puVar43[2] = 0;
              *puVar43 = uVar37;
              puVar55 = *(ulong **)local_1e0;
              *(ulong **)local_1e0 = puVar55 + 3;
              local_1e8 = pDVar68;
            }
            else {
              lVar17 = (long)puVar43 - *(long *)local_1d0 >> 3;
              uVar37 = lVar17 * -0x5555555555555555 + 1;
              local_1e8 = pDVar68;
              if (0x5555555 < uVar37) goto LAB_015d87f8;
              lVar15 = (long)*(ulong **)local_1f8 - *(long *)local_1d0 >> 3;
              uVar24 = lVar15 * 0x5555555555555556;
              if (uVar37 <= uVar24) {
                uVar37 = uVar24;
              }
              if (0x2aaaaa9 < (ulong)(lVar15 * -0x5555555555555555)) {
                uVar37 = 0x5555555;
              }
              if (uVar37 == 0) {
                lVar15 = 0;
              }
              else {
                uVar24 = uVar37 * 0x18;
                pZVar31 = *(Zone **)local_220;
                lVar15 = *(long *)(pZVar31 + 0x10);
                if (uVar24 < (ulong)(*(long *)(pZVar31 + 0x18) - lVar15) ||
                    uVar24 - (*(long *)(pZVar31 + 0x18) - lVar15) == 0) {
                  *(ulong *)(pZVar31 + 0x10) = lVar15 + uVar24;
                }
                else {
                  lVar15 = v8::internal::Zone::NewExpand(pZVar31,uVar24);
                }
              }
              puVar55 = (ulong *)(lVar15 + lVar17 * 8);
              *puVar55 = *(ulong *)pDVar52;
              *(undefined1 *)(puVar55 + 1) = 9;
              puVar55[2] = 0;
              lVar16 = *(long *)local_1d0;
              puVar43 = puVar55;
              for (lVar17 = *(long *)local_1e0; lVar17 != lVar16; lVar17 = lVar17 + -0x18) {
                uVar41 = *(ulong *)(lVar17 + -0x10);
                uVar24 = *(ulong *)(lVar17 + -0x18);
                puVar43[-1] = *(ulong *)(lVar17 + -8);
                puVar43[-2] = uVar41;
                puVar43[-3] = uVar24;
                puVar43 = puVar43 + -3;
              }
              *(ulong **)local_1d0 = puVar43;
              *(ulong **)local_1e0 = puVar55 + 3;
              *(ulong *)local_1f8 = lVar15 + uVar37 * 0x18;
            }
            *puVar55 = (ulong)pNVar19;
            uVar37 = (ulong)(iVar58 + 1);
            *(byte *)(puVar55 + 1) = bVar4;
            *(uint *)((long)puVar55 + 0xc) = CONCAT31(uStack_1b4,uStack_1b8._3_1_);
            *(undefined4 *)((long)puVar55 + 9) = uStack_1b8;
            puVar55[2] = (ulong)local_298;
            pDVar40 = local_1e0;
            break;
          }
          if ((uint)((int)((ulong)(*(long *)local_1e0 - lVar15) >> 3) * -0x55555555 -
                    *(int *)(*(long *)local_1d8 + -0x84)) < uVar57) {
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)local_1f0,*(char **)(local_1f0 + 0x10),
                       "expected %u elements on the stack for br to @%d, found %u",(ulong)uVar57,
                       (ulong)(uint)(*(int *)(lVar17 + -0x80) - *(int *)(local_1f0 + 8)));
            pDVar40 = local_1e0;
          }
          else {
            uVar37 = FUN_015de854(local_1f0);
            pDVar40 = local_1e0;
            param_1 = local_1f0;
            if ((uVar37 & 1) != 0) goto LAB_015d67e0;
          }
          goto LAB_015cbf04;
        }
        uVar37 = 1;
        uVar24 = FUN_015de97c(local_1f0,puVar36,1);
        pDVar40 = local_1e0;
        pDVar65 = local_1e8;
        pNVar19 = local_2a0;
        pDVar68 = local_1e8;
        iVar12 = local_a8;
        if ((uVar24 & 1) != 0) goto joined_r0x015d6a38;
        break;
      case 0xb:
        lVar17 = *(long *)(param_1 + 0xd8);
        if (*(long *)(param_1 + 0xd0) == lVar17) {
          pcVar20 = "end does not match any if, try, or block";
          goto LAB_015d3568;
        }
        pcVar20 = (char *)(lVar17 + -0x88);
        if (*pcVar20 == '\0') {
          uVar57 = *(uint *)(lVar17 + -0x48);
          if (uVar57 == *(uint *)(lVar17 + -0x70)) {
            if (uVar57 != 0) {
              lVar15 = 0;
              uVar24 = 0;
joined_r0x015ce6c0:
              plVar34 = (long *)(lVar17 + -0x68);
              plVar50 = (long *)(lVar17 + -0x40);
              if (uVar57 != 1) {
                plVar34 = (long *)(*(long *)(lVar17 + -0x68) + lVar15);
                plVar50 = (long *)(*(long *)(lVar17 + -0x40) + lVar15);
              }
              bVar4 = *(byte *)(plVar34 + 1);
              bVar7 = *(byte *)(plVar50 + 1);
              if (bVar7 == bVar4) goto LAB_015ce6c8;
              iVar12 = (int)(char)bVar4;
              if (((iVar12 == 8 && bVar7 == 9) || (bVar7 == 6 && (iVar12 - 7U & 0xff) < 3)) ||
                 (iVar12 == 8 && bVar7 == 7)) goto LAB_015ce6c8;
              if (bVar7 < 0xb) {
                pcVar20 = (&PTR_s_<stmt>_01cc9868)[(char)bVar7];
              }
              else {
                pcVar20 = "<unknown>";
              }
              if (bVar4 < 0xb) {
                pcVar21 = (&PTR_s_<stmt>_01cc9868)[(char)bVar4];
              }
              else {
                pcVar21 = "<unknown>";
              }
              pcVar27 = "type error in merge[%u] (expected %s, got %s)";
LAB_015d3cec:
              v8::internal::wasm::Decoder::errorf
                        ((uchar *)param_1,(char *)pbVar64,pcVar27,uVar24,pcVar20,pcVar21);
              goto LAB_015cbf04;
            }
            goto LAB_015ce778;
          }
          v8::internal::wasm::Decoder::error
                    (param_1,*(uchar **)(lVar17 + -0x80),
                     "start-arity and end-arity of one-armed if must match");
        }
        else if (*pcVar20 == '\x04') {
          v8::internal::wasm::Decoder::error(param_1,pbVar64,"missing catch or catch-all in try");
        }
        else {
LAB_015ce778:
          uVar37 = FUN_015d8f28(param_1);
          if ((uVar37 & 1) != 0) {
            if (*(long *)(param_1 + 0xd8) - *(long *)(param_1 + 0xd0) == 0x88) {
              pbVar64 = (byte *)(*(ulong *)pDVar52 + 1);
              if (pbVar64 != *(byte **)pDVar65) {
                pcVar20 = "trailing code after function end";
                goto LAB_015cded0;
              }
              FUN_015d8fbc(param_1);
              uVar37 = 1;
              *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0xd0);
              break;
            }
            if (((byte)*local_200 & 1) == 0) {
              if ((byte)*local_200 >> 1 != 0) goto LAB_015d6fc8;
LAB_015d1434:
              if (*(char *)(*(long *)(param_1 + 0xd8) + -0x100) != '\0') goto LAB_015d6fc8;
              if (*pcVar20 != '\x03') {
                if (*(char *)(lVar17 + -0x78) == '\0') {
                  if (*(uint *)(lVar17 + -0x48) == 0) {
                    lVar15 = 0;
                  }
                  else {
                    lVar15 = *(long *)local_1e0 + (ulong)*(uint *)(lVar17 + -0x48) * -0x18;
                  }
                  piVar61 = *(int **)(lVar17 + -0x20);
                  iVar12 = *piVar61;
                  FUN_015ddeb8(local_240,local_1f0,*(undefined8 *)(local_1f0 + 0x78),piVar61);
                  uVar37 = (ulong)*(uint *)(lVar17 + -0x48);
                  if (*(uint *)(lVar17 + -0x48) != 0) {
                    lVar16 = 0;
                    uVar24 = 0;
                    do {
                      plVar34 = (long *)(lVar17 + -0x40);
                      if ((int)uVar37 != 1) {
                        plVar34 = (long *)(*(long *)(lVar17 + -0x40) + lVar16);
                      }
                      if (iVar12 == 1) {
                        lVar38 = *(long *)(lVar15 + 0x10 + lVar16);
                      }
                      else {
                        if (9 < *(byte *)(plVar34 + 1)) goto LAB_015d87ec;
                        uVar70 = 4;
                        switch(*(byte *)(plVar34 + 1)) {
                        case 0:
                          uVar70 = 0;
                          break;
                        case 1:
                          break;
                        case 2:
                          uVar70 = 5;
                          break;
                        case 3:
                          uVar70 = 0xb;
                          break;
                        case 4:
                          uVar70 = 0xc;
                          break;
                        case 5:
                          uVar70 = 0xd;
                          break;
                        default:
                          uVar70 = 7;
                        }
                        lVar38 = v8::internal::compiler::WasmGraphBuilder::CreateOrMergeIntoPhi
                                           (*(WasmGraphBuilder **)local_230,uVar70,
                                            *(undefined8 *)(piVar61 + 2),plVar34[2],
                                            *(undefined8 *)(lVar15 + 0x10 + lVar16));
                      }
                      plVar34[2] = lVar38;
                      uVar37 = (ulong)*(uint *)(lVar17 + -0x48);
                      uVar24 = uVar24 + 1;
                      lVar16 = lVar16 + 0x18;
                    } while (uVar24 < uVar37);
                  }
                }
                if (*pcVar20 == '\0') {
                  lVar15 = *(long *)(lVar17 + -0x18);
                  *(long *)local_240 = lVar15;
                  *(long *)(*(long *)local_230 + 0x18) = lVar15 + 8;
                  *(long *)(*(long *)local_230 + 0x20) = lVar15 + 0x10;
                  *(long *)(*(long *)local_230 + 0x28) = lVar15 + 0x18;
                  if (*(int *)(lVar17 + -0x70) == 0) {
                    puVar22 = (undefined8 *)0x0;
                  }
                  else {
                    puVar22 = (undefined8 *)(lVar17 + -0x68);
                    if (*(int *)(lVar17 + -0x70) != 1) {
                      puVar22 = (undefined8 *)*puVar22;
                    }
                  }
                  piVar61 = *(int **)(lVar17 + -0x20);
                  iVar12 = *piVar61;
                  FUN_015ddeb8(local_240,local_1f0,*(undefined8 *)(local_1f0 + 0x78),piVar61);
                  uVar37 = (ulong)*(uint *)(lVar17 + -0x48);
                  if (*(uint *)(lVar17 + -0x48) != 0) {
                    lVar15 = 0;
                    uVar24 = 0;
                    do {
                      plVar34 = (long *)(lVar17 + -0x40);
                      if ((int)uVar37 != 1) {
                        plVar34 = (long *)(*(long *)(lVar17 + -0x40) + lVar15);
                      }
                      if (iVar12 == 1) {
                        lVar16 = *(long *)((long)puVar22 + lVar15 + 0x10);
                      }
                      else {
                        if (9 < *(byte *)(plVar34 + 1)) goto LAB_015d87ec;
                        uVar70 = 4;
                        switch(*(byte *)(plVar34 + 1)) {
                        case 0:
                          uVar70 = 0;
                          break;
                        case 1:
                          break;
                        case 2:
                          uVar70 = 5;
                          break;
                        case 3:
                          uVar70 = 0xb;
                          break;
                        case 4:
                          uVar70 = 0xc;
                          break;
                        case 5:
                          uVar70 = 0xd;
                          break;
                        default:
                          uVar70 = 7;
                        }
                        lVar16 = v8::internal::compiler::WasmGraphBuilder::CreateOrMergeIntoPhi
                                           (*(WasmGraphBuilder **)local_230,uVar70,
                                            *(undefined8 *)(piVar61 + 2),plVar34[2],
                                            *(undefined8 *)((long)puVar22 + lVar15 + 0x10));
                      }
                      plVar34[2] = lVar16;
                      uVar37 = (ulong)*(uint *)(lVar17 + -0x48);
                      uVar24 = uVar24 + 1;
                      lVar15 = lVar15 + 0x18;
                    } while (uVar24 < uVar37);
                  }
                }
                lVar15 = *(long *)(lVar17 + -0x20);
                *(long *)local_240 = lVar15;
                *(long *)(*(long *)local_230 + 0x18) = lVar15 + 8;
                *(long *)(*(long *)local_230 + 0x20) = lVar15 + 0x10;
                *(long *)(*(long *)local_230 + 0x28) = lVar15 + 0x18;
                pDVar40 = local_1e0;
                pDVar65 = local_1e8;
                param_1 = local_1f0;
                goto LAB_015d6fc8;
              }
            }
            else {
              if (*(ulong *)local_208 == 0) goto LAB_015d1434;
LAB_015d6fc8:
              if (*pcVar20 != '\x03') {
                FUN_015d8c6c(param_1,pcVar20,lVar17 + -0x48);
              }
            }
            if ((*(char *)(lVar17 + -0x78) == '\0') || (*(char *)(lVar17 + -0x28) != '\0')) {
              *(long *)local_1d8 = *(long *)local_1d8 + -0x88;
            }
            else {
              cVar8 = *pcVar20;
              lVar17 = *(long *)local_1d8;
              *(long *)local_1d8 = lVar17 + -0x88;
              if (cVar8 != '\0') {
                uVar37 = 1;
                if (*(char *)(lVar17 + -0x100) == '\0') {
                  *(undefined1 *)(lVar17 + -0x100) = 1;
                  goto LAB_015cbf04;
                }
                break;
              }
            }
          }
        }
        goto LAB_015d3570;
      case 0xc:
        pbVar33 = pbVar64 + 1;
        if (pbVar33 < *(byte **)pDVar65) {
          uVar57 = *pbVar33 & 0x7f;
          uVar37 = (ulong)uVar57;
          if ((char)*pbVar33 < '\0') {
            uVar57 = v8::internal::wasm::Decoder::
                     read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                               (param_1,pbVar64 + 2,local_248,"branch depth",uVar57);
            uVar37 = (ulong)uVar57;
          }
          else {
            local_1a0 = (byte *)0x100000000;
          }
        }
        else {
          local_1a0 = (byte *)((ulong)local_1a0 & 0xffffffff);
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pbVar33,"expected %s","branch depth");
          uVar37 = 0;
        }
        local_1a0 = (byte *)CONCAT44(local_1a0._4_4_,(int)uVar37);
        lVar17 = *(long *)(param_1 + 0xd8);
        uVar24 = (lVar17 - *(long *)(param_1 + 0xd0) >> 3) * -0xf0f0f0f0f0f0f0f;
        if (uVar24 < uVar37 || uVar24 - uVar37 == 0) {
          pcVar27 = "invalid branch depth: %u";
          pcVar20 = (char *)(*(long *)(param_1 + 0x10) + 1);
          goto LAB_015d0694;
        }
        lVar15 = lVar17 + uVar37 * -0x88;
        pcVar20 = (char *)(lVar15 + -0x88);
        pNVar19 = (Node *)(lVar15 - 0x70);
        pNVar18 = (Node *)(lVar15 - 0x48);
        pNVar67 = pNVar19;
        if (*pcVar20 != '\x03') {
          pNVar67 = pNVar18;
        }
        if (*(char *)(lVar17 + -0x78) == '\0') {
          uVar57 = *(uint *)pNVar67;
          if (uVar57 != 0) {
            if ((uint)((int)((ulong)(*(long *)pDVar40 - *(long *)local_1d0) >> 3) * -0x55555555 -
                      *(int *)(lVar17 + -0x84)) < uVar57) {
              v8::internal::wasm::Decoder::errorf
                        ((uchar *)param_1,*(char **)(param_1 + 0x10),
                         "expected %u elements on the stack for br to @%d, found %u",(ulong)uVar57,
                         (ulong)(uint)(*(int *)(lVar15 + -0x80) - *(int *)(param_1 + 8)));
            }
            else {
              uVar37 = FUN_015de854(param_1);
              if ((uVar37 & 1) != 0) {
                uVar37 = (ulong)local_1a0 & 0xffffffff;
                uVar24 = (*(long *)(param_1 + 0xd8) - *(long *)(param_1 + 0xd0) >> 3) *
                         -0xf0f0f0f0f0f0f0f;
                goto LAB_015cf8b0;
              }
            }
            goto LAB_015d3570;
          }
LAB_015cf8b0:
          if (uVar24 - 1 == uVar37) {
            FUN_015d8fbc(param_1);
          }
          else {
            pNVar67 = pNVar19;
            if (*pcVar20 != '\x03') {
              pNVar67 = pNVar18;
            }
            if (*(uint *)pNVar67 == 0) {
              lVar17 = 0;
            }
            else {
              lVar17 = *(long *)pDVar40 + (ulong)*(uint *)pNVar67 * -0x18;
            }
            piVar61 = *(int **)(lVar15 + -0x20);
            iVar12 = *piVar61;
            local_2a0 = pNVar18;
            local_298 = pNVar19;
            FUN_015ddeb8(local_240,param_1,*(undefined8 *)(param_1 + 0x78),piVar61);
            uVar37 = (ulong)*(uint *)pNVar67;
            if (*(uint *)pNVar67 != 0) {
              lVar15 = 0;
              uVar24 = 0;
              do {
                pNVar19 = pNVar67 + 8;
                if ((int)uVar37 != 1) {
                  pNVar19 = (Node *)(*(long *)(pNVar67 + 8) + lVar15);
                }
                if (iVar12 == 1) {
                  uVar70 = *(undefined8 *)(lVar17 + 0x10 + lVar15);
                }
                else {
                  if (9 < (byte)pNVar19[8]) goto LAB_015d87ec;
                  uVar70 = 4;
                  switch(pNVar19[8]) {
                  case (Node)0x0:
                    uVar70 = 0;
                    break;
                  case (Node)0x1:
                    break;
                  case (Node)0x2:
                    uVar70 = 5;
                    break;
                  case (Node)0x3:
                    uVar70 = 0xb;
                    break;
                  case (Node)0x4:
                    uVar70 = 0xc;
                    break;
                  case (Node)0x5:
                    uVar70 = 0xd;
                    break;
                  default:
                    uVar70 = 7;
                  }
                  uVar70 = v8::internal::compiler::WasmGraphBuilder::CreateOrMergeIntoPhi
                                     (*(WasmGraphBuilder **)local_230,uVar70,
                                      *(undefined8 *)(piVar61 + 2),*(undefined8 *)(pNVar19 + 0x10),
                                      *(undefined8 *)(lVar17 + 0x10 + lVar15));
                }
                *(undefined8 *)(pNVar19 + 0x10) = uVar70;
                uVar37 = (ulong)*(uint *)pNVar67;
                uVar24 = uVar24 + 1;
                lVar15 = lVar15 + 0x18;
              } while (uVar24 < uVar37);
            }
            ppNVar10 = &local_298;
            if (*pcVar20 != '\x03') {
              ppNVar10 = (Node **)&local_2a0;
            }
            (*ppNVar10)[0x20] = (Node)0x1;
            pDVar40 = local_1e0;
            pDVar65 = local_1e8;
            param_1 = local_1f0;
          }
        }
        else {
          uVar37 = FUN_015de97c(param_1,pNVar67,0);
          if ((uVar37 & 1) == 0) goto LAB_015d3570;
        }
        lVar17 = *(long *)(param_1 + 0xd8);
        lVar15 = *(long *)(param_1 + 0xb0) + (ulong)*(uint *)(lVar17 + -0x84) * 0x18;
        if (lVar15 != *(long *)(param_1 + 0xb8)) {
          *(long *)pDVar40 = lVar15;
        }
        if (((byte)*local_200 & 1) == 0) {
          uVar37 = (ulong)(local_1a0._4_4_ + 1);
          if ((byte)*local_200 >> 1 == 0) {
LAB_015d0d80:
            if (*(char *)(*(long *)local_1d8 + -0x78) == '\0') {
              puVar39 = *(undefined4 **)(param_1 + 0x78);
              *puVar39 = 0;
              *(undefined8 *)(puVar39 + 4) = 0;
              *(undefined8 *)(puVar39 + 2) = 0;
              *(undefined8 *)(puVar39 + 8) = 0;
              *(undefined8 *)(puVar39 + 6) = 0;
              *(undefined8 *)(puVar39 + 0xc) = 0;
              *(undefined8 *)(puVar39 + 10) = 0;
            }
          }
        }
        else {
          uVar37 = (ulong)(local_1a0._4_4_ + 1);
          if (*(ulong *)local_208 == 0) goto LAB_015d0d80;
        }
        *(undefined1 *)(lVar17 + -0x78) = 2;
        break;
      case 0xd:
        pbVar33 = pbVar64 + 1;
        if (pbVar33 < *(byte **)pDVar65) {
          uVar57 = *pbVar33 & 0x7f;
          if ((char)*pbVar33 < '\0') {
            uVar57 = v8::internal::wasm::Decoder::
                     read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                               (param_1,pbVar64 + 2,local_248,"branch depth",uVar57);
          }
          else {
            local_1a0 = (byte *)0x100000000;
          }
        }
        else {
          local_1a0 = (byte *)((ulong)local_1a0 & 0xffffffff);
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pbVar33,"expected %s","branch depth");
          uVar57 = 0;
        }
        local_1a0 = (byte *)CONCAT44(local_1a0._4_4_,uVar57);
        lVar17 = *(long *)pDVar40;
        uVar24 = (ulong)*(uint *)(*(long *)local_1d8 + -0x84);
        uVar37 = (lVar17 - *(long *)local_1d0 >> 3) * -0x5555555555555555;
        if (uVar37 < uVar24 || uVar37 - uVar24 == 0) {
          if (*(char *)(*(long *)local_1d8 + -0x78) == '\x02') {
            pNVar19 = (Node *)0x0;
          }
          else {
            pbVar64 = *(byte **)pDVar52;
            if (pbVar64 < *(byte **)pDVar65) {
              bVar4 = *pbVar64;
              uVar60 = (ushort)bVar4;
              uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
              if ((uVar37 & 1) != 0) {
                if (*(byte **)pDVar65 <= pbVar64 + 1) {
                  pcVar20 = "<end>";
                  goto LAB_015d1a44;
                }
                uVar60 = CONCAT11(bVar4,pbVar64[1]);
              }
              pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
            }
            else {
              pcVar20 = "<end>";
            }
LAB_015d1a44:
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pbVar64,"%s found empty stack",pcVar20);
            pNVar19 = (Node *)0x0;
          }
        }
        else {
          pbVar64 = *(byte **)(lVar17 + -0x18);
          bVar4 = *(byte *)(lVar17 + -0x10);
          pNVar19 = *(Node **)(lVar17 + -8);
          *(undefined8 **)pDVar40 = (undefined8 *)(lVar17 + -0x18);
          if ((bVar4 != 1) && (bVar4 != 10)) {
            pbVar33 = *(byte **)pDVar52;
            if (pbVar33 < *(byte **)pDVar65) {
              bVar7 = *pbVar33;
              uVar60 = (ushort)bVar7;
              uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
              if ((uVar37 & 1) != 0) {
                if (*(byte **)pDVar65 <= pbVar33 + 1) goto LAB_015cfc84;
                uVar60 = CONCAT11(bVar7,pbVar33[1]);
              }
              pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
            }
            else {
LAB_015cfc84:
              pcVar20 = "<end>";
            }
            if (pbVar64 < *(byte **)pDVar65) {
              bVar7 = *pbVar64;
              uVar60 = (ushort)bVar7;
              uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
              if ((uVar37 & 1) != 0) {
                if (*(byte **)pDVar65 <= pbVar64 + 1) goto LAB_015d0f20;
                uVar60 = CONCAT11(bVar7,pbVar64[1]);
              }
              pcVar27 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
            }
            else {
LAB_015d0f20:
              pcVar27 = "<end>";
            }
            pDVar40 = local_1e0;
            if (bVar4 < 10) {
              pcVar21 = (&PTR_s_<stmt>_01cc9910)[(char)bVar4];
            }
            else {
              pcVar21 = "<unknown>";
            }
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pbVar64,
                       "%s[%d] expected type %s, found %s of type %s",pcVar20,0,"i32",pcVar27,
                       pcVar21);
          }
        }
        pDVar68 = local_1f0;
        if (((byte)*local_200 & 1) == 0) {
          if ((byte)*local_200 >> 1 == 0) {
LAB_015d1a80:
            lVar17 = *(long *)(param_1 + 0xd8);
            uVar24 = (ulong)local_1a0 & 0xffffffff;
            uVar37 = (lVar17 - *(long *)(param_1 + 0xd0) >> 3) * -0xf0f0f0f0f0f0f0f;
            if (uVar37 < uVar24 || uVar37 - uVar24 == 0) {
              v8::internal::wasm::Decoder::errorf
                        ((uchar *)param_1,(char *)(*(long *)(param_1 + 0x10) + 1),
                         "invalid branch depth: %u",uVar24);
              goto LAB_015d3570;
            }
            lVar15 = lVar17 + uVar24 * -0x88;
            puVar36 = (uint *)(lVar15 + -0x70);
            if (*(char *)(lVar15 + -0x88) != '\x03') {
              puVar36 = (uint *)(lVar15 + -0x48);
            }
            param_1 = pDVar68;
            if (*(char *)(lVar17 + -0x78) != '\0') {
              uVar37 = 1;
              local_290 = pDVar52;
              uVar24 = FUN_015de97c(local_1f0,puVar36,1);
              pDVar52 = local_290;
              if ((uVar24 & 1) != 0) goto LAB_015d1d98;
              break;
            }
            uVar57 = *puVar36;
            local_290 = pDVar52;
            if (uVar57 == 0) {
LAB_015d1b68:
              piVar61 = *(int **)(local_1f0 + 0x78);
              lVar17 = FUN_015ddde4(local_1f0,piVar61);
              pDVar68 = local_1f0;
              if (*piVar61 == 3) {
                *piVar61 = 2;
              }
              uVar70 = v8::internal::compiler::WasmGraphBuilder::BranchNoHint
                                 (*(WasmGraphBuilder **)(local_1f0 + 0x80),pNVar19,
                                  (Node **)(lVar17 + 8),(Node **)(piVar61 + 2));
              pDVar65 = local_240;
              FUN_015ddc44(local_240,pDVar68,uVar70);
              *(long *)(pDVar68 + 0x78) = lVar17;
              *(Node ***)(*(long *)(pDVar68 + 0x80) + 0x18) = (Node **)(lVar17 + 8);
              *(long *)(*(long *)(pDVar68 + 0x80) + 0x20) = lVar17 + 0x10;
              *(long *)(*(long *)(pDVar68 + 0x80) + 0x28) = lVar17 + 0x18;
              FUN_015dee00(pDVar65,pDVar68,uVar24);
              *(int **)(pDVar68 + 0x78) = piVar61;
              *(int **)(*(long *)(pDVar68 + 0x80) + 0x18) = piVar61 + 2;
              *(int **)(*(long *)(pDVar68 + 0x80) + 0x20) = piVar61 + 4;
              *(int **)(*(long *)(pDVar68 + 0x80) + 0x28) = piVar61 + 6;
              puVar36 = (uint *)(lVar15 + -0x70);
              if (*(char *)(lVar15 + -0x88) != '\x03') {
                puVar36 = (uint *)(lVar15 + -0x48);
              }
              *(undefined1 *)(puVar36 + 8) = 1;
              pDVar52 = local_290;
              pDVar40 = local_1e0;
              pDVar65 = local_1e8;
              goto LAB_015d1d98;
            }
            if ((uint)((int)((ulong)(*(long *)pDVar40 - *(long *)local_1d0) >> 3) * -0x55555555 -
                      *(int *)(lVar17 + -0x84)) < uVar57) {
              v8::internal::wasm::Decoder::errorf
                        ((uchar *)local_1f0,*(char **)(local_1f0 + 0x10),
                         "expected %u elements on the stack for br to @%d, found %u",(ulong)uVar57,
                         (ulong)(uint)(*(int *)(lVar15 + -0x80) - *(int *)(local_1f0 + 8)));
              pDVar52 = local_290;
            }
            else {
              uVar37 = FUN_015de854(local_1f0);
              pDVar52 = local_290;
              param_1 = local_1f0;
              if ((uVar37 & 1) != 0) {
                uVar24 = (ulong)local_1a0 & 0xffffffff;
                goto LAB_015d1b68;
              }
            }
          }
        }
        else if (*(ulong *)local_208 == 0) goto LAB_015d1a80;
        goto LAB_015cbf04;
      case 0xe:
        local_1a0 = (byte *)((ulong)local_1a0 & 0xffffffff00000000);
        pbVar66 = local_1a0;
        pbVar69 = pbVar64 + 1;
        local_1a0._4_4_ = SUB84(pbVar33,4);
        if (pbVar69 < *(byte **)pDVar65) {
          uVar57 = *pbVar69 & 0x7f;
          if ((char)*pbVar69 < '\0') {
            local_1a0 = pbVar66;
            uVar57 = v8::internal::wasm::Decoder::
                     read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                               (param_1,pbVar64 + 2,(uint *)&local_1a0,"table count",uVar57);
            uVar37 = (ulong)local_1a0 & 0xffffffff;
          }
          else {
            uVar37 = 1;
            local_1a0 = (byte *)CONCAT44(local_1a0._4_4_,1);
          }
        }
        else {
          local_1a0 = (byte *)((ulong)local_1a0._4_4_ << 0x20);
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pbVar69,"expected %s","table count");
          uVar37 = 0;
          uVar57 = 0;
        }
        lVar17 = *(long *)local_1e0;
        uVar41 = (ulong)*(uint *)(*(long *)local_1d8 + -0x84);
        uVar24 = (lVar17 - *(long *)local_1d0 >> 3) * -0x5555555555555555;
        if (uVar24 < uVar41 || uVar24 - uVar41 == 0) {
          if (*(char *)(*(long *)local_1d8 + -0x78) == '\x02') {
            pNVar19 = (Node *)0x0;
          }
          else {
            pbVar64 = *(byte **)pDVar52;
            if (pbVar64 < *(byte **)local_1e8) {
              bVar4 = *pbVar64;
              uVar60 = (ushort)bVar4;
              uVar24 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
              if ((uVar24 & 1) != 0) {
                if (*(byte **)local_1e8 <= pbVar64 + 1) {
                  pcVar20 = "<end>";
                  goto LAB_015d153c;
                }
                uVar60 = CONCAT11(bVar4,pbVar64[1]);
              }
              pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
            }
            else {
              pcVar20 = "<end>";
            }
LAB_015d153c:
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pbVar64,"%s found empty stack",pcVar20);
            pNVar19 = (Node *)0x0;
          }
        }
        else {
          pbVar64 = *(byte **)(lVar17 + -0x18);
          bVar4 = *(byte *)(lVar17 + -0x10);
          pNVar19 = *(Node **)(lVar17 + -8);
          *(undefined8 **)local_1e0 = (undefined8 *)(lVar17 + -0x18);
          if ((bVar4 != 1) && (bVar4 != 10)) {
            pbVar33 = *(byte **)pDVar52;
            if (pbVar33 < *(byte **)local_1e8) {
              bVar7 = *pbVar33;
              uVar60 = (ushort)bVar7;
              uVar24 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
              if ((uVar24 & 1) != 0) {
                if (*(byte **)local_1e8 <= pbVar33 + 1) goto LAB_015cfc78;
                uVar60 = CONCAT11(bVar7,pbVar33[1]);
              }
              pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
            }
            else {
LAB_015cfc78:
              pcVar20 = "<end>";
            }
            if (pbVar64 < *(byte **)local_1e8) {
              bVar7 = *pbVar64;
              uVar60 = (ushort)bVar7;
              uVar24 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
              if ((uVar24 & 1) != 0) {
                if (*(byte **)local_1e8 <= pbVar64 + 1) goto LAB_015d0ed0;
                uVar60 = CONCAT11(bVar7,pbVar64[1]);
              }
              pcVar27 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
            }
            else {
LAB_015d0ed0:
              pcVar27 = "<end>";
            }
            if (bVar4 < 10) {
              pcVar21 = (&PTR_s_<stmt>_01cc9910)[(char)bVar4];
            }
            else {
              pcVar21 = "<unknown>";
            }
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pbVar64,
                       "%s[%d] expected type %s, found %s of type %s",pcVar20,0,"i32",pcVar27,
                       pcVar21);
          }
        }
        pDVar65 = local_1e8;
        pDVar40 = local_1e0;
        if (((byte)*local_200 & 1) == 0) {
          if ((byte)*local_200 >> 1 == 0) {
LAB_015d1578:
            if (uVar57 < 0xfff1) {
              pNVar18 = *(Node **)pDVar52;
              if (uVar57 <= (uint)(*(int *)local_1e8 - (int)pNVar18)) {
                lVar17 = *(long *)(param_1 + 0xd8) - *(long *)(param_1 + 0xd0);
                if (lVar17 + 0x87U < 0x10f) {
                  local_2b0 = (void *)0x0;
LAB_015d1668:
                  uVar54 = 0;
                  pNVar56 = (Node *)0x0;
                  pNVar67 = (Node *)0x0;
                  pNVar18 = (Node *)(pbVar69 + uVar37);
                  local_2a0 = pNVar18;
                  do {
                    uVar37 = (long)pNVar67 - (long)pNVar56;
                    local_298 = pNVar56;
                    while( true ) {
                      do {
                        uVar63 = uVar54;
                        pNVar67 = pNVar18;
                        pDVar65 = local_1f0;
                        if (((byte)*local_200 & 1) == 0) {
                          uVar24 = (ulong)((byte)*local_200 >> 1);
                        }
                        else {
                          uVar24 = *(ulong *)local_208;
                        }
                        uVar14 = (uint)uVar37;
                        if ((uVar57 < uVar63) || (uVar24 != 0)) goto LAB_015d31dc;
                        uVar54 = uVar63 + 1;
                        if (pNVar67 < *(Node **)local_1e8) {
                          uVar13 = (byte)*pNVar67 & 0x7f;
                          if ((char)*pNVar67 < '\0') {
                            uVar13 = v8::internal::wasm::Decoder::
                                     read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                                               (local_1f0,(uchar *)(pNVar67 + 1),(uint *)&local_1a0,
                                                "branch table entry",uVar13);
                            uVar24 = (ulong)local_1a0 & 0xffffffff;
                          }
                          else {
                            uVar24 = 1;
                            local_1a0 = (byte *)CONCAT44(local_1a0._4_4_,1);
                          }
                        }
                        else {
                          local_1a0 = (byte *)((ulong)local_1a0._4_4_ << 0x20);
                          v8::internal::wasm::Decoder::errorf
                                    ((uchar *)local_1f0,(char *)pNVar67,"expected %s",
                                     "branch table entry");
                          uVar24 = 0;
                          uVar13 = 0;
                        }
                        lVar17 = *(long *)(pDVar65 + 0xd8);
                        uVar41 = (ulong)uVar13;
                        uVar42 = (lVar17 - *(long *)(pDVar65 + 0xd0) >> 3) * -0xf0f0f0f0f0f0f0f;
                        pNVar18 = pNVar67 + uVar24;
                        if (uVar42 < uVar41 || uVar42 - uVar41 == 0) {
                          v8::internal::wasm::Decoder::errorf
                                    ((uchar *)local_1f0,(char *)pNVar67,
                                     "improper branch in br_table target %u (depth %u)",
                                     (ulong)uVar63);
                          pNVar67 = pNVar18;
                          uVar63 = uVar54;
                          goto LAB_015d31dc;
                        }
                        uVar24 = *(ulong *)((long)local_2b0 + (ulong)(uVar13 >> 6) * 8);
                        uVar42 = 1L << (uVar41 & 0x3f);
                      } while ((uVar24 & uVar42) != 0);
                      *(ulong *)((long)local_2b0 + (ulong)(uVar13 >> 6) * 8) = uVar24 | uVar42;
                      lVar17 = lVar17 + uVar41 * -0x88;
                      puVar36 = (uint *)(lVar17 + -0x70);
                      if (*(char *)(lVar17 + -0x88) != '\x03') {
                        puVar36 = (uint *)(lVar17 + -0x48);
                      }
                      uVar13 = *puVar36;
                      uVar24 = (ulong)uVar13;
                      if (uVar63 == 0) break;
                      if (uVar13 != uVar14) {
                        v8::internal::wasm::Decoder::errorf
                                  ((uchar *)local_1f0,(char *)pNVar67,
                                   "inconsistent arity in br_table target %u (previous was %zu, this one is %u)"
                                   ,(ulong)uVar63,uVar37,uVar24);
                        pNVar67 = pNVar18;
                        uVar63 = uVar54;
LAB_015d31dc:
                        pDVar40 = local_1e0;
                        pDVar65 = local_1e8;
                        param_1 = local_1f0;
                        lVar17 = *(long *)local_1d8;
                        pNVar18 = local_298;
                        if (*(char *)(lVar17 + -0x78) != '\0') {
                          if ((int)uVar14 < 1) goto LAB_015d8060;
                          lVar15 = 0;
                          local_290 = pDVar52;
                          goto LAB_015d7dc4;
                        }
                        if ((int)((ulong)(*(long *)local_1e0 - *(long *)local_1d0) >> 3) *
                            -0x55555555 - *(int *)(lVar17 + -0x84) < (int)uVar14) {
                          v8::internal::wasm::Decoder::errorf
                                    ((uchar *)local_1f0,*(char **)(local_1f0 + 0x10),
                                     "expected %u elements on the stack for branch to @%d, found %u"
                                     ,uVar37 & 0xffffffff,
                                     (ulong)(uint)(*(int *)(lVar17 + -0x80) -
                                                  *(int *)(local_1f0 + 8)));
                          uVar37 = 1;
                          pNVar18 = local_298;
                          pDVar65 = local_1e8;
                          pDVar40 = local_1e0;
                          goto joined_r0x015d3264;
                        }
                        if ((int)uVar14 < 1) goto LAB_015d8060;
                        uVar24 = 0;
                        pNVar56 = (Node *)(*(long *)local_1e0 + (long)(int)uVar14 * -0x18 + 8);
                        goto LAB_015d32a0;
                      }
                      if (0 < (int)uVar13) {
                        lVar15 = uVar24 * 0x18;
                        lVar17 = 0;
                        puVar35 = puVar36 + 2;
                        pNVar56 = local_298;
                        while( true ) {
                          NVar9 = *pNVar56;
                          puVar46 = puVar35;
                          if ((int)uVar24 != 1) {
                            puVar46 = (uint *)(*(long *)puVar35 + lVar17);
                          }
                          NVar6 = *(Node *)(puVar46 + 2);
                          uVar13 = (uint)(byte)NVar9;
                          uVar48 = (uint)(byte)NVar6;
                          if ((*(uint *)(local_1f0 + 0x50) >> 5 & 1) == 0) {
                            if (uVar13 != uVar48) {
                              if (uVar13 < 0xb) {
                                pcVar20 = (&PTR_s_<stmt>_01cc9868)[(char)NVar9];
                              }
                              else {
                                pcVar20 = "<unknown>";
                              }
                              if ((int)uVar24 != 1) {
                                puVar35 = (uint *)(*(long *)puVar35 + lVar17);
                              }
                              if ((ulong)(long)(char)puVar35[2] < 0xb) {
                                pcVar27 = (&PTR_s_<stmt>_01cc9868)[(char)puVar35[2]];
                              }
                              else {
                                pcVar27 = "<unknown>";
                              }
                              v8::internal::wasm::Decoder::errorf
                                        ((uchar *)local_1f0,(char *)pNVar67,
                                         "inconsistent type in br_table target %u (previous was %s, this one is %s)"
                                         ,(ulong)uVar63,pcVar20,pcVar27);
                              pNVar67 = pNVar18;
                              uVar63 = uVar54;
                              goto LAB_015d31dc;
                            }
                          }
                          else {
                            uVar49 = (uint)(byte)NVar6;
                            NVar51 = NVar9;
                            if ((((uVar13 != uVar49) && (NVar51 = (Node)0xa, uVar13 < 10)) &&
                                ((1 << (ulong)(uVar13 & 0x1f) & 0x2c0U) != 0)) &&
                               ((NVar51 = (Node)0xa, uVar49 < 10 &&
                                ((1 << (ulong)(uVar49 & 0x1f) & 0x2c0U) != 0)))) {
                              NVar51 = NVar9;
                              if (((2 < uVar13 - 7 || uVar48 != 6) && (uVar13 != 8 || uVar48 != 7))
                                 && (((uVar13 != 8 || (NVar51 = (Node)0x8, uVar48 != 9)) &&
                                     (NVar51 = NVar6,
                                     (uVar13 != 9 || uVar48 != 8) &&
                                     ((uVar13 != 7 || uVar48 != 8) &&
                                     (uVar13 != 6 || 2 < uVar48 - 7)))))) {
                                NVar51 = (Node)0x8;
                              }
                            }
                            *pNVar56 = NVar51;
                          }
                          if (lVar15 + -0x18 == lVar17) break;
                          uVar24 = (ulong)*puVar36;
                          lVar17 = lVar17 + 0x18;
                          pNVar56 = pNVar56 + 1;
                        }
                      }
                    }
                    if (uVar13 == 0) {
                      pNVar56 = (Node *)0x0;
                      pNVar67 = (Node *)0x0;
                    }
                    else {
                      if ((int)uVar13 < 0) goto LAB_015d87f8;
                      uVar37 = (ulong)(int)uVar13;
                      pNVar56 = operator_new(uVar37);
                      pNVar67 = pNVar56 + uVar37;
                      memset(pNVar56,0,uVar37);
                      lVar17 = 0;
                      pNVar45 = pNVar56;
                      do {
                        puVar35 = puVar36 + 2;
                        if (*puVar36 != 1) {
                          puVar35 = (uint *)(*(long *)(puVar36 + 2) + lVar17);
                        }
                        lVar17 = lVar17 + 0x18;
                        *pNVar45 = *(Node *)(puVar35 + 2);
                        pNVar45 = pNVar45 + 1;
                      } while (uVar24 * 0x18 - lVar17 != 0);
                    }
                    if (local_298 != (Node *)0x0) {
                      operator_delete(local_298);
                    }
                  } while( true );
                }
                if (-0x88 < lVar17) {
                  uVar41 = lVar17 / 0x88;
                  uVar42 = uVar41 - 1 >> 6;
                  local_2b0 = operator_new(uVar42 * 8 + 8);
                  uVar24 = 0;
                  if (0x40 < uVar41) {
                    uVar24 = uVar42;
                  }
                  __n = (uVar41 >> 6) * 8;
                  *(undefined8 *)((long)local_2b0 + uVar24 * 8) = 0;
                  memset(local_2b0,0,__n);
                  if ((uVar41 & 0x3f) != 0) {
                    *(ulong *)((long)local_2b0 + __n) =
                         *(ulong *)((long)local_2b0 + __n) &
                         (0xffffffffffffffffU >> (-(uVar41 & 0x3f) & 0x3f) ^ 0xffffffffffffffff);
                  }
                  goto LAB_015d1668;
                }
                goto LAB_015d87f8;
              }
              pcVar20 = "expected %u bytes, fell off end";
            }
            else {
              pcVar20 = "invalid table count (> max br_table size): %u";
              pNVar18 = (Node *)(*(long *)(param_1 + 0x10) + 1);
            }
            uVar37 = (ulong)uVar57;
LAB_015d159c:
            v8::internal::wasm::Decoder::errorf((uchar *)param_1,(char *)pNVar18,pcVar20,uVar37);
            pDVar40 = local_1e0;
            pDVar65 = local_1e8;
          }
        }
        else if (*(ulong *)local_208 == 0) goto LAB_015d1578;
        goto LAB_015cbf04;
      case 0xf:
        puVar43 = *(ulong **)(param_1 + 0x60);
        lVar17 = *(long *)(param_1 + 0xd8);
        uVar37 = *puVar43;
        iVar12 = (int)uVar37;
        if (*(char *)(lVar17 + -0x78) == '\0') {
          if (iVar12 != 0) {
            if ((int)((ulong)(*(long *)pDVar40 - *(long *)local_1d0) >> 3) * -0x55555555 -
                *(int *)(lVar17 + -0x84) < iVar12) {
              v8::internal::wasm::Decoder::errorf
                        ((uchar *)param_1,(char *)pbVar64,
                         "expected %u elements on the stack for return, found %u",
                         uVar37 & 0xffffffff);
              goto LAB_015cbf04;
            }
            if (0 < iVar12) {
              uVar24 = 0;
              pbVar33 = (byte *)(*(long *)pDVar40 + (long)iVar12 * -0x18 + 8);
              do {
                bVar7 = *(byte *)(puVar43[2] + uVar24);
                bVar4 = *pbVar33;
                if (bVar7 != bVar4) {
                  iVar12 = (int)(char)bVar4;
                  if (((bVar7 != 9 || iVar12 != 8) && (bVar7 != 7 || iVar12 != 8)) &&
                     (bVar7 != 6 || 2 < (iVar12 - 7U & 0xff))) {
                    if (bVar7 < 0xb) {
                      pcVar20 = (&PTR_s_<stmt>_01cc9868)[(char)bVar7];
                    }
                    else {
                      pcVar20 = "<unknown>";
                    }
                    if (bVar4 < 0xb) {
                      pcVar21 = (&PTR_s_<stmt>_01cc9868)[(char)bVar4];
                      pcVar27 = "type error in return[%u] (expected %s, got %s)";
                    }
                    else {
                      pcVar21 = "<unknown>";
                      pcVar27 = "type error in return[%u] (expected %s, got %s)";
                    }
                    goto LAB_015d3cec;
                  }
                }
                uVar24 = uVar24 + 1;
                pbVar33 = pbVar33 + 0x18;
              } while ((uVar37 & 0xffffffff) != uVar24);
            }
          }
          FUN_015d8fbc(param_1);
        }
        else if (0 < iVar12) {
          uVar24 = 0;
          do {
            lVar15 = *(long *)pDVar40;
            bVar4 = *(byte *)(puVar43[2] + uVar24);
            uVar41 = (lVar15 - *(long *)local_1d0 >> 3) * -0x5555555555555555;
            if (uVar41 < *(uint *)(lVar17 + -0x84) || uVar41 - *(uint *)(lVar17 + -0x84) == 0) {
              if (*(char *)(lVar17 + -0x78) != '\x02') {
                pcVar20 = *(char **)pDVar52;
                if (pcVar20 < *(char **)local_1e8) {
                  cVar8 = *pcVar20;
                  uVar41 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(cVar8);
                  if ((uVar41 & 1) == 0) {
                    pcVar27 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(cVar8);
                  }
                  else if (pcVar20 + 1 < *(char **)local_1e8) {
                    pcVar27 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName
                                                (CONCAT11(cVar8,pcVar20[1]));
                    param_1 = local_1f0;
                  }
                  else {
                    pcVar27 = "<end>";
                    param_1 = local_1f0;
                  }
                }
                else {
                  pcVar27 = "<end>";
                }
                v8::internal::wasm::Decoder::errorf
                          ((uchar *)param_1,pcVar20,"%s found empty stack",pcVar27);
              }
              pbVar64 = *(byte **)pDVar52;
              uVar57 = 10;
              if (bVar4 != 10) goto LAB_015d7168;
            }
            else {
              pbVar64 = *(byte **)(lVar15 + -0x18);
              bVar7 = *(byte *)(lVar15 + -0x10);
              uVar57 = (uint)bVar7;
              *(undefined8 **)pDVar40 = (undefined8 *)(lVar15 + -0x18);
              if (bVar7 != bVar4) {
LAB_015d7168:
                if ((bVar4 != 7 || uVar57 != 8) && (bVar4 != 6 || 2 < uVar57 - 7)) {
                  if ((bVar4 != 10) && ((uVar57 != 10 && (bVar4 != 9 || uVar57 != 8)))) {
                    pbVar33 = *(byte **)pDVar52;
                    if (pbVar33 < *(byte **)local_1e8) {
                      bVar7 = *pbVar33;
                      uVar60 = (ushort)bVar7;
                      uVar41 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                      if ((uVar41 & 1) != 0) {
                        if (*(byte **)local_1e8 <= pbVar33 + 1) goto LAB_015d7210;
                        uVar60 = CONCAT11(bVar7,pbVar33[1]);
                      }
                      pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                    }
                    else {
LAB_015d7210:
                      pcVar20 = "<end>";
                    }
                    if (bVar4 < 10) {
                      pcVar27 = (&PTR_s_<stmt>_01cc9818)[(char)bVar4];
                    }
                    else {
                      pcVar27 = "<unknown>";
                    }
                    if (pbVar64 < *(byte **)local_1e8) {
                      bVar4 = *pbVar64;
                      uVar60 = (ushort)bVar4;
                      uVar41 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                      if ((uVar41 & 1) != 0) {
                        if (*(byte **)local_1e8 <= pbVar64 + 1) goto LAB_015d728c;
                        uVar60 = CONCAT11(bVar4,pbVar64[1]);
                      }
                      pcVar21 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                      if (uVar57 < 0xb) goto LAB_015d729c;
LAB_015d72c4:
                      pcVar28 = "<unknown>";
                    }
                    else {
LAB_015d728c:
                      pcVar21 = "<end>";
                      if (10 < uVar57) goto LAB_015d72c4;
LAB_015d729c:
                      pcVar28 = (&PTR_s_<stmt>_01cc9868)[(char)uVar57];
                    }
                    v8::internal::wasm::Decoder::errorf
                              ((uchar *)local_1f0,(char *)pbVar64,
                               "%s[%d] expected type %s, found %s of type %s",pcVar20,
                               uVar24 & 0xffffffff,pcVar27,pcVar21,pcVar28);
                  }
                }
              }
            }
            pDVar40 = local_1e0;
            param_1 = local_1f0;
            if ((uVar37 & 0xffffffff) - 1 == uVar24) break;
            puVar43 = *(ulong **)(local_1f0 + 0x60);
            lVar17 = *(long *)(local_1f0 + 0xd8);
            uVar24 = uVar24 + 1;
          } while( true );
        }
        lVar17 = *(long *)(param_1 + 0xd8);
        lVar15 = *(long *)(param_1 + 0xb0) + (ulong)*(uint *)(lVar17 + -0x84) * 0x18;
        if (lVar15 != *(long *)(param_1 + 0xb8)) {
          *(long *)pDVar40 = lVar15;
        }
        DVar5 = *local_200;
        pDVar65 = local_1e8;
joined_r0x015cdfbc:
        if (((byte)DVar5 & 1) == 0) {
          if ((byte)DVar5 >> 1 == 0) {
LAB_015d34d0:
            if (*(char *)(*(long *)local_1d8 + -0x78) == '\0') {
              puVar39 = *(undefined4 **)(param_1 + 0x78);
              *puVar39 = 0;
              *(undefined8 *)(puVar39 + 4) = 0;
              *(undefined8 *)(puVar39 + 2) = 0;
              *(undefined8 *)(puVar39 + 8) = 0;
              *(undefined8 *)(puVar39 + 6) = 0;
              *(undefined8 *)(puVar39 + 0xc) = 0;
              *(undefined8 *)(puVar39 + 10) = 0;
            }
          }
        }
        else if (*(ulong *)local_208 == 0) goto LAB_015d34d0;
        *(undefined1 *)(lVar17 + -0x78) = 2;
        goto LAB_015cbf04;
      case 0x10:
        local_c0 = (Node *)0x0;
        pbVar33 = pbVar64 + 1;
        if (pbVar33 < *(byte **)pDVar65) {
          uVar57 = *pbVar33 & 0x7f;
          uVar24 = (ulong)uVar57;
          if ((char)*pbVar33 < '\0') {
            uVar57 = v8::internal::wasm::Decoder::
                     read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                               (param_1,pbVar64 + 2,local_258,"function index",uVar57);
            uVar24 = (ulong)uVar57;
          }
          else {
            local_b8 = (long *)CONCAT44(local_b8._4_4_,1);
          }
        }
        else {
          local_b8 = (long *)((ulong)local_b8._4_4_ << 0x20);
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pbVar33,"expected %s","function index");
          uVar24 = 0;
        }
        local_c8 = (uint *)CONCAT44(local_c8._4_4_,(int)uVar24);
        lVar17 = *(long *)(param_1 + 0x48);
        uVar37 = (ulong)((uint)local_b8 + 1);
        if ((lVar17 == 0) ||
           ((ulong)(*(long *)(lVar17 + 0x90) - *(long *)(lVar17 + 0x88) >> 5) <= uVar24)) {
          pbVar64 = (byte *)(*(long *)(param_1 + 0x10) + 1);
          pcVar20 = "invalid function index: %u";
          goto LAB_015d0150;
        }
        local_c0 = *(Node **)(*(long *)(lVar17 + 0x88) + uVar24 * 0x20);
        if (local_c0 == (Node *)0x0) {
          local_1a0 = local_210;
          local_198 = local_210;
          local_190 = local_238;
        }
        else {
          uVar57 = (uint)*(undefined8 *)(local_c0 + 8);
          lVar17 = (long)(int)uVar57;
          local_1a0 = local_210;
          local_198 = local_210;
          local_190 = local_238;
          local_298 = local_c0;
          if (8 < uVar57) {
            FUN_015de7a0(&local_1a0,lVar17);
          }
          local_198 = local_1a0 + lVar17 * 0x18;
          if (0 < (int)uVar57) {
            pNVar19 = local_298;
            lVar15 = (long)(int)uVar57 * 0x18;
            do {
              uVar57 = uVar57 - 1;
              lVar16 = *(long *)pDVar40;
              uVar41 = (ulong)*(uint *)(*(long *)local_1d8 + -0x84);
              bVar4 = *(byte *)(*(long *)(pNVar19 + 0x10) + *(long *)pNVar19 + lVar17 + -1);
              uVar24 = (lVar16 - *(long *)local_1d0 >> 3) * -0x5555555555555555;
              if (uVar24 < uVar41 || uVar24 - uVar41 == 0) {
                if (*(char *)(*(long *)local_1d8 + -0x78) != '\x02') {
                  pbVar64 = *(byte **)pDVar52;
                  if (pbVar64 < *(byte **)local_1e8) {
                    bVar7 = *pbVar64;
                    uVar60 = (ushort)bVar7;
                    uVar24 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                    if ((uVar24 & 1) != 0) {
                      if (*(byte **)local_1e8 <= pbVar64 + 1) goto LAB_015ced2c;
                      uVar60 = CONCAT11(bVar7,pbVar64[1]);
                    }
                    pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                  }
                  else {
LAB_015ced2c:
                    pcVar20 = "<end>";
                  }
                  v8::internal::wasm::Decoder::errorf
                            ((uchar *)param_1,(char *)pbVar64,"%s found empty stack",pcVar20);
                  pNVar19 = local_298;
                }
                pbVar64 = *(byte **)pDVar52;
                uVar70 = 0;
                uVar54 = 10;
              }
              else {
                pbVar64 = *(byte **)(lVar16 + -0x18);
                uVar30 = *(undefined4 *)(lVar16 + -0xf);
                uVar54 = (uint)*(byte *)(lVar16 + -0x10);
                uStack_1b4 = (undefined3)((uint)*(undefined4 *)(lVar16 + -0xc) >> 8);
                uVar70 = *(undefined8 *)(lVar16 + -8);
                *(undefined8 **)pDVar40 = (undefined8 *)(lVar16 + -0x18);
                uStack_1b8._3_1_ = (undefined1)((uint)uVar30 >> 0x18);
                local_1b0._0_3_ = (undefined3)uVar30;
                local_1b0._0_7_ =
                     CONCAT43(CONCAT31(uStack_1b4,uStack_1b8._3_1_),(undefined3)local_1b0);
                uStack_1b8 = uVar30;
              }
              lVar17 = lVar17 + -1;
              if (uVar54 != bVar4) {
                if ((bVar4 != 7 || uVar54 != 8) && (bVar4 != 6 || 2 < uVar54 - 7)) {
                  if ((bVar4 != 10) && ((uVar54 != 10 && (bVar4 != 9 || uVar54 != 8)))) {
                    pbVar33 = *(byte **)pDVar52;
                    if (pbVar33 < *(byte **)local_1e8) {
                      local_2a0 = (Node *)CONCAT44(local_2a0._4_4_,(uint)*pbVar33);
                      uVar24 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode();
                      uVar63 = (uint)local_2a0;
                      if ((uVar24 & 1) != 0) {
                        if (*(byte **)local_1e8 <= pbVar33 + 1) goto LAB_015cee18;
                        uVar63 = (uint)pbVar33[1] | ((uint)local_2a0 & 0xff) << 8;
                      }
                      pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar63);
                    }
                    else {
LAB_015cee18:
                      pcVar20 = "<end>";
                    }
                    param_1 = local_1f0;
                    if (bVar4 < 10) {
                      pcVar27 = (&PTR_s_<stmt>_01cc9818)[(char)bVar4];
                    }
                    else {
                      pcVar27 = "<unknown>";
                    }
                    if (pbVar64 < *(byte **)local_1e8) {
                      bVar4 = *pbVar64;
                      uVar60 = (ushort)bVar4;
                      local_2a0 = (Node *)pcVar20;
                      uVar24 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                      if ((uVar24 & 1) == 0) {
LAB_015ceeb4:
                        pcVar21 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                      }
                      else {
                        if (pbVar64 + 1 < *(byte **)local_1e8) {
                          uVar60 = CONCAT11(bVar4,pbVar64[1]);
                          goto LAB_015ceeb4;
                        }
                        pcVar21 = "<end>";
                      }
                      pcVar20 = (char *)local_2a0;
                      if (uVar54 < 0xb) goto LAB_015cebec;
LAB_015ceed4:
                      pcVar28 = "<unknown>";
                    }
                    else {
                      pcVar21 = "<end>";
                      if (10 < uVar54) goto LAB_015ceed4;
LAB_015cebec:
                      pcVar28 = (&PTR_s_<stmt>_01cc9868)[(char)(byte)uVar54];
                    }
                    v8::internal::wasm::Decoder::errorf
                              ((uchar *)param_1,(char *)pbVar64,
                               "%s[%d] expected type %s, found %s of type %s",pcVar20,(ulong)uVar57,
                               pcVar27,pcVar21,pcVar28);
                    pNVar19 = local_298;
                  }
                }
              }
              *(byte **)(local_1a0 + lVar15 + -0x18) = pbVar64;
              local_1a0[lVar15 + -0x10] = (byte)uVar54;
              uVar30 = local_1b0._3_4_;
              *(undefined8 *)(local_1a0 + lVar15 + -8) = uVar70;
              *(undefined4 *)(local_1a0 + lVar15 + -0xc) = uVar30;
              *(undefined4 *)(local_1a0 + lVar15 + -0xf) = (undefined4)local_1b0;
              pDVar40 = local_1e0;
              lVar15 = lVar15 + -0x18;
            } while (0 < lVar17);
          }
        }
        pNVar19 = local_c0;
        lVar17 = *(long *)local_c0;
        if (lVar17 == 0) {
          lVar17 = 0;
        }
        else {
          puVar43 = *(ulong **)pDVar40;
          lVar15 = 0;
          pNVar18 = (Node *)(((long)puVar43 - *(long *)local_1d0 >> 3) * -0x5555555555555555);
          do {
            uVar53 = *(undefined1 *)(*(long *)(pNVar19 + 0x10) + lVar15);
            if (puVar43 < *(ulong **)local_1f8) {
              uVar24 = *(ulong *)pDVar52;
              *(undefined1 *)(puVar43 + 1) = uVar53;
              puVar43[2] = 0;
              *puVar43 = uVar24;
              puVar43 = (ulong *)(*(long *)pDVar40 + 0x18);
              *(ulong **)pDVar40 = puVar43;
            }
            else {
              lVar16 = (long)puVar43 - *(long *)local_1d0 >> 3;
              uVar24 = lVar16 * -0x5555555555555555 + 1;
              if (0x5555555 < uVar24) goto LAB_015d87f8;
              lVar38 = (long)*(ulong **)local_1f8 - *(long *)local_1d0 >> 3;
              uVar41 = lVar38 * 0x5555555555555556;
              if (uVar24 <= uVar41) {
                uVar24 = uVar41;
              }
              if (0x2aaaaa9 < (ulong)(lVar38 * -0x5555555555555555)) {
                uVar24 = 0x5555555;
              }
              if (uVar24 == 0) {
                lVar38 = 0;
              }
              else {
                uVar41 = uVar24 * 0x18;
                pZVar31 = *(Zone **)local_220;
                lVar38 = *(long *)(pZVar31 + 0x10);
                if (uVar41 < (ulong)(*(long *)(pZVar31 + 0x18) - lVar38) ||
                    uVar41 - (*(long *)(pZVar31 + 0x18) - lVar38) == 0) {
                  *(ulong *)(pZVar31 + 0x10) = lVar38 + uVar41;
                }
                else {
                  local_298 = pNVar18;
                  lVar38 = v8::internal::Zone::NewExpand(pZVar31,uVar41);
                  pNVar18 = local_298;
                }
              }
              uVar41 = *(ulong *)pDVar52;
              puVar55 = (ulong *)(lVar38 + lVar16 * 8);
              *(undefined1 *)(puVar55 + 1) = uVar53;
              *puVar55 = uVar41;
              puVar55[2] = 0;
              lVar32 = *(long *)local_1d0;
              puVar43 = puVar55 + 3;
              for (lVar16 = *(long *)local_1e0; lVar16 != lVar32; lVar16 = lVar16 + -0x18) {
                uVar42 = *(ulong *)(lVar16 + -0x10);
                uVar41 = *(ulong *)(lVar16 + -0x18);
                puVar55[-1] = *(ulong *)(lVar16 + -8);
                puVar55[-2] = uVar42;
                puVar55[-3] = uVar41;
                puVar55 = puVar55 + -3;
              }
              *(ulong **)local_1d0 = puVar55;
              *(ulong **)local_1e0 = puVar43;
              *(ulong *)local_1f8 = lVar38 + uVar24 * 0x18;
              pDVar40 = local_1e0;
            }
            lVar15 = lVar15 + 1;
          } while (lVar15 != lVar17);
          lVar17 = *(long *)local_1d0 + (long)pNVar18 * 0x18;
          param_1 = local_1f0;
        }
        pDVar65 = local_1e8;
        if (((byte)*local_200 & 1) == 0) {
          if ((byte)*local_200 >> 1 == 0) {
LAB_015cfc10:
            if (*(char *)(*(long *)local_1d8 + -0x78) == '\0') {
              uVar24 = 0;
              local_2b0 = (void *)0x0;
              uVar30 = (int)local_c8;
LAB_015d5a3c:
              pDVar65 = local_1e8;
              FUN_015df0f4(local_240,param_1,uVar24,local_2b0,local_c0,uVar30,local_1a0,lVar17);
            }
          }
        }
        else if (*(ulong *)local_208 == 0) goto LAB_015cfc10;
LAB_015d5a40:
        if (local_1a0 != local_210) {
LAB_015d5a50:
          free(local_1a0);
        }
        break;
      case 0x11:
        v8::internal::wasm::CallIndirectImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::
        CallIndirectImmediate
                  ((CallIndirectImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)&local_c8,
                   *(undefined4 *)(param_1 + 0x50),param_1,pbVar64);
        lVar17 = *(long *)(param_1 + 0x48);
        uVar37 = (ulong)((uint)local_b8 + 1);
        if (lVar17 == 0) goto LAB_015cda18;
        if ((ulong)(*(long *)(lVar17 + 0xc0) - *(long *)(lVar17 + 0xb8) >> 4) <=
            ((ulong)local_c8 & 0xffffffff)) goto LAB_015cda18;
        if (*(char *)(*(long *)(lVar17 + 0xb8) + ((ulong)local_c8 & 0xffffffff) * 0x10) == '\a') {
          uVar24 = (ulong)local_c8 >> 0x20;
          pbVar64 = *(byte **)(param_1 + 0x10);
          if ((ulong)(*(long *)(lVar17 + 0x60) - *(long *)(lVar17 + 0x58) >> 3) <= uVar24) {
            pbVar64 = pbVar64 + 1;
            pcVar20 = "invalid signature index: #%u";
            goto LAB_015d0084;
          }
          local_c0 = *(Node **)(*(long *)(lVar17 + 0x58) + uVar24 * 8);
          lVar17 = *(long *)pDVar40;
          uVar41 = (ulong)*(uint *)(*(long *)local_1d8 + -0x84);
          uVar24 = (lVar17 - *(long *)local_1d0 >> 3) * -0x5555555555555555;
          if (uVar24 < uVar41 || uVar24 - uVar41 == 0) {
            if (*(char *)(*(long *)local_1d8 + -0x78) == '\x02') {
              local_2b0 = (void *)0x0;
            }
            else {
              if (pbVar64 < *(byte **)pDVar65) {
                bVar4 = *pbVar64;
                uVar60 = (ushort)bVar4;
                uVar24 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                if ((uVar24 & 1) != 0) {
                  if (*(byte **)pDVar65 <= pbVar64 + 1) goto LAB_015d3c28;
                  uVar60 = CONCAT11(bVar4,pbVar64[1]);
                }
                pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
              }
              else {
LAB_015d3c28:
                pcVar20 = "<end>";
              }
              v8::internal::wasm::Decoder::errorf
                        ((uchar *)param_1,(char *)pbVar64,"%s found empty stack",pcVar20);
              local_2b0 = (void *)0x0;
            }
          }
          else {
            pbVar33 = *(byte **)(lVar17 + -0x18);
            bVar4 = *(byte *)(lVar17 + -0x10);
            local_2b0 = *(void **)(lVar17 + -8);
            *(undefined8 **)pDVar40 = (undefined8 *)(lVar17 + -0x18);
            if ((bVar4 != 1) && (bVar4 != 10)) {
              if (pbVar64 < *(byte **)pDVar65) {
                bVar7 = *pbVar64;
                uVar60 = (ushort)bVar7;
                uVar24 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                if ((uVar24 & 1) != 0) {
                  if (*(byte **)pDVar65 <= pbVar64 + 1) goto LAB_015d4524;
                  uVar60 = CONCAT11(bVar7,pbVar64[1]);
                }
                pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
              }
              else {
LAB_015d4524:
                pcVar20 = "<end>";
              }
              if (pbVar33 < *(byte **)pDVar65) {
                bVar7 = *pbVar33;
                uVar60 = (ushort)bVar7;
                uVar24 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                if ((uVar24 & 1) != 0) {
                  if (*(byte **)pDVar65 <= pbVar33 + 1) goto LAB_015d5408;
                  uVar60 = CONCAT11(bVar7,pbVar33[1]);
                }
                pcVar27 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
              }
              else {
LAB_015d5408:
                pcVar27 = "<end>";
              }
              if (bVar4 < 10) {
                pcVar21 = (&PTR_s_<stmt>_01cc9910)[(char)bVar4];
              }
              else {
                pcVar21 = "<unknown>";
              }
              v8::internal::wasm::Decoder::errorf
                        ((uchar *)param_1,(char *)pbVar33,
                         "%s[%d] expected type %s, found %s of type %s",pcVar20,0,"i32",pcVar27,
                         pcVar21);
            }
          }
          pNVar19 = local_c0;
          if (local_c0 == (Node *)0x0) {
            local_1a0 = local_210;
            local_198 = local_210;
            local_190 = local_238;
          }
          else {
            local_1a0 = local_210;
            local_198 = local_210;
            uVar57 = (uint)*(undefined8 *)(local_c0 + 8);
            lVar17 = (long)(int)uVar57;
            local_190 = local_238;
            if (8 < uVar57) {
              FUN_015de7a0(&local_1a0,lVar17);
            }
            local_198 = local_1a0 + lVar17 * 0x18;
            if (0 < (int)uVar57) {
              local_298 = pNVar19;
              lVar15 = (long)(int)uVar57 * 0x18;
              do {
                uVar57 = uVar57 - 1;
                lVar16 = *(long *)local_1e0;
                uVar41 = (ulong)*(uint *)(*(long *)local_1d8 + -0x84);
                bVar4 = *(byte *)(*(long *)(pNVar19 + 0x10) + *(long *)pNVar19 + lVar17 + -1);
                uVar24 = (lVar16 - *(long *)local_1d0 >> 3) * -0x5555555555555555;
                if (uVar24 < uVar41 || uVar24 - uVar41 == 0) {
                  if (*(char *)(*(long *)local_1d8 + -0x78) != '\x02') {
                    pbVar64 = *(byte **)pDVar52;
                    if (pbVar64 < *(byte **)local_1e8) {
                      bVar7 = *pbVar64;
                      uVar60 = (ushort)bVar7;
                      uVar24 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                      if ((uVar24 & 1) != 0) {
                        if (*(byte **)local_1e8 <= pbVar64 + 1) goto LAB_015d565c;
                        uVar60 = CONCAT11(bVar7,pbVar64[1]);
                      }
                      pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                    }
                    else {
LAB_015d565c:
                      pcVar20 = "<end>";
                    }
                    v8::internal::wasm::Decoder::errorf
                              ((uchar *)local_1f0,(char *)pbVar64,"%s found empty stack",pcVar20);
                  }
                  pbVar64 = *(byte **)pDVar52;
                  uVar70 = 0;
                  uVar54 = 10;
                }
                else {
                  pbVar64 = *(byte **)(lVar16 + -0x18);
                  uVar30 = *(undefined4 *)(lVar16 + -0xf);
                  uVar54 = (uint)*(byte *)(lVar16 + -0x10);
                  uStack_1b4 = (undefined3)((uint)*(undefined4 *)(lVar16 + -0xc) >> 8);
                  uVar70 = *(undefined8 *)(lVar16 + -8);
                  *(undefined8 **)local_1e0 = (undefined8 *)(lVar16 + -0x18);
                  uStack_1b8._3_1_ = (undefined1)((uint)uVar30 >> 0x18);
                  local_1b0._0_3_ = (undefined3)uVar30;
                  local_1b0._0_7_ =
                       CONCAT43(CONCAT31(uStack_1b4,uStack_1b8._3_1_),(undefined3)local_1b0);
                  uStack_1b8 = uVar30;
                }
                lVar17 = lVar17 + -1;
                if (uVar54 != bVar4) {
                  if ((bVar4 != 7 || uVar54 != 8) && (bVar4 != 6 || 2 < uVar54 - 7)) {
                    if ((bVar4 != 10) && ((uVar54 != 10 && (bVar4 != 9 || uVar54 != 8)))) {
                      pbVar33 = *(byte **)pDVar52;
                      if (pbVar33 < *(byte **)local_1e8) {
                        local_2a0 = (Node *)CONCAT44(local_2a0._4_4_,(uint)*pbVar33);
                        uVar24 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode();
                        uVar63 = (uint)local_2a0;
                        if ((uVar24 & 1) != 0) {
                          if (*(byte **)local_1e8 <= pbVar33 + 1) goto LAB_015d5744;
                          uVar63 = (uint)pbVar33[1] | ((uint)local_2a0 & 0xff) << 8;
                        }
                        pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar63);
                      }
                      else {
LAB_015d5744:
                        pcVar20 = "<end>";
                      }
                      pNVar19 = local_298;
                      if (bVar4 < 10) {
                        pcVar27 = (&PTR_s_<stmt>_01cc9818)[(char)bVar4];
                      }
                      else {
                        pcVar27 = "<unknown>";
                      }
                      if (pbVar64 < *(byte **)local_1e8) {
                        bVar4 = *pbVar64;
                        uVar60 = (ushort)bVar4;
                        local_2a0 = (Node *)pcVar20;
                        uVar24 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                        if ((uVar24 & 1) == 0) {
LAB_015d57e4:
                          pcVar21 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                        }
                        else {
                          if (pbVar64 + 1 < *(byte **)local_1e8) {
                            uVar60 = CONCAT11(bVar4,pbVar64[1]);
                            goto LAB_015d57e4;
                          }
                          pcVar21 = "<end>";
                        }
                        pcVar20 = (char *)local_2a0;
                        if (uVar54 < 0xb) goto LAB_015d5528;
LAB_015d5808:
                        pcVar28 = "<unknown>";
                      }
                      else {
                        pcVar21 = "<end>";
                        if (10 < uVar54) goto LAB_015d5808;
LAB_015d5528:
                        pcVar28 = (&PTR_s_<stmt>_01cc9868)[(char)(byte)uVar54];
                      }
                      v8::internal::wasm::Decoder::errorf
                                ((uchar *)local_1f0,(char *)pbVar64,
                                 "%s[%d] expected type %s, found %s of type %s",pcVar20,
                                 (ulong)uVar57,pcVar27,pcVar21,pcVar28);
                    }
                  }
                }
                *(byte **)(local_1a0 + lVar15 + -0x18) = pbVar64;
                local_1a0[lVar15 + -0x10] = (byte)uVar54;
                uVar30 = local_1b0._3_4_;
                *(undefined8 *)(local_1a0 + lVar15 + -8) = uVar70;
                *(undefined4 *)(local_1a0 + lVar15 + -0xc) = uVar30;
                *(undefined4 *)(local_1a0 + lVar15 + -0xf) = (undefined4)local_1b0;
                lVar15 = lVar15 + -0x18;
              } while (0 < lVar17);
            }
          }
          pNVar19 = local_c0;
          lVar17 = *(long *)local_c0;
          pDVar40 = local_1e0;
          if (lVar17 == 0) {
            lVar17 = 0;
          }
          else {
            puVar43 = *(ulong **)local_1e0;
            lVar15 = 0;
            pNVar18 = (Node *)(((long)puVar43 - *(long *)local_1d0 >> 3) * -0x5555555555555555);
            do {
              uVar53 = *(undefined1 *)(*(long *)(pNVar19 + 0x10) + lVar15);
              if (puVar43 < *(ulong **)local_1f8) {
                uVar24 = *(ulong *)pDVar52;
                *(undefined1 *)(puVar43 + 1) = uVar53;
                puVar43[2] = 0;
                *puVar43 = uVar24;
                puVar43 = (ulong *)(*(long *)pDVar40 + 0x18);
                *(ulong **)pDVar40 = puVar43;
              }
              else {
                lVar16 = (long)puVar43 - *(long *)local_1d0 >> 3;
                uVar24 = lVar16 * -0x5555555555555555 + 1;
                if (0x5555555 < uVar24) goto LAB_015d87f8;
                lVar38 = (long)*(ulong **)local_1f8 - *(long *)local_1d0 >> 3;
                uVar41 = lVar38 * 0x5555555555555556;
                if (uVar24 <= uVar41) {
                  uVar24 = uVar41;
                }
                if (0x2aaaaa9 < (ulong)(lVar38 * -0x5555555555555555)) {
                  uVar24 = 0x5555555;
                }
                if (uVar24 == 0) {
                  lVar38 = 0;
                }
                else {
                  uVar41 = uVar24 * 0x18;
                  pZVar31 = *(Zone **)local_220;
                  lVar38 = *(long *)(pZVar31 + 0x10);
                  if (uVar41 < (ulong)(*(long *)(pZVar31 + 0x18) - lVar38) ||
                      uVar41 - (*(long *)(pZVar31 + 0x18) - lVar38) == 0) {
                    *(ulong *)(pZVar31 + 0x10) = lVar38 + uVar41;
                  }
                  else {
                    local_298 = pNVar18;
                    lVar38 = v8::internal::Zone::NewExpand(pZVar31,uVar41);
                    pNVar18 = local_298;
                  }
                }
                uVar41 = *(ulong *)pDVar52;
                puVar55 = (ulong *)(lVar38 + lVar16 * 8);
                *(undefined1 *)(puVar55 + 1) = uVar53;
                *puVar55 = uVar41;
                puVar55[2] = 0;
                lVar32 = *(long *)local_1d0;
                puVar43 = puVar55 + 3;
                for (lVar16 = *(long *)local_1e0; lVar16 != lVar32; lVar16 = lVar16 + -0x18) {
                  uVar42 = *(ulong *)(lVar16 + -0x10);
                  uVar41 = *(ulong *)(lVar16 + -0x18);
                  puVar55[-1] = *(ulong *)(lVar16 + -8);
                  puVar55[-2] = uVar42;
                  puVar55[-3] = uVar41;
                  puVar55 = puVar55 + -3;
                }
                *(ulong **)local_1d0 = puVar55;
                *(ulong **)local_1e0 = puVar43;
                *(ulong *)local_1f8 = lVar38 + uVar24 * 0x18;
                pDVar40 = local_1e0;
              }
              lVar15 = lVar15 + 1;
            } while (lVar15 != lVar17);
            lVar17 = *(long *)local_1d0 + (long)pNVar18 * 0x18;
          }
          param_1 = local_1f0;
          pDVar65 = local_1e8;
          if (((byte)*local_200 & 1) == 0) {
            if ((byte)*local_200 >> 1 == 0) {
LAB_015d5a14:
              if (*(char *)(*(long *)local_1d8 + -0x78) == '\0') {
                uVar24 = (ulong)local_c8 & 0xffffffff;
                uVar30 = local_c8._4_4_;
                goto LAB_015d5a3c;
              }
            }
          }
          else if (*(ulong *)local_208 == 0) goto LAB_015d5a14;
          goto LAB_015d5a40;
        }
LAB_015ce68c:
        pcVar20 = "table of call_indirect must be of type funcref";
        goto LAB_015cda20;
      case 0x12:
        if (((byte)param_1[0x50] >> 3 & 1) == 0) {
LAB_015cca14:
          pcVar20 = "Invalid opcode (enable with --experimental-wasm-return_call)";
          goto LAB_015ccb40;
        }
        **(uint **)(param_1 + 0x58) = **(uint **)(param_1 + 0x58) | 8;
        local_c0 = (Node *)0x0;
        pbVar64 = (byte *)(*(long *)(param_1 + 0x10) + 1);
        if (pbVar64 < *(byte **)(param_1 + 0x18)) {
          uVar57 = *pbVar64 & 0x7f;
          uVar24 = (ulong)uVar57;
          if ((char)*pbVar64 < '\0') {
            uVar57 = v8::internal::wasm::Decoder::
                     read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                               (param_1,(uchar *)(*(long *)(param_1 + 0x10) + 2),local_258,
                                "function index",uVar57);
            uVar24 = (ulong)uVar57;
          }
          else {
            local_b8 = (long *)CONCAT44(local_b8._4_4_,1);
          }
        }
        else {
          local_b8 = (long *)((ulong)local_b8._4_4_ << 0x20);
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pbVar64,"expected %s","function index");
          uVar24 = 0;
        }
        local_c8 = (uint *)CONCAT44(local_c8._4_4_,(int)uVar24);
        lVar17 = *(long *)(param_1 + 0x48);
        pbVar64 = *(byte **)(param_1 + 0x10);
        uVar37 = (ulong)((uint)local_b8 + 1);
        if ((lVar17 == 0) ||
           ((ulong)(*(long *)(lVar17 + 0x90) - *(long *)(lVar17 + 0x88) >> 5) <= uVar24)) {
          pbVar64 = pbVar64 + 1;
          pcVar20 = "invalid function index: %u";
          goto LAB_015d0150;
        }
        local_c0 = *(Node **)(*(long *)(lVar17 + 0x88) + uVar24 * 0x20);
        if (local_c0 != (Node *)0x0) {
          lVar17 = **(long **)(param_1 + 0x60);
          if (lVar17 == *(long *)local_c0) {
            if (lVar17 != 0) {
              pcVar27 = (char *)(*(long **)(param_1 + 0x60))[2];
              pcVar20 = *(char **)(local_c0 + 0x10);
              do {
                if (*pcVar27 != *pcVar20) goto LAB_015cfeac;
                lVar17 = lVar17 + -1;
                pcVar20 = pcVar20 + 1;
                pcVar27 = pcVar27 + 1;
              } while (lVar17 != 0);
            }
            uVar57 = (uint)*(undefined8 *)(local_c0 + 8);
            lVar17 = (long)(int)uVar57;
            local_1a0 = local_210;
            local_198 = local_210;
            local_190 = local_238;
            local_298 = local_c0;
            if (8 < uVar57) {
              FUN_015de7a0(&local_1a0,lVar17);
            }
            local_198 = local_1a0 + lVar17 * 0x18;
            if (0 < (int)uVar57) {
              pNVar19 = local_298;
              lVar15 = (long)(int)uVar57 * 0x18;
              do {
                uVar57 = uVar57 - 1;
                lVar16 = *(long *)pDVar40;
                uVar41 = (ulong)*(uint *)(*(long *)local_1d8 + -0x84);
                bVar4 = *(byte *)(*(long *)(pNVar19 + 0x10) + *(long *)pNVar19 + lVar17 + -1);
                uVar24 = (lVar16 - *(long *)local_1d0 >> 3) * -0x5555555555555555;
                if (uVar24 < uVar41 || uVar24 - uVar41 == 0) {
                  if (*(char *)(*(long *)local_1d8 + -0x78) != '\x02') {
                    pbVar64 = *(byte **)pDVar52;
                    if (pbVar64 < *(byte **)local_1e8) {
                      bVar7 = *pbVar64;
                      uVar60 = (ushort)bVar7;
                      uVar24 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                      if ((uVar24 & 1) != 0) {
                        if (*(byte **)local_1e8 <= pbVar64 + 1) goto LAB_015d1140;
                        uVar60 = CONCAT11(bVar7,pbVar64[1]);
                      }
                      pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                    }
                    else {
LAB_015d1140:
                      pcVar20 = "<end>";
                    }
                    v8::internal::wasm::Decoder::errorf
                              ((uchar *)param_1,(char *)pbVar64,"%s found empty stack",pcVar20);
                    pNVar19 = local_298;
                  }
                  pbVar64 = *(byte **)pDVar52;
                  uVar70 = 0;
                  uVar54 = 10;
                }
                else {
                  pbVar64 = *(byte **)(lVar16 + -0x18);
                  uVar30 = *(undefined4 *)(lVar16 + -0xf);
                  uVar54 = (uint)*(byte *)(lVar16 + -0x10);
                  uStack_1b4 = (undefined3)((uint)*(undefined4 *)(lVar16 + -0xc) >> 8);
                  uVar70 = *(undefined8 *)(lVar16 + -8);
                  *(undefined8 **)pDVar40 = (undefined8 *)(lVar16 + -0x18);
                  uStack_1b8._3_1_ = (undefined1)((uint)uVar30 >> 0x18);
                  local_1b0._0_3_ = (undefined3)uVar30;
                  local_1b0._0_7_ =
                       CONCAT43(CONCAT31(uStack_1b4,uStack_1b8._3_1_),(undefined3)local_1b0);
                  uStack_1b8 = uVar30;
                }
                lVar17 = lVar17 + -1;
                if (uVar54 != bVar4) {
                  if ((bVar4 != 7 || uVar54 != 8) && (bVar4 != 6 || 2 < uVar54 - 7)) {
                    if ((bVar4 != 10) && ((uVar54 != 10 && (bVar4 != 9 || uVar54 != 8)))) {
                      pbVar33 = *(byte **)pDVar52;
                      if (pbVar33 < *(byte **)local_1e8) {
                        local_2a0 = (Node *)CONCAT44(local_2a0._4_4_,(uint)*pbVar33);
                        uVar24 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode();
                        uVar63 = (uint)local_2a0;
                        if ((uVar24 & 1) != 0) {
                          if (*(byte **)local_1e8 <= pbVar33 + 1) goto LAB_015d122c;
                          uVar63 = (uint)pbVar33[1] | ((uint)local_2a0 & 0xff) << 8;
                        }
                        pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar63);
                      }
                      else {
LAB_015d122c:
                        pcVar20 = "<end>";
                      }
                      param_1 = local_1f0;
                      if (bVar4 < 10) {
                        pcVar27 = (&PTR_s_<stmt>_01cc9818)[(char)bVar4];
                      }
                      else {
                        pcVar27 = "<unknown>";
                      }
                      if (pbVar64 < *(byte **)local_1e8) {
                        bVar4 = *pbVar64;
                        uVar60 = (ushort)bVar4;
                        local_2a0 = (Node *)pcVar20;
                        uVar24 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                        if ((uVar24 & 1) == 0) {
LAB_015d12c8:
                          pcVar21 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                        }
                        else {
                          if (pbVar64 + 1 < *(byte **)local_1e8) {
                            uVar60 = CONCAT11(bVar4,pbVar64[1]);
                            goto LAB_015d12c8;
                          }
                          pcVar21 = "<end>";
                        }
                        pcVar20 = (char *)local_2a0;
                        if (uVar54 < 0xb) goto LAB_015d1000;
LAB_015d12e8:
                        pcVar28 = "<unknown>";
                      }
                      else {
                        pcVar21 = "<end>";
                        if (10 < uVar54) goto LAB_015d12e8;
LAB_015d1000:
                        pcVar28 = (&PTR_s_<stmt>_01cc9868)[(char)(byte)uVar54];
                      }
                      v8::internal::wasm::Decoder::errorf
                                ((uchar *)param_1,(char *)pbVar64,
                                 "%s[%d] expected type %s, found %s of type %s",pcVar20,
                                 (ulong)uVar57,pcVar27,pcVar21,pcVar28);
                      pNVar19 = local_298;
                    }
                  }
                }
                *(byte **)(local_1a0 + lVar15 + -0x18) = pbVar64;
                local_1a0[lVar15 + -0x10] = (byte)uVar54;
                uVar30 = local_1b0._3_4_;
                *(undefined8 *)(local_1a0 + lVar15 + -8) = uVar70;
                *(undefined4 *)(local_1a0 + lVar15 + -0xc) = uVar30;
                *(undefined4 *)(local_1a0 + lVar15 + -0xf) = (undefined4)local_1b0;
                pDVar40 = local_1e0;
                lVar15 = lVar15 + -0x18;
              } while (0 < lVar17);
            }
            pDVar65 = local_1e8;
            if (((byte)*local_200 & 1) == 0) {
              uVar24 = (ulong)((byte)*local_200 >> 1);
            }
            else {
              uVar24 = *(ulong *)local_208;
            }
            if ((uVar24 == 0) && (*(char *)(*(long *)local_1d8 + -0x78) == '\0')) {
              FUN_015df2d0(local_240,param_1,0,0,local_c0,(ulong)local_c8 & 0xffffffff,local_1a0);
            }
            lVar16 = *(long *)(param_1 + 0xd8);
            lVar17 = *(long *)(param_1 + 0xb0);
            lVar15 = *(long *)(param_1 + 0xb8);
LAB_015d3370:
            uVar57 = *(uint *)(lVar16 + -0x84);
            goto LAB_015d535c;
          }
        }
LAB_015cfeac:
        uVar70 = v8::internal::wasm::WasmOpcodes::OpcodeName(bVar4);
        v8::internal::wasm::Decoder::errorf
                  ((uchar *)param_1,(char *)pbVar64,"%s: %s",uVar70,
                   "tail call return types mismatch");
        break;
      case 0x13:
        if (((byte)param_1[0x50] >> 3 & 1) == 0) goto LAB_015cca14;
        **(uint **)(param_1 + 0x58) = **(uint **)(param_1 + 0x58) | 8;
        v8::internal::wasm::CallIndirectImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::
        CallIndirectImmediate
                  ((CallIndirectImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)&local_c8,
                   *(undefined4 *)(param_1 + 0x50),param_1,*(undefined8 *)(param_1 + 0x10));
        lVar17 = *(long *)(param_1 + 0x48);
        uVar37 = (ulong)((uint)local_b8 + 1);
        if (lVar17 != 0) {
          if (((ulong)local_c8 & 0xffffffff) <
              (ulong)(*(long *)(lVar17 + 0xc0) - *(long *)(lVar17 + 0xb8) >> 4)) {
            if (*(char *)(*(long *)(lVar17 + 0xb8) + ((ulong)local_c8 & 0xffffffff) * 0x10) != '\a')
            goto LAB_015ce68c;
            pbVar64 = *(byte **)(param_1 + 0x10);
            if ((ulong)(*(long *)(lVar17 + 0x60) - *(long *)(lVar17 + 0x58) >> 3) <=
                (ulong)local_c8 >> 0x20) {
              v8::internal::wasm::Decoder::errorf
                        ((uchar *)param_1,(char *)(pbVar64 + 1),"invalid signature index: #%u");
              break;
            }
            local_c0 = *(Node **)(*(long *)(lVar17 + 0x58) + ((ulong)local_c8 >> 0x20) * 8);
            if (local_c0 != (Node *)0x0) {
              lVar17 = **(long **)(param_1 + 0x60);
              if (lVar17 == *(long *)local_c0) {
                if (lVar17 != 0) {
                  pcVar27 = (char *)(*(long **)(param_1 + 0x60))[2];
                  pcVar20 = *(char **)(local_c0 + 0x10);
                  do {
                    if (*pcVar27 != *pcVar20) goto LAB_015cfeac;
                    lVar17 = lVar17 + -1;
                    pcVar20 = pcVar20 + 1;
                    pcVar27 = pcVar27 + 1;
                  } while (lVar17 != 0);
                }
                lVar17 = *(long *)pDVar40;
                uVar41 = (ulong)*(uint *)(*(long *)local_1d8 + -0x84);
                uVar24 = (lVar17 - *(long *)local_1d0 >> 3) * -0x5555555555555555;
                if (uVar24 < uVar41 || uVar24 - uVar41 == 0) {
                  if (*(char *)(*(long *)local_1d8 + -0x78) == '\x02') {
                    local_2b0 = (void *)0x0;
                  }
                  else {
                    if (pbVar64 < *(byte **)pDVar65) {
                      bVar4 = *pbVar64;
                      uVar24 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(bVar4);
                      if ((uVar24 & 1) == 0) {
                        pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(bVar4);
                      }
                      else if (pbVar64 + 1 < *(byte **)pDVar65) {
                        pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName
                                                    (CONCAT11(bVar4,pbVar64[1]));
                        param_1 = local_1f0;
                      }
                      else {
                        pcVar20 = "<end>";
                        param_1 = local_1f0;
                      }
                    }
                    else {
                      pcVar20 = "<end>";
                    }
                    v8::internal::wasm::Decoder::errorf
                              ((uchar *)param_1,(char *)pbVar64,"%s found empty stack",pcVar20);
                    local_2b0 = (void *)0x0;
                  }
                }
                else {
                  pbVar33 = *(byte **)(lVar17 + -0x18);
                  bVar4 = *(byte *)(lVar17 + -0x10);
                  local_2b0 = *(void **)(lVar17 + -8);
                  *(undefined8 **)pDVar40 = (undefined8 *)(lVar17 + -0x18);
                  if ((bVar4 != 1) && (bVar4 != 10)) {
                    if (pbVar64 < *(byte **)pDVar65) {
                      bVar7 = *pbVar64;
                      uVar60 = (ushort)bVar7;
                      uVar24 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                      if ((uVar24 & 1) != 0) {
                        if (*(byte **)local_1e8 <= pbVar64 + 1) goto LAB_015d6cd4;
                        uVar60 = CONCAT11(bVar7,pbVar64[1]);
                      }
                      pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                    }
                    else {
LAB_015d6cd4:
                      pcVar20 = "<end>";
                    }
                    if (pbVar33 < *(byte **)local_1e8) {
                      bVar7 = *pbVar33;
                      uVar60 = (ushort)bVar7;
                      uVar24 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                      if ((uVar24 & 1) != 0) {
                        if (*(byte **)local_1e8 <= pbVar33 + 1) goto LAB_015d7470;
                        uVar60 = CONCAT11(bVar7,pbVar33[1]);
                      }
                      pcVar27 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                    }
                    else {
LAB_015d7470:
                      pcVar27 = "<end>";
                    }
                    if (bVar4 < 10) {
                      pcVar21 = (&PTR_s_<stmt>_01cc9910)[(char)bVar4];
                    }
                    else {
                      pcVar21 = "<unknown>";
                    }
                    v8::internal::wasm::Decoder::errorf
                              ((uchar *)local_1f0,(char *)pbVar33,
                               "%s[%d] expected type %s, found %s of type %s",pcVar20,0,"i32",
                               pcVar27,pcVar21);
                  }
                }
                pNVar19 = local_c0;
                if (local_c0 == (Node *)0x0) {
                  local_1a0 = local_210;
                  local_198 = local_210;
                  local_190 = local_238;
                }
                else {
                  local_1a0 = local_210;
                  local_198 = local_210;
                  uVar57 = (uint)*(undefined8 *)(local_c0 + 8);
                  lVar17 = (long)(int)uVar57;
                  local_190 = local_238;
                  if (8 < uVar57) {
                    FUN_015de7a0(&local_1a0,lVar17);
                  }
                  local_198 = local_1a0 + lVar17 * 0x18;
                  if (0 < (int)uVar57) {
                    local_298 = pNVar19;
                    lVar15 = (long)(int)uVar57 * 0x18;
                    do {
                      uVar57 = uVar57 - 1;
                      lVar16 = *(long *)local_1e0;
                      uVar41 = (ulong)*(uint *)(*(long *)local_1d8 + -0x84);
                      bVar4 = *(byte *)(*(long *)(pNVar19 + 0x10) + *(long *)pNVar19 + lVar17 + -1);
                      uVar24 = (lVar16 - *(long *)local_1d0 >> 3) * -0x5555555555555555;
                      if (uVar24 < uVar41 || uVar24 - uVar41 == 0) {
                        if (*(char *)(*(long *)local_1d8 + -0x78) != '\x02') {
                          pbVar64 = *(byte **)pDVar52;
                          if (pbVar64 < *(byte **)local_1e8) {
                            bVar7 = *pbVar64;
                            uVar60 = (ushort)bVar7;
                            uVar24 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                            if ((uVar24 & 1) != 0) {
                              if (*(byte **)local_1e8 <= pbVar64 + 1) goto LAB_015d7abc;
                              uVar60 = CONCAT11(bVar7,pbVar64[1]);
                            }
                            pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                          }
                          else {
LAB_015d7abc:
                            pcVar20 = "<end>";
                          }
                          v8::internal::wasm::Decoder::errorf
                                    ((uchar *)local_1f0,(char *)pbVar64,"%s found empty stack",
                                     pcVar20);
                        }
                        pbVar64 = *(byte **)pDVar52;
                        uVar70 = 0;
                        uVar54 = 10;
                      }
                      else {
                        pbVar64 = *(byte **)(lVar16 + -0x18);
                        uVar30 = *(undefined4 *)(lVar16 + -0xf);
                        uVar54 = (uint)*(byte *)(lVar16 + -0x10);
                        uStack_1b4 = (undefined3)((uint)*(undefined4 *)(lVar16 + -0xc) >> 8);
                        uVar70 = *(undefined8 *)(lVar16 + -8);
                        *(undefined8 **)local_1e0 = (undefined8 *)(lVar16 + -0x18);
                        uStack_1b8._3_1_ = (undefined1)((uint)uVar30 >> 0x18);
                        local_1b0._0_3_ = (undefined3)uVar30;
                        local_1b0._0_7_ =
                             CONCAT43(CONCAT31(uStack_1b4,uStack_1b8._3_1_),(undefined3)local_1b0);
                        uStack_1b8 = uVar30;
                      }
                      lVar17 = lVar17 + -1;
                      if (uVar54 != bVar4) {
                        if ((bVar4 != 7 || uVar54 != 8) && (bVar4 != 6 || 2 < uVar54 - 7)) {
                          if ((bVar4 != 10) && ((uVar54 != 10 && (bVar4 != 9 || uVar54 != 8)))) {
                            pbVar33 = *(byte **)pDVar52;
                            if (pbVar33 < *(byte **)local_1e8) {
                              local_2a0 = (Node *)CONCAT44(local_2a0._4_4_,(uint)*pbVar33);
                              uVar24 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode();
                              uVar63 = (uint)local_2a0;
                              if ((uVar24 & 1) != 0) {
                                if (*(byte **)local_1e8 <= pbVar33 + 1) goto LAB_015d7ba4;
                                uVar63 = (uint)pbVar33[1] | ((uint)local_2a0 & 0xff) << 8;
                              }
                              pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar63);
                            }
                            else {
LAB_015d7ba4:
                              pcVar20 = "<end>";
                            }
                            pNVar19 = local_298;
                            if (bVar4 < 10) {
                              pcVar27 = (&PTR_s_<stmt>_01cc9818)[(char)bVar4];
                            }
                            else {
                              pcVar27 = "<unknown>";
                            }
                            if (pbVar64 < *(byte **)local_1e8) {
                              bVar4 = *pbVar64;
                              uVar60 = (ushort)bVar4;
                              local_2a0 = (Node *)pcVar20;
                              uVar24 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                              if ((uVar24 & 1) == 0) {
LAB_015d7c44:
                                pcVar21 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName
                                                            (uVar60);
                              }
                              else {
                                if (pbVar64 + 1 < *(byte **)local_1e8) {
                                  uVar60 = CONCAT11(bVar4,pbVar64[1]);
                                  goto LAB_015d7c44;
                                }
                                pcVar21 = "<end>";
                              }
                              pcVar20 = (char *)local_2a0;
                              if (uVar54 < 0xb) goto LAB_015d7988;
LAB_015d7c68:
                              pcVar28 = "<unknown>";
                            }
                            else {
                              pcVar21 = "<end>";
                              if (10 < uVar54) goto LAB_015d7c68;
LAB_015d7988:
                              pcVar28 = (&PTR_s_<stmt>_01cc9868)[(char)(byte)uVar54];
                            }
                            v8::internal::wasm::Decoder::errorf
                                      ((uchar *)local_1f0,(char *)pbVar64,
                                       "%s[%d] expected type %s, found %s of type %s",pcVar20,
                                       (ulong)uVar57,pcVar27,pcVar21,pcVar28);
                          }
                        }
                      }
                      *(byte **)(local_1a0 + lVar15 + -0x18) = pbVar64;
                      local_1a0[lVar15 + -0x10] = (byte)uVar54;
                      uVar30 = local_1b0._3_4_;
                      *(undefined8 *)(local_1a0 + lVar15 + -8) = uVar70;
                      *(undefined4 *)(local_1a0 + lVar15 + -0xc) = uVar30;
                      *(undefined4 *)(local_1a0 + lVar15 + -0xf) = (undefined4)local_1b0;
                      lVar15 = lVar15 + -0x18;
                    } while (0 < lVar17);
                  }
                }
                pDVar40 = local_1e0;
                param_1 = local_1f0;
                if (((byte)*local_200 & 1) == 0) {
                  uVar24 = (ulong)((byte)*local_200 >> 1);
                }
                else {
                  uVar24 = *(ulong *)local_208;
                }
                if ((uVar24 == 0) && (*(char *)(*(long *)local_1d8 + -0x78) == '\0')) {
                  FUN_015df2d0(local_240,local_1f0,(ulong)local_c8 & 0xffffffff,local_2b0,local_c0,
                               local_c8._4_4_,local_1a0);
                }
                lVar16 = *(long *)(param_1 + 0xd8);
                lVar17 = *(long *)(param_1 + 0xb0);
                lVar15 = *(long *)(param_1 + 0xb8);
                pDVar65 = local_1e8;
                goto LAB_015d3370;
              }
            }
            goto LAB_015cfeac;
          }
        }
LAB_015cda18:
        pcVar20 = "function table has to exist to execute call_indirect";
LAB_015cda20:
        v8::internal::wasm::Decoder::error(param_1,pcVar20);
        break;
      default:
        goto switchD_015cbf3c_caseD_14;
      case 0x1a:
        uVar24 = (ulong)*(uint *)(*(long *)local_1d8 + -0x84);
        uVar37 = (*(long *)pDVar40 - *(long *)local_1d0 >> 3) * -0x5555555555555555;
        if (uVar37 < uVar24 || uVar37 - uVar24 == 0) {
          if (*(char *)(*(long *)local_1d8 + -0x78) != '\x02') {
            uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(bVar4);
            if ((uVar37 & 1) == 0) {
LAB_015cd044:
              pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
            }
            else {
              if (pbVar64 + 1 < *(byte **)pDVar65) {
                uVar60 = CONCAT11(bVar4,pbVar64[1]);
                goto LAB_015cd044;
              }
              pcVar20 = "<end>";
            }
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pbVar64,"%s found empty stack",pcVar20);
          }
        }
        else {
          *(long *)pDVar40 = *(long *)pDVar40 + -0x18;
        }
        goto LAB_015cbf04;
      case 0x1b:
        lVar17 = *(long *)pDVar40;
        uVar24 = (ulong)*(uint *)(*(long *)local_1d8 + -0x84);
        uVar37 = (lVar17 - *(long *)local_1d0 >> 3) * -0x5555555555555555;
        if (uVar37 < uVar24 || uVar37 - uVar24 == 0) {
          if (*(char *)(*(long *)local_1d8 + -0x78) == '\x02') {
            pNVar19 = (Node *)0x0;
          }
          else {
            uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar57);
            if ((uVar37 & 1) == 0) {
LAB_015ce478:
              pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
            }
            else {
              if (pbVar64 + 1 < *(byte **)pDVar65) {
                uVar60 = CONCAT11(bVar4,pbVar64[1]);
                goto LAB_015ce478;
              }
              pcVar20 = "<end>";
            }
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pbVar64,"%s found empty stack",pcVar20);
            pNVar19 = (Node *)0x0;
          }
        }
        else {
          pbVar64 = *(byte **)(lVar17 + -0x18);
          bVar4 = *(byte *)(lVar17 + -0x10);
          pNVar19 = *(Node **)(lVar17 + -8);
          *(undefined8 **)pDVar40 = (undefined8 *)(lVar17 + -0x18);
          if ((bVar4 != 1) && (bVar4 != 10)) {
            pbVar33 = *(byte **)pDVar52;
            if (pbVar33 < *(byte **)pDVar65) {
              bVar7 = *pbVar33;
              uVar60 = (ushort)bVar7;
              uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
              if ((uVar37 & 1) != 0) {
                if (*(byte **)pDVar65 <= pbVar33 + 1) goto LAB_015cfc54;
                uVar60 = CONCAT11(bVar7,pbVar33[1]);
              }
              pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
            }
            else {
LAB_015cfc54:
              pcVar20 = "<end>";
            }
            if (pbVar64 < *(byte **)pDVar65) {
              bVar7 = *pbVar64;
              uVar60 = (ushort)bVar7;
              uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
              if ((uVar37 & 1) != 0) {
                if (*(byte **)pDVar65 <= pbVar64 + 1) {
                  pcVar27 = "<end>";
                  goto LAB_015d2390;
                }
                uVar60 = CONCAT11(bVar7,pbVar64[1]);
              }
              pcVar27 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
            }
            else {
              pcVar27 = "<end>";
            }
LAB_015d2390:
            pDVar40 = local_1e0;
            if (bVar4 < 10) {
              pcVar21 = (&PTR_s_<stmt>_01cc9910)[(char)bVar4];
            }
            else {
              pcVar21 = "<unknown>";
            }
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pbVar64,
                       "%s[%d] expected type %s, found %s of type %s",pcVar20,2,"i32",pcVar27,
                       pcVar21);
          }
        }
        lVar15 = *(long *)pDVar40;
        lVar16 = *(long *)local_1d8;
        lVar17 = *(long *)local_1d0;
        uVar37 = (lVar15 - lVar17 >> 3) * -0x5555555555555555;
        if (uVar37 < *(uint *)(lVar16 + -0x84) || uVar37 - *(uint *)(lVar16 + -0x84) == 0) {
          if (*(char *)(lVar16 + -0x78) != '\x02') {
            pbVar64 = *(byte **)pDVar52;
            if (pbVar64 < *(byte **)pDVar65) {
              bVar4 = *pbVar64;
              uVar60 = (ushort)bVar4;
              uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
              if ((uVar37 & 1) != 0) {
                if (*(byte **)pDVar65 <= pbVar64 + 1) goto LAB_015d2464;
                uVar60 = CONCAT11(bVar4,pbVar64[1]);
              }
              pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
            }
            else {
LAB_015d2464:
              pcVar20 = "<end>";
            }
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pbVar64,"%s found empty stack",pcVar20);
            lVar16 = *(long *)(param_1 + 0xd8);
            lVar17 = *(long *)(param_1 + 0xb0);
            lVar15 = *(long *)(param_1 + 0xb8);
          }
          pbVar64 = (byte *)0x0;
          uVar57 = 10;
        }
        else {
          uVar57 = (uint)*(byte *)(lVar15 + -0x10);
          pbVar64 = *(byte **)(lVar15 + -8);
          lVar15 = lVar15 + -0x18;
          *(long *)pDVar40 = lVar15;
        }
        uVar37 = (lVar15 - lVar17 >> 3) * -0x5555555555555555;
        if (uVar37 < *(uint *)(lVar16 + -0x84) || uVar37 - *(uint *)(lVar16 + -0x84) == 0) {
          if (*(char *)(lVar16 + -0x78) != '\x02') {
            pbVar33 = *(byte **)pDVar52;
            if (pbVar33 < *(byte **)pDVar65) {
              bVar4 = *pbVar33;
              uVar60 = (ushort)bVar4;
              uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
              if ((uVar37 & 1) != 0) {
                if (*(byte **)pDVar65 <= pbVar33 + 1) goto LAB_015d2528;
                uVar60 = CONCAT11(bVar4,pbVar33[1]);
              }
              pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
            }
            else {
LAB_015d2528:
              pcVar20 = "<end>";
            }
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)local_1f0,(char *)pbVar33,"%s found empty stack",pcVar20);
          }
          pbVar33 = *(byte **)pDVar52;
          pbVar69 = (byte *)0x0;
          uVar54 = 10;
          if (uVar57 != 10) goto LAB_015d2568;
        }
        else {
          pbVar33 = *(byte **)(lVar15 + -0x18);
          bVar4 = *(byte *)(lVar15 + -0x10);
          uVar54 = (uint)bVar4;
          pbVar69 = *(byte **)(lVar15 + -8);
          *(undefined8 **)pDVar40 = (undefined8 *)(lVar15 + -0x18);
          if (bVar4 != uVar57) {
LAB_015d2568:
            if ((uVar57 != 7 || uVar54 != 8) && (uVar57 != 6 || 2 < uVar54 - 7)) {
              if ((uVar57 != 10) && ((uVar54 != 10 && (uVar57 != 9 || uVar54 != 8)))) {
                pbVar66 = *(byte **)pDVar52;
                if (pbVar66 < *(byte **)pDVar65) {
                  bVar4 = *pbVar66;
                  uVar60 = (ushort)bVar4;
                  uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                  if ((uVar37 & 1) != 0) {
                    if (*(byte **)pDVar65 <= pbVar66 + 1) goto LAB_015d2600;
                    uVar60 = CONCAT11(bVar4,pbVar66[1]);
                  }
                  pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                  if (uVar57 < 10) goto LAB_015d2610;
LAB_015d2638:
                  pcVar27 = "<unknown>";
                }
                else {
LAB_015d2600:
                  pcVar20 = "<end>";
                  if (9 < uVar57) goto LAB_015d2638;
LAB_015d2610:
                  pcVar27 = (&PTR_s_<stmt>_01cc9818)[(char)uVar57];
                }
                if (pbVar33 < *(byte **)pDVar65) {
                  bVar4 = *pbVar33;
                  uVar60 = (ushort)bVar4;
                  uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                  if ((uVar37 & 1) == 0) {
LAB_015d26a4:
                    pcVar21 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                  }
                  else {
                    if (pbVar33 + 1 < *(byte **)local_1e8) {
                      uVar60 = CONCAT11(bVar4,pbVar33[1]);
                      goto LAB_015d26a4;
                    }
                    pcVar21 = "<end>";
                  }
                  pDVar65 = local_1e8;
                  if (uVar54 < 0xb) goto LAB_015d268c;
LAB_015d3518:
                  pcVar28 = "<unknown>";
                }
                else {
                  pcVar21 = "<end>";
                  if (10 < uVar54) goto LAB_015d3518;
LAB_015d268c:
                  pcVar28 = (&PTR_s_<stmt>_01cc9868)[(char)uVar54];
                }
                v8::internal::wasm::Decoder::errorf
                          ((uchar *)local_1f0,(char *)pbVar33,
                           "%s[%d] expected type %s, found %s of type %s",pcVar20,0,pcVar27,pcVar21,
                           pcVar28);
                pDVar40 = local_1e0;
              }
            }
          }
        }
        if (uVar54 != 10) {
          uVar57 = uVar54;
        }
        if ((uVar57 - 6 & 0xff) < 4) {
          pcVar20 = "select without type is only valid for value type inputs";
          param_1 = local_1f0;
          goto LAB_015d3568;
        }
        puVar43 = *(ulong **)pDVar40;
        if (puVar43 < *(ulong **)local_1f8) {
          uVar37 = *(ulong *)pDVar52;
          *(char *)(puVar43 + 1) = (char)uVar57;
          puVar43[2] = 0;
          *puVar43 = uVar37;
          puVar55 = *(ulong **)pDVar40;
          *(ulong **)pDVar40 = puVar55 + 3;
        }
        else {
          lVar17 = (long)puVar43 - *(long *)local_1d0 >> 3;
          uVar37 = lVar17 * -0x5555555555555555 + 1;
          if (0x5555555 < uVar37) goto LAB_015d87f8;
          lVar15 = (long)*(ulong **)local_1f8 - *(long *)local_1d0 >> 3;
          uVar24 = lVar15 * 0x5555555555555556;
          if (uVar37 <= uVar24) {
            uVar37 = uVar24;
          }
          if (0x2aaaaa9 < (ulong)(lVar15 * -0x5555555555555555)) {
            uVar37 = 0x5555555;
          }
          if (uVar37 == 0) {
            lVar15 = 0;
          }
          else {
            uVar24 = uVar37 * 0x18;
            pZVar31 = *(Zone **)local_220;
            lVar15 = *(long *)(pZVar31 + 0x10);
            if (uVar24 < (ulong)(*(long *)(pZVar31 + 0x18) - lVar15) ||
                uVar24 - (*(long *)(pZVar31 + 0x18) - lVar15) == 0) {
              *(ulong *)(pZVar31 + 0x10) = lVar15 + uVar24;
            }
            else {
              lVar15 = v8::internal::Zone::NewExpand(pZVar31,uVar24);
            }
          }
          uVar24 = *(ulong *)pDVar52;
          puVar55 = (ulong *)(lVar15 + lVar17 * 8);
          *(char *)(puVar55 + 1) = (char)uVar57;
          *puVar55 = uVar24;
          puVar55[2] = 0;
          lVar16 = *(long *)local_1d0;
          puVar43 = puVar55;
          for (lVar17 = *(long *)local_1e0; lVar17 != lVar16; lVar17 = lVar17 + -0x18) {
            uVar41 = *(ulong *)(lVar17 + -0x10);
            uVar24 = *(ulong *)(lVar17 + -0x18);
            puVar43[-1] = *(ulong *)(lVar17 + -8);
            puVar43[-2] = uVar41;
            puVar43[-3] = uVar24;
            puVar43 = puVar43 + -3;
          }
          *(ulong **)local_1d0 = puVar43;
          *(ulong **)local_1e0 = puVar55 + 3;
          *(ulong *)local_1f8 = lVar15 + uVar37 * 0x18;
          pDVar40 = local_1e0;
        }
        param_1 = local_1f0;
        if (((byte)*local_200 & 1) == 0) {
          if ((byte)*local_200 >> 1 == 0) {
LAB_015d36ec:
            if (*(char *)(*(long *)local_1d8 + -0x78) == '\0') {
              uVar70 = v8::internal::compiler::WasmGraphBuilder::BranchNoHint
                                 (*(WasmGraphBuilder **)(local_1f0 + 0x80),pNVar19,
                                  (Node **)&local_1c8,local_270);
              pDVar68 = local_240;
              FUN_015ddc44(local_240,param_1,uVar70);
              uVar70 = v8::internal::compiler::WasmGraphBuilder::Merge
                                 (*(WasmGraphBuilder **)(param_1 + 0x80),2,(Node **)&local_1c8);
              puVar22 = (undefined8 *)FUN_015ddc44(pDVar68,param_1,uVar70);
              pDVar40 = local_1e0;
              local_1a0 = pbVar69;
              local_198 = pbVar64;
              local_190 = puVar22;
              uVar70 = v8::internal::compiler::WasmGraphBuilder::Phi
                                 (*(WasmGraphBuilder **)(param_1 + 0x80),uVar54,2,&local_1a0);
              uVar37 = FUN_015ddc44(pDVar68,param_1,uVar70);
              puVar55[2] = uVar37;
              uVar37 = 1;
              *(undefined8 **)(*(long *)(param_1 + 0x78) + 8) = puVar22;
              break;
            }
          }
        }
        else if (*(ulong *)local_208 == 0) goto LAB_015d36ec;
        goto LAB_015cbf04;
      case 0x1c:
        if (((byte)param_1[0x50] >> 5 & 1) == 0) goto LAB_015ccb38;
        **(uint **)(param_1 + 0x58) = **(uint **)(param_1 + 0x58) | 0x20;
        v8::internal::wasm::SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::
        SelectTypeImmediate((SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)
                            &local_c8,param_1,*(uchar **)(param_1 + 0x10));
        if (((byte)param_1[0x30] & 1) == 0) {
          if ((byte)param_1[0x30] >> 1 == 0) {
LAB_015ce500:
            lVar17 = *(long *)pDVar40;
            uVar24 = (ulong)*(uint *)(*(long *)local_1d8 + -0x84);
            uVar37 = (lVar17 - *(long *)local_1d0 >> 3) * -0x5555555555555555;
            if (uVar37 < uVar24 || uVar37 - uVar24 == 0) {
              if (*(char *)(*(long *)local_1d8 + -0x78) == '\x02') {
                pNVar19 = (Node *)0x0;
              }
              else {
                pbVar64 = *(byte **)pDVar52;
                if (pbVar64 < *(byte **)pDVar65) {
                  bVar4 = *pbVar64;
                  uVar60 = (ushort)bVar4;
                  uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                  if ((uVar37 & 1) != 0) {
                    if (*(byte **)pDVar65 <= pbVar64 + 1) goto LAB_015d1da4;
                    uVar60 = CONCAT11(bVar4,pbVar64[1]);
                  }
                  pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                }
                else {
LAB_015d1da4:
                  pcVar20 = "<end>";
                }
                v8::internal::wasm::Decoder::errorf
                          ((uchar *)param_1,(char *)pbVar64,"%s found empty stack",pcVar20);
                pNVar19 = (Node *)0x0;
              }
            }
            else {
              pbVar64 = *(byte **)(lVar17 + -0x18);
              bVar4 = *(byte *)(lVar17 + -0x10);
              pNVar19 = *(Node **)(lVar17 + -8);
              *(undefined8 **)pDVar40 = (undefined8 *)(lVar17 + -0x18);
              if ((bVar4 != 1) && (bVar4 != 10)) {
                pbVar33 = *(byte **)pDVar52;
                if (pbVar33 < *(byte **)pDVar65) {
                  bVar7 = *pbVar33;
                  uVar60 = (ushort)bVar7;
                  uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                  if ((uVar37 & 1) != 0) {
                    if (*(byte **)pDVar65 <= pbVar33 + 1) goto LAB_015d2c8c;
                    uVar60 = CONCAT11(bVar7,pbVar33[1]);
                  }
                  pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                }
                else {
LAB_015d2c8c:
                  pcVar20 = "<end>";
                }
                if (pbVar64 < *(byte **)pDVar65) {
                  bVar7 = *pbVar64;
                  uVar60 = (ushort)bVar7;
                  uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                  if ((uVar37 & 1) != 0) {
                    if (*(byte **)pDVar65 <= pbVar64 + 1) {
                      pcVar27 = "<end>";
                      goto LAB_015d4d44;
                    }
                    uVar60 = CONCAT11(bVar7,pbVar64[1]);
                  }
                  pcVar27 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                }
                else {
                  pcVar27 = "<end>";
                }
LAB_015d4d44:
                pDVar40 = local_1e0;
                if (bVar4 < 10) {
                  pcVar21 = (&PTR_s_<stmt>_01cc9910)[(char)bVar4];
                }
                else {
                  pcVar21 = "<unknown>";
                }
                v8::internal::wasm::Decoder::errorf
                          ((uchar *)param_1,(char *)pbVar64,
                           "%s[%d] expected type %s, found %s of type %s",pcVar20,2,"i32",pcVar27,
                           pcVar21);
              }
            }
            lVar17 = *(long *)pDVar40;
            bVar4 = local_c8._4_1_;
            lVar15 = (long)(char)local_c8._4_1_;
            uVar24 = (ulong)*(uint *)(*(long *)local_1d8 + -0x84);
            uVar37 = (lVar17 - *(long *)local_1d0 >> 3) * -0x5555555555555555;
            if (uVar37 < uVar24 || uVar37 - uVar24 == 0) {
              if (*(char *)(*(long *)local_1d8 + -0x78) != '\x02') {
                pbVar64 = *(byte **)pDVar52;
                if (pbVar64 < *(byte **)pDVar65) {
                  bVar7 = *pbVar64;
                  uVar60 = (ushort)bVar7;
                  uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                  if ((uVar37 & 1) != 0) {
                    if (*(byte **)pDVar65 <= pbVar64 + 1) goto LAB_015d4e28;
                    uVar60 = CONCAT11(bVar7,pbVar64[1]);
                  }
                  pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                }
                else {
LAB_015d4e28:
                  pcVar20 = "<end>";
                }
                v8::internal::wasm::Decoder::errorf
                          ((uchar *)param_1,(char *)pbVar64,"%s found empty stack",pcVar20);
              }
              pbVar64 = *(byte **)pDVar52;
              pbVar33 = (byte *)0x0;
              uVar57 = 10;
              if (bVar4 != 10) goto LAB_015d4e68;
            }
            else {
              pbVar64 = *(byte **)(lVar17 + -0x18);
              bVar7 = *(byte *)(lVar17 + -0x10);
              uVar57 = (uint)bVar7;
              pbVar33 = *(byte **)(lVar17 + -8);
              *(undefined8 **)pDVar40 = (undefined8 *)(lVar17 + -0x18);
              if (bVar7 != local_c8._4_1_) {
LAB_015d4e68:
                if ((bVar4 != 7 || uVar57 != 8) && (bVar4 != 6 || 2 < uVar57 - 7)) {
                  if ((bVar4 != 10) && ((uVar57 != 10 && (bVar4 != 9 || uVar57 != 8)))) {
                    pbVar69 = *(byte **)pDVar52;
                    if (pbVar69 < *(byte **)local_1e8) {
                      bVar7 = *pbVar69;
                      uVar60 = (ushort)bVar7;
                      uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                      if ((uVar37 & 1) != 0) {
                        if (*(byte **)local_1e8 <= pbVar69 + 1) goto LAB_015d4f08;
                        uVar60 = CONCAT11(bVar7,pbVar69[1]);
                      }
                      pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                    }
                    else {
LAB_015d4f08:
                      pcVar20 = "<end>";
                    }
                    if (bVar4 < 10) {
                      pcVar27 = (&PTR_s_<stmt>_01cc9818)[lVar15];
                    }
                    else {
                      pcVar27 = "<unknown>";
                    }
                    if (pbVar64 < *(byte **)local_1e8) {
                      bVar4 = *pbVar64;
                      uVar60 = (ushort)bVar4;
                      uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                      if ((uVar37 & 1) != 0) {
                        if (*(byte **)local_1e8 <= pbVar64 + 1) goto LAB_015d4f84;
                        uVar60 = CONCAT11(bVar4,pbVar64[1]);
                      }
                      pcVar21 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                      if (uVar57 < 0xb) goto LAB_015d4f94;
LAB_015d4fbc:
                      pcVar28 = "<unknown>";
                    }
                    else {
LAB_015d4f84:
                      pcVar21 = "<end>";
                      if (10 < uVar57) goto LAB_015d4fbc;
LAB_015d4f94:
                      pcVar28 = (&PTR_s_<stmt>_01cc9868)[(char)uVar57];
                    }
                    v8::internal::wasm::Decoder::errorf
                              ((uchar *)local_1f0,(char *)pbVar64,
                               "%s[%d] expected type %s, found %s of type %s",pcVar20,1,pcVar27,
                               pcVar21,pcVar28);
                  }
                }
              }
            }
            pDVar40 = local_1e0;
            pDVar65 = local_1e8;
            bVar4 = local_c8._4_1_;
            lVar15 = (long)(char)local_c8._4_1_;
            lVar17 = *(long *)local_1e0;
            uVar24 = (ulong)*(uint *)(*(long *)local_1d8 + -0x84);
            uVar37 = (lVar17 - *(long *)local_1d0 >> 3) * -0x5555555555555555;
            if (uVar37 < uVar24 || uVar37 - uVar24 == 0) {
              if (*(char *)(*(long *)local_1d8 + -0x78) != '\x02') {
                pbVar64 = *(byte **)pDVar52;
                if (pbVar64 < *(byte **)local_1e8) {
                  bVar7 = *pbVar64;
                  uVar60 = (ushort)bVar7;
                  uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                  if ((uVar37 & 1) != 0) {
                    if (*(byte **)pDVar65 <= pbVar64 + 1) goto LAB_015d5088;
                    uVar60 = CONCAT11(bVar7,pbVar64[1]);
                  }
                  pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                }
                else {
LAB_015d5088:
                  pcVar20 = "<end>";
                }
                v8::internal::wasm::Decoder::errorf
                          ((uchar *)local_1f0,(char *)pbVar64,"%s found empty stack",pcVar20);
              }
              pbVar64 = *(byte **)pDVar52;
              pbVar69 = (byte *)0x0;
              uVar57 = 10;
              if (bVar4 != 10) goto LAB_015d50c8;
            }
            else {
              pbVar64 = *(byte **)(lVar17 + -0x18);
              bVar7 = *(byte *)(lVar17 + -0x10);
              uVar57 = (uint)bVar7;
              pbVar69 = *(byte **)(lVar17 + -8);
              *(undefined8 **)local_1e0 = (undefined8 *)(lVar17 + -0x18);
              if (bVar7 != local_c8._4_1_) {
LAB_015d50c8:
                if ((bVar4 != 7 || uVar57 != 8) && (bVar4 != 6 || 2 < uVar57 - 7)) {
                  if ((bVar4 != 10) && ((uVar57 != 10 && (bVar4 != 9 || uVar57 != 8)))) {
                    pbVar66 = *(byte **)pDVar52;
                    if (pbVar66 < *(byte **)pDVar65) {
                      bVar7 = *pbVar66;
                      uVar60 = (ushort)bVar7;
                      uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                      if ((uVar37 & 1) != 0) {
                        if (*(byte **)local_1e8 <= pbVar66 + 1) goto LAB_015d5168;
                        uVar60 = CONCAT11(bVar7,pbVar66[1]);
                      }
                      pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                    }
                    else {
LAB_015d5168:
                      pcVar20 = "<end>";
                    }
                    if (bVar4 < 10) {
                      pcVar27 = (&PTR_s_<stmt>_01cc9818)[lVar15];
                    }
                    else {
                      pcVar27 = "<unknown>";
                    }
                    if (pbVar64 < *(byte **)local_1e8) {
                      bVar4 = *pbVar64;
                      uVar60 = (ushort)bVar4;
                      uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                      if ((uVar37 & 1) == 0) {
LAB_015d520c:
                        pcVar21 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                      }
                      else {
                        if (pbVar64 + 1 < *(byte **)local_1e8) {
                          uVar60 = CONCAT11(bVar4,pbVar64[1]);
                          goto LAB_015d520c;
                        }
                        pcVar21 = "<end>";
                      }
                      if (uVar57 < 0xb) goto LAB_015d51f4;
LAB_015d5c78:
                      pcVar28 = "<unknown>";
                    }
                    else {
                      pcVar21 = "<end>";
                      if (10 < uVar57) goto LAB_015d5c78;
LAB_015d51f4:
                      pcVar28 = (&PTR_s_<stmt>_01cc9868)[(char)uVar57];
                    }
                    pDVar65 = local_1e8;
                    v8::internal::wasm::Decoder::errorf
                              ((uchar *)local_1f0,(char *)pbVar64,
                               "%s[%d] expected type %s, found %s of type %s",pcVar20,0,pcVar27,
                               pcVar21,pcVar28);
                    pDVar40 = local_1e0;
                  }
                }
              }
            }
            puVar43 = *(ulong **)pDVar40;
            uVar53 = local_c8._4_1_;
            if (puVar43 < *(ulong **)local_1f8) {
              uVar37 = *(ulong *)pDVar52;
              *(byte *)(puVar43 + 1) = local_c8._4_1_;
              puVar43[2] = 0;
              *puVar43 = uVar37;
              puVar62 = *(ulong **)pDVar40;
              puVar43 = puVar62 + 3;
            }
            else {
              lVar17 = (long)puVar43 - *(long *)local_1d0 >> 3;
              uVar37 = lVar17 * -0x5555555555555555 + 1;
              if (0x5555555 < uVar37) goto LAB_015d87f8;
              lVar15 = (long)*(ulong **)local_1f8 - *(long *)local_1d0 >> 3;
              uVar24 = lVar15 * 0x5555555555555556;
              if (uVar37 <= uVar24) {
                uVar37 = uVar24;
              }
              if (0x2aaaaa9 < (ulong)(lVar15 * -0x5555555555555555)) {
                uVar37 = 0x5555555;
              }
              if (uVar37 == 0) {
                lVar15 = 0;
              }
              else {
                uVar24 = uVar37 * 0x18;
                pZVar31 = *(Zone **)local_220;
                lVar15 = *(long *)(pZVar31 + 0x10);
                if (uVar24 < (ulong)(*(long *)(pZVar31 + 0x18) - lVar15) ||
                    uVar24 - (*(long *)(pZVar31 + 0x18) - lVar15) == 0) {
                  *(ulong *)(pZVar31 + 0x10) = lVar15 + uVar24;
                }
                else {
                  lVar15 = v8::internal::Zone::NewExpand(pZVar31,uVar24);
                }
              }
              uVar24 = *(ulong *)pDVar52;
              puVar62 = (ulong *)(lVar15 + lVar17 * 8);
              *(undefined1 *)(puVar62 + 1) = uVar53;
              *puVar62 = uVar24;
              puVar62[2] = 0;
              puVar43 = (ulong *)(lVar15 + uVar37 * 0x18);
              lVar15 = *(long *)local_1d0;
              puVar55 = puVar62;
              for (lVar17 = *(long *)local_1e0; lVar17 != lVar15; lVar17 = lVar17 + -0x18) {
                uVar24 = *(ulong *)(lVar17 + -0x10);
                uVar37 = *(ulong *)(lVar17 + -0x18);
                puVar55[-1] = *(ulong *)(lVar17 + -8);
                puVar55[-2] = uVar24;
                puVar55[-3] = uVar37;
                puVar55 = puVar55 + -3;
              }
              *(ulong **)local_1d0 = puVar55;
              *(ulong **)local_1e0 = puVar62 + 3;
              pDVar40 = local_1f8;
            }
            pDVar68 = local_1f0;
            *(ulong **)pDVar40 = puVar43;
            if (((byte)*local_200 & 1) == 0) {
              if ((byte)*local_200 >> 1 == 0) {
LAB_015d5e14:
                if (*(char *)(*(long *)local_1d8 + -0x78) == '\0') {
                  uVar70 = v8::internal::compiler::WasmGraphBuilder::BranchNoHint
                                     (*(WasmGraphBuilder **)(local_1f0 + 0x80),pNVar19,
                                      (Node **)&local_1c8,local_270);
                  pDVar40 = local_240;
                  FUN_015ddc44(local_240,pDVar68,uVar70);
                  uVar70 = v8::internal::compiler::WasmGraphBuilder::Merge
                                     (*(WasmGraphBuilder **)(pDVar68 + 0x80),2,(Node **)&local_1c8);
                  puVar22 = (undefined8 *)FUN_015ddc44(pDVar40,pDVar68,uVar70);
                  local_1a0 = pbVar69;
                  local_198 = pbVar33;
                  local_190 = puVar22;
                  uVar70 = v8::internal::compiler::WasmGraphBuilder::Phi
                                     (*(WasmGraphBuilder **)(pDVar68 + 0x80),uVar57,2,&local_1a0);
                  uVar37 = FUN_015ddc44(pDVar40,pDVar68,uVar70);
                  puVar62[2] = uVar37;
                  *(undefined8 **)(*(long *)(pDVar68 + 0x78) + 8) = puVar22;
                }
              }
            }
            else if (*(ulong *)local_208 == 0) goto LAB_015d5e14;
            uVar37 = (ulong)((int)local_c8 + 1);
            pDVar40 = local_1e0;
            param_1 = local_1f0;
            break;
          }
        }
        else if (*(ulong *)local_208 == 0) goto LAB_015ce500;
        goto LAB_015cbf04;
      case 0x20:
        local_1a0._0_5_ = (uint5)(uint)(float)local_1a0;
        pbVar33 = pbVar64 + 1;
        if (pbVar33 < *(byte **)pDVar65) {
          uVar57 = *pbVar33 & 0x7f;
          uVar37 = (ulong)uVar57;
          if ((char)*pbVar33 < '\0') {
            uVar57 = v8::internal::wasm::Decoder::
                     read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                               (param_1,pbVar64 + 2,local_250,"local index",uVar57);
            uVar37 = (ulong)uVar57;
          }
          else {
            local_198 = (byte *)CONCAT44(local_198._4_4_,1);
          }
        }
        else {
          local_198 = (byte *)((ulong)local_198._4_4_ << 0x20);
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pbVar33,"expected %s","local index");
          uVar37 = 0;
        }
        uVar70 = local_1a0;
        uVar57 = (uint)uVar37;
        local_1a0 = (byte *)CONCAT44(local_1a0._4_4_,uVar57);
        plVar34 = *(long **)(param_1 + 0x68);
        uVar24 = *(ulong *)(param_1 + 0x10);
        if (plVar34 != (long *)0x0) {
          uVar41 = plVar34[1] - *plVar34;
          if (uVar57 < (uint)uVar41) {
            if (uVar41 <= uVar37) goto LAB_015d87f8;
            uVar53 = *(undefined1 *)(*plVar34 + uVar37);
            local_1a0._5_3_ = SUB83(uVar70,5);
            local_1a0._0_5_ = CONCAT14(uVar53,uVar57);
            puVar43 = *(ulong **)pDVar40;
            if (puVar43 < *(ulong **)local_1f8) {
              *puVar43 = uVar24;
              *(undefined1 *)(puVar43 + 1) = uVar53;
              puVar43[2] = 0;
              puVar55 = *(ulong **)pDVar40;
              *(ulong **)pDVar40 = puVar55 + 3;
            }
            else {
              lVar17 = (long)puVar43 - *(long *)local_1d0 >> 3;
              uVar37 = lVar17 * -0x5555555555555555 + 1;
              if (0x5555555 < uVar37) goto LAB_015d87f8;
              lVar15 = (long)*(ulong **)local_1f8 - *(long *)local_1d0 >> 3;
              uVar41 = lVar15 * 0x5555555555555556;
              if (uVar37 <= uVar41) {
                uVar37 = uVar41;
              }
              if (0x2aaaaa9 < (ulong)(lVar15 * -0x5555555555555555)) {
                uVar37 = 0x5555555;
              }
              if (uVar37 == 0) {
                lVar15 = 0;
              }
              else {
                uVar24 = uVar37 * 0x18;
                pZVar31 = *(Zone **)local_220;
                lVar15 = *(long *)(pZVar31 + 0x10);
                if (uVar24 < (ulong)(*(long *)(pZVar31 + 0x18) - lVar15) ||
                    uVar24 - (*(long *)(pZVar31 + 0x18) - lVar15) == 0) {
                  *(ulong *)(pZVar31 + 0x10) = lVar15 + uVar24;
                }
                else {
                  lVar15 = v8::internal::Zone::NewExpand(pZVar31,uVar24);
                }
                uVar24 = *(ulong *)pDVar52;
              }
              puVar55 = (ulong *)(lVar15 + lVar17 * 8);
              *puVar55 = uVar24;
              *(undefined1 *)(puVar55 + 1) = uVar53;
              puVar55[2] = 0;
              lVar16 = *(long *)local_1d0;
              puVar43 = puVar55;
              for (lVar17 = *(long *)pDVar40; lVar17 != lVar16; lVar17 = lVar17 + -0x18) {
                uVar41 = *(ulong *)(lVar17 + -0x10);
                uVar24 = *(ulong *)(lVar17 + -0x18);
                puVar43[-1] = *(ulong *)(lVar17 + -8);
                puVar43[-2] = uVar41;
                puVar43[-3] = uVar24;
                puVar43 = puVar43 + -3;
              }
              *(ulong **)local_1d0 = puVar43;
              *(ulong **)pDVar40 = puVar55 + 3;
              *(ulong *)local_1f8 = lVar15 + uVar37 * 0x18;
            }
            if (((byte)*local_200 & 1) == 0) {
              if ((byte)*local_200 >> 1 == 0) {
LAB_015d0afc:
                if ((*(char *)(*(long *)local_1d8 + -0x78) == '\0') &&
                   (*(long *)(*(long *)local_240 + 0x30) != 0)) {
                  puVar55[2] = *(ulong *)(*(long *)(*(long *)local_240 + 0x30) +
                                         ((ulong)local_1a0 & 0xffffffff) * 8);
                }
              }
            }
            else if (*(ulong *)local_208 == 0) goto LAB_015d0afc;
            goto LAB_015d4430;
          }
        }
        pcVar20 = (char *)(uVar24 + 1);
        pcVar27 = "invalid local index: %u";
LAB_015d0694:
        v8::internal::wasm::Decoder::errorf((uchar *)param_1,pcVar20,pcVar27,uVar37);
        goto LAB_015cbf04;
      case 0x21:
        local_1a0._0_5_ = (uint5)(uint)(float)local_1a0;
        pbVar33 = pbVar64 + 1;
        if (pbVar33 < *(byte **)pDVar65) {
          uVar57 = *pbVar33 & 0x7f;
          uVar37 = (ulong)uVar57;
          if ((char)*pbVar33 < '\0') {
            uVar57 = v8::internal::wasm::Decoder::
                     read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                               (param_1,pbVar64 + 2,local_250,"local index",uVar57);
            uVar37 = (ulong)uVar57;
          }
          else {
            local_198 = (byte *)CONCAT44(local_198._4_4_,1);
          }
        }
        else {
          local_198 = (byte *)((ulong)local_198._4_4_ << 0x20);
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pbVar33,"expected %s","local index");
          uVar37 = 0;
        }
        uVar70 = local_1a0;
        uVar57 = (uint)uVar37;
        local_1a0 = (byte *)CONCAT44(local_1a0._4_4_,uVar57);
        plVar34 = *(long **)(param_1 + 0x68);
        pbVar64 = *(byte **)(param_1 + 0x10);
        if (plVar34 != (long *)0x0) {
          uVar24 = plVar34[1] - *plVar34;
          if (uVar57 < (uint)uVar24) {
            if (uVar24 <= uVar37) goto LAB_015d87f8;
            local_1a0._5_3_ = SUB83(uVar70,5);
            local_1a0._0_5_ = CONCAT14(*(undefined1 *)(*plVar34 + uVar37),uVar57);
            lVar17 = *(long *)(param_1 + 0xb8);
            bVar4 = *(byte *)(*(long *)(param_1 + 0x90) + uVar37);
            uVar37 = (ulong)*(uint *)(*(long *)(param_1 + 0xd8) + -0x84);
            uVar24 = (lVar17 - *(long *)(param_1 + 0xb0) >> 3) * -0x5555555555555555;
            if (uVar24 < uVar37 || uVar24 - uVar37 == 0) {
              pbVar33 = pbVar64;
              if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) != '\x02') {
                if (pbVar64 < *(byte **)pDVar65) {
                  bVar7 = *pbVar64;
                  uVar60 = (ushort)bVar7;
                  uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                  if ((uVar37 & 1) != 0) {
                    if (*(byte **)pDVar65 <= pbVar64 + 1) goto LAB_015d0dc0;
                    uVar60 = CONCAT11(bVar7,pbVar64[1]);
                  }
                  pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                }
                else {
LAB_015d0dc0:
                  pcVar20 = "<end>";
                }
                v8::internal::wasm::Decoder::errorf
                          ((uchar *)param_1,(char *)pbVar64,"%s found empty stack",pcVar20);
                pbVar33 = *(byte **)(param_1 + 0x10);
              }
              uVar37 = 0;
              uVar57 = 10;
              pbVar64 = pbVar33;
              if (bVar4 != 10) goto LAB_015d2db0;
            }
            else {
              pbVar33 = *(byte **)(lVar17 + -0x18);
              bVar7 = *(byte *)(lVar17 + -0x10);
              uVar57 = (uint)bVar7;
              uVar37 = *(ulong *)(lVar17 + -8);
              *(undefined8 **)local_1e0 = (undefined8 *)(lVar17 + -0x18);
              if (bVar7 != bVar4) {
LAB_015d2db0:
                if ((bVar4 != 7 || uVar57 != 8) && (bVar4 != 6 || 2 < uVar57 - 7)) {
                  if ((bVar4 != 10) && ((uVar57 != 10 && (bVar4 != 9 || uVar57 != 8)))) {
                    if (pbVar64 < *(byte **)local_1e8) {
                      bVar7 = *pbVar64;
                      uVar60 = (ushort)bVar7;
                      uVar24 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                      if ((uVar24 & 1) != 0) {
                        if (*(byte **)local_1e8 <= pbVar64 + 1) goto LAB_015d2e4c;
                        uVar60 = CONCAT11(bVar7,pbVar64[1]);
                      }
                      pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                    }
                    else {
LAB_015d2e4c:
                      pcVar20 = "<end>";
                    }
                    if (bVar4 < 10) {
                      pcVar27 = (&PTR_s_<stmt>_01cc9818)[(char)bVar4];
                    }
                    else {
                      pcVar27 = "<unknown>";
                    }
                    if (pbVar33 < *(byte **)local_1e8) {
                      bVar4 = *pbVar33;
                      uVar60 = (ushort)bVar4;
                      uVar24 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                      if ((uVar24 & 1) != 0) {
                        if (*(byte **)local_1e8 <= pbVar33 + 1) goto LAB_015d3fa8;
                        uVar60 = CONCAT11(bVar4,pbVar33[1]);
                      }
                      pcVar21 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                      if (uVar57 < 0xb) goto LAB_015d3fb8;
LAB_015d43b4:
                      pcVar28 = "<unknown>";
                    }
                    else {
LAB_015d3fa8:
                      pcVar21 = "<end>";
                      if (10 < uVar57) goto LAB_015d43b4;
LAB_015d3fb8:
                      pcVar28 = (&PTR_s_<stmt>_01cc9868)[(char)uVar57];
                    }
                    v8::internal::wasm::Decoder::errorf
                              ((uchar *)param_1,(char *)pbVar33,
                               "%s[%d] expected type %s, found %s of type %s",pcVar20,0,pcVar27,
                               pcVar21,pcVar28);
                  }
                }
              }
            }
            if (((byte)*local_200 & 1) == 0) {
              uVar24 = (ulong)((byte)*local_200 >> 1);
            }
            else {
              uVar24 = *(ulong *)local_208;
            }
            pDVar40 = local_1e0;
            pDVar65 = local_1e8;
            if ((uVar24 == 0) && (*(char *)(*(long *)local_1d8 + -0x78) == '\0')) {
LAB_015d4418:
              pDVar65 = local_1e8;
              if (*(long *)(*(long *)local_240 + 0x30) != 0) {
                *(ulong *)(*(long *)(*(long *)local_240 + 0x30) +
                          ((ulong)local_1a0 & 0xffffffff) * 8) = uVar37;
              }
            }
            goto LAB_015d4430;
          }
        }
        goto LAB_015cf294;
      case 0x22:
        local_1a0._0_5_ = (uint5)(uint)(float)local_1a0;
        pbVar33 = pbVar64 + 1;
        if (pbVar33 < *(byte **)pDVar65) {
          uVar57 = *pbVar33 & 0x7f;
          uVar37 = (ulong)uVar57;
          if ((char)*pbVar33 < '\0') {
            uVar57 = v8::internal::wasm::Decoder::
                     read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                               (param_1,pbVar64 + 2,local_250,"local index",uVar57);
            uVar37 = (ulong)uVar57;
          }
          else {
            local_198 = (byte *)CONCAT44(local_198._4_4_,1);
          }
        }
        else {
          local_198 = (byte *)((ulong)local_198._4_4_ << 0x20);
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pbVar33,"expected %s","local index");
          uVar37 = 0;
        }
        uVar70 = local_1a0;
        uVar57 = (uint)uVar37;
        local_1a0 = (byte *)CONCAT44(local_1a0._4_4_,uVar57);
        plVar34 = *(long **)(param_1 + 0x68);
        pbVar64 = *(byte **)(param_1 + 0x10);
        if (plVar34 != (long *)0x0) {
          uVar24 = plVar34[1] - *plVar34;
          if (uVar57 < (uint)uVar24) {
            if (uVar24 <= uVar37) goto LAB_015d87f8;
            local_1a0._5_3_ = SUB83(uVar70,5);
            local_1a0._0_5_ = CONCAT14(*(undefined1 *)(*plVar34 + uVar37),uVar57);
            lVar17 = *(long *)(param_1 + 0xb8);
            bVar4 = *(byte *)(*(long *)(param_1 + 0x90) + uVar37);
            uVar37 = (ulong)*(uint *)(*(long *)(param_1 + 0xd8) + -0x84);
            uVar24 = (lVar17 - *(long *)(param_1 + 0xb0) >> 3) * -0x5555555555555555;
            if (uVar24 < uVar37 || uVar24 - uVar37 == 0) {
              pbVar33 = pbVar64;
              if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) != '\x02') {
                if (pbVar64 < *(byte **)pDVar65) {
                  bVar7 = *pbVar64;
                  uVar60 = (ushort)bVar7;
                  uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                  if ((uVar37 & 1) != 0) {
                    if (*(byte **)pDVar65 <= pbVar64 + 1) goto LAB_015d0db4;
                    uVar60 = CONCAT11(bVar7,pbVar64[1]);
                  }
                  pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                }
                else {
LAB_015d0db4:
                  pcVar20 = "<end>";
                }
                v8::internal::wasm::Decoder::errorf
                          ((uchar *)param_1,(char *)pbVar64,"%s found empty stack",pcVar20);
                pbVar33 = *(byte **)(param_1 + 0x10);
              }
              uVar37 = 0;
              uVar57 = 10;
              pbVar64 = pbVar33;
              if (bVar4 != 10) goto LAB_015d2cd0;
            }
            else {
              pbVar33 = *(byte **)(lVar17 + -0x18);
              bVar7 = *(byte *)(lVar17 + -0x10);
              uVar57 = (uint)bVar7;
              uVar37 = *(ulong *)(lVar17 + -8);
              *(undefined8 **)local_1e0 = (undefined8 *)(lVar17 + -0x18);
              if (bVar7 != bVar4) {
LAB_015d2cd0:
                if ((bVar4 != 7 || uVar57 != 8) && (bVar4 != 6 || 2 < uVar57 - 7)) {
                  if ((bVar4 != 10) && ((uVar57 != 10 && (bVar4 != 9 || uVar57 != 8)))) {
                    if (pbVar64 < *(byte **)local_1e8) {
                      bVar7 = *pbVar64;
                      uVar60 = (ushort)bVar7;
                      uVar24 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                      if ((uVar24 & 1) != 0) {
                        if (*(byte **)local_1e8 <= pbVar64 + 1) goto LAB_015d2d6c;
                        uVar60 = CONCAT11(bVar7,pbVar64[1]);
                      }
                      pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                    }
                    else {
LAB_015d2d6c:
                      pcVar20 = "<end>";
                    }
                    if (bVar4 < 10) {
                      pcVar27 = (&PTR_s_<stmt>_01cc9818)[(char)bVar4];
                    }
                    else {
                      pcVar27 = "<unknown>";
                    }
                    if (pbVar33 < *(byte **)local_1e8) {
                      bVar4 = *pbVar33;
                      uVar60 = (ushort)bVar4;
                      uVar24 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                      if ((uVar24 & 1) != 0) {
                        if (*(byte **)local_1e8 <= pbVar33 + 1) goto LAB_015d3f14;
                        uVar60 = CONCAT11(bVar4,pbVar33[1]);
                      }
                      pcVar21 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                      if (uVar57 < 0xb) goto LAB_015d3f24;
LAB_015d41f4:
                      pcVar28 = "<unknown>";
                    }
                    else {
LAB_015d3f14:
                      pcVar21 = "<end>";
                      if (10 < uVar57) goto LAB_015d41f4;
LAB_015d3f24:
                      pcVar28 = (&PTR_s_<stmt>_01cc9868)[(char)uVar57];
                    }
                    v8::internal::wasm::Decoder::errorf
                              ((uchar *)param_1,(char *)pbVar33,
                               "%s[%d] expected type %s, found %s of type %s",pcVar20,0,pcVar27,
                               pcVar21,pcVar28);
                  }
                }
              }
            }
            pDVar40 = local_1e0;
            puVar43 = *(ulong **)local_1e0;
            if (puVar43 < *(ulong **)local_1f8) {
              uVar24 = *(ulong *)pDVar52;
              *(char *)(puVar43 + 1) = (char)uVar57;
              puVar43[2] = 0;
              *puVar43 = uVar24;
              puVar55 = *(ulong **)local_1e0;
              *(ulong **)local_1e0 = puVar55 + 3;
            }
            else {
              lVar17 = (long)puVar43 - *(long *)local_1d0 >> 3;
              uVar24 = lVar17 * -0x5555555555555555 + 1;
              if (0x5555555 < uVar24) goto LAB_015d87f8;
              lVar15 = (long)*(ulong **)local_1f8 - *(long *)local_1d0 >> 3;
              uVar41 = lVar15 * 0x5555555555555556;
              if (uVar24 <= uVar41) {
                uVar24 = uVar41;
              }
              if (0x2aaaaa9 < (ulong)(lVar15 * -0x5555555555555555)) {
                uVar24 = 0x5555555;
              }
              if (uVar24 == 0) {
                lVar15 = 0;
              }
              else {
                uVar41 = uVar24 * 0x18;
                pZVar31 = *(Zone **)local_220;
                lVar15 = *(long *)(pZVar31 + 0x10);
                if (uVar41 < (ulong)(*(long *)(pZVar31 + 0x18) - lVar15) ||
                    uVar41 - (*(long *)(pZVar31 + 0x18) - lVar15) == 0) {
                  *(ulong *)(pZVar31 + 0x10) = lVar15 + uVar41;
                }
                else {
                  lVar15 = v8::internal::Zone::NewExpand(pZVar31,uVar41);
                }
              }
              uVar41 = *(ulong *)pDVar52;
              puVar55 = (ulong *)(lVar15 + lVar17 * 8);
              *(char *)(puVar55 + 1) = (char)uVar57;
              *puVar55 = uVar41;
              puVar55[2] = 0;
              lVar16 = *(long *)local_1d0;
              puVar43 = puVar55;
              for (lVar17 = *(long *)pDVar40; lVar17 != lVar16; lVar17 = lVar17 + -0x18) {
                uVar42 = *(ulong *)(lVar17 + -0x10);
                uVar41 = *(ulong *)(lVar17 + -0x18);
                puVar43[-1] = *(ulong *)(lVar17 + -8);
                puVar43[-2] = uVar42;
                puVar43[-3] = uVar41;
                puVar43 = puVar43 + -3;
              }
              *(ulong **)local_1d0 = puVar43;
              *(ulong **)pDVar40 = puVar55 + 3;
              *(ulong *)local_1f8 = lVar15 + uVar24 * 0x18;
            }
            pDVar65 = local_1e8;
            if (((byte)*local_200 & 1) == 0) {
              if ((byte)*local_200 >> 1 == 0) {
LAB_015d4388:
                if (*(char *)(*(long *)local_1d8 + -0x78) == '\0') {
                  puVar55[2] = uVar37;
                  goto LAB_015d4418;
                }
              }
            }
            else if (*(ulong *)local_208 == 0) goto LAB_015d4388;
            goto LAB_015d4430;
          }
        }
LAB_015cf294:
        v8::internal::wasm::Decoder::errorf
                  ((uchar *)param_1,(char *)(pbVar64 + 1),"invalid local index: %u",uVar37);
LAB_015d3570:
        uVar37 = 1;
        break;
      case 0x23:
        local_1a0._0_5_ = (uint5)(uint)(float)local_1a0;
        local_198 = (byte *)0x0;
        pbVar33 = pbVar64 + 1;
        if (pbVar33 < *(byte **)pDVar65) {
          uVar57 = *pbVar33 & 0x7f;
          uVar37 = (ulong)uVar57;
          if ((char)*pbVar33 < '\0') {
            uVar57 = v8::internal::wasm::Decoder::
                     read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                               (param_1,pbVar64 + 2,local_260,"global index",uVar57);
            uVar37 = (ulong)uVar57;
          }
          else {
            local_190 = (undefined8 *)CONCAT44(local_190._4_4_,1);
          }
        }
        else {
          local_190 = (undefined8 *)((ulong)local_190._4_4_ << 0x20);
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pbVar33,"expected %s","global index");
          uVar37 = 0;
        }
        uVar70 = local_1a0;
        local_1a0 = (byte *)CONCAT44(local_1a0._4_4_,(int)uVar37);
        uVar57 = (uint)local_190;
        lVar17 = *(long *)(param_1 + 0x48);
        uVar24 = *(ulong *)(param_1 + 0x10);
        if ((lVar17 == 0) ||
           (lVar15 = *(long *)(lVar17 + 0x18),
           (ulong)(*(long *)(lVar17 + 0x20) - lVar15 >> 5) <= uVar37)) {
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)(uVar24 + 1),"invalid global index: %u",uVar37);
        }
        else {
          local_198 = (byte *)(lVar15 + uVar37 * 0x20);
          uVar53 = *(undefined1 *)(lVar15 + uVar37 * 0x20);
          local_1a0._5_3_ = SUB83(uVar70,5);
          local_1a0._0_5_ = CONCAT14(uVar53,(int)uVar37);
          puVar43 = *(ulong **)pDVar40;
          if (puVar43 < *(ulong **)local_1f8) {
            *puVar43 = uVar24;
            *(undefined1 *)(puVar43 + 1) = uVar53;
            puVar43[2] = 0;
            puVar55 = *(ulong **)pDVar40;
            *(ulong **)pDVar40 = puVar55 + 3;
          }
          else {
            lVar17 = (long)puVar43 - *(long *)local_1d0 >> 3;
            uVar37 = lVar17 * -0x5555555555555555 + 1;
            if (0x5555555 < uVar37) goto LAB_015d87f8;
            lVar15 = (long)*(ulong **)local_1f8 - *(long *)local_1d0 >> 3;
            uVar41 = lVar15 * 0x5555555555555556;
            if (uVar37 <= uVar41) {
              uVar37 = uVar41;
            }
            if (0x2aaaaa9 < (ulong)(lVar15 * -0x5555555555555555)) {
              uVar37 = 0x5555555;
            }
            if (uVar37 == 0) {
              lVar15 = 0;
            }
            else {
              uVar24 = uVar37 * 0x18;
              pZVar31 = *(Zone **)local_220;
              lVar15 = *(long *)(pZVar31 + 0x10);
              if (uVar24 < (ulong)(*(long *)(pZVar31 + 0x18) - lVar15) ||
                  uVar24 - (*(long *)(pZVar31 + 0x18) - lVar15) == 0) {
                *(ulong *)(pZVar31 + 0x10) = lVar15 + uVar24;
              }
              else {
                lVar15 = v8::internal::Zone::NewExpand(pZVar31,uVar24);
              }
              uVar24 = *(ulong *)pDVar52;
            }
            puVar55 = (ulong *)(lVar15 + lVar17 * 8);
            *puVar55 = uVar24;
            *(undefined1 *)(puVar55 + 1) = uVar53;
            puVar55[2] = 0;
            lVar16 = *(long *)local_1d0;
            puVar43 = puVar55;
            for (lVar17 = *(long *)local_1e0; lVar17 != lVar16; lVar17 = lVar17 + -0x18) {
              uVar41 = *(ulong *)(lVar17 + -0x10);
              uVar24 = *(ulong *)(lVar17 + -0x18);
              puVar43[-1] = *(ulong *)(lVar17 + -8);
              puVar43[-2] = uVar41;
              puVar43[-3] = uVar24;
              puVar43 = puVar43 + -3;
            }
            *(ulong **)local_1d0 = puVar43;
            *(ulong **)local_1e0 = puVar55 + 3;
            *(ulong *)local_1f8 = lVar15 + uVar37 * 0x18;
            pDVar40 = local_1e0;
          }
          if (((byte)*local_200 & 1) == 0) {
            if ((byte)*local_200 >> 1 == 0) {
LAB_015d0a24:
              if (*(char *)(*(long *)local_1d8 + -0x78) == '\0') {
                uVar70 = v8::internal::compiler::WasmGraphBuilder::GlobalGet
                                   (*(WasmGraphBuilder **)(param_1 + 0x80),(uint)(float)local_1a0);
                uVar37 = FUN_015ddc44(local_240,param_1,uVar70);
                puVar55[2] = uVar37;
              }
            }
          }
          else if (*(ulong *)local_208 == 0) goto LAB_015d0a24;
        }
        uVar37 = (ulong)(uVar57 + 1);
        break;
      case 0x24:
        local_1a0._0_5_ = (uint5)(uint)(float)local_1a0;
        local_198 = (byte *)0x0;
        pbVar33 = pbVar64 + 1;
        if (pbVar33 < *(byte **)pDVar65) {
          uVar57 = *pbVar33 & 0x7f;
          uVar24 = (ulong)uVar57;
          if ((char)*pbVar33 < '\0') {
            uVar57 = v8::internal::wasm::Decoder::
                     read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                               (param_1,pbVar64 + 2,local_260,"global index",uVar57);
            uVar24 = (ulong)uVar57;
          }
          else {
            local_190 = (undefined8 *)CONCAT44(local_190._4_4_,1);
          }
        }
        else {
          local_190 = (undefined8 *)((ulong)local_190._4_4_ << 0x20);
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pbVar33,"expected %s","global index");
          uVar24 = 0;
        }
        uVar70 = local_1a0;
        local_1a0 = (byte *)CONCAT44(local_1a0._4_4_,(int)uVar24);
        lVar17 = *(long *)(param_1 + 0x48);
        pbVar64 = *(byte **)(param_1 + 0x10);
        uVar37 = (ulong)((uint)local_190 + 1);
        if ((lVar17 == 0) ||
           ((ulong)(*(long *)(lVar17 + 0x20) - *(long *)(lVar17 + 0x18) >> 5) <= uVar24)) {
          pbVar64 = pbVar64 + 1;
          pcVar20 = "invalid global index: %u";
        }
        else {
          local_198 = (byte *)(*(long *)(lVar17 + 0x18) + uVar24 * 0x20);
          bVar4 = *local_198;
          local_1a0._5_3_ = SUB83(uVar70,5);
          local_1a0._0_5_ = CONCAT14(bVar4,(int)uVar24);
          if (local_198[1] != 0) {
            lVar17 = *(long *)pDVar40;
            uVar41 = (ulong)*(uint *)(*(long *)local_1d8 + -0x84);
            uVar24 = (lVar17 - *(long *)local_1d0 >> 3) * -0x5555555555555555;
            if (uVar24 < uVar41 || uVar24 - uVar41 == 0) {
              pbVar33 = pbVar64;
              if (*(char *)(*(long *)local_1d8 + -0x78) != '\x02') {
                if (pbVar64 < *(byte **)pDVar65) {
                  bVar7 = *pbVar64;
                  uVar60 = (ushort)bVar7;
                  uVar24 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                  if ((uVar24 & 1) != 0) {
                    if (*(byte **)pDVar65 <= pbVar64 + 1) goto LAB_015d1cb4;
                    uVar60 = CONCAT11(bVar7,pbVar64[1]);
                  }
                  pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                }
                else {
LAB_015d1cb4:
                  pcVar20 = "<end>";
                }
                v8::internal::wasm::Decoder::errorf
                          ((uchar *)param_1,(char *)pbVar64,"%s found empty stack",pcVar20);
                pbVar33 = *(byte **)(param_1 + 0x10);
              }
              pNVar19 = (Node *)0x0;
              uVar57 = 10;
              pbVar64 = pbVar33;
              if (bVar4 != 10) goto LAB_015d3b80;
            }
            else {
              pbVar33 = *(byte **)(lVar17 + -0x18);
              bVar7 = *(byte *)(lVar17 + -0x10);
              uVar57 = (uint)bVar7;
              pNVar19 = *(Node **)(lVar17 + -8);
              *(undefined8 **)pDVar40 = (undefined8 *)(lVar17 + -0x18);
              if (bVar7 != bVar4) {
LAB_015d3b80:
                if ((bVar4 != 7 || uVar57 != 8) && (bVar4 != 6 || 2 < uVar57 - 7)) {
                  if ((bVar4 != 10) && ((uVar57 != 10 && (bVar4 != 9 || uVar57 != 8)))) {
                    if (pbVar64 < *(byte **)local_1e8) {
                      bVar7 = *pbVar64;
                      uVar60 = (ushort)bVar7;
                      uVar24 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                      if ((uVar24 & 1) != 0) {
                        if (*(byte **)local_1e8 <= pbVar64 + 1) goto LAB_015d3c1c;
                        uVar60 = CONCAT11(bVar7,pbVar64[1]);
                      }
                      pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                    }
                    else {
LAB_015d3c1c:
                      pcVar20 = "<end>";
                    }
                    if (bVar4 < 10) {
                      pcVar27 = (&PTR_s_<stmt>_01cc9818)[(char)bVar4];
                    }
                    else {
                      pcVar27 = "<unknown>";
                    }
                    if (pbVar33 < *(byte **)local_1e8) {
                      bVar4 = *pbVar33;
                      uVar60 = (ushort)bVar4;
                      uVar24 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                      if ((uVar24 & 1) != 0) {
                        if (*(byte **)local_1e8 <= pbVar33 + 1) goto LAB_015d484c;
                        uVar60 = CONCAT11(bVar4,pbVar33[1]);
                      }
                      pcVar21 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                      if (uVar57 < 0xb) goto LAB_015d485c;
LAB_015d4884:
                      pcVar28 = "<unknown>";
                    }
                    else {
LAB_015d484c:
                      pcVar21 = "<end>";
                      if (10 < uVar57) goto LAB_015d4884;
LAB_015d485c:
                      pcVar28 = (&PTR_s_<stmt>_01cc9868)[(char)uVar57];
                    }
                    v8::internal::wasm::Decoder::errorf
                              ((uchar *)param_1,(char *)pbVar33,
                               "%s[%d] expected type %s, found %s of type %s",pcVar20,0,pcVar27,
                               pcVar21,pcVar28);
                    pDVar40 = local_1e0;
                  }
                }
              }
            }
            pDVar65 = local_1e8;
            if (((byte)*local_200 & 1) == 0) {
              uVar24 = (ulong)((byte)*local_200 >> 1);
            }
            else {
              uVar24 = *(ulong *)local_208;
            }
            if ((uVar24 == 0) && (*(char *)(*(long *)local_1d8 + -0x78) == '\0')) {
              uVar70 = v8::internal::compiler::WasmGraphBuilder::GlobalSet
                                 (*(WasmGraphBuilder **)(param_1 + 0x80),(uint)(float)local_1a0,
                                  pNVar19);
LAB_015d4c8c:
              FUN_015ddc44(local_240,param_1,uVar70);
            }
            break;
          }
          pcVar20 = "immutable global #%u cannot be assigned";
        }
LAB_015d0150:
        v8::internal::wasm::Decoder::errorf((uchar *)param_1,(char *)pbVar64,pcVar20,uVar24);
        break;
      case 0x25:
        if (((byte)param_1[0x50] >> 5 & 1) == 0) goto LAB_015ccb38;
        **(uint **)(param_1 + 0x58) = **(uint **)(param_1 + 0x58) | 0x20;
        local_1a0 = (byte *)0x100000000;
        pbVar64 = (byte *)(*(long *)(param_1 + 0x10) + 1);
        if (pbVar64 < *(byte **)(param_1 + 0x18)) {
          uVar57 = *pbVar64 & 0x7f;
          uVar37 = (ulong)uVar57;
          if ((char)*pbVar64 < '\0') {
            uVar57 = v8::internal::wasm::Decoder::
                     read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                               (param_1,(uchar *)(*(long *)(param_1 + 0x10) + 2),local_248,
                                "table index",uVar57);
            uVar37 = (ulong)uVar57;
          }
          else {
            local_1a0 = (byte *)0x100000000;
          }
        }
        else {
          local_1a0 = (byte *)0x0;
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pbVar64,"expected %s","table index");
          uVar37 = 0;
        }
        iVar12 = local_1a0._4_4_;
        local_1a0 = (byte *)CONCAT44(local_1a0._4_4_,(int)uVar37);
        lVar17 = *(long *)(param_1 + 0x48);
        pbVar64 = *(byte **)(param_1 + 0x10);
        if ((lVar17 == 0) ||
           ((ulong)(*(long *)(lVar17 + 0xc0) - *(long *)(lVar17 + 0xb8) >> 4) <= uVar37)) {
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pbVar64,"invalid table index: %u",uVar37);
        }
        else {
          lVar17 = *(long *)pDVar40;
          uVar24 = (ulong)*(uint *)(*(long *)local_1d8 + -0x84);
          uVar37 = (lVar17 - *(long *)local_1d0 >> 3) * -0x5555555555555555;
          if (uVar37 < uVar24 || uVar37 - uVar24 == 0) {
            if (*(char *)(*(long *)local_1d8 + -0x78) == '\x02') {
              pNVar19 = (Node *)0x0;
            }
            else {
              if (pbVar64 < *(byte **)pDVar65) {
                bVar4 = *pbVar64;
                uVar60 = (ushort)bVar4;
                uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                if ((uVar37 & 1) != 0) {
                  if (*(byte **)pDVar65 <= pbVar64 + 1) goto LAB_015d2378;
                  uVar60 = CONCAT11(bVar4,pbVar64[1]);
                }
                pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
              }
              else {
LAB_015d2378:
                pcVar20 = "<end>";
              }
              v8::internal::wasm::Decoder::errorf
                        ((uchar *)param_1,(char *)pbVar64,"%s found empty stack",pcVar20);
              pNVar19 = (Node *)0x0;
            }
          }
          else {
            pbVar33 = *(byte **)(lVar17 + -0x18);
            bVar4 = *(byte *)(lVar17 + -0x10);
            pNVar19 = *(Node **)(lVar17 + -8);
            *(undefined8 **)pDVar40 = (undefined8 *)(lVar17 + -0x18);
            if ((bVar4 != 1) && (bVar4 != 10)) {
              if (pbVar64 < *(byte **)pDVar65) {
                bVar7 = *pbVar64;
                uVar60 = (ushort)bVar7;
                uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                if ((uVar37 & 1) != 0) {
                  if (*(byte **)local_1e8 <= pbVar64 + 1) {
                    pcVar20 = "<end>";
                    pDVar40 = local_1e0;
                    goto LAB_015d5420;
                  }
                  uVar60 = CONCAT11(bVar7,pbVar64[1]);
                }
                pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                pDVar40 = local_1e0;
              }
              else {
                pcVar20 = "<end>";
              }
LAB_015d5420:
              if (pbVar33 < *(byte **)local_1e8) {
                bVar7 = *pbVar33;
                uVar60 = (ushort)bVar7;
                uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                if ((uVar37 & 1) != 0) {
                  if (*(byte **)local_1e8 <= pbVar33 + 1) {
                    pcVar27 = "<end>";
                    pDVar40 = local_1e0;
                    goto LAB_015d5a64;
                  }
                  uVar60 = CONCAT11(bVar7,pbVar33[1]);
                }
                pcVar27 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                pDVar40 = local_1e0;
              }
              else {
                pcVar27 = "<end>";
              }
LAB_015d5a64:
              pDVar65 = local_1e8;
              if (bVar4 < 10) {
                pcVar21 = (&PTR_s_<stmt>_01cc9910)[(char)bVar4];
              }
              else {
                pcVar21 = "<unknown>";
              }
              v8::internal::wasm::Decoder::errorf
                        ((uchar *)param_1,(char *)pbVar33,
                         "%s[%d] expected type %s, found %s of type %s",pcVar20,0,"i32",pcVar27,
                         pcVar21);
            }
          }
          puVar43 = *(ulong **)(param_1 + 0xb8);
          uVar53 = *(undefined1 *)
                    (*(long *)(*(long *)(param_1 + 0x48) + 0xb8) +
                    ((ulong)local_1a0 & 0xffffffff) * 0x10);
          if (puVar43 < *(ulong **)(param_1 + 0xc0)) {
            uVar37 = *(ulong *)pDVar52;
            *(undefined1 *)(puVar43 + 1) = uVar53;
            puVar43[2] = 0;
            *puVar43 = uVar37;
            puVar55 = *(ulong **)pDVar40;
            *(ulong **)pDVar40 = puVar55 + 3;
          }
          else {
            lVar17 = (long)puVar43 - *(long *)local_1d0 >> 3;
            uVar37 = lVar17 * -0x5555555555555555 + 1;
            if (0x5555555 < uVar37) goto LAB_015d87f8;
            lVar15 = (long)*(ulong **)(param_1 + 0xc0) - *(long *)local_1d0 >> 3;
            uVar24 = lVar15 * 0x5555555555555556;
            if (uVar37 <= uVar24) {
              uVar37 = uVar24;
            }
            if (0x2aaaaa9 < (ulong)(lVar15 * -0x5555555555555555)) {
              uVar37 = 0x5555555;
            }
            if (uVar37 == 0) {
              lVar15 = 0;
            }
            else {
              uVar24 = uVar37 * 0x18;
              pZVar31 = *(Zone **)local_220;
              lVar15 = *(long *)(pZVar31 + 0x10);
              if (uVar24 < (ulong)(*(long *)(pZVar31 + 0x18) - lVar15) ||
                  uVar24 - (*(long *)(pZVar31 + 0x18) - lVar15) == 0) {
                *(ulong *)(pZVar31 + 0x10) = lVar15 + uVar24;
              }
              else {
                lVar15 = v8::internal::Zone::NewExpand(pZVar31,uVar24);
              }
            }
            uVar24 = *(ulong *)pDVar52;
            puVar55 = (ulong *)(lVar15 + lVar17 * 8);
            *(undefined1 *)(puVar55 + 1) = uVar53;
            *puVar55 = uVar24;
            puVar55[2] = 0;
            lVar16 = *(long *)local_1d0;
            puVar43 = puVar55;
            for (lVar17 = *(long *)local_1e0; lVar17 != lVar16; lVar17 = lVar17 + -0x18) {
              uVar41 = *(ulong *)(lVar17 + -0x10);
              uVar24 = *(ulong *)(lVar17 + -0x18);
              puVar43[-1] = *(ulong *)(lVar17 + -8);
              puVar43[-2] = uVar41;
              puVar43[-3] = uVar24;
              puVar43 = puVar43 + -3;
            }
            *(ulong **)local_1d0 = puVar43;
            *(ulong **)local_1e0 = puVar55 + 3;
            *(ulong *)local_1f8 = lVar15 + uVar37 * 0x18;
            pDVar40 = local_1e0;
          }
          if (((byte)*local_200 & 1) == 0) {
            if ((byte)*local_200 >> 1 == 0) {
LAB_015d5c20:
              if (*(char *)(*(long *)local_1d8 + -0x78) == '\0') {
                uVar70 = v8::internal::compiler::WasmGraphBuilder::TableGet
                                   (*(WasmGraphBuilder **)(param_1 + 0x80),(uint)(float)local_1a0,
                                    pNVar19,*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8));
                uVar37 = FUN_015ddc44(local_240,param_1,uVar70);
                puVar55[2] = uVar37;
              }
            }
          }
          else if (*(ulong *)local_208 == 0) goto LAB_015d5c20;
        }
        uVar37 = (ulong)(iVar12 + 1);
        break;
      case 0x26:
        if (((byte)param_1[0x50] >> 5 & 1) == 0) goto LAB_015ccb38;
        **(uint **)(param_1 + 0x58) = **(uint **)(param_1 + 0x58) | 0x20;
        local_1a0 = (byte *)0x100000000;
        pbVar64 = (byte *)(*(long *)(param_1 + 0x10) + 1);
        if (pbVar64 < *(byte **)(param_1 + 0x18)) {
          uVar57 = *pbVar64 & 0x7f;
          uVar24 = (ulong)uVar57;
          if ((char)*pbVar64 < '\0') {
            uVar57 = v8::internal::wasm::Decoder::
                     read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                               (param_1,(uchar *)(*(long *)(param_1 + 0x10) + 2),local_248,
                                "table index",uVar57);
            uVar24 = (ulong)uVar57;
          }
          else {
            local_1a0 = (byte *)0x100000000;
          }
        }
        else {
          local_1a0 = (byte *)0x0;
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pbVar64,"expected %s","table index");
          uVar24 = 0;
        }
        local_1a0 = (byte *)CONCAT44(local_1a0._4_4_,(int)uVar24);
        lVar17 = *(long *)(param_1 + 0x48);
        pbVar64 = *(byte **)(param_1 + 0x10);
        uVar37 = (ulong)(local_1a0._4_4_ + 1);
        if ((lVar17 == 0) ||
           ((ulong)(*(long *)(lVar17 + 0xc0) - *(long *)(lVar17 + 0xb8) >> 4) <= uVar24)) {
          pcVar20 = "invalid table index: %u";
LAB_015d0084:
          v8::internal::wasm::Decoder::errorf((uchar *)param_1,(char *)pbVar64,pcVar20,uVar24);
          break;
        }
        bVar4 = *(byte *)(*(long *)(lVar17 + 0xb8) + uVar24 * 0x10);
        lVar17 = *(long *)pDVar40;
        uVar24 = (ulong)*(uint *)(*(long *)local_1d8 + -0x84);
        uVar41 = (lVar17 - *(long *)local_1d0 >> 3) * -0x5555555555555555;
        if (uVar41 < uVar24 || uVar41 - uVar24 == 0) {
          pbVar33 = pbVar64;
          if (*(char *)(*(long *)local_1d8 + -0x78) != '\x02') {
            if (pbVar64 < *(byte **)pDVar65) {
              bVar7 = *pbVar64;
              uVar60 = (ushort)bVar7;
              uVar24 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
              if ((uVar24 & 1) != 0) {
                if (*(byte **)pDVar65 <= pbVar64 + 1) goto LAB_015d236c;
                uVar60 = CONCAT11(bVar7,pbVar64[1]);
              }
              pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
            }
            else {
LAB_015d236c:
              pcVar20 = "<end>";
            }
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pbVar64,"%s found empty stack",pcVar20);
            pbVar33 = *(byte **)(param_1 + 0x10);
          }
          pNVar19 = (Node *)0x0;
          uVar57 = 10;
          pbVar64 = pbVar33;
          if (bVar4 != 10) goto LAB_015d3dd4;
        }
        else {
          pbVar33 = *(byte **)(lVar17 + -0x18);
          bVar7 = *(byte *)(lVar17 + -0x10);
          uVar57 = (uint)bVar7;
          pNVar19 = *(Node **)(lVar17 + -8);
          *(undefined8 **)pDVar40 = (undefined8 *)(lVar17 + -0x18);
          if (bVar7 != bVar4) {
LAB_015d3dd4:
            if ((bVar4 != 7 || uVar57 != 8) && (bVar4 != 6 || 2 < uVar57 - 7)) {
              if ((bVar4 != 10) && ((uVar57 != 10 && (bVar4 != 9 || uVar57 != 8)))) {
                if (pbVar64 < *(byte **)local_1e8) {
                  bVar7 = *pbVar64;
                  uVar60 = (ushort)bVar7;
                  uVar24 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                  if ((uVar24 & 1) != 0) {
                    if (*(byte **)local_1e8 <= pbVar64 + 1) goto LAB_015d3e70;
                    uVar60 = CONCAT11(bVar7,pbVar64[1]);
                  }
                  pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                }
                else {
LAB_015d3e70:
                  pcVar20 = "<end>";
                }
                if (bVar4 < 10) {
                  pcVar27 = (&PTR_s_<stmt>_01cc9818)[(char)bVar4];
                }
                else {
                  pcVar27 = "<unknown>";
                }
                if (pbVar33 < *(byte **)local_1e8) {
                  bVar4 = *pbVar33;
                  uVar60 = (ushort)bVar4;
                  uVar24 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                  if ((uVar24 & 1) != 0) {
                    if (*(byte **)local_1e8 <= pbVar33 + 1) goto LAB_015d49d0;
                    uVar60 = CONCAT11(bVar4,pbVar33[1]);
                  }
                  pcVar21 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                  if (uVar57 < 0xb) goto LAB_015d49e0;
LAB_015d4a08:
                  pcVar28 = "<unknown>";
                }
                else {
LAB_015d49d0:
                  pcVar21 = "<end>";
                  if (10 < uVar57) goto LAB_015d4a08;
LAB_015d49e0:
                  pcVar28 = (&PTR_s_<stmt>_01cc9868)[(char)uVar57];
                }
                v8::internal::wasm::Decoder::errorf
                          ((uchar *)param_1,(char *)pbVar33,
                           "%s[%d] expected type %s, found %s of type %s",pcVar20,1,pcVar27,pcVar21,
                           pcVar28);
                pDVar40 = local_1e0;
              }
            }
          }
        }
        pDVar65 = local_1e8;
        lVar17 = *(long *)pDVar40;
        uVar41 = (ulong)*(uint *)(*(long *)local_1d8 + -0x84);
        uVar24 = (lVar17 - *(long *)local_1d0 >> 3) * -0x5555555555555555;
        if (uVar24 < uVar41 || uVar24 - uVar41 == 0) {
          if (*(char *)(*(long *)local_1d8 + -0x78) == '\x02') {
            pNVar18 = (Node *)0x0;
          }
          else {
            pbVar64 = *(byte **)pDVar52;
            if (pbVar64 < *(byte **)local_1e8) {
              bVar4 = *pbVar64;
              uVar60 = (ushort)bVar4;
              uVar24 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
              if ((uVar24 & 1) != 0) {
                if (*(byte **)pDVar65 <= pbVar64 + 1) {
                  pcVar20 = "<end>";
                  goto LAB_015d4c20;
                }
                uVar60 = CONCAT11(bVar4,pbVar64[1]);
              }
              pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
            }
            else {
              pcVar20 = "<end>";
            }
LAB_015d4c20:
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pbVar64,"%s found empty stack",pcVar20);
            pNVar18 = (Node *)0x0;
          }
        }
        else {
          pbVar64 = *(byte **)(lVar17 + -0x18);
          bVar4 = *(byte *)(lVar17 + -0x10);
          pNVar18 = *(Node **)(lVar17 + -8);
          *(undefined8 **)pDVar40 = (undefined8 *)(lVar17 + -0x18);
          if ((bVar4 != 1) && (bVar4 != 10)) {
            pbVar33 = *(byte **)pDVar52;
            if (pbVar33 < *(byte **)local_1e8) {
              bVar7 = *pbVar33;
              uVar60 = (ushort)bVar7;
              uVar24 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
              if ((uVar24 & 1) != 0) {
                if (*(byte **)local_1e8 <= pbVar33 + 1) goto LAB_015d4b34;
                uVar60 = CONCAT11(bVar7,pbVar33[1]);
              }
              pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
            }
            else {
LAB_015d4b34:
              pcVar20 = "<end>";
            }
            if (pbVar64 < *(byte **)local_1e8) {
              bVar7 = *pbVar64;
              uVar60 = (ushort)bVar7;
              uVar24 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
              if ((uVar24 & 1) != 0) {
                if (*(byte **)local_1e8 <= pbVar64 + 1) goto LAB_015d4b9c;
                uVar60 = CONCAT11(bVar7,pbVar64[1]);
              }
              pcVar27 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
            }
            else {
LAB_015d4b9c:
              pcVar27 = "<end>";
            }
            pDVar65 = local_1e8;
            if (bVar4 < 10) {
              pcVar21 = (&PTR_s_<stmt>_01cc9910)[(char)bVar4];
            }
            else {
              pcVar21 = "<unknown>";
            }
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pbVar64,
                       "%s[%d] expected type %s, found %s of type %s",pcVar20,0,"i32",pcVar27,
                       pcVar21);
            pDVar40 = local_1e0;
          }
        }
        if (((byte)*local_200 & 1) == 0) {
          if ((byte)*local_200 >> 1 == 0) {
LAB_015d4c5c:
            if (*(char *)(*(long *)local_1d8 + -0x78) == '\0') {
              uVar70 = v8::internal::compiler::WasmGraphBuilder::TableSet
                                 (*(WasmGraphBuilder **)(param_1 + 0x80),(uint)(float)local_1a0,
                                  pNVar18,pNVar19,*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8));
              goto LAB_015d4c8c;
            }
          }
        }
        else if (*(ulong *)local_208 == 0) goto LAB_015d4c5c;
        break;
      case 0x28:
        uVar70 = 0;
        goto LAB_015ccbbc;
      case 0x29:
        uVar70 = 5;
        goto LAB_015ccbbc;
      case 0x2a:
        uVar70 = 0xc;
        goto LAB_015ccbbc;
      case 0x2b:
        uVar70 = 0xd;
        goto LAB_015ccbbc;
      case 0x2c:
        uVar70 = 1;
        goto LAB_015ccbbc;
      case 0x2d:
        uVar70 = 2;
        goto LAB_015ccbbc;
      case 0x2e:
        uVar70 = 3;
        goto LAB_015ccbbc;
      case 0x2f:
        uVar70 = 4;
        goto LAB_015ccbbc;
      case 0x30:
        uVar70 = 6;
        goto LAB_015ccbbc;
      case 0x31:
        uVar70 = 7;
        goto LAB_015ccbbc;
      case 0x32:
        uVar70 = 8;
        goto LAB_015ccbbc;
      case 0x33:
        uVar70 = 9;
        goto LAB_015ccbbc;
      case 0x34:
        uVar70 = 10;
        goto LAB_015ccbbc;
      case 0x35:
        uVar70 = 0xb;
LAB_015ccbbc:
        iVar12 = FUN_015d90fc(param_1,uVar70,0);
        uVar37 = (ulong)(iVar12 + 1);
        break;
      case 0x36:
        uVar70 = 0;
        goto LAB_015ccdf4;
      case 0x37:
        uVar70 = 3;
        goto LAB_015ccdf4;
      case 0x38:
        uVar70 = 7;
        goto LAB_015ccdf4;
      case 0x39:
        uVar70 = 8;
        goto LAB_015ccdf4;
      case 0x3a:
        uVar70 = 1;
        goto LAB_015ccdf4;
      case 0x3b:
        uVar70 = 2;
        goto LAB_015ccdf4;
      case 0x3c:
        uVar70 = 4;
        goto LAB_015ccdf4;
      case 0x3d:
        uVar70 = 5;
        goto LAB_015ccdf4;
      case 0x3e:
        uVar70 = 6;
LAB_015ccdf4:
        iVar12 = FUN_015d94e8(param_1,uVar70,0);
        uVar37 = (ulong)(iVar12 + 1);
        break;
      case 0x3f:
        if (*(char *)(*(long *)(param_1 + 0x48) + 0x12) == '\0') {
LAB_015cce60:
          pbVar64 = pbVar64 + -1;
          pcVar20 = "memory instruction with no memory";
          goto LAB_015cded0;
        }
        puVar1 = (uchar *)(*(ulong *)pDVar52 + 1);
        if ((*(uchar **)pDVar65 < puVar1) || ((int)*(uchar **)pDVar65 == (int)puVar1)) {
          v8::internal::wasm::Decoder::error(param_1,puVar1,"memory index");
        }
        else if (*puVar1 != '\0') {
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)puVar1,"expected memory index 0, found %u");
        }
        puVar43 = *(ulong **)pDVar40;
        if (puVar43 < *(ulong **)local_1f8) {
          uVar37 = *(ulong *)pDVar52;
          *(undefined1 *)(puVar43 + 1) = 1;
          puVar43[2] = 0;
          *puVar43 = uVar37;
          puVar55 = *(ulong **)pDVar40;
          *(ulong **)pDVar40 = puVar55 + 3;
        }
        else {
          lVar17 = (long)puVar43 - *(long *)local_1d0 >> 3;
          uVar37 = lVar17 * -0x5555555555555555 + 1;
          if (0x5555555 < uVar37) goto LAB_015d87f8;
          lVar15 = (long)*(ulong **)local_1f8 - *(long *)local_1d0 >> 3;
          uVar24 = lVar15 * 0x5555555555555556;
          if (uVar37 <= uVar24) {
            uVar37 = uVar24;
          }
          if (0x2aaaaa9 < (ulong)(lVar15 * -0x5555555555555555)) {
            uVar37 = 0x5555555;
          }
          if (uVar37 == 0) {
            lVar15 = 0;
          }
          else {
            uVar24 = uVar37 * 0x18;
            pZVar31 = *(Zone **)local_220;
            lVar15 = *(long *)(pZVar31 + 0x10);
            if (uVar24 < (ulong)(*(long *)(pZVar31 + 0x18) - lVar15) ||
                uVar24 - (*(long *)(pZVar31 + 0x18) - lVar15) == 0) {
              *(ulong *)(pZVar31 + 0x10) = lVar15 + uVar24;
            }
            else {
              lVar15 = v8::internal::Zone::NewExpand(pZVar31,uVar24);
            }
          }
          puVar55 = (ulong *)(lVar15 + lVar17 * 8);
          *puVar55 = *(ulong *)pDVar52;
          *(undefined1 *)(puVar55 + 1) = 1;
          puVar55[2] = 0;
          lVar16 = *(long *)local_1d0;
          puVar43 = puVar55;
          for (lVar17 = *(long *)pDVar40; lVar17 != lVar16; lVar17 = lVar17 + -0x18) {
            uVar41 = *(ulong *)(lVar17 + -0x10);
            uVar24 = *(ulong *)(lVar17 + -0x18);
            puVar43[-1] = *(ulong *)(lVar17 + -8);
            puVar43[-2] = uVar41;
            puVar43[-3] = uVar24;
            puVar43 = puVar43 + -3;
          }
          *(ulong **)local_1d0 = puVar43;
          *(ulong **)pDVar40 = puVar55 + 3;
          *(ulong *)local_1f8 = lVar15 + uVar37 * 0x18;
        }
        if (((byte)*local_200 & 1) == 0) {
          if ((byte)*local_200 >> 1 == 0) {
LAB_015cf9e4:
            if (*(char *)(*(long *)local_1d8 + -0x78) == '\0') {
              uVar70 = v8::internal::compiler::WasmGraphBuilder::CurrentMemoryPages
                                 (*(WasmGraphBuilder **)(param_1 + 0x80));
              uVar37 = FUN_015ddc44(local_240,param_1,uVar70);
              puVar55[2] = uVar37;
              uVar37 = 2;
              break;
            }
          }
        }
        else if (*(ulong *)local_208 == 0) goto LAB_015cf9e4;
        uVar37 = 2;
        break;
      case 0x40:
        if (*(char *)(*(long *)(param_1 + 0x48) + 0x12) == '\0') goto LAB_015cce60;
        puVar1 = (uchar *)(*(ulong *)pDVar52 + 1);
        if ((*(uchar **)pDVar65 < puVar1) || ((int)*(uchar **)pDVar65 == (int)puVar1)) {
          v8::internal::wasm::Decoder::error(param_1,puVar1,"memory index");
        }
        else if (*puVar1 != '\0') {
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)puVar1,"expected memory index 0, found %u");
        }
        if (*(char *)(*(long *)(param_1 + 0x48) + 0x178) != '\0') {
          pcVar20 = "grow_memory is not supported for asmjs modules";
          goto LAB_015ce06c;
        }
        lVar17 = *(long *)pDVar40;
        uVar24 = (ulong)*(uint *)(*(long *)local_1d8 + -0x84);
        uVar37 = (lVar17 - *(long *)local_1d0 >> 3) * -0x5555555555555555;
        if (uVar37 < uVar24 || uVar37 - uVar24 == 0) {
          if (*(char *)(*(long *)local_1d8 + -0x78) == '\x02') {
            pNVar19 = (Node *)0x0;
          }
          else {
            pbVar64 = *(byte **)pDVar52;
            if (pbVar64 < *(byte **)pDVar65) {
              bVar4 = *pbVar64;
              uVar60 = (ushort)bVar4;
              uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
              if ((uVar37 & 1) != 0) {
                if (*(byte **)pDVar65 <= pbVar64 + 1) goto LAB_015d141c;
                uVar60 = CONCAT11(bVar4,pbVar64[1]);
              }
              pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
            }
            else {
LAB_015d141c:
              pcVar20 = "<end>";
            }
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pbVar64,"%s found empty stack",pcVar20);
            pNVar19 = (Node *)0x0;
          }
        }
        else {
          pbVar64 = *(byte **)(lVar17 + -0x18);
          bVar4 = *(byte *)(lVar17 + -0x10);
          pNVar19 = *(Node **)(lVar17 + -8);
          *(undefined8 **)pDVar40 = (undefined8 *)(lVar17 + -0x18);
          if ((bVar4 != 1) && (bVar4 != 10)) {
            pbVar33 = *(byte **)pDVar52;
            if (pbVar33 < *(byte **)pDVar65) {
              bVar7 = *pbVar33;
              uVar60 = (ushort)bVar7;
              uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
              if ((uVar37 & 1) != 0) {
                if (*(byte **)pDVar65 <= pbVar33 + 1) goto LAB_015d2360;
                uVar60 = CONCAT11(bVar7,pbVar33[1]);
              }
              pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
            }
            else {
LAB_015d2360:
              pcVar20 = "<end>";
            }
            if (pbVar64 < *(byte **)pDVar65) {
              bVar7 = *pbVar64;
              uVar60 = (ushort)bVar7;
              uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
              if ((uVar37 & 1) != 0) {
                if (*(byte **)pDVar65 <= pbVar64 + 1) goto LAB_015d3d90;
                uVar60 = CONCAT11(bVar7,pbVar64[1]);
              }
              pcVar27 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
            }
            else {
LAB_015d3d90:
              pcVar27 = "<end>";
            }
            pDVar40 = local_1e0;
            if (bVar4 < 10) {
              pcVar21 = (&PTR_s_<stmt>_01cc9910)[(char)bVar4];
            }
            else {
              pcVar21 = "<unknown>";
            }
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pbVar64,
                       "%s[%d] expected type %s, found %s of type %s",pcVar20,0,"i32",pcVar27,
                       pcVar21);
          }
        }
        puVar43 = *(ulong **)pDVar40;
        if (puVar43 < *(ulong **)local_1f8) {
          uVar37 = *(ulong *)pDVar52;
          *(undefined1 *)(puVar43 + 1) = 1;
          puVar43[2] = 0;
          *puVar43 = uVar37;
          puVar55 = *(ulong **)pDVar40;
          *(ulong **)pDVar40 = puVar55 + 3;
        }
        else {
          lVar17 = (long)puVar43 - *(long *)local_1d0 >> 3;
          uVar37 = lVar17 * -0x5555555555555555 + 1;
          if (0x5555555 < uVar37) goto LAB_015d87f8;
          lVar15 = (long)*(ulong **)local_1f8 - *(long *)local_1d0 >> 3;
          uVar24 = lVar15 * 0x5555555555555556;
          if (uVar37 <= uVar24) {
            uVar37 = uVar24;
          }
          if (0x2aaaaa9 < (ulong)(lVar15 * -0x5555555555555555)) {
            uVar37 = 0x5555555;
          }
          if (uVar37 == 0) {
            lVar15 = 0;
          }
          else {
            uVar24 = uVar37 * 0x18;
            pZVar31 = *(Zone **)local_220;
            lVar15 = *(long *)(pZVar31 + 0x10);
            if (uVar24 < (ulong)(*(long *)(pZVar31 + 0x18) - lVar15) ||
                uVar24 - (*(long *)(pZVar31 + 0x18) - lVar15) == 0) {
              *(ulong *)(pZVar31 + 0x10) = lVar15 + uVar24;
            }
            else {
              lVar15 = v8::internal::Zone::NewExpand(pZVar31,uVar24);
            }
          }
          puVar55 = (ulong *)(lVar15 + lVar17 * 8);
          *puVar55 = *(ulong *)pDVar52;
          *(undefined1 *)(puVar55 + 1) = 1;
          puVar55[2] = 0;
          lVar16 = *(long *)local_1d0;
          puVar43 = puVar55;
          for (lVar17 = *(long *)pDVar40; lVar17 != lVar16; lVar17 = lVar17 + -0x18) {
            uVar41 = *(ulong *)(lVar17 + -0x10);
            uVar24 = *(ulong *)(lVar17 + -0x18);
            puVar43[-1] = *(ulong *)(lVar17 + -8);
            puVar43[-2] = uVar41;
            puVar43[-3] = uVar24;
            puVar43 = puVar43 + -3;
          }
          *(ulong **)local_1d0 = puVar43;
          *(ulong **)pDVar40 = puVar55 + 3;
          *(ulong *)local_1f8 = lVar15 + uVar37 * 0x18;
        }
        if (((byte)*local_200 & 1) == 0) {
          if ((byte)*local_200 >> 1 == 0) {
LAB_015d4188:
            if (*(char *)(*(long *)local_1d8 + -0x78) == '\0') {
              uVar70 = v8::internal::compiler::WasmGraphBuilder::MemoryGrow
                                 (*(WasmGraphBuilder **)(param_1 + 0x80),pNVar19);
              uVar37 = FUN_015ddc44(local_240,param_1,uVar70);
              puVar55[2] = uVar37;
              if (*(long *)(param_1 + 0x78) != 0) {
                v8::internal::compiler::WasmGraphBuilder::InitInstanceCache
                          (*(WasmGraphBuilder **)local_230,
                           (WasmInstanceCacheNodes *)(*(long *)(param_1 + 0x78) + 0x18));
              }
            }
          }
        }
        else if (*(ulong *)local_208 == 0) goto LAB_015d4188;
        uVar37 = 2;
        break;
      case 0x41:
        iVar12 = v8::internal::wasm::Decoder::
                 read_i32v<(v8::internal::wasm::Decoder::ValidateFlag)1>
                           (param_1,pbVar64 + 1,local_248,"immi32");
        local_1a0 = (byte *)CONCAT44(local_1a0._4_4_,iVar12);
        puVar43 = *(ulong **)(param_1 + 0xb8);
        if (puVar43 < *(ulong **)(param_1 + 0xc0)) {
          uVar37 = *(ulong *)pDVar52;
          *(undefined1 *)(puVar43 + 1) = 1;
          puVar43[2] = 0;
          *puVar43 = uVar37;
          puVar55 = *(ulong **)pDVar40;
          *(ulong **)pDVar40 = puVar55 + 3;
        }
        else {
          lVar17 = (long)puVar43 - *(long *)local_1d0 >> 3;
          uVar37 = lVar17 * -0x5555555555555555 + 1;
          if (0x5555555 < uVar37) goto LAB_015d87f8;
          lVar15 = (long)*(ulong **)(param_1 + 0xc0) - *(long *)local_1d0 >> 3;
          uVar24 = lVar15 * 0x5555555555555556;
          if (uVar37 <= uVar24) {
            uVar37 = uVar24;
          }
          if (0x2aaaaa9 < (ulong)(lVar15 * -0x5555555555555555)) {
            uVar37 = 0x5555555;
          }
          if (uVar37 == 0) {
            lVar15 = 0;
          }
          else {
            uVar24 = uVar37 * 0x18;
            pZVar31 = *(Zone **)local_220;
            lVar15 = *(long *)(pZVar31 + 0x10);
            if (uVar24 < (ulong)(*(long *)(pZVar31 + 0x18) - lVar15) ||
                uVar24 - (*(long *)(pZVar31 + 0x18) - lVar15) == 0) {
              *(ulong *)(pZVar31 + 0x10) = lVar15 + uVar24;
            }
            else {
              lVar15 = v8::internal::Zone::NewExpand(pZVar31,uVar24);
            }
          }
          puVar55 = (ulong *)(lVar15 + lVar17 * 8);
          *puVar55 = *(ulong *)pDVar52;
          *(undefined1 *)(puVar55 + 1) = 1;
          puVar55[2] = 0;
          lVar16 = *(long *)local_1d0;
          puVar43 = puVar55;
          for (lVar17 = *(long *)pDVar40; lVar17 != lVar16; lVar17 = lVar17 + -0x18) {
            uVar41 = *(ulong *)(lVar17 + -0x10);
            uVar24 = *(ulong *)(lVar17 + -0x18);
            puVar43[-1] = *(ulong *)(lVar17 + -8);
            puVar43[-2] = uVar41;
            puVar43[-3] = uVar24;
            puVar43 = puVar43 + -3;
          }
          *(ulong **)local_1d0 = puVar43;
          *(ulong **)pDVar40 = puVar55 + 3;
          *(ulong *)local_1f8 = lVar15 + uVar37 * 0x18;
        }
        if (((byte)*local_200 & 1) == 0) {
          if ((byte)*local_200 >> 1 == 0) {
LAB_015cf35c:
            if (*(char *)(*(long *)local_1d8 + -0x78) == '\0') {
              uVar37 = v8::internal::compiler::WasmGraphBuilder::Int32Constant
                                 (*(WasmGraphBuilder **)local_230,(int)(float)local_1a0);
LAB_015cf520:
              puVar55[2] = uVar37;
            }
          }
        }
        else if (*(ulong *)local_208 == 0) goto LAB_015cf35c;
        goto LAB_015d1d98;
      case 0x42:
        local_1a0 = (byte *)v8::internal::wasm::Decoder::
                            read_i64v<(v8::internal::wasm::Decoder::ValidateFlag)1>
                                      (param_1,pbVar64 + 1,local_250,"immi64");
        puVar43 = *(ulong **)(param_1 + 0xb8);
        if (puVar43 < *(ulong **)(param_1 + 0xc0)) {
          uVar37 = *(ulong *)pDVar52;
          *(undefined1 *)(puVar43 + 1) = 2;
          puVar43[2] = 0;
          *puVar43 = uVar37;
          puVar55 = *(ulong **)pDVar40;
          *(ulong **)pDVar40 = puVar55 + 3;
        }
        else {
          lVar17 = (long)puVar43 - *(long *)local_1d0 >> 3;
          uVar37 = lVar17 * -0x5555555555555555 + 1;
          if (0x5555555 < uVar37) goto LAB_015d87f8;
          lVar15 = (long)*(ulong **)(param_1 + 0xc0) - *(long *)local_1d0 >> 3;
          uVar24 = lVar15 * 0x5555555555555556;
          if (uVar37 <= uVar24) {
            uVar37 = uVar24;
          }
          if (0x2aaaaa9 < (ulong)(lVar15 * -0x5555555555555555)) {
            uVar37 = 0x5555555;
          }
          if (uVar37 == 0) {
            lVar15 = 0;
          }
          else {
            uVar24 = uVar37 * 0x18;
            pZVar31 = *(Zone **)local_220;
            lVar15 = *(long *)(pZVar31 + 0x10);
            if (uVar24 < (ulong)(*(long *)(pZVar31 + 0x18) - lVar15) ||
                uVar24 - (*(long *)(pZVar31 + 0x18) - lVar15) == 0) {
              *(ulong *)(pZVar31 + 0x10) = lVar15 + uVar24;
            }
            else {
              lVar15 = v8::internal::Zone::NewExpand(pZVar31,uVar24);
            }
          }
          puVar55 = (ulong *)(lVar15 + lVar17 * 8);
          *puVar55 = *(ulong *)pDVar52;
          *(undefined1 *)(puVar55 + 1) = 2;
          puVar55[2] = 0;
          lVar16 = *(long *)local_1d0;
          puVar43 = puVar55;
          for (lVar17 = *(long *)pDVar40; lVar17 != lVar16; lVar17 = lVar17 + -0x18) {
            uVar41 = *(ulong *)(lVar17 + -0x10);
            uVar24 = *(ulong *)(lVar17 + -0x18);
            puVar43[-1] = *(ulong *)(lVar17 + -8);
            puVar43[-2] = uVar41;
            puVar43[-3] = uVar24;
            puVar43 = puVar43 + -3;
          }
          *(ulong **)local_1d0 = puVar43;
          *(ulong **)pDVar40 = puVar55 + 3;
          *(ulong *)local_1f8 = lVar15 + uVar37 * 0x18;
        }
        if (((byte)*local_200 & 1) == 0) {
          if ((byte)*local_200 >> 1 == 0) {
LAB_015ce9f4:
            if (*(char *)(*(long *)local_1d8 + -0x78) == '\0') {
              uVar37 = v8::internal::compiler::WasmGraphBuilder::Int64Constant
                                 (*(WasmGraphBuilder **)local_230,(long)local_1a0);
LAB_015cf44c:
              puVar55[2] = uVar37;
            }
          }
        }
        else if (*(ulong *)local_208 == 0) goto LAB_015ce9f4;
        goto LAB_015d4430;
      case 0x43:
        local_1a0._4_4_ = 4;
        pbVar64 = pbVar64 + 1;
        if ((*(byte **)pDVar65 < pbVar64) || ((uint)((int)*(byte **)pDVar65 - (int)pbVar64) < 4)) {
          v8::internal::wasm::Decoder::error(param_1,pbVar64,"immf32");
          uVar30 = 0;
        }
        else {
          uVar30 = *(undefined4 *)pbVar64;
        }
        local_1a0 = (byte *)CONCAT44(local_1a0._4_4_,uVar30);
        puVar43 = *(ulong **)pDVar40;
        if (puVar43 < *(ulong **)local_1f8) {
          uVar37 = *(ulong *)pDVar52;
          *(undefined1 *)(puVar43 + 1) = 3;
          puVar43[2] = 0;
          *puVar43 = uVar37;
          puVar55 = *(ulong **)pDVar40;
          *(ulong **)pDVar40 = puVar55 + 3;
        }
        else {
          lVar17 = (long)puVar43 - *(long *)local_1d0 >> 3;
          uVar37 = lVar17 * -0x5555555555555555 + 1;
          if (0x5555555 < uVar37) goto LAB_015d87f8;
          lVar15 = (long)*(ulong **)local_1f8 - *(long *)local_1d0 >> 3;
          uVar24 = lVar15 * 0x5555555555555556;
          if (uVar37 <= uVar24) {
            uVar37 = uVar24;
          }
          if (0x2aaaaa9 < (ulong)(lVar15 * -0x5555555555555555)) {
            uVar37 = 0x5555555;
          }
          if (uVar37 == 0) {
            lVar15 = 0;
          }
          else {
            uVar24 = uVar37 * 0x18;
            pZVar31 = *(Zone **)local_220;
            lVar15 = *(long *)(pZVar31 + 0x10);
            if (uVar24 < (ulong)(*(long *)(pZVar31 + 0x18) - lVar15) ||
                uVar24 - (*(long *)(pZVar31 + 0x18) - lVar15) == 0) {
              *(ulong *)(pZVar31 + 0x10) = lVar15 + uVar24;
            }
            else {
              lVar15 = v8::internal::Zone::NewExpand(pZVar31,uVar24);
            }
          }
          puVar55 = (ulong *)(lVar15 + lVar17 * 8);
          *puVar55 = *(ulong *)pDVar52;
          *(undefined1 *)(puVar55 + 1) = 3;
          puVar55[2] = 0;
          lVar16 = *(long *)local_1d0;
          puVar43 = puVar55;
          for (lVar17 = *(long *)pDVar40; lVar17 != lVar16; lVar17 = lVar17 + -0x18) {
            uVar41 = *(ulong *)(lVar17 + -0x10);
            uVar24 = *(ulong *)(lVar17 + -0x18);
            puVar43[-1] = *(ulong *)(lVar17 + -8);
            puVar43[-2] = uVar41;
            puVar43[-3] = uVar24;
            puVar43 = puVar43 + -3;
          }
          *(ulong **)local_1d0 = puVar43;
          *(ulong **)pDVar40 = puVar55 + 3;
          *(ulong *)local_1f8 = lVar15 + uVar37 * 0x18;
        }
        if (((byte)*local_200 & 1) == 0) {
          if ((byte)*local_200 >> 1 == 0) {
LAB_015cf500:
            if (*(char *)(*(long *)local_1d8 + -0x78) == '\0') {
              uVar37 = v8::internal::compiler::WasmGraphBuilder::Float32Constant
                                 (*(WasmGraphBuilder **)local_230,(float)local_1a0);
              goto LAB_015cf520;
            }
          }
        }
        else if (*(ulong *)local_208 == 0) goto LAB_015cf500;
LAB_015d1d98:
        uVar37 = (ulong)(local_1a0._4_4_ + 1);
        param_1 = pDVar68;
        break;
      case 0x44:
        local_198 = (byte *)CONCAT44(local_198._4_4_,8);
        pbVar64 = pbVar64 + 1;
        if ((*(byte **)pDVar65 < pbVar64) || ((uint)((int)*(byte **)pDVar65 - (int)pbVar64) < 8)) {
          v8::internal::wasm::Decoder::error(param_1,pbVar64,"immf64");
          local_1a0 = (byte *)0x0;
        }
        else {
          local_1a0 = *(byte **)pbVar64;
        }
        puVar43 = *(ulong **)pDVar40;
        if (puVar43 < *(ulong **)local_1f8) {
          uVar37 = *(ulong *)pDVar52;
          *(undefined1 *)(puVar43 + 1) = 4;
          puVar43[2] = 0;
          *puVar43 = uVar37;
          puVar55 = *(ulong **)pDVar40;
          *(ulong **)pDVar40 = puVar55 + 3;
        }
        else {
          lVar17 = (long)puVar43 - *(long *)local_1d0 >> 3;
          uVar37 = lVar17 * -0x5555555555555555 + 1;
          if (0x5555555 < uVar37) goto LAB_015d87f8;
          lVar15 = (long)*(ulong **)local_1f8 - *(long *)local_1d0 >> 3;
          uVar24 = lVar15 * 0x5555555555555556;
          if (uVar37 <= uVar24) {
            uVar37 = uVar24;
          }
          if (0x2aaaaa9 < (ulong)(lVar15 * -0x5555555555555555)) {
            uVar37 = 0x5555555;
          }
          if (uVar37 == 0) {
            lVar15 = 0;
          }
          else {
            uVar24 = uVar37 * 0x18;
            pZVar31 = *(Zone **)local_220;
            lVar15 = *(long *)(pZVar31 + 0x10);
            if (uVar24 < (ulong)(*(long *)(pZVar31 + 0x18) - lVar15) ||
                uVar24 - (*(long *)(pZVar31 + 0x18) - lVar15) == 0) {
              *(ulong *)(pZVar31 + 0x10) = lVar15 + uVar24;
            }
            else {
              lVar15 = v8::internal::Zone::NewExpand(pZVar31,uVar24);
            }
          }
          puVar55 = (ulong *)(lVar15 + lVar17 * 8);
          *puVar55 = *(ulong *)pDVar52;
          *(undefined1 *)(puVar55 + 1) = 4;
          puVar55[2] = 0;
          lVar16 = *(long *)local_1d0;
          puVar43 = puVar55;
          for (lVar17 = *(long *)pDVar40; lVar17 != lVar16; lVar17 = lVar17 + -0x18) {
            uVar41 = *(ulong *)(lVar17 + -0x10);
            uVar24 = *(ulong *)(lVar17 + -0x18);
            puVar43[-1] = *(ulong *)(lVar17 + -8);
            puVar43[-2] = uVar41;
            puVar43[-3] = uVar24;
            puVar43 = puVar43 + -3;
          }
          *(ulong **)local_1d0 = puVar43;
          *(ulong **)pDVar40 = puVar55 + 3;
          *(ulong *)local_1f8 = lVar15 + uVar37 * 0x18;
        }
        if (((byte)*local_200 & 1) == 0) {
          if ((byte)*local_200 >> 1 == 0) {
LAB_015cf42c:
            if (*(char *)(*(long *)local_1d8 + -0x78) == '\0') {
              uVar37 = v8::internal::compiler::WasmGraphBuilder::Float64Constant
                                 (*(WasmGraphBuilder **)local_230,(double)local_1a0);
              goto LAB_015cf44c;
            }
          }
        }
        else if (*(ulong *)local_208 == 0) goto LAB_015cf42c;
LAB_015d4430:
        uVar37 = (ulong)((uint)local_198 + 1);
        break;
      case 0x45:
        uVar70 = 1;
        goto LAB_015cce0c;
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x4f:
        uVar70 = 1;
        uVar25 = 1;
        goto LAB_015cbfd0;
      case 0x50:
        uVar70 = 2;
LAB_015cce0c:
        uVar37 = 1;
        FUN_015dd824(param_1,bVar4,1,uVar70);
        break;
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
        uVar70 = 2;
        uVar25 = 2;
        goto LAB_015cbfd0;
      case 0x5b:
      case 0x5c:
      case 0x5d:
      case 0x5e:
      case 0x5f:
      case 0x60:
        uVar70 = 3;
        uVar25 = 3;
        goto LAB_015cbfd0;
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x65:
      case 0x66:
        uVar70 = 4;
        uVar25 = 4;
LAB_015cbfd0:
        uVar37 = 1;
        FUN_015de138(param_1,bVar4,1,uVar70,uVar25);
        break;
      case 0x67:
      case 0x68:
      case 0x69:
        uVar70 = 1;
        uVar25 = 1;
        goto LAB_015cbef8;
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x6f:
      case 0x70:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x74:
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x78:
        uVar70 = 1;
        uVar25 = 1;
        uVar26 = 1;
        goto LAB_015cbf9c;
      case 0x79:
      case 0x7a:
      case 0x7b:
        uVar70 = 2;
        uVar25 = 2;
        goto LAB_015cbef8;
      case 0x7c:
      case 0x7d:
      case 0x7e:
      case 0x7f:
      case 0x80:
      case 0x81:
      case 0x82:
      case 0x83:
      case 0x84:
      case 0x85:
      case 0x86:
      case 0x87:
      case 0x88:
      case 0x89:
      case 0x8a:
        uVar70 = 2;
        uVar25 = 2;
        uVar26 = 2;
        goto LAB_015cbf9c;
      case 0x8b:
      case 0x8c:
      case 0x8d:
      case 0x8e:
      case 0x8f:
      case 0x90:
      case 0x91:
        uVar70 = 3;
        goto LAB_015cbef4;
      case 0x92:
      case 0x93:
      case 0x94:
      case 0x95:
      case 0x96:
      case 0x97:
      case 0x98:
        uVar70 = 3;
        uVar25 = 3;
        uVar26 = 3;
        goto LAB_015cbf9c;
      case 0x99:
      case 0x9a:
      case 0x9b:
      case 0x9c:
      case 0x9d:
      case 0x9e:
      case 0x9f:
        uVar70 = 4;
        goto LAB_015cce24;
      case 0xa0:
      case 0xa1:
      case 0xa2:
      case 0xa3:
      case 0xa4:
      case 0xa5:
      case 0xa6:
        uVar70 = 4;
        uVar25 = 4;
        uVar26 = 4;
LAB_015cbf9c:
        FUN_015de138(param_1,uVar57,uVar70,uVar25,uVar26);
        goto LAB_015cbf04;
      case 0xa7:
        uVar70 = 1;
        uVar25 = 2;
        goto LAB_015cbef8;
      case 0xa8:
      case 0xa9:
      case 0xbc:
        uVar70 = 1;
        goto LAB_015cbef4;
      case 0xaa:
      case 0xab:
        uVar70 = 1;
        goto LAB_015cce24;
      case 0xac:
      case 0xad:
        uVar70 = 2;
        uVar25 = 1;
        goto LAB_015cbef8;
      case 0xae:
      case 0xaf:
        uVar70 = 2;
        goto LAB_015cbef4;
      case 0xb0:
      case 0xb1:
      case 0xbd:
        uVar70 = 2;
        goto LAB_015cce24;
      case 0xb2:
      case 0xb3:
      case 0xbe:
        uVar70 = 3;
        uVar25 = 1;
        goto LAB_015cbef8;
      case 0xb4:
      case 0xb5:
        uVar70 = 3;
        uVar25 = 2;
        goto LAB_015cbef8;
      case 0xb6:
        uVar70 = 3;
LAB_015cce24:
        uVar25 = 4;
        goto LAB_015cbef8;
      case 0xb7:
      case 0xb8:
        uVar70 = 4;
        uVar25 = 1;
        goto LAB_015cbef8;
      case 0xb9:
      case 0xba:
      case 0xbf:
        uVar70 = 4;
        uVar25 = 2;
        goto LAB_015cbef8;
      case 0xbb:
        uVar70 = 4;
LAB_015cbef4:
        uVar25 = 3;
LAB_015cbef8:
        FUN_015dd824(param_1,uVar60,uVar70,uVar25);
        goto LAB_015cbf04;
      case 0xc0:
      case 0xc1:
      case 0xc2:
      case 0xc3:
      case 0xc4:
      case 0xd1:
        uVar37 = v8::internal::wasm::WasmOpcodes::IsSignExtensionOpcode(uVar57);
        if ((uVar37 & 1) != 0) {
          if (((byte)param_1[0x51] >> 3 & 1) == 0) {
            v8::internal::wasm::Decoder::error
                      (param_1,"Invalid opcode (enable with --experimental-wasm-se)");
          }
          else {
            **(uint **)(param_1 + 0x58) = **(uint **)(param_1 + 0x58) | 0x800;
          }
        }
        uVar37 = v8::internal::wasm::WasmOpcodes::IsAnyRefOpcode(uVar57);
        if ((uVar37 & 1) != 0) {
          if (((byte)param_1[0x50] >> 5 & 1) == 0) {
            v8::internal::wasm::Decoder::error
                      (param_1,"Invalid opcode (enable with --experimental-wasm-anyref)");
          }
          else {
            **(uint **)(param_1 + 0x58) = **(uint **)(param_1 + 0x58) | 0x20;
          }
        }
        lVar17 = v8::internal::wasm::WasmOpcodes::Signature(uVar57);
LAB_015cc0d0:
        FUN_015dcdb8(param_1,bVar4,lVar17);
        goto LAB_015cbf04;
      case 0xd0:
        if (((byte)param_1[0x50] >> 5 & 1) == 0) goto LAB_015ccb38;
        **(uint **)(param_1 + 0x58) = **(uint **)(param_1 + 0x58) | 0x20;
        puVar43 = *(ulong **)(param_1 + 0xb8);
        if (puVar43 < *(ulong **)(param_1 + 0xc0)) {
          uVar37 = *(ulong *)pDVar52;
          *(undefined1 *)(puVar43 + 1) = 8;
          puVar43[2] = 0;
          *puVar43 = uVar37;
          puVar55 = *(ulong **)pDVar40;
          *(ulong **)pDVar40 = puVar55 + 3;
        }
        else {
          lVar17 = (long)puVar43 - *(long *)local_1d0 >> 3;
          uVar37 = lVar17 * -0x5555555555555555 + 1;
          if (0x5555555 < uVar37) goto LAB_015d87f8;
          lVar15 = (long)*(ulong **)(param_1 + 0xc0) - *(long *)local_1d0 >> 3;
          uVar24 = lVar15 * 0x5555555555555556;
          if (uVar37 <= uVar24) {
            uVar37 = uVar24;
          }
          if (0x2aaaaa9 < (ulong)(lVar15 * -0x5555555555555555)) {
            uVar37 = 0x5555555;
          }
          if (uVar37 == 0) {
            lVar15 = 0;
          }
          else {
            uVar24 = uVar37 * 0x18;
            pZVar31 = *(Zone **)local_220;
            lVar15 = *(long *)(pZVar31 + 0x10);
            if (uVar24 < (ulong)(*(long *)(pZVar31 + 0x18) - lVar15) ||
                uVar24 - (*(long *)(pZVar31 + 0x18) - lVar15) == 0) {
              *(ulong *)(pZVar31 + 0x10) = lVar15 + uVar24;
            }
            else {
              lVar15 = v8::internal::Zone::NewExpand(pZVar31,uVar24);
            }
          }
          puVar55 = (ulong *)(lVar15 + lVar17 * 8);
          *puVar55 = *(ulong *)pDVar52;
          *(undefined1 *)(puVar55 + 1) = 8;
          puVar55[2] = 0;
          lVar16 = *(long *)local_1d0;
          puVar43 = puVar55;
          for (lVar17 = *(long *)pDVar40; lVar17 != lVar16; lVar17 = lVar17 + -0x18) {
            uVar41 = *(ulong *)(lVar17 + -0x10);
            uVar24 = *(ulong *)(lVar17 + -0x18);
            puVar43[-1] = *(ulong *)(lVar17 + -8);
            puVar43[-2] = uVar41;
            puVar43[-3] = uVar24;
            puVar43 = puVar43 + -3;
          }
          *(ulong **)local_1d0 = puVar43;
          *(ulong **)pDVar40 = puVar55 + 3;
          *(ulong *)local_1f8 = lVar15 + uVar37 * 0x18;
        }
        if (((byte)*local_200 & 1) == 0) {
          if ((byte)*local_200 >> 1 == 0) {
LAB_015cfd8c:
            if (*(char *)(*(long *)local_1d8 + -0x78) == '\0') {
              uVar37 = v8::internal::compiler::WasmGraphBuilder::RefNull
                                 (*(WasmGraphBuilder **)local_230);
              puVar55[2] = uVar37;
            }
          }
        }
        else if (*(ulong *)local_208 == 0) goto LAB_015cfd8c;
LAB_015cbf04:
        uVar37 = 1;
        break;
      case 0xd2:
        if (((byte)param_1[0x50] >> 5 & 1) != 0) {
          **(uint **)(param_1 + 0x58) = **(uint **)(param_1 + 0x58) | 0x20;
          local_1a0 = (byte *)0x100000000;
          pbVar64 = (byte *)(*(long *)(param_1 + 0x10) + 1);
          if (pbVar64 < *(byte **)(param_1 + 0x18)) {
            uVar57 = *pbVar64 & 0x7f;
            uVar37 = (ulong)uVar57;
            if ((char)*pbVar64 < '\0') {
              uVar57 = v8::internal::wasm::Decoder::
                       read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                                 (param_1,(uchar *)(*(long *)(param_1 + 0x10) + 2),local_248,
                                  "function index",uVar57);
              uVar37 = (ulong)uVar57;
            }
            else {
              local_1a0 = (byte *)0x100000000;
            }
          }
          else {
            local_1a0 = (byte *)0x0;
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pbVar64,"expected %s","function index");
            uVar37 = 0;
          }
          local_1a0 = (byte *)CONCAT44(local_1a0._4_4_,(int)uVar37);
          lVar17 = *(long *)(param_1 + 0x48);
          pcVar20 = *(char **)(param_1 + 0x10);
          if ((lVar17 == 0) ||
             ((ulong)(*(long *)(lVar17 + 0x90) - *(long *)(lVar17 + 0x88) >> 5) <= uVar37)) {
            pcVar27 = "invalid function index: %u";
            goto LAB_015d0694;
          }
          puVar43 = *(ulong **)pDVar40;
          if (puVar43 < *(ulong **)local_1f8) {
            *puVar43 = (ulong)pcVar20;
            *(undefined1 *)(puVar43 + 1) = 7;
            puVar43[2] = 0;
            puVar55 = *(ulong **)pDVar40;
            *(ulong **)pDVar40 = puVar55 + 3;
          }
          else {
            lVar17 = (long)puVar43 - *(long *)local_1d0 >> 3;
            uVar37 = lVar17 * -0x5555555555555555 + 1;
            if (0x5555555 < uVar37) goto LAB_015d87f8;
            lVar15 = (long)*(ulong **)local_1f8 - *(long *)local_1d0 >> 3;
            uVar24 = lVar15 * 0x5555555555555556;
            if (uVar37 <= uVar24) {
              uVar37 = uVar24;
            }
            if (0x2aaaaa9 < (ulong)(lVar15 * -0x5555555555555555)) {
              uVar37 = 0x5555555;
            }
            if (uVar37 == 0) {
              lVar15 = 0;
            }
            else {
              uVar24 = uVar37 * 0x18;
              pZVar31 = *(Zone **)local_220;
              lVar15 = *(long *)(pZVar31 + 0x10);
              if (uVar24 < (ulong)(*(long *)(pZVar31 + 0x18) - lVar15) ||
                  uVar24 - (*(long *)(pZVar31 + 0x18) - lVar15) == 0) {
                *(ulong *)(pZVar31 + 0x10) = lVar15 + uVar24;
              }
              else {
                lVar15 = v8::internal::Zone::NewExpand(pZVar31,uVar24);
              }
              pcVar20 = *(char **)pDVar52;
            }
            puVar55 = (ulong *)(lVar15 + lVar17 * 8);
            *(undefined1 *)(puVar55 + 1) = 7;
            *puVar55 = (ulong)pcVar20;
            puVar55[2] = 0;
            lVar16 = *(long *)local_1d0;
            puVar43 = puVar55;
            for (lVar17 = *(long *)pDVar40; lVar17 != lVar16; lVar17 = lVar17 + -0x18) {
              uVar41 = *(ulong *)(lVar17 + -0x10);
              uVar24 = *(ulong *)(lVar17 + -0x18);
              puVar43[-1] = *(ulong *)(lVar17 + -8);
              puVar43[-2] = uVar41;
              puVar43[-3] = uVar24;
              puVar43 = puVar43 + -3;
            }
            *(ulong **)local_1d0 = puVar43;
            *(ulong **)pDVar40 = puVar55 + 3;
            *(ulong *)local_1f8 = lVar15 + uVar37 * 0x18;
          }
          if (((byte)*local_200 & 1) == 0) {
            if ((byte)*local_200 >> 1 == 0) {
LAB_015d1d68:
              if (*(char *)(*(long *)local_1d8 + -0x78) == '\0') {
                uVar70 = v8::internal::compiler::WasmGraphBuilder::RefFunc
                                   (*(WasmGraphBuilder **)(param_1 + 0x80),(uint)(float)local_1a0);
                uVar37 = FUN_015ddc44(local_240,param_1,uVar70);
                puVar55[2] = uVar37;
              }
            }
          }
          else if (*(ulong *)local_208 == 0) goto LAB_015d1d68;
          goto LAB_015d1d98;
        }
LAB_015ccb38:
        pcVar20 = "Invalid opcode (enable with --experimental-wasm-anyref)";
        goto LAB_015ccb40;
      case 0xfc:
        pbVar64 = pbVar64 + 1;
        if ((*(byte **)pDVar65 < pbVar64) || ((int)*(byte **)pDVar65 == (int)pbVar64)) {
          v8::internal::wasm::Decoder::error(param_1,pbVar64,"numeric index");
          uVar54 = 0;
        }
        else {
          uVar54 = (uint)*pbVar64;
        }
        uVar54 = uVar54 | uVar57 << 8;
        if (uVar54 < 0xfc08) {
          if (((byte)param_1[0x51] >> 2 & 1) != 0) {
            uVar57 = 0x400;
            goto LAB_015cf900;
          }
          pcVar20 = "Invalid opcode (enable with --experimental-wasm-sat_f2i_conversions)";
        }
        else if (uVar54 - 0xfc0f < 3) {
          if ((*(uint *)(param_1 + 0x50) >> 5 & 1) != 0) {
            uVar57 = 0x20;
LAB_015cf900:
            **(uint **)(param_1 + 0x58) = **(uint **)(param_1 + 0x58) | uVar57;
            iVar12 = FUN_015d996c(param_1);
            uVar37 = (ulong)(iVar12 + 2);
            break;
          }
          pcVar20 = "Invalid opcode (enable with --experimental-wasm-anyref)";
        }
        else {
          if ((*(uint *)(param_1 + 0x50) >> 9 & 1) != 0) {
            uVar57 = 0x200;
            goto LAB_015cf900;
          }
          pcVar20 = "Invalid opcode (enable with --experimental-wasm-bulk_memory)";
        }
LAB_015ce06c:
        v8::internal::wasm::Decoder::error(param_1,pcVar20);
        uVar37 = 2;
        break;
      case 0xfd:
        if (((byte)param_1[0x50] >> 2 & 1) == 0) {
          pcVar20 = "Invalid opcode (enable with --experimental-wasm-simd)";
          goto LAB_015ccb40;
        }
        **(uint **)(param_1 + 0x58) = **(uint **)(param_1 + 0x58) | 4;
        pbVar64 = (byte *)(*(long *)(param_1 + 0x10) + 1);
        if ((*(byte **)(param_1 + 0x18) < pbVar64) ||
           ((int)*(byte **)(param_1 + 0x18) == (int)pbVar64)) {
          v8::internal::wasm::Decoder::error(param_1,pbVar64,"simd index");
          uVar54 = 0;
        }
        else {
          uVar54 = (uint)*pbVar64;
        }
        pDVar40 = local_1e0;
        uVar54 = uVar54 | uVar57 << 8;
        switch(uVar54) {
        case 0xfd00:
          iVar12 = FUN_015d90fc(param_1,0xe,1);
          goto LAB_015d3068;
        case 0xfd01:
          iVar12 = FUN_015d94e8(param_1,9,1);
          goto LAB_015d3068;
        default:
          pNVar19 = (Node *)v8::internal::wasm::WasmOpcodes::Signature(uVar54);
          if (pNVar19 == (Node *)0x0) {
            v8::internal::wasm::Decoder::error(param_1,"invalid simd opcode");
            uVar37 = 2;
            pDVar40 = local_1e0;
            goto switchD_015cbf3c_caseD_1;
          }
          uVar57 = (uint)*(undefined8 *)(pNVar19 + 8);
          lVar17 = (long)(int)uVar57;
          local_1a0 = local_210;
          local_198 = local_210;
          local_190 = local_238;
          if (8 < uVar57) {
            FUN_015de7a0(&local_1a0,lVar17);
          }
          local_198 = local_1a0 + lVar17 * 0x18;
          if (0 < (int)uVar57) {
            lVar15 = (long)(int)uVar57 * 0x18;
            local_298 = pNVar19;
            do {
              uVar57 = uVar57 - 1;
              lVar16 = *(long *)local_1e0;
              uVar24 = (ulong)*(uint *)(*(long *)local_1d8 + -0x84);
              bVar4 = *(byte *)(*(long *)(pNVar19 + 0x10) + *(long *)pNVar19 + lVar17 + -1);
              uVar37 = (lVar16 - *(long *)local_1d0 >> 3) * -0x5555555555555555;
              if (uVar37 < uVar24 || uVar37 - uVar24 == 0) {
                if (*(char *)(*(long *)local_1d8 + -0x78) != '\x02') {
                  pbVar64 = *(byte **)pDVar52;
                  if (pbVar64 < *(byte **)pDVar65) {
                    bVar7 = *pbVar64;
                    uVar60 = (ushort)bVar7;
                    uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                    if ((uVar37 & 1) != 0) {
                      if (*(byte **)local_1e8 <= pbVar64 + 1) goto LAB_015d38fc;
                      uVar60 = CONCAT11(bVar7,pbVar64[1]);
                    }
                    pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                  }
                  else {
LAB_015d38fc:
                    pcVar20 = "<end>";
                  }
                  v8::internal::wasm::Decoder::errorf
                            ((uchar *)local_1f0,(char *)pbVar64,"%s found empty stack",pcVar20);
                }
                pbVar64 = *(byte **)pDVar52;
                uVar70 = 0;
                uVar63 = 10;
              }
              else {
                pbVar64 = *(byte **)(lVar16 + -0x18);
                uVar30 = *(undefined4 *)(lVar16 + -0xf);
                uVar63 = (uint)*(byte *)(lVar16 + -0x10);
                uStack_1b4 = (undefined3)((uint)*(undefined4 *)(lVar16 + -0xc) >> 8);
                uVar70 = *(undefined8 *)(lVar16 + -8);
                *(undefined8 **)local_1e0 = (undefined8 *)(lVar16 + -0x18);
                uStack_1b8._3_1_ = (undefined1)((uint)uVar30 >> 0x18);
                local_1b0._0_3_ = (undefined3)uVar30;
                local_1b0._0_7_ =
                     CONCAT43(CONCAT31(uStack_1b4,uStack_1b8._3_1_),(undefined3)local_1b0);
                uStack_1b8 = uVar30;
              }
              lVar17 = lVar17 + -1;
              if (uVar63 != bVar4) {
                if ((bVar4 != 7 || uVar63 != 8) && (bVar4 != 6 || 2 < uVar63 - 7)) {
                  if ((bVar4 != 10) && ((uVar63 != 10 && (bVar4 != 9 || uVar63 != 8)))) {
                    pbVar33 = *(byte **)pDVar52;
                    if (pbVar33 < *(byte **)local_1e8) {
                      local_2a0 = (Node *)CONCAT44(local_2a0._4_4_,(uint)*pbVar33);
                      uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode();
                      uVar14 = (uint)local_2a0;
                      if ((uVar37 & 1) != 0) {
                        if (*(byte **)local_1e8 <= pbVar33 + 1) goto LAB_015d39e4;
                        uVar14 = (uint)pbVar33[1] | ((uint)local_2a0 & 0xff) << 8;
                      }
                      pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar14);
                    }
                    else {
LAB_015d39e4:
                      pcVar20 = "<end>";
                    }
                    pNVar19 = local_298;
                    if (bVar4 < 10) {
                      pcVar27 = (&PTR_s_<stmt>_01cc9818)[(char)bVar4];
                    }
                    else {
                      pcVar27 = "<unknown>";
                    }
                    if (pbVar64 < *(byte **)local_1e8) {
                      bVar4 = *pbVar64;
                      uVar60 = (ushort)bVar4;
                      local_2a0 = (Node *)pcVar20;
                      uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                      if ((uVar37 & 1) == 0) {
LAB_015d3a80:
                        pcVar21 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                      }
                      else {
                        if (pbVar64 + 1 < *(byte **)local_1e8) {
                          uVar60 = CONCAT11(bVar4,pbVar64[1]);
                          goto LAB_015d3a80;
                        }
                        pcVar21 = "<end>";
                      }
                      pcVar20 = (char *)local_2a0;
                      if (uVar63 < 0xb) goto LAB_015d37c4;
LAB_015d3aa0:
                      pcVar28 = "<unknown>";
                    }
                    else {
                      pcVar21 = "<end>";
                      if (10 < uVar63) goto LAB_015d3aa0;
LAB_015d37c4:
                      pcVar28 = (&PTR_s_<stmt>_01cc9868)[(char)(byte)uVar63];
                    }
                    v8::internal::wasm::Decoder::errorf
                              ((uchar *)local_1f0,(char *)pbVar64,
                               "%s[%d] expected type %s, found %s of type %s",pcVar20,(ulong)uVar57,
                               pcVar27,pcVar21,pcVar28);
                  }
                }
              }
              *(byte **)(local_1a0 + lVar15 + -0x18) = pbVar64;
              local_1a0[lVar15 + -0x10] = (byte)uVar63;
              uVar30 = local_1b0._3_4_;
              *(undefined8 *)(local_1a0 + lVar15 + -8) = uVar70;
              *(undefined4 *)(local_1a0 + lVar15 + -0xc) = uVar30;
              *(undefined4 *)(local_1a0 + lVar15 + -0xf) = (undefined4)local_1b0;
              pDVar65 = local_1e8;
              lVar15 = lVar15 + -0x18;
            } while (0 < lVar17);
          }
          if (*(long *)pNVar19 == 0) {
            puVar43 = (ulong *)0x0;
          }
          else {
            puVar43 = *(ulong **)local_1e0;
            uVar53 = **(undefined1 **)(pNVar19 + 0x10);
            if (puVar43 < *(ulong **)local_1f8) {
              uVar37 = *(ulong *)pDVar52;
              *(undefined1 *)(puVar43 + 1) = uVar53;
              puVar43[2] = 0;
              *puVar43 = uVar37;
              puVar43 = *(ulong **)local_1e0;
              *(ulong **)local_1e0 = puVar43 + 3;
            }
            else {
              lVar17 = (long)puVar43 - *(long *)local_1d0 >> 3;
              uVar37 = lVar17 * -0x5555555555555555 + 1;
              if (0x5555555 < uVar37) goto LAB_015d87f8;
              lVar15 = (long)*(ulong **)local_1f8 - *(long *)local_1d0 >> 3;
              uVar24 = lVar15 * 0x5555555555555556;
              if (uVar37 <= uVar24) {
                uVar37 = uVar24;
              }
              if (0x2aaaaa9 < (ulong)(lVar15 * -0x5555555555555555)) {
                uVar37 = 0x5555555;
              }
              if (uVar37 == 0) {
                lVar15 = 0;
              }
              else {
                uVar24 = uVar37 * 0x18;
                pZVar31 = *(Zone **)local_220;
                lVar15 = *(long *)(pZVar31 + 0x10);
                if (uVar24 < (ulong)(*(long *)(pZVar31 + 0x18) - lVar15) ||
                    uVar24 - (*(long *)(pZVar31 + 0x18) - lVar15) == 0) {
                  *(ulong *)(pZVar31 + 0x10) = lVar15 + uVar24;
                }
                else {
                  lVar15 = v8::internal::Zone::NewExpand(pZVar31,uVar24);
                }
              }
              uVar24 = *(ulong *)pDVar52;
              puVar43 = (ulong *)(lVar15 + lVar17 * 8);
              *(undefined1 *)(puVar43 + 1) = uVar53;
              *puVar43 = uVar24;
              puVar43[2] = 0;
              lVar16 = *(long *)local_1d0;
              puVar55 = puVar43;
              for (lVar17 = *(long *)local_1e0; lVar17 != lVar16; lVar17 = lVar17 + -0x18) {
                uVar41 = *(ulong *)(lVar17 + -0x10);
                uVar24 = *(ulong *)(lVar17 + -0x18);
                puVar55[-1] = *(ulong *)(lVar17 + -8);
                puVar55[-2] = uVar41;
                puVar55[-3] = uVar24;
                puVar55 = puVar55 + -3;
              }
              *(ulong **)local_1d0 = puVar55;
              *(ulong **)local_1e0 = puVar43 + 3;
              *(ulong *)local_1f8 = lVar15 + uVar37 * 0x18;
            }
          }
          pbVar64 = local_1a0;
          param_1 = local_1f0;
          if (((byte)*local_200 & 1) == 0) {
            if ((byte)*local_200 >> 1 == 0) {
LAB_015d64fc:
              if (*(char *)(*(long *)local_1d8 + -0x78) == '\0') {
                lVar17 = (long)local_198 - (long)local_1a0 >> 3;
                uVar37 = lVar17 * -0x5555555555555555;
                local_c8 = local_268;
                local_c0 = (Node *)local_268;
                local_b8 = local_288;
                if (uVar37 < 9) {
                  local_c0 = (Node *)(local_268 + lVar17 * 0x1555555555555556);
                  if ((long)local_198 - (long)local_1a0 != 0) goto LAB_015d6cf0;
                }
                else {
                  v8::base::SmallVector<v8::internal::compiler::Node*,8ul>::Grow
                            ((SmallVector<v8::internal::compiler::Node*,8ul> *)&local_c8,uVar37);
                  local_c0 = (Node *)(local_c8 + lVar17 * 0x1555555555555556);
LAB_015d6cf0:
                  puVar36 = local_c8;
                  pbVar64 = pbVar64 + 0x10;
                  do {
                    uVar37 = uVar37 - 1;
                    *(undefined8 *)puVar36 = *(undefined8 *)pbVar64;
                    puVar36 = puVar36 + 2;
                    pbVar64 = pbVar64 + 0x18;
                  } while (uVar37 != 0);
                }
                uVar70 = v8::internal::compiler::WasmGraphBuilder::SimdOp
                                   (*(WasmGraphBuilder **)(param_1 + 0x80),uVar54,local_c8);
                uVar37 = FUN_015ddc44(local_240,param_1,uVar70);
                if (puVar43 != (ulong *)0x0) {
                  puVar43[2] = uVar37;
                }
                if (local_c8 != local_268) {
                  free(local_c8);
                }
              }
            }
          }
          else if (*(ulong *)local_208 == 0) goto LAB_015d64fc;
          if (local_1a0 != local_210) {
            free(local_1a0);
          }
          uVar37 = 2;
          pDVar40 = local_1e0;
          goto switchD_015cbf3c_caseD_1;
        case 0xfd03:
          uVar37 = *(ulong *)pDVar52;
          lVar17 = 0;
          local_1a0 = (byte *)0x0;
          local_198 = (byte *)0x0;
          do {
            puVar1 = (uchar *)(uVar37 + 2 + lVar17);
            if ((*(uchar **)pDVar65 < puVar1) || ((int)*(uchar **)pDVar65 == (int)puVar1)) {
              v8::internal::wasm::Decoder::error(param_1,puVar1,"shuffle");
              uVar29 = '\0';
            }
            else {
              uVar29 = *puVar1;
            }
            *(uchar *)((long)&local_1a0 + lVar17) = uVar29;
            lVar17 = lVar17 + 1;
          } while (lVar17 != 0x10);
          SVar3 = local_1a0._1_1_;
          if ((byte)local_1a0._1_1_ <= (byte)local_1a0._0_1_) {
            SVar3 = local_1a0._0_1_;
          }
          SVar2 = local_1a0._2_1_;
          if ((byte)local_1a0._2_1_ <= (byte)SVar3) {
            SVar2 = SVar3;
          }
          SVar3 = local_1a0._3_1_;
          if ((byte)local_1a0._3_1_ <= (byte)SVar2) {
            SVar3 = SVar2;
          }
          SVar2 = local_1a0._4_1_;
          if ((byte)local_1a0._4_1_ <= (byte)SVar3) {
            SVar2 = SVar3;
          }
          SVar3 = local_1a0._5_1_;
          if ((byte)local_1a0._5_1_ <= (byte)SVar2) {
            SVar3 = SVar2;
          }
          SVar2 = local_1a0._6_1_;
          if ((byte)local_1a0._6_1_ <= (byte)SVar3) {
            SVar2 = SVar3;
          }
          SVar3 = local_1a0._7_1_;
          if ((byte)local_1a0._7_1_ <= (byte)SVar2) {
            SVar3 = SVar2;
          }
          SVar2 = local_198._0_1_;
          if ((byte)local_198._0_1_ <= (byte)SVar3) {
            SVar2 = SVar3;
          }
          SVar3 = local_198._1_1_;
          if ((byte)local_198._1_1_ <= (byte)SVar2) {
            SVar3 = SVar2;
          }
          SVar2 = local_198._2_1_;
          if ((byte)local_198._2_1_ <= (byte)SVar3) {
            SVar2 = SVar3;
          }
          SVar3 = local_198._3_1_;
          if ((byte)local_198._3_1_ <= (byte)SVar2) {
            SVar3 = SVar2;
          }
          SVar2 = local_198._4_1_;
          if ((byte)local_198._4_1_ <= (byte)SVar3) {
            SVar2 = SVar3;
          }
          SVar3 = local_198._5_1_;
          if ((byte)local_198._5_1_ <= (byte)SVar2) {
            SVar3 = SVar2;
          }
          SVar2 = local_198._6_1_;
          if ((byte)local_198._6_1_ <= (byte)SVar3) {
            SVar2 = SVar3;
          }
          SVar3 = local_198._7_1_;
          if ((byte)local_198._7_1_ <= (byte)SVar2) {
            SVar3 = SVar2;
          }
          if ((byte)SVar3 < 0x21) {
            lVar17 = *(long *)pDVar40;
            uVar24 = (ulong)*(uint *)(*(long *)local_1d8 + -0x84);
            uVar37 = (lVar17 - *(long *)local_1d0 >> 3) * -0x5555555555555555;
            if (uVar37 < uVar24 || uVar37 - uVar24 == 0) {
              if (*(char *)(*(long *)local_1d8 + -0x78) == '\x02') {
                pNVar19 = (Node *)0x0;
              }
              else {
                pcVar20 = *(char **)pDVar52;
                if (pcVar20 < *(char **)pDVar65) {
                  cVar8 = *pcVar20;
                  uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(cVar8);
                  if ((uVar37 & 1) == 0) {
                    pcVar27 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(cVar8);
                  }
                  else if (pcVar20 + 1 < *(char **)pDVar65) {
                    pcVar27 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName
                                                (CONCAT11(cVar8,pcVar20[1]));
                    pDVar65 = local_1e8;
                    param_1 = local_1f0;
                  }
                  else {
                    pcVar27 = "<end>";
                    pDVar65 = local_1e8;
                    param_1 = local_1f0;
                  }
                }
                else {
                  pcVar27 = "<end>";
                }
                v8::internal::wasm::Decoder::errorf
                          ((uchar *)param_1,pcVar20,"%s found empty stack",pcVar27);
                pNVar19 = (Node *)0x0;
              }
            }
            else {
              pbVar64 = *(byte **)(lVar17 + -0x18);
              bVar4 = *(byte *)(lVar17 + -0x10);
              pNVar19 = *(Node **)(lVar17 + -8);
              *(undefined8 **)pDVar40 = (undefined8 *)(lVar17 + -0x18);
              if ((bVar4 != 5) && (bVar4 != 10)) {
                pbVar33 = *(byte **)pDVar52;
                if (pbVar33 < *(byte **)pDVar65) {
                  bVar7 = *pbVar33;
                  uVar60 = (ushort)bVar7;
                  uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                  if ((uVar37 & 1) != 0) {
                    if (*(byte **)local_1e8 <= pbVar33 + 1) goto LAB_015d6cc8;
                    uVar60 = CONCAT11(bVar7,pbVar33[1]);
                  }
                  pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                }
                else {
LAB_015d6cc8:
                  pcVar20 = "<end>";
                }
                if (pbVar64 < *(byte **)local_1e8) {
                  bVar7 = *pbVar64;
                  uVar60 = (ushort)bVar7;
                  uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                  if ((uVar37 & 1) != 0) {
                    if (*(byte **)local_1e8 <= pbVar64 + 1) goto LAB_015d73ac;
                    uVar60 = CONCAT11(bVar7,pbVar64[1]);
                  }
                  pcVar27 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                }
                else {
LAB_015d73ac:
                  pcVar27 = "<end>";
                }
                param_1 = local_1f0;
                if (bVar4 < 10) {
                  pcVar21 = (&PTR_s_<stmt>_01cc98c0)[(char)bVar4];
                }
                else {
                  pcVar21 = "<unknown>";
                }
                v8::internal::wasm::Decoder::errorf
                          ((uchar *)local_1f0,(char *)pbVar64,
                           "%s[%d] expected type %s, found %s of type %s",pcVar20,1,&DAT_018ce057,
                           pcVar27,pcVar21);
                pDVar65 = local_1e8;
              }
            }
            lVar17 = *(long *)local_1e0;
            uVar24 = (ulong)*(uint *)(*(long *)local_1d8 + -0x84);
            uVar37 = (lVar17 - *(long *)local_1d0 >> 3) * -0x5555555555555555;
            if (uVar37 < uVar24 || uVar37 - uVar24 == 0) {
              if (*(char *)(*(long *)local_1d8 + -0x78) == '\x02') {
                pNVar18 = (Node *)0x0;
              }
              else {
                pcVar20 = *(char **)pDVar52;
                if (pcVar20 < *(char **)pDVar65) {
                  cVar8 = *pcVar20;
                  uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(cVar8);
                  if ((uVar37 & 1) == 0) {
                    pcVar27 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(cVar8);
                  }
                  else if (pcVar20 + 1 < *(char **)pDVar65) {
                    pcVar27 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName
                                                (CONCAT11(cVar8,pcVar20[1]));
                    pDVar65 = local_1e8;
                    param_1 = local_1f0;
                  }
                  else {
                    pcVar27 = "<end>";
                    pDVar65 = local_1e8;
                    param_1 = local_1f0;
                  }
                }
                else {
                  pcVar27 = "<end>";
                }
                v8::internal::wasm::Decoder::errorf
                          ((uchar *)param_1,pcVar20,"%s found empty stack",pcVar27);
                pNVar18 = (Node *)0x0;
              }
            }
            else {
              pbVar64 = *(byte **)(lVar17 + -0x18);
              bVar4 = *(byte *)(lVar17 + -0x10);
              pNVar18 = *(Node **)(lVar17 + -8);
              *(undefined8 **)local_1e0 = (undefined8 *)(lVar17 + -0x18);
              if ((bVar4 != 5) && (bVar4 != 10)) {
                pbVar33 = *(byte **)pDVar52;
                if (pbVar33 < *(byte **)pDVar65) {
                  bVar7 = *pbVar33;
                  uVar60 = (ushort)bVar7;
                  uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                  if ((uVar37 & 1) != 0) {
                    if (*(byte **)local_1e8 <= pbVar33 + 1) goto LAB_015d7638;
                    uVar60 = CONCAT11(bVar7,pbVar33[1]);
                  }
                  pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                }
                else {
LAB_015d7638:
                  pcVar20 = "<end>";
                }
                if (pbVar64 < *(byte **)local_1e8) {
                  bVar7 = *pbVar64;
                  uVar60 = (ushort)bVar7;
                  uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                  if ((uVar37 & 1) != 0) {
                    if (*(byte **)local_1e8 <= pbVar64 + 1) goto LAB_015d76a0;
                    uVar60 = CONCAT11(bVar7,pbVar64[1]);
                  }
                  pcVar27 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                }
                else {
LAB_015d76a0:
                  pcVar27 = "<end>";
                }
                param_1 = local_1f0;
                if (bVar4 < 10) {
                  pcVar21 = (&PTR_s_<stmt>_01cc98c0)[(char)bVar4];
                }
                else {
                  pcVar21 = "<unknown>";
                }
                v8::internal::wasm::Decoder::errorf
                          ((uchar *)local_1f0,(char *)pbVar64,
                           "%s[%d] expected type %s, found %s of type %s",pcVar20,0,&DAT_018ce057,
                           pcVar27,pcVar21);
                pDVar65 = local_1e8;
              }
            }
            puVar43 = *(ulong **)local_1e0;
            if (puVar43 < *(ulong **)local_1f8) {
              uVar37 = *(ulong *)pDVar52;
              *(undefined1 *)(puVar43 + 1) = 5;
              puVar43[2] = 0;
              *puVar43 = uVar37;
              puVar55 = *(ulong **)local_1e0;
              *(ulong **)local_1e0 = puVar55 + 3;
            }
            else {
              lVar17 = (long)puVar43 - *(long *)local_1d0 >> 3;
              uVar37 = lVar17 * -0x5555555555555555 + 1;
              if (0x5555555 < uVar37) goto LAB_015d87f8;
              lVar15 = (long)*(ulong **)local_1f8 - *(long *)local_1d0 >> 3;
              uVar24 = lVar15 * 0x5555555555555556;
              if (uVar37 <= uVar24) {
                uVar37 = uVar24;
              }
              if (0x2aaaaa9 < (ulong)(lVar15 * -0x5555555555555555)) {
                uVar37 = 0x5555555;
              }
              if (uVar37 == 0) {
                lVar15 = 0;
              }
              else {
                uVar24 = uVar37 * 0x18;
                pZVar31 = *(Zone **)local_220;
                lVar15 = *(long *)(pZVar31 + 0x10);
                if (uVar24 < (ulong)(*(long *)(pZVar31 + 0x18) - lVar15) ||
                    uVar24 - (*(long *)(pZVar31 + 0x18) - lVar15) == 0) {
                  *(ulong *)(pZVar31 + 0x10) = lVar15 + uVar24;
                }
                else {
                  lVar15 = v8::internal::Zone::NewExpand(pZVar31,uVar24);
                }
              }
              puVar55 = (ulong *)(lVar15 + lVar17 * 8);
              *puVar55 = *(ulong *)pDVar52;
              *(undefined1 *)(puVar55 + 1) = 5;
              puVar55[2] = 0;
              lVar16 = *(long *)local_1d0;
              puVar43 = puVar55;
              for (lVar17 = *(long *)local_1e0; lVar17 != lVar16; lVar17 = lVar17 + -0x18) {
                uVar41 = *(ulong *)(lVar17 + -0x10);
                uVar24 = *(ulong *)(lVar17 + -0x18);
                puVar43[-1] = *(ulong *)(lVar17 + -8);
                puVar43[-2] = uVar41;
                puVar43[-3] = uVar24;
                puVar43 = puVar43 + -3;
              }
              *(ulong **)local_1d0 = puVar43;
              *(ulong **)local_1e0 = puVar55 + 3;
              *(ulong *)local_1f8 = lVar15 + uVar37 * 0x18;
            }
            if (((byte)*local_200 & 1) == 0) {
              if ((byte)*local_200 >> 1 == 0) {
LAB_015d78c0:
                if (*(char *)(*(long *)local_1d8 + -0x78) == '\0') {
                  local_1c8 = pNVar18;
                  local_1c0 = pNVar19;
                  uVar70 = v8::internal::compiler::WasmGraphBuilder::Simd8x16ShuffleOp
                                     (*(WasmGraphBuilder **)(param_1 + 0x80),(uchar *)&local_1a0,
                                      (Node **)&local_1c8);
                  uVar37 = FUN_015ddc44(local_240,param_1,uVar70);
                  puVar55[2] = uVar37;
                }
              }
            }
            else if (*(ulong *)local_208 == 0) goto LAB_015d78c0;
          }
          else {
            v8::internal::wasm::Decoder::error
                      (param_1,(uchar *)(*(long *)(param_1 + 0x10) + 2),"invalid shuffle mask");
          }
          uVar37 = 0x12;
          pDVar40 = local_1e0;
          goto switchD_015cbf3c_caseD_1;
        case 0xfd05:
        case 0xfd06:
        case 0xfd09:
        case 0xfd0a:
        case 0xfd0d:
          uVar70 = 1;
          goto LAB_015d2fe8;
        case 0xfd07:
        case 0xfd0b:
        case 0xfd0e:
          uVar70 = 1;
          goto LAB_015d2ffc;
        case 0xfd10:
          uVar54 = 0xfd10;
          uVar70 = 2;
          goto LAB_015d2fe8;
        case 0xfd11:
          uVar54 = 0xfd11;
          uVar70 = 2;
          goto LAB_015d2ffc;
        case 0xfd13:
          uVar54 = 0xfd13;
          uVar70 = 3;
          goto LAB_015d2fe8;
        case 0xfd14:
          uVar54 = 0xfd14;
          uVar70 = 3;
          goto LAB_015d2ffc;
        case 0xfd16:
          uVar54 = 0xfd16;
          uVar70 = 4;
LAB_015d2fe8:
          iVar12 = FUN_015df424(param_1,uVar54,uVar70);
          goto LAB_015d3068;
        case 0xfd17:
          uVar54 = 0xfd17;
          uVar70 = 4;
LAB_015d2ffc:
          iVar12 = FUN_015df848(param_1,uVar54,uVar70);
          goto LAB_015d3068;
        case 0xfdc2:
          uVar70 = 1;
          goto LAB_015d3028;
        case 0xfdc3:
          uVar70 = 3;
          goto LAB_015d3028;
        case 0xfdc4:
          uVar70 = 0;
          goto LAB_015d3028;
        case 0xfdc5:
          uVar70 = 5;
LAB_015d3028:
          uVar25 = 0;
          goto LAB_015d3064;
        case 0xfdd2:
          uVar70 = 1;
          break;
        case 0xfdd3:
          uVar70 = 2;
          break;
        case 0xfdd4:
          uVar70 = 3;
          break;
        case 0xfdd5:
          uVar70 = 4;
          break;
        case 0xfdd6:
          uVar70 = 10;
          break;
        case 0xfdd7:
          uVar70 = 0xb;
        }
        uVar25 = 1;
LAB_015d3064:
        iVar12 = FUN_015dff48(param_1,uVar70,uVar25);
LAB_015d3068:
        uVar37 = (ulong)(iVar12 + 2);
        pDVar40 = local_1e0;
        break;
      case 0xfe:
        if (((byte)param_1[0x50] >> 1 & 1) == 0) {
          pcVar20 = "Invalid opcode (enable with --experimental-wasm-threads)";
          goto LAB_015ccb40;
        }
        **(uint **)(param_1 + 0x58) = **(uint **)(param_1 + 0x58) | 2;
        pbVar64 = (byte *)(*(long *)(param_1 + 0x10) + 1);
        if ((*(byte **)(param_1 + 0x18) < pbVar64) ||
           ((int)*(byte **)(param_1 + 0x18) == (int)pbVar64)) {
          v8::internal::wasm::Decoder::error(param_1,pbVar64,"atomic index");
          uVar57 = 0;
        }
        else {
          uVar57 = (uint)*pbVar64;
        }
        uVar57 = uVar57 | (uint)bVar4 << 8;
        pNVar18 = (Node *)v8::internal::wasm::WasmOpcodes::Signature(uVar57);
        pDVar40 = local_1e0;
        pDVar65 = local_1e8;
        param_1 = local_1f0;
        pNVar19 = local_2a0;
        pDVar68 = param_1;
        if (pNVar18 == (Node *)0x0) {
          v8::internal::wasm::Decoder::error(local_1f0,"invalid atomic opcode");
          iVar12 = 0;
          pDVar40 = local_1e0;
          pDVar65 = local_1e8;
          goto LAB_015d3404;
        }
        pNVar67 = local_2a0;
        if (0x4e < uVar57 - 0xfe00) {
switchD_015ccf04_caseD_fe04:
          local_2a0 = pNVar67;
          v8::internal::wasm::Decoder::error(local_1f0,"invalid atomic opcode");
          iVar12 = 0;
          pDVar40 = local_1e0;
          pDVar65 = local_1e8;
          goto LAB_015d3404;
        }
        uVar54 = 0;
        local_2a0 = (Node *)((ulong)local_2a0 & 0xffffffff00000000);
        pNVar67 = local_2a0;
        local_2a0._4_4_ = SUB84(pNVar19,4);
        switch(uVar57) {
        default:
          if (*(long *)pNVar18 == 0) {
            uVar54 = 0;
            local_2a0 = (Node *)((ulong)local_2a0._4_4_ << 0x20);
            pNVar67 = local_2a0;
          }
          else {
            pbVar64 = *(byte **)(pNVar18 + 0x10);
            uVar54 = 0;
LAB_015d1304:
            local_2a0 = (Node *)CONCAT44(local_2a0._4_4_,(uint)*pbVar64);
            pNVar67 = local_2a0;
          }
          break;
        case 0xfe02:
        case 0xfe11:
        case 0xfe1f:
        case 0xfe26:
        case 0xfe2d:
        case 0xfe34:
        case 0xfe3b:
        case 0xfe42:
        case 0xfe49:
          if (*(long *)pNVar18 != 0) {
            pbVar64 = *(byte **)(pNVar18 + 0x10);
            uVar54 = 1;
            goto LAB_015d1304;
          }
        case 0xfe18:
          local_2a0 = (Node *)((ulong)local_2a0._4_4_ << 0x20);
          uVar54 = 1;
          pNVar67 = local_2a0;
          break;
        case 0xfe03:
          puVar1 = (uchar *)(*(ulong *)pDVar52 + 2);
          local_2a0 = pNVar67;
          if ((*(uchar **)local_1e8 < puVar1) || ((int)*(uchar **)local_1e8 == (int)puVar1)) {
            v8::internal::wasm::Decoder::error(local_1f0,puVar1,"zero");
          }
          else if (*puVar1 != '\0') {
            v8::internal::wasm::Decoder::error(local_1f0,puVar1,"invalid atomic operand");
            iVar12 = 0;
            goto LAB_015d3404;
          }
          pDVar68 = local_1f0;
          pDVar40 = local_1e0;
          if (((byte)*local_200 & 1) == 0) {
            if ((byte)*local_200 >> 1 != 0) {
LAB_015d8718:
              iVar12 = 1;
              pDVar68 = param_1;
              goto LAB_015d3404;
            }
          }
          else if (*(ulong *)local_208 != 0) goto LAB_015d8718;
          if (*(char *)(*(long *)local_1d8 + -0x78) == '\0') {
            uVar70 = v8::internal::compiler::WasmGraphBuilder::AtomicFence
                               (*(WasmGraphBuilder **)(local_1f0 + 0x80));
            FUN_015ddc44(local_240,pDVar68,uVar70);
            iVar12 = 1;
            pDVar40 = local_1e0;
            pDVar65 = local_1e8;
          }
          else {
            iVar12 = 1;
            pDVar65 = local_1e8;
          }
          goto LAB_015d3404;
        case 0xfe04:
        case 0xfe05:
        case 0xfe06:
        case 0xfe07:
        case 0xfe08:
        case 0xfe09:
        case 0xfe0a:
        case 0xfe0b:
        case 0xfe0c:
        case 0xfe0d:
        case 0xfe0e:
        case 0xfe0f:
          goto switchD_015ccf04_caseD_fe04;
        case 0xfe12:
        case 0xfe14:
        case 0xfe20:
        case 0xfe22:
        case 0xfe27:
        case 0xfe29:
        case 0xfe2e:
        case 0xfe30:
        case 0xfe35:
        case 0xfe37:
        case 0xfe3c:
        case 0xfe3e:
        case 0xfe43:
        case 0xfe45:
        case 0xfe4a:
        case 0xfe4c:
          if (*(long *)pNVar18 != 0) {
            pbVar64 = *(byte **)(pNVar18 + 0x10);
            uVar54 = 6;
            goto LAB_015d1304;
          }
        case 0xfe19:
        case 0xfe1b:
          local_2a0 = (Node *)((ulong)local_2a0._4_4_ << 0x20);
          uVar54 = 6;
          pNVar67 = local_2a0;
          break;
        case 0xfe13:
        case 0xfe15:
        case 0xfe21:
        case 0xfe23:
        case 0xfe28:
        case 0xfe2a:
        case 0xfe2f:
        case 0xfe31:
        case 0xfe36:
        case 0xfe38:
        case 0xfe3d:
        case 0xfe3f:
        case 0xfe44:
        case 0xfe46:
        case 0xfe4b:
        case 0xfe4d:
          if (*(long *)pNVar18 == 0) goto switchD_015ccf04_caseD_fe1a;
          local_2a0 = (Node *)CONCAT44(local_2a0._4_4_,(uint)**(byte **)(pNVar18 + 0x10));
          goto LAB_015d1414;
        case 0xfe17:
        case 0xfe1d:
          break;
        case 0xfe1a:
        case 0xfe1c:
switchD_015ccf04_caseD_fe1a:
          local_2a0 = (Node *)((ulong)local_2a0._4_4_ << 0x20);
LAB_015d1414:
          uVar54 = 7;
          pNVar67 = local_2a0;
        }
        local_2a0 = pNVar67;
        if (v8::internal::FLAG_wasm_atomics_on_non_shared_memory == '\0') {
LAB_015d2700:
          if (*(char *)(*(long *)(param_1 + 0x48) + 0x10) == '\0') {
            v8::internal::wasm::Decoder::error
                      (param_1,(uchar *)(*(long *)(param_1 + 0x10) + -1),
                       "Atomic opcodes used without shared memory");
            uVar37 = 2;
            break;
          }
        }
        else if (*(char *)(*(long *)(local_1f0 + 0x48) + 0x12) == '\0') {
          v8::internal::wasm::Decoder::error
                    (local_1f0,(uchar *)(*(long *)(local_1f0 + 0x10) + -1),
                     "memory instruction with no memory");
          goto LAB_015d2700;
        }
        if ((0xc3U >> (ulong)uVar54 & 1) == 0) {
LAB_015d87ec:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        v8::internal::wasm::MemoryAccessImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::
        MemoryAccessImmediate
                  ((MemoryAccessImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)&local_1c8
                   ,param_1,(uchar *)(*(long *)(param_1 + 0x10) + 1),
                   *(uint *)(&UNK_01a063b8 + (ulong)uVar54 * 4));
        iVar12 = (int)local_1c0;
        uVar54 = (uint)*(undefined8 *)(pNVar18 + 8);
        lVar17 = (long)(int)uVar54;
        local_190 = local_238;
        local_1a0 = local_210;
        local_198 = local_210;
        if (8 < uVar54) {
          FUN_015de7a0(&local_1a0,lVar17);
        }
        local_198 = local_1a0 + lVar17 * 0x18;
        if (0 < (int)uVar54) {
          lVar15 = (long)(int)uVar54 * 0x18;
          local_298 = pNVar18;
          do {
            uVar54 = uVar54 - 1;
            lVar16 = *(long *)pDVar40;
            uVar24 = (ulong)*(uint *)(*(long *)local_1d8 + -0x84);
            bVar4 = *(byte *)(*(long *)(pNVar18 + 0x10) + *(long *)pNVar18 + lVar17 + -1);
            uVar37 = (lVar16 - *(long *)local_1d0 >> 3) * -0x5555555555555555;
            if (uVar37 < uVar24 || uVar37 - uVar24 == 0) {
              if (*(char *)(*(long *)local_1d8 + -0x78) != '\x02') {
                pbVar64 = *(byte **)pDVar52;
                if (pbVar64 < *(byte **)local_1e8) {
                  bVar7 = *pbVar64;
                  uVar60 = (ushort)bVar7;
                  uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                  if ((uVar37 & 1) != 0) {
                    if (*(byte **)local_1e8 <= pbVar64 + 1) {
                      pcVar20 = "<end>";
                      pNVar18 = local_298;
                      goto LAB_015d2900;
                    }
                    uVar60 = CONCAT11(bVar7,pbVar64[1]);
                  }
                  pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                  pNVar18 = local_298;
                }
                else {
                  pcVar20 = "<end>";
                }
LAB_015d2900:
                v8::internal::wasm::Decoder::errorf
                          ((uchar *)param_1,(char *)pbVar64,"%s found empty stack",pcVar20);
              }
              pbVar64 = *(byte **)pDVar52;
              uVar70 = 0;
              uVar63 = 10;
            }
            else {
              pbVar64 = *(byte **)(lVar16 + -0x18);
              uVar30 = *(undefined4 *)(lVar16 + -0xf);
              uVar63 = (uint)*(byte *)(lVar16 + -0x10);
              uStack_1b4 = (undefined3)((uint)*(undefined4 *)(lVar16 + -0xc) >> 8);
              uVar70 = *(undefined8 *)(lVar16 + -8);
              *(undefined8 **)pDVar40 = (undefined8 *)(lVar16 + -0x18);
              uStack_1b8._3_1_ = (undefined1)((uint)uVar30 >> 0x18);
              local_1b0._0_3_ = (undefined3)uVar30;
              local_1b0._0_7_ =
                   CONCAT43(CONCAT31(uStack_1b4,uStack_1b8._3_1_),(undefined3)local_1b0);
              uStack_1b8 = uVar30;
            }
            lVar17 = lVar17 + -1;
            if (uVar63 != bVar4) {
              if ((bVar4 != 7 || uVar63 != 8) && (bVar4 != 6 || 2 < uVar63 - 7)) {
                if ((bVar4 != 10) && ((uVar63 != 10 && (bVar4 != 9 || uVar63 != 8)))) {
                  pbVar33 = *(byte **)pDVar52;
                  if (pbVar33 < *(byte **)local_1e8) {
                    bVar7 = *pbVar33;
                    uVar60 = (ushort)bVar7;
                    uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                    if ((uVar37 & 1) != 0) {
                      if (*(byte **)local_1e8 <= pbVar33 + 1) goto LAB_015d29cc;
                      uVar60 = CONCAT11(bVar7,pbVar33[1]);
                    }
                    pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                  }
                  else {
LAB_015d29cc:
                    pcVar20 = "<end>";
                  }
                  if (bVar4 < 10) {
                    pcVar27 = (&PTR_s_<stmt>_01cc9818)[(char)bVar4];
                  }
                  else {
                    pcVar27 = "<unknown>";
                  }
                  if (pbVar64 < *(byte **)local_1e8) {
                    bVar4 = *pbVar64;
                    uVar60 = (ushort)bVar4;
                    uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
                    if ((uVar37 & 1) != 0) {
                      if (*(byte **)local_1e8 <= pbVar64 + 1) goto LAB_015d2a48;
                      uVar60 = CONCAT11(bVar4,pbVar64[1]);
                    }
                    pcVar21 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
                  }
                  else {
LAB_015d2a48:
                    pcVar21 = "<end>";
                  }
                  param_1 = local_1f0;
                  if (uVar63 < 0xb) {
                    pcVar28 = (&PTR_s_<stmt>_01cc9868)[(char)(byte)uVar63];
                  }
                  else {
                    pcVar28 = "<unknown>";
                  }
                  v8::internal::wasm::Decoder::errorf
                            ((uchar *)local_1f0,(char *)pbVar64,
                             "%s[%d] expected type %s, found %s of type %s",pcVar20,(ulong)uVar54,
                             pcVar27,pcVar21,pcVar28);
                  pNVar18 = local_298;
                }
              }
            }
            *(byte **)(local_1a0 + lVar15 + -0x18) = pbVar64;
            local_1a0[lVar15 + -0x10] = (byte)uVar63;
            uVar30 = local_1b0._3_4_;
            *(undefined8 *)(local_1a0 + lVar15 + -8) = uVar70;
            *(undefined4 *)(local_1a0 + lVar15 + -0xc) = uVar30;
            *(undefined4 *)(local_1a0 + lVar15 + -0xf) = (undefined4)local_1b0;
            pDVar40 = local_1e0;
            lVar15 = lVar15 + -0x18;
          } while (0 < lVar17);
        }
        pDVar65 = local_1e8;
        if ((uint)local_2a0 == 0) {
          puVar43 = (ulong *)0x0;
        }
        else {
          if (*(long *)pNVar18 == 0) {
            uVar53 = 0;
          }
          else {
            uVar53 = **(undefined1 **)(pNVar18 + 0x10);
          }
          puVar43 = *(ulong **)pDVar40;
          if (puVar43 < *(ulong **)local_1f8) {
            uVar37 = *(ulong *)pDVar52;
            *(undefined1 *)(puVar43 + 1) = uVar53;
            puVar43[2] = 0;
            *puVar43 = uVar37;
            puVar43 = *(ulong **)pDVar40;
            *(ulong **)pDVar40 = puVar43 + 3;
          }
          else {
            lVar17 = (long)puVar43 - *(long *)local_1d0 >> 3;
            uVar37 = lVar17 * -0x5555555555555555 + 1;
            if (0x5555555 < uVar37) {
LAB_015d87f8:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            lVar15 = (long)*(ulong **)local_1f8 - *(long *)local_1d0 >> 3;
            uVar24 = lVar15 * 0x5555555555555556;
            if (uVar37 <= uVar24) {
              uVar37 = uVar24;
            }
            if (0x2aaaaa9 < (ulong)(lVar15 * -0x5555555555555555)) {
              uVar37 = 0x5555555;
            }
            if (uVar37 == 0) {
              lVar15 = 0;
            }
            else {
              uVar24 = uVar37 * 0x18;
              pZVar31 = *(Zone **)local_220;
              lVar15 = *(long *)(pZVar31 + 0x10);
              if (uVar24 < (ulong)(*(long *)(pZVar31 + 0x18) - lVar15) ||
                  uVar24 - (*(long *)(pZVar31 + 0x18) - lVar15) == 0) {
                *(ulong *)(pZVar31 + 0x10) = lVar15 + uVar24;
              }
              else {
                lVar15 = v8::internal::Zone::NewExpand(pZVar31,uVar24);
              }
            }
            uVar24 = *(ulong *)pDVar52;
            puVar43 = (ulong *)(lVar15 + lVar17 * 8);
            *(undefined1 *)(puVar43 + 1) = uVar53;
            *puVar43 = uVar24;
            puVar43[2] = 0;
            lVar16 = *(long *)local_1d0;
            puVar55 = puVar43;
            for (lVar17 = *(long *)pDVar40; lVar17 != lVar16; lVar17 = lVar17 + -0x18) {
              uVar41 = *(ulong *)(lVar17 + -0x10);
              uVar24 = *(ulong *)(lVar17 + -0x18);
              puVar55[-1] = *(ulong *)(lVar17 + -8);
              puVar55[-2] = uVar41;
              puVar55[-3] = uVar24;
              puVar55 = puVar55 + -3;
            }
            *(ulong **)local_1d0 = puVar55;
            *(ulong **)pDVar40 = puVar43 + 3;
            *(ulong *)local_1f8 = lVar15 + uVar37 * 0x18;
          }
        }
        pbVar64 = local_1a0;
        if (((byte)*local_200 & 1) == 0) {
          if ((byte)*local_200 >> 1 == 0) {
LAB_015d2c30:
            if (*(char *)(*(long *)local_1d8 + -0x78) == '\0') {
              lVar17 = (long)local_198 - (long)local_1a0 >> 3;
              uVar37 = lVar17 * -0x5555555555555555;
              local_c8 = local_268;
              local_c0 = (Node *)local_268;
              local_b8 = local_288;
              if (uVar37 < 9) {
                local_c0 = (Node *)(local_268 + lVar17 * 0x1555555555555556);
                if ((long)local_198 - (long)local_1a0 != 0) goto LAB_015d338c;
              }
              else {
                v8::base::SmallVector<v8::internal::compiler::Node*,8ul>::Grow
                          ((SmallVector<v8::internal::compiler::Node*,8ul> *)&local_c8,uVar37);
                local_c0 = (Node *)(local_c8 + lVar17 * 0x1555555555555556);
LAB_015d338c:
                puVar36 = local_c8;
                pbVar64 = pbVar64 + 0x10;
                do {
                  uVar37 = uVar37 - 1;
                  *(undefined8 *)puVar36 = *(undefined8 *)pbVar64;
                  puVar36 = puVar36 + 2;
                  pbVar64 = pbVar64 + 0x18;
                } while (uVar37 != 0);
              }
              uVar70 = v8::internal::compiler::WasmGraphBuilder::AtomicOp
                                 (*(WasmGraphBuilder **)(param_1 + 0x80),uVar57,local_c8,
                                  (ulong)local_1c8 & 0xffffffff,local_1c8._4_4_,
                                  *(int *)(param_1 + 0x10) - *(int *)(param_1 + 8));
              uVar37 = FUN_015ddc44(local_240,param_1,uVar70);
              if (puVar43 != (ulong *)0x0) {
                puVar43[2] = uVar37;
              }
              if (local_c8 != local_268) {
                free(local_c8);
              }
            }
          }
        }
        else if (*(ulong *)local_208 == 0) goto LAB_015d2c30;
        pDVar68 = param_1;
        if (local_1a0 != local_210) {
          free(local_1a0);
        }
LAB_015d3404:
        uVar37 = (ulong)(iVar12 + 2);
        param_1 = pDVar68;
      }
      goto switchD_015cbf3c_caseD_1;
    }
switchD_015cbf3c_caseD_14:
    if ((*(long *)(param_1 + 0x48) != 0) && (*(char *)(*(long *)(param_1 + 0x48) + 0x178) != '\0'))
    {
      lVar17 = v8::internal::wasm::WasmOpcodes::AsmjsSignature(bVar4);
      if (lVar17 != 0) goto LAB_015cc0d0;
      goto LAB_015cbf04;
    }
    v8::internal::wasm::Decoder::error(param_1,"Invalid opcode");
    lVar17 = local_218;
    goto LAB_015d8798;
  }
LAB_015d8764:
  if (pbVar64 != pbVar33) {
    if (((byte)param_1[0x30] & 1) == 0) {
      if ((byte)param_1[0x30] >> 1 != 0) goto LAB_015d8798;
    }
    else if (*(long *)(param_1 + 0x38) != 0) goto LAB_015d8798;
    v8::internal::wasm::Decoder::error(param_1,"Beyond end of code");
  }
LAB_015d8798:
  if (*(long *)(lVar17 + 0x28) != local_70[0]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_015d7dc4:
  NVar9 = pNVar18[lVar15];
  lVar16 = *(long *)local_1e0;
  uVar24 = (lVar16 - *(long *)local_1d0 >> 3) * -0x5555555555555555;
  if (uVar24 < *(uint *)(lVar17 + -0x84) || uVar24 - *(uint *)(lVar17 + -0x84) == 0) {
    if (*(char *)(lVar17 + -0x78) != '\x02') {
      pbVar64 = *(byte **)pDVar52;
      if (pbVar64 < *(byte **)local_1e8) {
        bVar4 = *pbVar64;
        uVar60 = (ushort)bVar4;
        uVar24 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
        if ((uVar24 & 1) != 0) {
          if (*(byte **)local_1e8 <= pbVar64 + 1) goto LAB_015d7e68;
          uVar60 = CONCAT11(bVar4,pbVar64[1]);
        }
        pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
      }
      else {
LAB_015d7e68:
        pcVar20 = "<end>";
      }
      v8::internal::wasm::Decoder::errorf
                ((uchar *)local_1f0,(char *)pbVar64,"%s found empty stack",pcVar20);
    }
    pbVar64 = *(byte **)pDVar52;
    uVar54 = 10;
    pNVar18 = local_298;
    if (NVar9 != (Node)0xa) goto LAB_015d7eb0;
  }
  else {
    pbVar64 = *(byte **)(lVar16 + -0x18);
    NVar6 = *(Node *)(lVar16 + -0x10);
    uVar54 = (uint)(byte)NVar6;
    *(undefined8 **)local_1e0 = (undefined8 *)(lVar16 + -0x18);
    if (NVar6 != NVar9) {
LAB_015d7eb0:
      if ((NVar9 != (Node)0x7 || uVar54 != 8) && (NVar9 != (Node)0x6 || 2 < uVar54 - 7)) {
        if ((NVar9 != (Node)0xa) && ((uVar54 != 10 && (NVar9 != (Node)0x9 || uVar54 != 8)))) {
          pbVar33 = *(byte **)pDVar52;
          if (pbVar33 < *(byte **)local_1e8) {
            bVar4 = *pbVar33;
            uVar60 = (ushort)bVar4;
            uVar24 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
            if ((uVar24 & 1) != 0) {
              if (*(byte **)local_1e8 <= pbVar33 + 1) goto LAB_015d7f54;
              uVar60 = CONCAT11(bVar4,pbVar33[1]);
            }
            pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
          }
          else {
LAB_015d7f54:
            pcVar20 = "<end>";
          }
          if ((byte)NVar9 < 10) {
            pcVar27 = (&PTR_s_<stmt>_01cc9818)[(char)NVar9];
          }
          else {
            pcVar27 = "<unknown>";
          }
          if (pbVar64 < *(byte **)local_1e8) {
            bVar4 = *pbVar64;
            uVar60 = (ushort)bVar4;
            uVar24 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
            if ((uVar24 & 1) != 0) {
              if (*(byte **)local_1e8 <= pbVar64 + 1) goto LAB_015d7fd0;
              uVar60 = CONCAT11(bVar4,pbVar64[1]);
            }
            pcVar21 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
            if (uVar54 < 0xb) goto LAB_015d7fe0;
LAB_015d8008:
            pcVar28 = "<unknown>";
          }
          else {
LAB_015d7fd0:
            pcVar21 = "<end>";
            if (10 < uVar54) goto LAB_015d8008;
LAB_015d7fe0:
            pcVar28 = (&PTR_s_<stmt>_01cc9868)[(char)uVar54];
          }
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)local_1f0,(char *)pbVar64,
                     "%s[%d] expected type %s, found %s of type %s",pcVar20,(ulong)((int)lVar15 + 1)
                     ,pcVar27,pcVar21,pcVar28);
          pNVar18 = local_298;
          pDVar52 = local_290;
        }
      }
    }
  }
  if ((uVar37 & 0xffffffff) - 1 == lVar15) goto LAB_015d8060;
  lVar15 = lVar15 + 1;
  lVar17 = *(long *)local_1d8;
  goto LAB_015d7dc4;
LAB_015d32a0:
  do {
    NVar9 = *pNVar56;
    NVar6 = local_298[uVar24];
    if (NVar6 != NVar9) {
      iVar12 = (int)(char)NVar9;
      if (((iVar12 != 8 || NVar6 != (Node)0x9) && (2 < (iVar12 - 7U & 0xff) || NVar6 != (Node)0x6))
         && (iVar12 != 8 || NVar6 != (Node)0x7)) {
        if ((byte)NVar6 < 0xb) {
          pcVar20 = (&PTR_s_<stmt>_01cc9868)[(char)NVar6];
        }
        else {
          pcVar20 = "<unknown>";
        }
        if ((byte)NVar9 < 0xb) {
          pcVar27 = (&PTR_s_<stmt>_01cc9868)[(char)NVar9];
        }
        else {
          pcVar27 = "<unknown>";
        }
        v8::internal::wasm::Decoder::errorf
                  ((uchar *)local_1f0,*(char **)pDVar52,
                   "type error in merge[%u] (expected %s, got %s)",uVar24,pcVar20,pcVar27);
        uVar37 = 1;
        pNVar18 = local_298;
        goto LAB_015d82e4;
      }
    }
    uVar24 = uVar24 + 1;
    pNVar56 = pNVar56 + 0x18;
  } while ((uVar37 & 0xffffffff) != uVar24);
LAB_015d8060:
  param_1 = local_1f0;
  if (((byte)*local_200 & 1) == 0) {
    if ((byte)*local_200 >> 1 == 0) {
LAB_015d8078:
      if (*(char *)(*(long *)local_1d8 + -0x78) == '\0') {
        if (uVar57 == 0) {
          if (local_2a0 < *(Node **)local_1e8) {
            uVar54 = (byte)*local_2a0 & 0x7f;
            if ((char)*local_2a0 < '\0') {
              uVar54 = v8::internal::wasm::Decoder::
                       read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                                 (local_1f0,(uchar *)(local_2a0 + 1),(uint *)&local_1a0,
                                  "branch table entry",uVar54);
            }
            else {
              local_1a0 = (byte *)CONCAT44(local_1a0._4_4_,1);
            }
          }
          else {
            local_1a0 = (byte *)((ulong)local_1a0._4_4_ << 0x20);
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)local_1f0,(char *)local_2a0,"expected %s","branch table entry");
            uVar54 = 0;
          }
          FUN_015dee00(local_240,param_1,uVar54);
        }
        else {
          puVar39 = *(undefined4 **)(local_1f0 + 0x78);
          uVar70 = v8::internal::compiler::WasmGraphBuilder::Switch
                             (*(WasmGraphBuilder **)(local_1f0 + 0x80),uVar57 + 1,pNVar19);
          pNVar19 = (Node *)FUN_015ddc44(local_240,param_1,uVar70);
          pZVar31 = *(Zone **)(param_1 + 0x70);
          puVar23 = *(undefined4 **)(pZVar31 + 0x10);
          if ((ulong)(*(long *)(pZVar31 + 0x18) - (long)puVar23) < 0x38) {
            puVar23 = (undefined4 *)v8::internal::Zone::NewExpand(pZVar31,0x38);
          }
          else {
            *(undefined4 **)(pZVar31 + 0x10) = puVar23 + 0xe;
          }
          *puVar23 = 2;
          *(undefined8 *)(puVar23 + 0xc) = *(undefined8 *)(puVar39 + 0xc);
          puVar22 = (undefined8 *)(puVar39 + 2);
          *(undefined8 *)(puVar23 + 2) = *puVar22;
          *(undefined8 *)(puVar23 + 4) = *(undefined8 *)(puVar39 + 4);
          uVar25 = *(undefined8 *)(puVar39 + 8);
          uVar70 = *(undefined8 *)(puVar39 + 6);
          *(undefined8 *)(puVar23 + 10) = *(undefined8 *)(puVar39 + 10);
          *(undefined8 *)(puVar23 + 8) = uVar25;
          *(undefined8 *)(puVar23 + 6) = uVar70;
          *puVar39 = 1;
          *(undefined8 *)(puVar39 + 4) = 0;
          *puVar22 = 0;
          *(undefined8 *)(puVar39 + 8) = 0;
          *(undefined8 *)(puVar39 + 6) = 0;
          *(undefined8 *)(puVar39 + 0xc) = 0;
          *(undefined8 *)(puVar39 + 10) = 0;
          *(undefined4 **)local_240 = puVar23;
          *(undefined4 **)(*(long *)local_230 + 0x18) = puVar23 + 2;
          *(undefined4 **)(*(long *)local_230 + 0x20) = puVar23 + 4;
          *(undefined4 **)(*(long *)local_230 + 0x28) = puVar23 + 6;
          uVar54 = 0;
          while( true ) {
            pDVar65 = local_1f0;
            pNVar18 = local_2a0;
            if (((byte)*local_200 & 1) == 0) {
              uVar37 = (ulong)((byte)*local_200 >> 1);
            }
            else {
              uVar37 = *(ulong *)local_208;
            }
            if ((uVar57 < uVar54) || (uVar37 != 0)) break;
            if (local_2a0 < *(Node **)local_1e8) {
              uVar14 = (byte)*local_2a0 & 0x7f;
              if ((char)*local_2a0 < '\0') {
                uVar14 = v8::internal::wasm::Decoder::
                         read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                                   (local_1f0,(uchar *)(local_2a0 + 1),(uint *)&local_1a0,
                                    "branch table entry",uVar14);
                uVar37 = (ulong)local_1a0 & 0xffffffff;
              }
              else {
                uVar37 = 1;
                local_1a0 = (byte *)CONCAT44(local_1a0._4_4_,1);
              }
            }
            else {
              local_1a0 = (byte *)((ulong)local_1a0._4_4_ << 0x20);
              v8::internal::wasm::Decoder::errorf
                        ((uchar *)local_1f0,(char *)local_2a0,"expected %s","branch table entry");
              uVar37 = 0;
              uVar14 = 0;
            }
            local_2a0 = pNVar18 + uVar37;
            lVar17 = FUN_015ddde4(pDVar65,puVar23);
            *(long *)(pDVar65 + 0x78) = lVar17;
            *(long *)(*(long *)(pDVar65 + 0x80) + 0x18) = lVar17 + 8;
            *(long *)(*(long *)(pDVar65 + 0x80) + 0x20) = lVar17 + 0x10;
            *(long *)(*(long *)(pDVar65 + 0x80) + 0x28) = lVar17 + 0x18;
            if (uVar57 == uVar54) {
              uVar70 = v8::internal::compiler::WasmGraphBuilder::IfDefault
                                 (*(WasmGraphBuilder **)(pDVar65 + 0x80),pNVar19);
            }
            else {
              uVar70 = v8::internal::compiler::WasmGraphBuilder::IfValue
                                 (*(WasmGraphBuilder **)(pDVar65 + 0x80),uVar54,pNVar19);
            }
            pDVar40 = local_1f0;
            pDVar65 = local_240;
            uVar70 = FUN_015ddc44(local_240,local_1f0,uVar70);
            *(undefined8 *)(*(long *)(pDVar40 + 0x78) + 8) = uVar70;
            FUN_015dee00(pDVar65,pDVar40,uVar14);
            uVar54 = uVar54 + 1;
          }
          *(undefined4 **)local_240 = puVar39;
          *(undefined8 **)(*(long *)local_230 + 0x18) = puVar22;
          *(undefined4 **)(*(long *)local_230 + 0x20) = puVar39 + 4;
          *(undefined4 **)(*(long *)local_230 + 0x28) = puVar39 + 6;
          param_1 = local_1f0;
        }
        uVar37 = (*(long *)(param_1 + 0xd8) - *(long *)(param_1 + 0xd0) >> 3) * -0xf0f0f0f0f0f0f0f;
        pNVar18 = local_298;
        if (0 < (int)uVar37) {
          uVar24 = 0;
          do {
            if ((*(ulong *)((long)local_2b0 + (uVar24 >> 3 & 0x1ffffffffffffff8)) >> (uVar24 & 0x3f)
                & 1) != 0) {
              lVar17 = *(long *)local_1d8 + uVar24 * -0x88;
              lVar15 = lVar17 + -0x70;
              if (*(char *)(lVar17 + -0x88) != '\x03') {
                lVar15 = lVar17 + -0x48;
              }
              *(undefined1 *)(lVar15 + 0x20) = 1;
            }
            uVar24 = uVar24 + 1;
          } while (uVar24 != (uVar37 & 0xffffffff));
        }
      }
      while( true ) {
        DVar5 = *local_200;
        if (((byte)DVar5 & 1) == 0) {
          uVar37 = (ulong)((byte)DVar5 >> 1);
        }
        else {
          uVar37 = *(ulong *)local_208;
        }
        if ((uVar57 < uVar63) || (uVar37 != 0)) break;
        uVar63 = uVar63 + 1;
        if (pNVar67 < *(Node **)local_1e8) {
          if ((char)*pNVar67 < '\0') {
            v8::internal::wasm::Decoder::
            read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                      (param_1,(uchar *)(pNVar67 + 1),(uint *)&local_1a0,"branch table entry",
                       (byte)*pNVar67 & 0x7f);
            uVar37 = (ulong)local_1a0 & 0xffffffff;
          }
          else {
            uVar37 = 1;
            local_1a0 = (byte *)CONCAT44(local_1a0._4_4_,1);
          }
        }
        else {
          local_1a0 = (byte *)((ulong)local_1a0._4_4_ << 0x20);
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pNVar67,"expected %s","branch table entry");
          uVar37 = 0;
        }
        pNVar67 = pNVar67 + uVar37;
        pNVar18 = local_298;
      }
      lVar17 = *(long *)(param_1 + 0xd8);
      lVar15 = *(long *)(param_1 + 0xb0) + (ulong)*(uint *)(lVar17 + -0x84) * 0x18;
      if (lVar15 == *(long *)(param_1 + 0xb8)) {
        iVar12 = (int)pNVar67 - (int)pbVar69;
        if (((byte)DVar5 & 1) == 0) goto LAB_015d8528;
LAB_015d853c:
        uVar24 = *(ulong *)local_208;
      }
      else {
        *(long *)local_1e0 = lVar15;
        iVar12 = (int)pNVar67 - (int)pbVar69;
        if (((byte)DVar5 & 1) != 0) goto LAB_015d853c;
LAB_015d8528:
        uVar24 = (ulong)((byte)DVar5 >> 1);
      }
      uVar37 = (ulong)(iVar12 + 1);
      if ((uVar24 == 0) && (*(char *)(*(long *)local_1d8 + -0x78) == '\0')) {
        puVar39 = *(undefined4 **)(param_1 + 0x78);
        *puVar39 = 0;
        *(undefined8 *)(puVar39 + 4) = 0;
        *(undefined8 *)(puVar39 + 2) = 0;
        *(undefined8 *)(puVar39 + 8) = 0;
        *(undefined8 *)(puVar39 + 6) = 0;
        *(undefined8 *)(puVar39 + 0xc) = 0;
        *(undefined8 *)(puVar39 + 10) = 0;
      }
      *(undefined1 *)(lVar17 + -0x78) = 2;
      pDVar65 = local_1e8;
      pDVar40 = local_1e0;
      goto joined_r0x015d3264;
    }
  }
  else if (*(ulong *)local_208 == 0) goto LAB_015d8078;
  uVar37 = 1;
  pDVar65 = local_1e8;
  pDVar40 = local_1e0;
joined_r0x015d3264:
  local_1e8 = pDVar65;
  local_1e0 = pDVar40;
  if (pNVar18 != (Node *)0x0) {
LAB_015d82e4:
    operator_delete(pNVar18);
  }
  if (local_2b0 != (void *)0x0) {
    operator_delete(local_2b0);
  }
switchD_015cbf3c_caseD_1:
  pbVar64 = (byte *)(*(ulong *)pDVar52 + uVar37);
  *(byte **)pDVar52 = pbVar64;
  pbVar33 = *(byte **)pDVar65;
  lVar17 = local_218;
  if (pbVar33 <= pbVar64) goto LAB_015d8764;
  goto LAB_015cbf20;
LAB_015ce6c8:
  uVar24 = uVar24 + 1;
  lVar15 = lVar15 + 0x18;
  if (uVar57 == uVar24) goto LAB_015ce778;
  goto joined_r0x015ce6c0;
code_r0x015d6a90:
  pbVar64 = *(byte **)pDVar52;
  if (pbVar64 < *(byte **)local_1e8) {
    bVar7 = *pbVar64;
    uVar60 = (ushort)bVar7;
    local_1e8 = pDVar68;
    uVar37 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar60);
    if ((uVar37 & 1) != 0) {
      if (*(byte **)pDVar65 <= pbVar64 + 1) {
        pcVar20 = "<end>";
        goto LAB_015d6af8;
      }
      uVar60 = CONCAT11(bVar7,pbVar64[1]);
    }
    pcVar20 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar60);
  }
  else {
    pcVar20 = "<end>";
    local_1e8 = pDVar68;
  }
LAB_015d6af8:
  v8::internal::wasm::Decoder::errorf
            ((uchar *)param_1,(char *)pbVar64,"%s found empty stack",pcVar20);
  uVar41 = uVar41 - 1;
  pNVar19 = local_2a0;
  pDVar68 = local_1e8;
  iVar12 = local_a8;
  local_a8 = iVar58;
  local_1e8 = pDVar65;
  goto joined_r0x015d6a38;
}

