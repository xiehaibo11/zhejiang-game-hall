
/* v8::internal::wasm::WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,
   v8::internal::wasm::EmptyInterface>::DecodeFunctionBody() */

void __thiscall
v8::internal::wasm::
WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>::
DecodeFunctionBody(WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>
                   *this)

{
  WasmFeatures *pWVar1;
  uchar *puVar2;
  uint *puVar3;
  byte bVar4;
  char cVar5;
  ValueBase VVar6;
  byte bVar7;
  WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>
  WVar8;
  ControlBase CVar9;
  ValueBase VVar10;
  long lVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  ValueBase *pVVar18;
  char *pcVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  ulong uVar23;
  char *pcVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  char *pcVar27;
  char *pcVar28;
  undefined1 *puVar29;
  Zone *this_00;
  long lVar30;
  byte *pbVar31;
  long *plVar32;
  long lVar33;
  ulong uVar34;
  uint *puVar35;
  ulong *puVar36;
  undefined4 uVar37;
  undefined8 uVar38;
  ValueBase *pVVar39;
  undefined1 uVar40;
  WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>
  *pWVar41;
  uint *puVar42;
  vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
  *this_01;
  ValueBase *pVVar43;
  uint uVar44;
  uint uVar45;
  byte *pbVar46;
  WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>
  *pWVar47;
  ControlBase *pCVar48;
  size_t __n;
  WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>
  *pWVar49;
  ulong uVar50;
  ushort uVar51;
  vector<v8::internal::wasm::ControlBase<v8::internal::wasm::ValueBase>,v8::internal::ZoneAllocator<v8::internal::wasm::ControlBase<v8::internal::wasm::ValueBase>>>
  *this_02;
  WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>
  *pWVar52;
  byte *pbVar53;
  void *local_1b0;
  uint local_12c;
  Reachability local_128 [4];
  ControlKind local_124 [4];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  int local_108 [2];
  int local_100;
  uint local_88;
  uint local_84;
  long *local_80;
  undefined8 local_78;
  long local_70;
  
  lVar11 = tpidr_el0;
  local_70 = *(long *)(lVar11 + 0x28);
  local_88 = CONCAT31(local_88._1_3_,2);
  this_02 = (vector<v8::internal::wasm::ControlBase<v8::internal::wasm::ValueBase>,v8::internal::ZoneAllocator<v8::internal::wasm::ControlBase<v8::internal::wasm::ValueBase>>>
             *)(this + 0xc0);
  pWVar47 = this + 200;
  puVar29 = *(undefined1 **)pWVar47;
  if (*(undefined1 **)this_02 == puVar29) {
    bVar12 = false;
  }
  else {
    bVar12 = puVar29[-0x48] != '\0';
  }
  local_12c = CONCAT31(local_12c._1_3_,bVar12);
  pWVar41 = this + 0xa8;
  this_01 = (vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
             *)(this + 0xa0);
  pWVar52 = this + 0x10;
  uVar37 = (undefined4)((ulong)(*(long *)pWVar41 - *(long *)this_01) >> 4);
  local_120 = (ValueBase *)CONCAT44(local_120._4_4_,uVar37);
  if (puVar29 < *(undefined1 **)(this + 0xd0)) {
    uVar38 = *(undefined8 *)pWVar52;
    puVar29[0x10] = bVar12;
    *(undefined4 *)(puVar29 + 4) = uVar37;
    *(undefined4 *)(puVar29 + 0x18) = 0;
    *(undefined8 *)(puVar29 + 0x20) = 0;
    *(undefined4 *)(puVar29 + 0x38) = 0;
    *(undefined8 *)(puVar29 + 0x40) = 0;
    *puVar29 = 2;
    puVar29[0x30] = bVar12 ^ 1;
    *(undefined8 *)(puVar29 + 8) = uVar38;
    puVar29[0x50] = 0;
    lVar17 = *(long *)pWVar47 + 0x58;
    *(long *)pWVar47 = lVar17;
  }
  else {
    std::__ndk1::
    vector<v8::internal::wasm::ControlBase<v8::internal::wasm::ValueBase>,v8::internal::ZoneAllocator<v8::internal::wasm::ControlBase<v8::internal::wasm::ValueBase>>>
    ::
    __emplace_back_slow_path<v8::internal::wasm::ControlKind&,unsigned_int,unsigned_char_const*&,v8::internal::wasm::Reachability&>
              (this_02,(ControlKind *)&local_88,(uint *)&local_120,(uchar **)pWVar52,
               (Reachability *)&local_12c);
    lVar17 = *(long *)pWVar47;
  }
  *(undefined4 *)(lVar17 + -0x40) = 0;
  uVar34 = **(ulong **)(this + 0x60);
  iVar13 = (int)uVar34;
  *(int *)(lVar17 + -0x20) = iVar13;
  if (iVar13 != 0) {
    if (iVar13 == 1) {
      uVar40 = **(undefined1 **)(*(long *)(this + 0x60) + 0x10);
      *(undefined8 *)(lVar17 + -0x18) = *(undefined8 *)(this + 0x10);
      *(undefined1 *)(lVar17 + -0x10) = uVar40;
    }
    else {
      this_00 = *(Zone **)(this + 0x70);
      uVar34 = uVar34 & 0xffffffff;
      uVar23 = uVar34 * 0x10;
      puVar22 = *(undefined8 **)(this_00 + 0x10);
      if (uVar23 < (ulong)(*(long *)(this_00 + 0x18) - (long)puVar22) ||
          uVar23 - (*(long *)(this_00 + 0x18) - (long)puVar22) == 0) {
        *(undefined8 **)(this_00 + 0x10) = puVar22 + uVar34 * 2;
      }
      else {
        puVar22 = (undefined8 *)Zone::NewExpand(this_00,uVar23);
      }
      *(undefined8 **)(lVar17 + -0x18) = puVar22;
      uVar40 = **(undefined1 **)(*(long *)(this + 0x60) + 0x10);
      *puVar22 = *(undefined8 *)(this + 0x10);
      *(undefined1 *)(puVar22 + 1) = uVar40;
      if (uVar34 != 1) {
        lVar30 = 0;
        uVar23 = 1;
        do {
          lVar33 = *(long *)(lVar17 + -0x18) + lVar30;
          lVar30 = lVar30 + 0x10;
          uVar40 = *(undefined1 *)(*(long *)(*(long *)(this + 0x60) + 0x10) + uVar23);
          uVar23 = uVar23 + 1;
          *(undefined8 *)(lVar33 + 0x10) = *(undefined8 *)(this + 0x10);
          *(undefined1 *)(lVar33 + 0x18) = uVar40;
        } while (uVar34 != uVar23);
      }
    }
  }
  pWVar49 = this + 0x18;
  pbVar31 = *(byte **)pWVar49;
  pbVar53 = *(byte **)(this + 0x10);
  if (pbVar53 < pbVar31) {
    pWVar1 = (WasmFeatures *)(this + 0x50);
    puVar35 = (uint *)((ulong)&local_120 | 4);
    do {
      pVVar43 = local_120;
      bVar4 = *pbVar53;
      uVar51 = (ushort)bVar4;
      uVar34 = 1;
      switch(uVar51) {
      case 0:
        goto switchD_0132bc7c_caseD_0;
      case 1:
        break;
      case 2:
        BlockTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::BlockTypeImmediate
                  ((BlockTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)&local_88,
                   pWVar1,(Decoder *)this,pbVar53);
        plVar32 = local_78;
        if ((char)local_84 == '\n') {
          lVar17 = *(long *)(this + 0x48);
          uVar34 = (ulong)local_80 & 0xffffffff;
          if (lVar17 == 0) {
LAB_0132cae8:
            uVar23 = 0;
          }
          else {
            uVar23 = *(long *)(lVar17 + 0x60) - *(long *)(lVar17 + 0x58) >> 3;
            if (uVar34 < uVar23) {
              plVar32 = *(long **)(*(long *)(lVar17 + 0x58) + uVar34 * 8);
              goto joined_r0x0132c3b8;
            }
          }
LAB_0132caec:
          Decoder::errorf((uchar *)this,*(char **)(this + 0x10),
                          "block type index %u out of bounds (%zu signatures)",uVar34,uVar23);
          goto LAB_0132bc3c;
        }
joined_r0x0132c3b8:
        local_120 = (ValueBase *)local_108;
        local_118 = (ValueBase *)local_108;
        local_110 = (ValueBase *)&local_88;
        local_78 = plVar32;
        if (plVar32 != (long *)0x0) {
          uVar34 = plVar32[1];
          uVar14 = (uint)uVar34;
          uVar23 = (ulong)(int)uVar14;
          if (8 < uVar14) {
            base::SmallVector<v8::internal::wasm::ValueBase,8ul>::Grow
                      ((SmallVector<v8::internal::wasm::ValueBase,8ul> *)&local_120,uVar23);
          }
          local_118 = local_120 + uVar23 * 0x10;
          if (0 < (int)uVar14) {
            uVar34 = -(uVar34 >> 0x1f & 1) & 0xfffffff000000000 | (uVar34 & 0xffffffff) << 4;
            do {
              uVar14 = uVar14 - 1;
              lVar17 = *(long *)pWVar41;
              bVar4 = *(byte *)(plVar32[2] + *plVar32 + uVar23 + -1);
              if ((ulong)*(uint *)(*(long *)pWVar47 + -0x54) <
                  (ulong)(lVar17 - *(long *)this_01 >> 4)) {
                pbVar53 = *(byte **)(lVar17 + -0x10);
                uVar20 = (ulong)*(byte *)(lVar17 + -8);
                *(undefined8 **)pWVar41 = (undefined8 *)(lVar17 + -0x10);
              }
              else {
                if (*(char *)(*(long *)pWVar47 + -0x48) != '\x02') {
                  pbVar53 = *(byte **)pWVar52;
                  if (pbVar53 < *(byte **)pWVar49) {
                    bVar7 = *pbVar53;
                    uVar51 = (ushort)bVar7;
                    uVar20 = WasmOpcodes::IsPrefixOpcode(uVar51);
                    if ((uVar20 & 1) != 0) {
                      if (*(byte **)pWVar49 <= pbVar53 + 1) goto LAB_0132ce14;
                      uVar51 = CONCAT11(bVar7,pbVar53[1]);
                    }
                    pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
                  }
                  else {
LAB_0132ce14:
                    pcVar24 = "<end>";
                  }
                  Decoder::errorf((uchar *)this,(char *)pbVar53,"%s found empty stack",pcVar24);
                }
                pbVar53 = *(byte **)pWVar52;
                uVar20 = 10;
              }
              uVar45 = (uint)uVar20;
              uVar23 = uVar23 - 1;
              if (uVar45 != bVar4) {
                if ((bVar4 != 7 || uVar45 != 8) && (bVar4 != 6 || 2 < uVar45 - 7)) {
                  if ((bVar4 != 10) && ((uVar20 != 10 && (bVar4 != 9 || uVar45 != 8)))) {
                    pbVar31 = *(byte **)pWVar52;
                    if (pbVar31 < *(byte **)pWVar49) {
                      bVar7 = *pbVar31;
                      uVar51 = (ushort)bVar7;
                      uVar50 = WasmOpcodes::IsPrefixOpcode(uVar51);
                      if ((uVar50 & 1) != 0) {
                        if (*(byte **)pWVar49 <= pbVar31 + 1) goto LAB_0132cefc;
                        uVar51 = CONCAT11(bVar7,pbVar31[1]);
                      }
                      pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
                    }
                    else {
LAB_0132cefc:
                      pcVar24 = "<end>";
                    }
                    if (bVar4 < 10) {
                      pcVar19 = (&PTR_s_<stmt>_01cc3d10)[(char)bVar4];
                    }
                    else {
                      pcVar19 = "<unknown>";
                    }
                    if (pbVar53 < *(byte **)pWVar49) {
                      bVar4 = *pbVar53;
                      uVar51 = (ushort)bVar4;
                      uVar50 = WasmOpcodes::IsPrefixOpcode(uVar51);
                      if ((uVar50 & 1) == 0) {
LAB_0132cf98:
                        pcVar27 = (char *)WasmOpcodes::OpcodeName(uVar51);
                      }
                      else {
                        if (pbVar53 + 1 < *(byte **)pWVar49) {
                          uVar51 = CONCAT11(bVar4,pbVar53[1]);
                          goto LAB_0132cf98;
                        }
                        pcVar27 = "<end>";
                      }
                      if (10 < uVar45) goto LAB_0132cfbc;
LAB_0132cd30:
                      pcVar28 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                                          (-(uVar20 >> 7) & 0xfffffffffffff800 | uVar20 << 3));
                    }
                    else {
                      pcVar27 = "<end>";
                      if (uVar45 < 0xb) goto LAB_0132cd30;
LAB_0132cfbc:
                      pcVar28 = "<unknown>";
                    }
                    Decoder::errorf((uchar *)this,(char *)pbVar53,
                                    "%s[%d] expected type %s, found %s of type %s",pcVar24,
                                    (ulong)uVar14,pcVar19,pcVar27,pcVar28);
                  }
                }
              }
              *(byte **)(local_120 + (uVar34 - 0x10)) = pbVar53;
              local_120[uVar34 - 8] = SUB81(uVar20,0);
              uVar34 = uVar34 - 0x10;
            } while (0 < (long)uVar23);
          }
        }
        local_124[0] = (ControlKind)0x2;
        puVar29 = *(undefined1 **)pWVar47;
        if (*(undefined1 **)this_02 == puVar29) {
          local_128[0] = (Reachability)0x0;
        }
        else {
          local_128[0] = (Reachability)(puVar29[-0x48] != '\0');
        }
        local_12c = (uint)((ulong)(*(long *)(this + 0xa8) - *(long *)(this + 0xa0)) >> 4);
        if (puVar29 < *(undefined1 **)(this + 0xd0)) {
          uVar38 = *(undefined8 *)pWVar52;
          *(Reachability *)(puVar29 + 0x10) = local_128[0];
          *(uint *)(puVar29 + 4) = local_12c;
          *(undefined4 *)(puVar29 + 0x18) = 0;
          *(undefined8 *)(puVar29 + 0x20) = 0;
          *(undefined4 *)(puVar29 + 0x38) = 0;
          *(undefined8 *)(puVar29 + 0x40) = 0;
          *puVar29 = 2;
          puVar29[0x30] = (byte)local_128[0] ^ 1;
          *(undefined8 *)(puVar29 + 8) = uVar38;
          puVar29[0x50] = 0;
          lVar17 = *(long *)pWVar47 + 0x58;
          *(long *)pWVar47 = lVar17;
        }
        else {
          std::__ndk1::
          vector<v8::internal::wasm::ControlBase<v8::internal::wasm::ValueBase>,v8::internal::ZoneAllocator<v8::internal::wasm::ControlBase<v8::internal::wasm::ValueBase>>>
          ::
          __emplace_back_slow_path<v8::internal::wasm::ControlKind&,unsigned_int,unsigned_char_const*&,v8::internal::wasm::Reachability&>
                    (this_02,local_124,&local_12c,(uchar **)pWVar52,local_128);
          lVar17 = *(long *)pWVar47;
        }
        SetBlockType(this,(ControlBase *)(lVar17 + -0x58),(BlockTypeImmediate *)&local_88,local_120)
        ;
        PushMergeValues(this,(ControlBase *)(lVar17 + -0x58),(Merge *)(lVar17 + -0x40));
        uVar34 = (ulong)(local_88 + 1);
        if (local_120 == (ValueBase *)local_108) break;
        goto LAB_013307d0;
      case 3:
        BlockTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::BlockTypeImmediate
                  ((BlockTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)&local_88,
                   pWVar1,(Decoder *)this,pbVar53);
        plVar32 = local_78;
        if ((char)local_84 == '\n') {
          lVar17 = *(long *)(this + 0x48);
          uVar34 = (ulong)local_80 & 0xffffffff;
          if (lVar17 == 0) goto LAB_0132cae8;
          uVar23 = *(long *)(lVar17 + 0x60) - *(long *)(lVar17 + 0x58) >> 3;
          if (uVar23 <= uVar34) goto LAB_0132caec;
          plVar32 = *(long **)(*(long *)(lVar17 + 0x58) + uVar34 * 8);
        }
        local_120 = (ValueBase *)local_108;
        local_118 = (ValueBase *)local_108;
        local_110 = (ValueBase *)&local_88;
        local_78 = plVar32;
        if (plVar32 != (long *)0x0) {
          uVar34 = plVar32[1];
          uVar14 = (uint)uVar34;
          uVar23 = (ulong)(int)uVar14;
          if (8 < uVar14) {
            base::SmallVector<v8::internal::wasm::ValueBase,8ul>::Grow
                      ((SmallVector<v8::internal::wasm::ValueBase,8ul> *)&local_120,uVar23);
          }
          local_118 = local_120 + uVar23 * 0x10;
          if (0 < (int)uVar14) {
            uVar34 = -(uVar34 >> 0x1f & 1) & 0xfffffff000000000 | (uVar34 & 0xffffffff) << 4;
            do {
              uVar14 = uVar14 - 1;
              lVar17 = *(long *)pWVar41;
              bVar4 = *(byte *)(plVar32[2] + *plVar32 + uVar23 + -1);
              if ((ulong)*(uint *)(*(long *)pWVar47 + -0x54) <
                  (ulong)(lVar17 - *(long *)this_01 >> 4)) {
                pbVar53 = *(byte **)(lVar17 + -0x10);
                uVar20 = (ulong)*(byte *)(lVar17 + -8);
                *(undefined8 **)pWVar41 = (undefined8 *)(lVar17 + -0x10);
              }
              else {
                if (*(char *)(*(long *)pWVar47 + -0x48) != '\x02') {
                  pbVar53 = *(byte **)pWVar52;
                  if (pbVar53 < *(byte **)pWVar49) {
                    bVar7 = *pbVar53;
                    uVar51 = (ushort)bVar7;
                    uVar20 = WasmOpcodes::IsPrefixOpcode(uVar51);
                    if ((uVar20 & 1) != 0) {
                      if (*(byte **)pWVar49 <= pbVar53 + 1) goto LAB_0132d138;
                      uVar51 = CONCAT11(bVar7,pbVar53[1]);
                    }
                    pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
                  }
                  else {
LAB_0132d138:
                    pcVar24 = "<end>";
                  }
                  Decoder::errorf((uchar *)this,(char *)pbVar53,"%s found empty stack",pcVar24);
                }
                pbVar53 = *(byte **)pWVar52;
                uVar20 = 10;
              }
              uVar45 = (uint)uVar20;
              uVar23 = uVar23 - 1;
              if (uVar45 != bVar4) {
                if ((bVar4 != 7 || uVar45 != 8) && (bVar4 != 6 || 2 < uVar45 - 7)) {
                  if ((bVar4 != 10) && ((uVar20 != 10 && (bVar4 != 9 || uVar45 != 8)))) {
                    pbVar31 = *(byte **)pWVar52;
                    if (pbVar31 < *(byte **)pWVar49) {
                      bVar7 = *pbVar31;
                      uVar51 = (ushort)bVar7;
                      uVar50 = WasmOpcodes::IsPrefixOpcode(uVar51);
                      if ((uVar50 & 1) != 0) {
                        if (*(byte **)pWVar49 <= pbVar31 + 1) goto LAB_0132d220;
                        uVar51 = CONCAT11(bVar7,pbVar31[1]);
                      }
                      pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
                    }
                    else {
LAB_0132d220:
                      pcVar24 = "<end>";
                    }
                    if (bVar4 < 10) {
                      pcVar19 = (&PTR_s_<stmt>_01cc3d10)[(char)bVar4];
                    }
                    else {
                      pcVar19 = "<unknown>";
                    }
                    if (pbVar53 < *(byte **)pWVar49) {
                      bVar4 = *pbVar53;
                      uVar51 = (ushort)bVar4;
                      uVar50 = WasmOpcodes::IsPrefixOpcode(uVar51);
                      if ((uVar50 & 1) == 0) {
LAB_0132d2bc:
                        pcVar27 = (char *)WasmOpcodes::OpcodeName(uVar51);
                      }
                      else {
                        if (pbVar53 + 1 < *(byte **)pWVar49) {
                          uVar51 = CONCAT11(bVar4,pbVar53[1]);
                          goto LAB_0132d2bc;
                        }
                        pcVar27 = "<end>";
                      }
                      if (10 < uVar45) goto LAB_0132d2e0;
LAB_0132d054:
                      pcVar28 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                                          (-(uVar20 >> 7) & 0xfffffffffffff800 | uVar20 << 3));
                    }
                    else {
                      pcVar27 = "<end>";
                      if (uVar45 < 0xb) goto LAB_0132d054;
LAB_0132d2e0:
                      pcVar28 = "<unknown>";
                    }
                    Decoder::errorf((uchar *)this,(char *)pbVar53,
                                    "%s[%d] expected type %s, found %s of type %s",pcVar24,
                                    (ulong)uVar14,pcVar19,pcVar27,pcVar28);
                  }
                }
              }
              *(byte **)(local_120 + (uVar34 - 0x10)) = pbVar53;
              local_120[uVar34 - 8] = SUB81(uVar20,0);
              uVar34 = uVar34 - 0x10;
            } while (0 < (long)uVar23);
          }
        }
        local_124[0] = (ControlKind)0x3;
        puVar29 = *(undefined1 **)pWVar47;
        if (*(undefined1 **)this_02 == puVar29) {
          local_128[0] = (Reachability)0x0;
        }
        else {
          local_128[0] = (Reachability)(puVar29[-0x48] != '\0');
        }
        local_12c = (uint)((ulong)(*(long *)(this + 0xa8) - *(long *)(this + 0xa0)) >> 4);
        if (puVar29 < *(undefined1 **)(this + 0xd0)) {
          uVar38 = *(undefined8 *)pWVar52;
          uVar40 = 3;
LAB_0132e850:
          *(Reachability *)(puVar29 + 0x10) = local_128[0];
          *(uint *)(puVar29 + 4) = local_12c;
          *(undefined4 *)(puVar29 + 0x18) = 0;
          *(undefined8 *)(puVar29 + 0x20) = 0;
          *(undefined4 *)(puVar29 + 0x38) = 0;
          *(undefined8 *)(puVar29 + 0x40) = 0;
          *puVar29 = uVar40;
LAB_01330758:
          puVar29[0x30] = (byte)local_128[0] ^ 1;
          *(undefined8 *)(puVar29 + 8) = uVar38;
          puVar29[0x50] = 0;
          lVar17 = *(long *)pWVar47 + 0x58;
          *(long *)pWVar47 = lVar17;
        }
        else {
LAB_01330774:
          std::__ndk1::
          vector<v8::internal::wasm::ControlBase<v8::internal::wasm::ValueBase>,v8::internal::ZoneAllocator<v8::internal::wasm::ControlBase<v8::internal::wasm::ValueBase>>>
          ::
          __emplace_back_slow_path<v8::internal::wasm::ControlKind&,unsigned_int,unsigned_char_const*&,v8::internal::wasm::Reachability&>
                    (this_02,local_124,&local_12c,(uchar **)pWVar52,local_128);
          lVar17 = *(long *)pWVar47;
        }
        SetBlockType(this,(ControlBase *)(lVar17 + -0x58),(BlockTypeImmediate *)&local_88,local_120)
        ;
        uVar34 = (ulong)(local_88 + 1);
        PushMergeValues(this,(ControlBase *)(lVar17 + -0x58),(Merge *)(lVar17 + -0x40));
        goto LAB_013307c0;
      case 4:
        BlockTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::BlockTypeImmediate
                  ((BlockTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)&local_88,
                   pWVar1,(Decoder *)this,pbVar53);
        if ((char)local_84 == '\n') {
          lVar17 = *(long *)(this + 0x48);
          uVar34 = (ulong)local_80 & 0xffffffff;
          if (lVar17 == 0) goto LAB_0132cae8;
          uVar23 = *(long *)(lVar17 + 0x60) - *(long *)(lVar17 + 0x58) >> 3;
          if (uVar23 <= uVar34) goto LAB_0132caec;
          local_78 = *(long **)(*(long *)(lVar17 + 0x58) + uVar34 * 8);
        }
        lVar17 = *(long *)pWVar41;
        if ((ulong)*(uint *)(*(long *)pWVar47 + -0x54) < (ulong)(lVar17 - *(long *)this_01 >> 4)) {
          pbVar53 = *(byte **)(lVar17 + -0x10);
          uVar34 = *(ulong *)(lVar17 + -8);
          *(undefined8 **)pWVar41 = (undefined8 *)(lVar17 + -0x10);
          if ((((uint)uVar34 & 0xff) != 1) && (uVar34 = uVar34 & 0xff, uVar34 != 10)) {
            pbVar31 = *(byte **)pWVar52;
            if (pbVar31 < *(byte **)pWVar49) {
              bVar4 = *pbVar31;
              uVar51 = (ushort)bVar4;
              uVar23 = WasmOpcodes::IsPrefixOpcode(uVar51);
              if ((uVar23 & 1) != 0) {
                if (*(byte **)pWVar49 <= pbVar31 + 1) goto LAB_0132e96c;
                uVar51 = CONCAT11(bVar4,pbVar31[1]);
              }
              pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
            }
            else {
LAB_0132e96c:
              pcVar24 = "<end>";
            }
            if (pbVar53 < *(byte **)pWVar49) {
              bVar4 = *pbVar53;
              uVar51 = (ushort)bVar4;
              uVar23 = WasmOpcodes::IsPrefixOpcode(uVar51);
              if ((uVar23 & 1) == 0) {
LAB_0132f8b0:
                pcVar19 = (char *)WasmOpcodes::OpcodeName(uVar51);
              }
              else {
                if (pbVar53 + 1 < *(byte **)pWVar49) {
                  uVar51 = CONCAT11(bVar4,pbVar53[1]);
                  goto LAB_0132f8b0;
                }
                pcVar19 = "<end>";
              }
              if (10 < (uint)uVar34) goto LAB_01330390;
LAB_0132f888:
              pcVar27 = *(char **)((long)&PTR_s_<stmt>_01cc3e10 +
                                  (-(uVar34 >> 7) & 0xfffffffffffff800 | uVar34 << 3));
            }
            else {
              pcVar19 = "<end>";
              if ((uint)uVar34 < 0xb) goto LAB_0132f888;
LAB_01330390:
              pcVar27 = "<unknown>";
            }
            Decoder::errorf((uchar *)this,(char *)pbVar53,
                            "%s[%d] expected type %s, found %s of type %s",pcVar24,0,"i32",pcVar19,
                            pcVar27);
          }
        }
        else if (*(char *)(*(long *)pWVar47 + -0x48) != '\x02') {
          pbVar53 = *(byte **)pWVar52;
          if (pbVar53 < *(byte **)pWVar49) {
            bVar4 = *pbVar53;
            uVar51 = (ushort)bVar4;
            uVar34 = WasmOpcodes::IsPrefixOpcode(uVar51);
            if ((uVar34 & 1) != 0) {
              if (*(byte **)pWVar49 <= pbVar53 + 1) {
                pcVar24 = "<end>";
                goto LAB_01330364;
              }
              uVar51 = CONCAT11(bVar4,pbVar53[1]);
            }
            pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
          }
          else {
            pcVar24 = "<end>";
          }
LAB_01330364:
          Decoder::errorf((uchar *)this,(char *)pbVar53,"%s found empty stack",pcVar24);
        }
        plVar32 = local_78;
        local_120 = (ValueBase *)local_108;
        local_118 = (ValueBase *)local_108;
        local_110 = (ValueBase *)&local_88;
        if (local_78 != (long *)0x0) {
          uVar34 = local_78[1];
          uVar14 = (uint)uVar34;
          uVar23 = (ulong)(int)uVar14;
          if (8 < uVar14) {
            base::SmallVector<v8::internal::wasm::ValueBase,8ul>::Grow
                      ((SmallVector<v8::internal::wasm::ValueBase,8ul> *)&local_120,uVar23);
          }
          local_118 = local_120 + uVar23 * 0x10;
          if (0 < (int)uVar14) {
            uVar34 = -(uVar34 >> 0x1f & 1) & 0xfffffff000000000 | (uVar34 & 0xffffffff) << 4;
            do {
              uVar14 = uVar14 - 1;
              lVar17 = *(long *)pWVar41;
              bVar4 = *(byte *)(plVar32[2] + *plVar32 + uVar23 + -1);
              if ((ulong)*(uint *)(*(long *)pWVar47 + -0x54) <
                  (ulong)(lVar17 - *(long *)this_01 >> 4)) {
                pbVar53 = *(byte **)(lVar17 + -0x10);
                uVar20 = (ulong)*(byte *)(lVar17 + -8);
                *(undefined8 **)pWVar41 = (undefined8 *)(lVar17 + -0x10);
              }
              else {
                if (*(char *)(*(long *)pWVar47 + -0x48) != '\x02') {
                  pbVar53 = *(byte **)pWVar52;
                  if (pbVar53 < *(byte **)pWVar49) {
                    bVar7 = *pbVar53;
                    uVar51 = (ushort)bVar7;
                    uVar20 = WasmOpcodes::IsPrefixOpcode(uVar51);
                    if ((uVar20 & 1) != 0) {
                      if (*(byte **)pWVar49 <= pbVar53 + 1) goto LAB_01330500;
                      uVar51 = CONCAT11(bVar7,pbVar53[1]);
                    }
                    pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
                  }
                  else {
LAB_01330500:
                    pcVar24 = "<end>";
                  }
                  Decoder::errorf((uchar *)this,(char *)pbVar53,"%s found empty stack",pcVar24);
                }
                pbVar53 = *(byte **)pWVar52;
                uVar20 = 10;
              }
              uVar45 = (uint)uVar20;
              uVar23 = uVar23 - 1;
              if (uVar45 != bVar4) {
                if ((bVar4 != 7 || uVar45 != 8) && (bVar4 != 6 || 2 < uVar45 - 7)) {
                  if ((bVar4 != 10) && ((uVar20 != 10 && (bVar4 != 9 || uVar45 != 8)))) {
                    pbVar31 = *(byte **)pWVar52;
                    if (pbVar31 < *(byte **)pWVar49) {
                      bVar7 = *pbVar31;
                      uVar51 = (ushort)bVar7;
                      uVar50 = WasmOpcodes::IsPrefixOpcode(uVar51);
                      if ((uVar50 & 1) != 0) {
                        if (*(byte **)pWVar49 <= pbVar31 + 1) goto LAB_013305e8;
                        uVar51 = CONCAT11(bVar7,pbVar31[1]);
                      }
                      pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
                    }
                    else {
LAB_013305e8:
                      pcVar24 = "<end>";
                    }
                    if (bVar4 < 10) {
                      pcVar19 = (&PTR_s_<stmt>_01cc3d10)[(char)bVar4];
                    }
                    else {
                      pcVar19 = "<unknown>";
                    }
                    if (pbVar53 < *(byte **)pWVar49) {
                      bVar4 = *pbVar53;
                      uVar51 = (ushort)bVar4;
                      uVar50 = WasmOpcodes::IsPrefixOpcode(uVar51);
                      if ((uVar50 & 1) == 0) {
LAB_01330684:
                        pcVar27 = (char *)WasmOpcodes::OpcodeName(uVar51);
                      }
                      else {
                        if (pbVar53 + 1 < *(byte **)pWVar49) {
                          uVar51 = CONCAT11(bVar4,pbVar53[1]);
                          goto LAB_01330684;
                        }
                        pcVar27 = "<end>";
                      }
                      if (10 < uVar45) goto LAB_013306a8;
LAB_0133041c:
                      pcVar28 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                                          (-(uVar20 >> 7) & 0xfffffffffffff800 | uVar20 << 3));
                    }
                    else {
                      pcVar27 = "<end>";
                      if (uVar45 < 0xb) goto LAB_0133041c;
LAB_013306a8:
                      pcVar28 = "<unknown>";
                    }
                    Decoder::errorf((uchar *)this,(char *)pbVar53,
                                    "%s[%d] expected type %s, found %s of type %s",pcVar24,
                                    (ulong)uVar14,pcVar19,pcVar27,pcVar28);
                  }
                }
              }
              *(byte **)(local_120 + (uVar34 - 0x10)) = pbVar53;
              local_120[uVar34 - 8] = SUB81(uVar20,0);
              uVar34 = uVar34 - 0x10;
            } while (0 < (long)uVar23);
          }
        }
        if (((byte)this[0x30] & 1) == 0) {
          if ((byte)this[0x30] >> 1 == 0) goto LAB_013306ec;
        }
        else if (*(long *)(this + 0x38) == 0) {
LAB_013306ec:
          local_124[0] = (ControlKind)0x0;
          puVar29 = *(undefined1 **)pWVar47;
          if (*(undefined1 **)this_02 == puVar29) {
            local_128[0] = (Reachability)0x0;
          }
          else {
            local_128[0] = (Reachability)(puVar29[-0x48] != '\0');
          }
          local_12c = (uint)((ulong)(*(long *)(this + 0xa8) - *(long *)(this + 0xa0)) >> 4);
          if (*(undefined1 **)(this + 0xd0) <= puVar29) goto LAB_01330774;
          uVar38 = *(undefined8 *)pWVar52;
          *(Reachability *)(puVar29 + 0x10) = local_128[0];
          *puVar29 = 0;
          *(uint *)(puVar29 + 4) = local_12c;
          *(undefined4 *)(puVar29 + 0x18) = 0;
          *(undefined8 *)(puVar29 + 0x20) = 0;
          *(undefined4 *)(puVar29 + 0x38) = 0;
          *(undefined8 *)(puVar29 + 0x40) = 0;
          goto LAB_01330758;
        }
        uVar34 = 1;
        goto LAB_013307c0;
      case 5:
        lVar17 = *(long *)pWVar47;
        if (*(long *)this_02 != lVar17) {
          CVar9 = *(ControlBase *)(lVar17 + -0x58);
          if ((byte)CVar9 < 2) {
            if (CVar9 != (ControlBase)0x1) {
              uVar23 = TypeCheckFallThru(this);
              uVar34 = 1;
              if ((uVar23 & 1) != 0) {
                *(undefined1 *)(lVar17 + -0x58) = 1;
                if (*(char *)(lVar17 + -0x48) == '\0') {
                  *(undefined1 *)(lVar17 + -8) = 1;
                }
                PushMergeValues(this,(ControlBase *)(lVar17 + -0x58),(Merge *)(lVar17 + -0x40));
                uVar34 = 1;
                *(bool *)(lVar17 + -0x48) = *(char *)(*(long *)(this + 200) + -0xa0) != '\0';
              }
              break;
            }
            pcVar24 = "else already present for if";
          }
          else {
            pcVar24 = "else does not match an if";
          }
          goto LAB_0132d65c;
        }
        pcVar24 = "else does not match any if";
        goto LAB_0132c808;
      case 6:
        if (((byte)*pWVar1 & 1) != 0) {
          **(uint **)(this + 0x58) = **(uint **)(this + 0x58) | 1;
          BlockTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::BlockTypeImmediate
                    ((BlockTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)&local_88,
                     pWVar1,(Decoder *)this,*(uchar **)(this + 0x10));
          plVar32 = local_78;
          if ((char)local_84 == '\n') {
            lVar17 = *(long *)(this + 0x48);
            uVar34 = (ulong)local_80 & 0xffffffff;
            if (lVar17 == 0) goto LAB_0132cae8;
            uVar23 = *(long *)(lVar17 + 0x60) - *(long *)(lVar17 + 0x58) >> 3;
            if (uVar23 <= uVar34) goto LAB_0132caec;
            plVar32 = *(long **)(*(long *)(lVar17 + 0x58) + uVar34 * 8);
          }
          local_120 = (ValueBase *)local_108;
          local_118 = (ValueBase *)local_108;
          local_110 = (ValueBase *)&local_88;
          local_78 = plVar32;
          if (plVar32 != (long *)0x0) {
            uVar34 = plVar32[1];
            uVar14 = (uint)uVar34;
            uVar23 = (ulong)(int)uVar14;
            if (8 < uVar14) {
              base::SmallVector<v8::internal::wasm::ValueBase,8ul>::Grow
                        ((SmallVector<v8::internal::wasm::ValueBase,8ul> *)&local_120,uVar23);
            }
            local_118 = local_120 + uVar23 * 0x10;
            if (0 < (int)uVar14) {
              uVar34 = -(uVar34 >> 0x1f & 1) & 0xfffffff000000000 | (uVar34 & 0xffffffff) << 4;
              do {
                uVar14 = uVar14 - 1;
                lVar17 = *(long *)pWVar41;
                bVar4 = *(byte *)(plVar32[2] + *plVar32 + uVar23 + -1);
                if ((ulong)*(uint *)(*(long *)pWVar47 + -0x54) <
                    (ulong)(lVar17 - *(long *)this_01 >> 4)) {
                  pbVar53 = *(byte **)(lVar17 + -0x10);
                  uVar20 = (ulong)*(byte *)(lVar17 + -8);
                  *(undefined8 **)pWVar41 = (undefined8 *)(lVar17 + -0x10);
                }
                else {
                  if (*(char *)(*(long *)pWVar47 + -0x48) != '\x02') {
                    pbVar53 = *(byte **)pWVar52;
                    if (pbVar53 < *(byte **)pWVar49) {
                      bVar7 = *pbVar53;
                      uVar51 = (ushort)bVar7;
                      uVar20 = WasmOpcodes::IsPrefixOpcode(uVar51);
                      if ((uVar20 & 1) != 0) {
                        if (*(byte **)pWVar49 <= pbVar53 + 1) goto LAB_0132d7e0;
                        uVar51 = CONCAT11(bVar7,pbVar53[1]);
                      }
                      pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
                    }
                    else {
LAB_0132d7e0:
                      pcVar24 = "<end>";
                    }
                    Decoder::errorf((uchar *)this,(char *)pbVar53,"%s found empty stack",pcVar24);
                  }
                  pbVar53 = *(byte **)pWVar52;
                  uVar20 = 10;
                }
                uVar45 = (uint)uVar20;
                uVar23 = uVar23 - 1;
                if (uVar45 != bVar4) {
                  if ((bVar4 != 7 || uVar45 != 8) && (bVar4 != 6 || 2 < uVar45 - 7)) {
                    if ((bVar4 != 10) && ((uVar20 != 10 && (bVar4 != 9 || uVar45 != 8)))) {
                      pbVar31 = *(byte **)pWVar52;
                      if (pbVar31 < *(byte **)pWVar49) {
                        bVar7 = *pbVar31;
                        uVar51 = (ushort)bVar7;
                        uVar50 = WasmOpcodes::IsPrefixOpcode(uVar51);
                        if ((uVar50 & 1) != 0) {
                          if (*(byte **)pWVar49 <= pbVar31 + 1) goto LAB_0132d8c8;
                          uVar51 = CONCAT11(bVar7,pbVar31[1]);
                        }
                        pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
                      }
                      else {
LAB_0132d8c8:
                        pcVar24 = "<end>";
                      }
                      if (bVar4 < 10) {
                        pcVar19 = (&PTR_s_<stmt>_01cc3d10)[(char)bVar4];
                      }
                      else {
                        pcVar19 = "<unknown>";
                      }
                      if (pbVar53 < *(byte **)pWVar49) {
                        bVar4 = *pbVar53;
                        uVar51 = (ushort)bVar4;
                        uVar50 = WasmOpcodes::IsPrefixOpcode(uVar51);
                        if ((uVar50 & 1) == 0) {
LAB_0132d964:
                          pcVar27 = (char *)WasmOpcodes::OpcodeName(uVar51);
                        }
                        else {
                          if (pbVar53 + 1 < *(byte **)pWVar49) {
                            uVar51 = CONCAT11(bVar4,pbVar53[1]);
                            goto LAB_0132d964;
                          }
                          pcVar27 = "<end>";
                        }
                        if (10 < uVar45) goto LAB_0132d988;
LAB_0132d6fc:
                        pcVar28 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                                            (-(uVar20 >> 7) & 0xfffffffffffff800 | uVar20 << 3));
                      }
                      else {
                        pcVar27 = "<end>";
                        if (uVar45 < 0xb) goto LAB_0132d6fc;
LAB_0132d988:
                        pcVar28 = "<unknown>";
                      }
                      Decoder::errorf((uchar *)this,(char *)pbVar53,
                                      "%s[%d] expected type %s, found %s of type %s",pcVar24,
                                      (ulong)uVar14,pcVar19,pcVar27,pcVar28);
                    }
                  }
                }
                *(byte **)(local_120 + (uVar34 - 0x10)) = pbVar53;
                local_120[uVar34 - 8] = SUB81(uVar20,0);
                uVar34 = uVar34 - 0x10;
              } while (0 < (long)uVar23);
            }
          }
          local_124[0] = (ControlKind)0x4;
          puVar29 = *(undefined1 **)pWVar47;
          if (*(undefined1 **)this_02 == puVar29) {
            local_128[0] = (Reachability)0x0;
          }
          else {
            local_128[0] = (Reachability)(puVar29[-0x48] != '\0');
          }
          local_12c = (uint)((ulong)(*(long *)(this + 0xa8) - *(long *)(this + 0xa0)) >> 4);
          if (*(undefined1 **)(this + 0xd0) <= puVar29) goto LAB_01330774;
          uVar38 = *(undefined8 *)pWVar52;
          uVar40 = 4;
          goto LAB_0132e850;
        }
LAB_0132c6d0:
        pcVar24 = "Invalid opcode (enable with --experimental-wasm-eh)";
        goto LAB_0132c808;
      case 7:
        if (((byte)this[0x50] & 1) == 0) goto LAB_0132c6d0;
        **(uint **)(this + 0x58) = **(uint **)(this + 0x58) | 1;
        lVar17 = *(long *)(this + 200);
        if ((*(long *)(this + 0xc0) == lVar17) || ((*(byte *)(lVar17 + -0x58) | 1) != 5)) {
          pcVar24 = "catch does not match any try";
        }
        else {
          if (*(byte *)(lVar17 + -0x58) == 4) {
            *(undefined1 *)(lVar17 + -0x58) = 5;
            uVar34 = TypeCheckFallThru(this);
            if (((uVar34 & 1) != 0) && (*(char *)(lVar17 + -0x48) == '\0')) {
              *(undefined1 *)(lVar17 + -8) = 1;
            }
            lVar30 = *(long *)this_01 + (ulong)*(uint *)(lVar17 + -0x54) * 0x10;
            if (lVar30 != *(long *)pWVar41) {
              *(long *)pWVar41 = lVar30;
            }
            *(bool *)(lVar17 + -0x48) = *(char *)(*(long *)(this + 200) + -0xa0) != '\0';
            local_120 = (ValueBase *)CONCAT71(local_120._1_7_,9);
            puVar22 = *(undefined8 **)(this + 0xa8);
            if (*(undefined8 **)(this + 0xb0) <= puVar22) goto LAB_0132d664;
            uVar38 = *(undefined8 *)pWVar52;
            *(undefined1 *)(puVar22 + 1) = 9;
            uVar34 = 1;
            *puVar22 = uVar38;
            *(long *)pWVar41 = *(long *)pWVar41 + 0x10;
            break;
          }
          pcVar24 = "catch already present for try";
        }
LAB_0132c808:
        Decoder::error((Decoder *)this,pcVar24);
        goto LAB_0132bc3c;
      case 8:
        if (((byte)this[0x50] & 1) == 0) goto LAB_0132c6d0;
        **(uint **)(this + 0x58) = **(uint **)(this + 0x58) | 1;
        local_80 = (long *)0x0;
        pbVar53 = (byte *)(*(long *)(this + 0x10) + 1);
        if (pbVar53 < *(byte **)(this + 0x18)) {
          uVar14 = *pbVar53 & 0x7f;
          uVar23 = (ulong)uVar14;
          if ((char)*pbVar53 < '\0') {
            uVar14 = Decoder::
                     read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                               ((Decoder *)this,(uchar *)(*(long *)(this + 0x10) + 2),
                                (uint *)&local_78,"exception index",uVar14);
            uVar23 = (ulong)uVar14;
          }
          else {
            local_78 = (long *)CONCAT44(local_78._4_4_,1);
          }
        }
        else {
          local_78 = (long *)((ulong)local_78._4_4_ << 0x20);
          Decoder::errorf((uchar *)this,(char *)pbVar53,"expected %s","exception index");
          uVar23 = 0;
        }
        local_88 = (uint)uVar23;
        lVar17 = *(long *)(this + 0x48);
        uVar34 = (ulong)((uint)local_78 + 1);
        if ((lVar17 == 0) ||
           (lVar30 = *(long *)(lVar17 + 0x100),
           (ulong)(*(long *)(lVar17 + 0x108) - lVar30 >> 3) <= uVar23)) {
          pbVar53 = (byte *)(*(long *)(this + 0x10) + 1);
          pcVar24 = "Invalid exception index: %u";
          goto LAB_0132edd0;
        }
        local_80 = (long *)(lVar30 + uVar23 * 8);
        plVar32 = *(long **)(lVar30 + uVar23 * 8);
        local_120 = (ValueBase *)local_108;
        local_118 = (ValueBase *)local_108;
        local_110 = (ValueBase *)&local_88;
        if (plVar32 != (long *)0x0) {
          uVar23 = plVar32[1];
          uVar14 = (uint)uVar23;
          uVar20 = (ulong)(int)uVar14;
          if (8 < uVar14) {
            base::SmallVector<v8::internal::wasm::ValueBase,8ul>::Grow
                      ((SmallVector<v8::internal::wasm::ValueBase,8ul> *)&local_120,uVar20);
          }
          local_118 = local_120 + uVar20 * 0x10;
          if (0 < (int)uVar14) {
            uVar23 = -(uVar23 >> 0x1f & 1) & 0xfffffff000000000 | (uVar23 & 0xffffffff) << 4;
            do {
              uVar14 = uVar14 - 1;
              lVar17 = *(long *)pWVar41;
              bVar4 = *(byte *)(plVar32[2] + *plVar32 + uVar20 + -1);
              if ((ulong)*(uint *)(*(long *)pWVar47 + -0x54) <
                  (ulong)(lVar17 - *(long *)this_01 >> 4)) {
                pbVar53 = *(byte **)(lVar17 + -0x10);
                uVar50 = (ulong)*(byte *)(lVar17 + -8);
                *(undefined8 **)pWVar41 = (undefined8 *)(lVar17 + -0x10);
              }
              else {
                if (*(char *)(*(long *)pWVar47 + -0x48) != '\x02') {
                  pbVar53 = *(byte **)pWVar52;
                  if (pbVar53 < *(byte **)pWVar49) {
                    bVar7 = *pbVar53;
                    uVar51 = (ushort)bVar7;
                    uVar50 = WasmOpcodes::IsPrefixOpcode(uVar51);
                    if ((uVar50 & 1) != 0) {
                      if (*(byte **)pWVar49 <= pbVar53 + 1) goto LAB_0132eec0;
                      uVar51 = CONCAT11(bVar7,pbVar53[1]);
                    }
                    pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
                  }
                  else {
LAB_0132eec0:
                    pcVar24 = "<end>";
                  }
                  Decoder::errorf((uchar *)this,(char *)pbVar53,"%s found empty stack",pcVar24);
                }
                pbVar53 = *(byte **)pWVar52;
                uVar50 = 10;
              }
              uVar45 = (uint)uVar50;
              uVar20 = uVar20 - 1;
              if (uVar45 != bVar4) {
                if ((bVar4 != 7 || uVar45 != 8) && (bVar4 != 6 || 2 < uVar45 - 7)) {
                  if ((bVar4 != 10) && ((uVar50 != 10 && (bVar4 != 9 || uVar45 != 8)))) {
                    pbVar31 = *(byte **)pWVar52;
                    if (pbVar31 < *(byte **)pWVar49) {
                      bVar7 = *pbVar31;
                      uVar51 = (ushort)bVar7;
                      uVar21 = WasmOpcodes::IsPrefixOpcode(uVar51);
                      if ((uVar21 & 1) != 0) {
                        if (*(byte **)pWVar49 <= pbVar31 + 1) {
                          pcVar24 = "<end>";
                          goto LAB_0132efdc;
                        }
                        uVar51 = CONCAT11(bVar7,pbVar31[1]);
                      }
                      pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
                    }
                    else {
                      pcVar24 = "<end>";
                    }
LAB_0132efdc:
                    if (bVar4 < 10) {
                      pcVar19 = (&PTR_s_<stmt>_01cc3d10)[(char)bVar4];
                    }
                    else {
                      pcVar19 = "<unknown>";
                    }
                    if (pbVar53 < *(byte **)pWVar49) {
                      bVar4 = *pbVar53;
                      uVar51 = (ushort)bVar4;
                      uVar21 = WasmOpcodes::IsPrefixOpcode(uVar51);
                      if ((uVar21 & 1) == 0) {
LAB_0132f060:
                        pcVar27 = (char *)WasmOpcodes::OpcodeName(uVar51);
                      }
                      else {
                        if (pbVar53 + 1 < *(byte **)pWVar49) {
                          uVar51 = CONCAT11(bVar4,pbVar53[1]);
                          goto LAB_0132f060;
                        }
                        pcVar27 = "<end>";
                      }
                      if (10 < uVar45) goto LAB_0132f088;
LAB_0132eddc:
                      pcVar28 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                                          (-(uVar50 >> 7) & 0xfffffffffffff800 | uVar50 << 3));
                    }
                    else {
                      pcVar27 = "<end>";
                      if (uVar45 < 0xb) goto LAB_0132eddc;
LAB_0132f088:
                      pcVar28 = "<unknown>";
                    }
                    Decoder::errorf((uchar *)this,(char *)pbVar53,
                                    "%s[%d] expected type %s, found %s of type %s",pcVar24,
                                    (ulong)uVar14,pcVar19,pcVar27,pcVar28);
                  }
                }
              }
              *(byte **)(local_120 + (uVar23 - 0x10)) = pbVar53;
              local_120[uVar23 - 8] = SUB81(uVar50,0);
              uVar23 = uVar23 - 0x10;
            } while (0 < (long)uVar20);
          }
        }
LAB_01332b50:
        lVar17 = *(long *)(this + 0xa0) + (ulong)*(uint *)(*(long *)(this + 200) + -0x54) * 0x10;
        if (lVar17 != *(long *)(this + 0xa8)) {
          *(long *)pWVar41 = lVar17;
        }
        *(undefined1 *)(*(long *)(this + 200) + -0x48) = 2;
LAB_013307c0:
        if (local_120 != (ValueBase *)local_108) {
LAB_013307d0:
          free(local_120);
        }
        break;
      case 9:
        if (((byte)this[0x50] & 1) == 0) goto LAB_0132c6d0;
        **(uint **)(this + 0x58) = **(uint **)(this + 0x58) | 1;
        lVar17 = *(long *)(this + 0xa8);
        if ((ulong)*(uint *)(*(long *)(this + 200) + -0x54) <
            (ulong)(lVar17 - *(long *)(this + 0xa0) >> 4)) {
          pbVar53 = *(byte **)(lVar17 + -0x10);
          uVar34 = *(ulong *)(lVar17 + -8);
          *(undefined8 **)pWVar41 = (undefined8 *)(lVar17 + -0x10);
          if (((uint)uVar34 & 0xff) != 9) {
            uVar34 = uVar34 & 0xff;
            uVar14 = (uint)uVar34;
            if ((uVar14 != 8) && (uVar34 != 10)) {
              pbVar31 = *(byte **)pWVar52;
              if (pbVar31 < *(byte **)pWVar49) {
                bVar4 = *pbVar31;
                uVar51 = (ushort)bVar4;
                uVar23 = WasmOpcodes::IsPrefixOpcode(uVar51);
                if ((uVar23 & 1) != 0) {
                  if (*(byte **)pWVar49 <= pbVar31 + 1) goto LAB_0132f8bc;
                  uVar51 = CONCAT11(bVar4,pbVar31[1]);
                }
                pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
              }
              else {
LAB_0132f8bc:
                pcVar24 = "<end>";
              }
              if (pbVar53 < *(byte **)pWVar49) {
                bVar4 = *pbVar53;
                uVar51 = (ushort)bVar4;
                uVar23 = WasmOpcodes::IsPrefixOpcode(uVar51);
                if ((uVar23 & 1) == 0) {
LAB_01330b6c:
                  pcVar19 = (char *)WasmOpcodes::OpcodeName(uVar51);
                }
                else {
                  if (pbVar53 + 1 < *(byte **)pWVar49) {
                    uVar51 = CONCAT11(bVar4,pbVar53[1]);
                    goto LAB_01330b6c;
                  }
                  pcVar19 = "<end>";
                }
                if (10 < uVar14) goto LAB_01330ffc;
LAB_01330a80:
                pcVar27 = *(char **)((long)&PTR_s_<stmt>_01cc3cb8 +
                                    (-(uVar34 >> 7) & 0xfffffffffffff800 | uVar34 << 3));
              }
              else {
                pcVar19 = "<end>";
                if (uVar14 < 0xb) goto LAB_01330a80;
LAB_01330ffc:
                pcVar27 = "<unknown>";
              }
              Decoder::errorf((uchar *)this,(char *)pbVar53,
                              "%s[%d] expected type %s, found %s of type %s",pcVar24,0,"exn",pcVar19
                              ,pcVar27);
            }
          }
        }
        else if (*(char *)(*(long *)(this + 200) + -0x48) != '\x02') {
          pbVar53 = *(byte **)pWVar52;
          if (pbVar53 < *(byte **)pWVar49) {
            bVar4 = *pbVar53;
            uVar51 = (ushort)bVar4;
            uVar34 = WasmOpcodes::IsPrefixOpcode(uVar51);
            if ((uVar34 & 1) != 0) {
              if (*(byte **)pWVar49 <= pbVar53 + 1) {
                pcVar24 = "<end>";
                goto LAB_01330aa0;
              }
              uVar51 = CONCAT11(bVar4,pbVar53[1]);
            }
            pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
          }
          else {
            pcVar24 = "<end>";
          }
LAB_01330aa0:
          Decoder::errorf((uchar *)this,(char *)pbVar53,"%s found empty stack",pcVar24);
        }
        lVar30 = *(long *)(this + 200);
        lVar17 = *(long *)(this + 0xa0) + (ulong)*(uint *)(lVar30 + -0x54) * 0x10;
        if (lVar17 != *(long *)(this + 0xa8)) {
          *(long *)pWVar41 = lVar17;
        }
        goto LAB_01331048;
      case 10:
        if (((byte)this[0x50] & 1) == 0) goto LAB_0132c6d0;
        **(uint **)(this + 0x58) = **(uint **)(this + 0x58) | 1;
        lVar17 = *(long *)(this + 0x10);
        pbVar53 = (byte *)(lVar17 + 1);
        if (pbVar53 < *(byte **)(this + 0x18)) {
          uVar14 = *pbVar53 & 0x7f;
          if ((char)*pbVar53 < '\0') {
            uVar14 = Decoder::
                     read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                               ((Decoder *)this,(uchar *)(lVar17 + 2),puVar35,"branch depth",uVar14)
            ;
          }
          else {
            local_120 = (ValueBase *)0x100000000;
          }
        }
        else {
          local_120 = (ValueBase *)((ulong)local_120 & 0xffffffff);
          Decoder::errorf((uchar *)this,(char *)pbVar53,"expected %s","branch depth");
          uVar14 = 0;
        }
        local_120 = (ValueBase *)CONCAT44(local_120._4_4_,uVar14);
        local_110 = (ValueBase *)0x0;
        pbVar53 = (byte *)(lVar17 + (ulong)local_120._4_4_ + 1);
        if (pbVar53 < *(byte **)pWVar49) {
          uVar14 = *pbVar53 & 0x7f;
          uVar23 = (ulong)uVar14;
          if ((char)*pbVar53 < '\0') {
            uVar14 = Decoder::
                     read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                               ((Decoder *)this,(uchar *)(lVar17 + (ulong)local_120._4_4_ + 2),
                                (uint *)local_108,"exception index",uVar14);
            uVar23 = (ulong)uVar14;
          }
          else {
            local_108[0] = 1;
          }
        }
        else {
          local_108[0] = 0;
          Decoder::errorf((uchar *)this,(char *)pbVar53,"expected %s","exception index");
          uVar23 = 0;
        }
        uVar34 = (ulong)local_120 & 0xffffffff;
        local_118 = (ValueBase *)CONCAT44(local_118._4_4_,(int)uVar23);
        local_100 = local_108[0] + local_120._4_4_;
        lVar17 = *(long *)pWVar47;
        pbVar31 = *(byte **)pWVar52;
        uVar20 = (lVar17 - *(long *)this_02 >> 3) * 0x2e8ba2e8ba2e8ba3;
        if (uVar20 < uVar34 || uVar20 - uVar34 == 0) {
          pbVar53 = pbVar31 + 1;
          pcVar24 = "invalid branch depth: %u";
        }
        else {
          lVar30 = *(long *)(this + 0x48);
          pbVar53 = pbVar31 + 1;
          if ((lVar30 != 0) &&
             (uVar23 < (ulong)(*(long *)(lVar30 + 0x108) - *(long *)(lVar30 + 0x100) >> 3))) {
            local_110 = (ValueBase *)(*(long *)(lVar30 + 0x100) + uVar23 * 8);
            lVar33 = *(long *)pWVar41;
            lVar30 = lVar17 + uVar34 * -0x58;
            if ((ulong)*(uint *)(lVar17 + -0x54) < (ulong)(lVar33 - *(long *)this_01 >> 4)) {
              pbVar46 = *(byte **)(lVar33 + -0x10);
              uVar23 = *(ulong *)(lVar33 + -8);
              *(undefined8 **)pWVar41 = (undefined8 *)(lVar33 + -0x10);
              if (((uint)uVar23 & 0xff) == 9) {
                uVar23 = 9;
              }
              else {
                uVar23 = uVar23 & 0xff;
                uVar14 = (uint)uVar23;
                if ((uVar14 != 8) && (uVar23 != 10)) {
                  if (pbVar31 < *(byte **)pWVar49) {
                    bVar4 = *pbVar31;
                    uVar51 = (ushort)bVar4;
                    uVar34 = WasmOpcodes::IsPrefixOpcode(uVar51);
                    if ((uVar34 & 1) != 0) {
                      if (*(byte **)pWVar49 <= pbVar53) goto LAB_013310f8;
                      uVar51 = CONCAT11(bVar4,*pbVar53);
                    }
                    pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
                  }
                  else {
LAB_013310f8:
                    pcVar24 = "<end>";
                  }
                  if (pbVar46 < *(byte **)pWVar49) {
                    bVar4 = *pbVar46;
                    uVar51 = (ushort)bVar4;
                    uVar34 = WasmOpcodes::IsPrefixOpcode(uVar51);
                    if ((uVar34 & 1) == 0) {
LAB_013321e0:
                      pcVar19 = (char *)WasmOpcodes::OpcodeName(uVar51);
                    }
                    else {
                      if (pbVar46 + 1 < *(byte **)pWVar49) {
                        uVar51 = CONCAT11(bVar4,pbVar46[1]);
                        goto LAB_013321e0;
                      }
                      pcVar19 = "<end>";
                    }
                    if (10 < uVar14) goto LAB_01332200;
LAB_0133219c:
                    pcVar27 = *(char **)((long)&PTR_s_<stmt>_01cc3cb8 +
                                        (-(uVar23 >> 7) & 0xfffffffffffff800 | uVar23 << 3));
                  }
                  else {
                    pcVar19 = "<end>";
                    if (uVar14 < 0xb) goto LAB_0133219c;
LAB_01332200:
                    pcVar27 = "<unknown>";
                  }
                  Decoder::errorf((uchar *)this,(char *)pbVar46,
                                  "%s[%d] expected type %s, found %s of type %s",pcVar24,0,"exn",
                                  pcVar19,pcVar27);
                }
              }
            }
            else if (*(char *)(lVar17 + -0x48) == '\x02') {
              uVar23 = 10;
              pbVar46 = pbVar31;
            }
            else {
              if (pbVar31 < *(byte **)pWVar49) {
                bVar4 = *pbVar31;
                uVar51 = (ushort)bVar4;
                uVar34 = WasmOpcodes::IsPrefixOpcode(uVar51);
                if ((uVar34 & 1) != 0) {
                  if (*(byte **)pWVar49 <= pbVar53) {
                    pcVar24 = "<end>";
                    goto LAB_013321bc;
                  }
                  uVar51 = CONCAT11(bVar4,*pbVar53);
                }
                pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
              }
              else {
                pcVar24 = "<end>";
              }
LAB_013321bc:
              Decoder::errorf((uchar *)this,(char *)pbVar31,"%s found empty stack",pcVar24);
              pbVar46 = *(byte **)(this + 0x10);
              uVar23 = 10;
            }
            plVar32 = *(long **)local_110;
            lVar17 = plVar32[1];
            if (lVar17 != 0) {
              lVar33 = 0;
              do {
                uVar40 = *(undefined1 *)(plVar32[2] + *plVar32 + lVar33);
                local_88 = CONCAT31(local_88._1_3_,uVar40);
                puVar22 = *(undefined8 **)(this + 0xa8);
                if (puVar22 < *(undefined8 **)(this + 0xb0)) {
                  uVar38 = *(undefined8 *)pWVar52;
                  *(undefined1 *)(puVar22 + 1) = uVar40;
                  *puVar22 = uVar38;
                  *(long *)pWVar41 = *(long *)pWVar41 + 0x10;
                }
                else {
                  std::__ndk1::
                  vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
                  ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                            (this_01,(uchar **)pWVar52,(ValueType *)&local_88);
                }
                lVar33 = lVar33 + 1;
              } while (lVar17 != lVar33);
            }
            uVar34 = 1;
            iVar16 = TypeCheckBranch(this,(ControlBase *)(lVar30 + -0x58),true);
            iVar13 = local_100;
            if (iVar16 == 0) {
              lVar33 = lVar30 + -0x40;
              if (*(ControlBase *)(lVar30 + -0x58) != (ControlBase)0x3) {
                lVar33 = lVar30 + -0x20;
              }
              *(undefined1 *)(lVar33 + 0x18) = 1;
joined_r0x013322e4:
              if (lVar17 != 0) {
                do {
                  if ((ulong)*(uint *)(*(long *)pWVar47 + -0x54) <
                      (ulong)(*(long *)pWVar41 - *(long *)this_01 >> 4)) {
                    *(long *)pWVar41 = *(long *)pWVar41 + -0x10;
                  }
                  else if (*(char *)(*(long *)pWVar47 + -0x48) != '\x02') goto code_r0x01332328;
                  lVar17 = lVar17 + -1;
                  if (lVar17 == 0) break;
                } while( true );
              }
              local_88._1_3_ = (undefined3)(local_88 >> 8);
              local_88 = CONCAT31(local_88._1_3_,9);
              puVar22 = *(undefined8 **)(this + 0xa8);
              uVar34 = (ulong)(iVar13 + 1);
              if (puVar22 < *(undefined8 **)(this + 0xb0)) {
                uVar38 = *(undefined8 *)pWVar52;
                *(undefined1 *)(puVar22 + 1) = 9;
                *puVar22 = uVar38;
                lVar17 = *(long *)pWVar41 + 0x10;
                *(long *)pWVar41 = lVar17;
              }
              else {
                std::__ndk1::
                vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
                ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                          (this_01,(uchar **)pWVar52,(ValueType *)&local_88);
                lVar17 = *(long *)pWVar41;
              }
              *(char *)(lVar17 + -8) = (char)uVar23;
              *(byte **)(lVar17 + -0x10) = pbVar46;
              break;
            }
            if (iVar16 != 2) goto joined_r0x013322e4;
            break;
          }
          pbVar53 = pbVar53 + local_120._4_4_;
          pcVar24 = "Invalid exception index: %u";
          uVar34 = uVar23;
        }
LAB_0132fb04:
        Decoder::errorf((uchar *)this,(char *)pbVar53,pcVar24,uVar34);
        goto LAB_0132bc3c;
      case 0xb:
        lVar17 = *(long *)pWVar47;
        if (*(long *)this_02 == lVar17) {
          pcVar24 = "end does not match any if, try, or block";
          goto LAB_0132c808;
        }
        pCVar48 = (ControlBase *)(lVar17 + -0x58);
        if (*pCVar48 == (ControlBase)0x0) {
          if (*(int *)(lVar17 + -0x20) == *(int *)(lVar17 + -0x40)) {
            uVar34 = TypeCheckOneArmedIf(this,pCVar48);
            if ((uVar34 & 1) == 0) goto LAB_0132bc3c;
            goto LAB_0132dd1c;
          }
          pbVar53 = *(byte **)(lVar17 + -0x50);
          pcVar24 = "start-arity and end-arity of one-armed if must match";
        }
        else {
          if (*pCVar48 != (ControlBase)0x4) {
LAB_0132dd1c:
            uVar34 = TypeCheckFallThru(this);
            if ((uVar34 & 1) != 0) {
              lVar30 = *(long *)this_02;
              if (*(long *)pWVar47 - lVar30 == 0x58) {
                pbVar53 = (byte *)(*(long *)pWVar52 + 1);
                if (pbVar53 != *(byte **)pWVar49) {
                  pcVar24 = "trailing code after function end";
                  goto LAB_0132d65c;
                }
              }
              else {
                if (*pCVar48 != (ControlBase)0x3) {
                  PushMergeValues(this,pCVar48,(Merge *)(lVar17 + -0x20));
                }
                if ((*(char *)(lVar17 + -0x48) != '\0') && (*(char *)(lVar17 + -8) == '\0')) {
                  CVar9 = *pCVar48;
                  lVar17 = *(long *)pWVar47;
                  *(long *)pWVar47 = lVar17 + -0x58;
                  if (CVar9 != (ControlBase)0x0) {
                    uVar34 = 1;
                    if (*(char *)(lVar17 + -0xa0) != '\0') break;
                    *(undefined1 *)(lVar17 + -0xa0) = 1;
                  }
                  goto LAB_0132bc3c;
                }
                lVar30 = *(long *)pWVar47 + -0x58;
              }
              *(long *)pWVar47 = lVar30;
            }
            goto LAB_0132bc3c;
          }
          pcVar24 = "missing catch or catch-all in try";
        }
LAB_0132d65c:
        Decoder::error((Decoder *)this,pbVar53,pcVar24);
        goto LAB_0132bc3c;
      case 0xc:
        pbVar31 = pbVar53 + 1;
        if (pbVar31 < *(byte **)pWVar49) {
          uVar14 = *pbVar31 & 0x7f;
          if ((char)*pbVar31 < '\0') {
            uVar14 = Decoder::
                     read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                               ((Decoder *)this,pbVar53 + 2,puVar35,"branch depth",uVar14);
          }
          else {
            local_120 = (ValueBase *)0x100000000;
          }
        }
        else {
          local_120 = (ValueBase *)((ulong)local_120 & 0xffffffff);
          Decoder::errorf((uchar *)this,(char *)pbVar31,"expected %s","branch depth");
          uVar14 = 0;
        }
        local_120 = (ValueBase *)CONCAT44(local_120._4_4_,uVar14);
        uVar23 = (*(long *)pWVar47 - *(long *)this_02 >> 3) * 0x2e8ba2e8ba2e8ba3;
        uVar34 = (ulong)uVar14;
        if (uVar34 <= uVar23 && uVar23 - uVar34 != 0) {
          lVar17 = *(long *)pWVar47 + uVar34 * -0x58;
          iVar13 = TypeCheckBranch(this,(ControlBase *)(lVar17 + -0x58),false);
          if (iVar13 == 0) {
            if ((*(long *)pWVar47 - *(long *)this_02 >> 3) * 0x2e8ba2e8ba2e8ba3 - 1U !=
                ((ulong)local_120 & 0xffffffff)) {
              lVar30 = lVar17 + -0x40;
              if (*(ControlBase *)(lVar17 + -0x58) != (ControlBase)0x3) {
                lVar30 = lVar17 + -0x20;
              }
              *(undefined1 *)(lVar30 + 0x18) = 1;
            }
          }
          else if (iVar13 == 2) goto LAB_0132bc3c;
          uVar34 = (ulong)(local_120._4_4_ + 1);
          lVar17 = *(long *)(this + 0xa0) + (ulong)*(uint *)(*(long *)(this + 200) + -0x54) * 0x10;
          if (lVar17 != *(long *)(this + 0xa8)) {
            *(long *)pWVar41 = lVar17;
          }
          *(undefined1 *)(*(long *)(this + 200) + -0x48) = 2;
          break;
        }
LAB_01330090:
        pcVar19 = "invalid branch depth: %u";
        pcVar24 = (char *)(*(long *)(this + 0x10) + 1);
        goto LAB_013300a4;
      case 0xd:
        pbVar31 = pbVar53 + 1;
        if (pbVar31 < *(byte **)pWVar49) {
          uVar14 = *pbVar31 & 0x7f;
          if ((char)*pbVar31 < '\0') {
            uVar14 = Decoder::
                     read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                               ((Decoder *)this,pbVar53 + 2,puVar35,"branch depth",uVar14);
          }
          else {
            local_120 = (ValueBase *)0x100000000;
          }
        }
        else {
          local_120 = (ValueBase *)((ulong)local_120 & 0xffffffff);
          Decoder::errorf((uchar *)this,(char *)pbVar31,"expected %s","branch depth");
          uVar14 = 0;
        }
        local_120 = (ValueBase *)CONCAT44(local_120._4_4_,uVar14);
        lVar17 = *(long *)pWVar41;
        if ((ulong)*(uint *)(*(long *)pWVar47 + -0x54) < (ulong)(lVar17 - *(long *)this_01 >> 4)) {
          pbVar53 = *(byte **)(lVar17 + -0x10);
          uVar34 = *(ulong *)(lVar17 + -8);
          *(undefined8 **)pWVar41 = (undefined8 *)(lVar17 + -0x10);
          if ((((uint)uVar34 & 0xff) != 1) && (uVar34 = uVar34 & 0xff, uVar34 != 10)) {
            pbVar31 = *(byte **)pWVar52;
            if (pbVar31 < *(byte **)pWVar49) {
              bVar4 = *pbVar31;
              uVar51 = (ushort)bVar4;
              uVar23 = WasmOpcodes::IsPrefixOpcode(uVar51);
              if ((uVar23 & 1) != 0) {
                if (*(byte **)pWVar49 <= pbVar31 + 1) goto LAB_0132e790;
                uVar51 = CONCAT11(bVar4,pbVar31[1]);
              }
              pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
            }
            else {
LAB_0132e790:
              pcVar24 = "<end>";
            }
            if (pbVar53 < *(byte **)pWVar49) {
              bVar4 = *pbVar53;
              uVar51 = (ushort)bVar4;
              uVar23 = WasmOpcodes::IsPrefixOpcode(uVar51);
              if ((uVar23 & 1) == 0) {
LAB_0132f53c:
                pcVar19 = (char *)WasmOpcodes::OpcodeName(uVar51);
              }
              else {
                if (pbVar53 + 1 < *(byte **)pWVar49) {
                  uVar51 = CONCAT11(bVar4,pbVar53[1]);
                  goto LAB_0132f53c;
                }
                pcVar19 = "<end>";
              }
              if (10 < (uint)uVar34) goto LAB_0132ffc8;
LAB_0132f4f4:
              pcVar27 = *(char **)((long)&PTR_s_<stmt>_01cc3e10 +
                                  (-(uVar34 >> 7) & 0xfffffffffffff800 | uVar34 << 3));
            }
            else {
              pcVar19 = "<end>";
              if ((uint)uVar34 < 0xb) goto LAB_0132f4f4;
LAB_0132ffc8:
              pcVar27 = "<unknown>";
            }
            Decoder::errorf((uchar *)this,(char *)pbVar53,
                            "%s[%d] expected type %s, found %s of type %s",pcVar24,0,"i32",pcVar19,
                            pcVar27);
          }
        }
        else if (*(char *)(*(long *)pWVar47 + -0x48) != '\x02') {
          pbVar53 = *(byte **)pWVar52;
          if (pbVar53 < *(byte **)pWVar49) {
            bVar4 = *pbVar53;
            uVar51 = (ushort)bVar4;
            uVar34 = WasmOpcodes::IsPrefixOpcode(uVar51);
            if ((uVar34 & 1) != 0) {
              if (*(byte **)pWVar49 <= pbVar53 + 1) {
                pcVar24 = "<end>";
                goto LAB_0132f988;
              }
              uVar51 = CONCAT11(bVar4,pbVar53[1]);
            }
            pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
          }
          else {
            pcVar24 = "<end>";
          }
LAB_0132f988:
          Decoder::errorf((uchar *)this,(char *)pbVar53,"%s found empty stack",pcVar24);
        }
        if (((byte)this[0x30] & 1) == 0) {
          if ((byte)this[0x30] >> 1 == 0) {
LAB_01330014:
            uVar34 = (ulong)local_120 & 0xffffffff;
            uVar23 = (*(long *)pWVar47 - *(long *)this_02 >> 3) * 0x2e8ba2e8ba2e8ba3;
            if (uVar23 < uVar34 || uVar23 - uVar34 == 0) goto LAB_01330090;
            lVar17 = *(long *)pWVar47 + uVar34 * -0x58;
            uVar34 = 1;
            iVar13 = TypeCheckBranch(this,(ControlBase *)(lVar17 + -0x58),true);
            if (iVar13 == 0) {
              lVar30 = lVar17 + -0x40;
              if (*(ControlBase *)(lVar17 + -0x58) != (ControlBase)0x3) {
                lVar30 = lVar17 + -0x20;
              }
              *(undefined1 *)(lVar30 + 0x18) = 1;
            }
            else if (iVar13 == 2) break;
            goto LAB_01330084;
          }
        }
        else if (*(long *)(this + 0x38) == 0) goto LAB_01330014;
        goto LAB_0132bc3c;
      case 0xe:
        local_120 = (ValueBase *)((ulong)local_120 & 0xffffffff00000000);
        pVVar18 = local_120;
        pbVar31 = pbVar53 + 1;
        local_120._4_4_ = SUB84(pVVar43,4);
        if (pbVar31 < *(byte **)pWVar49) {
          uVar14 = *pbVar31 & 0x7f;
          if ((char)*pbVar31 < '\0') {
            local_120 = pVVar18;
            uVar14 = Decoder::
                     read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                               ((Decoder *)this,pbVar53 + 2,(uint *)&local_120,"table count",uVar14)
            ;
            uVar34 = (ulong)local_120 & 0xffffffff;
          }
          else {
            uVar34 = 1;
            local_120 = (ValueBase *)CONCAT44(local_120._4_4_,1);
          }
        }
        else {
          local_120 = (ValueBase *)((ulong)local_120._4_4_ << 0x20);
          Decoder::errorf((uchar *)this,(char *)pbVar31,"expected %s","table count");
          uVar34 = 0;
          uVar14 = 0;
        }
        lVar17 = *(long *)pWVar41;
        if ((ulong)*(uint *)(*(long *)pWVar47 + -0x54) < (ulong)(lVar17 - *(long *)this_01 >> 4)) {
          pbVar53 = *(byte **)(lVar17 + -0x10);
          uVar23 = *(ulong *)(lVar17 + -8);
          *(undefined8 **)pWVar41 = (undefined8 *)(lVar17 + -0x10);
          if ((((uint)uVar23 & 0xff) != 1) && (uVar23 = uVar23 & 0xff, uVar23 != 10)) {
            pbVar46 = *(byte **)pWVar52;
            if (pbVar46 < *(byte **)pWVar49) {
              bVar4 = *pbVar46;
              uVar51 = (ushort)bVar4;
              uVar20 = WasmOpcodes::IsPrefixOpcode(uVar51);
              if ((uVar20 & 1) != 0) {
                if (*(byte **)pWVar49 <= pbVar46 + 1) goto LAB_0132e6e4;
                uVar51 = CONCAT11(bVar4,pbVar46[1]);
              }
              pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
            }
            else {
LAB_0132e6e4:
              pcVar24 = "<end>";
            }
            if (pbVar53 < *(byte **)pWVar49) {
              bVar4 = *pbVar53;
              uVar51 = (ushort)bVar4;
              uVar20 = WasmOpcodes::IsPrefixOpcode(uVar51);
              if ((uVar20 & 1) == 0) {
LAB_0132f52c:
                pcVar19 = (char *)WasmOpcodes::OpcodeName(uVar51);
              }
              else {
                if (pbVar53 + 1 < *(byte **)pWVar49) {
                  uVar51 = CONCAT11(bVar4,pbVar53[1]);
                  goto LAB_0132f52c;
                }
                pcVar19 = "<end>";
              }
              if (10 < (uint)uVar23) goto LAB_0132fa94;
LAB_0132f478:
              pcVar27 = *(char **)((long)&PTR_s_<stmt>_01cc3e10 +
                                  (-(uVar23 >> 7) & 0xfffffffffffff800 | uVar23 << 3));
            }
            else {
              pcVar19 = "<end>";
              if ((uint)uVar23 < 0xb) goto LAB_0132f478;
LAB_0132fa94:
              pcVar27 = "<unknown>";
            }
            Decoder::errorf((uchar *)this,(char *)pbVar53,
                            "%s[%d] expected type %s, found %s of type %s",pcVar24,0,"i32",pcVar19,
                            pcVar27);
          }
        }
        else if (*(char *)(*(long *)pWVar47 + -0x48) != '\x02') {
          pbVar53 = *(byte **)pWVar52;
          if (pbVar53 < *(byte **)pWVar49) {
            bVar4 = *pbVar53;
            uVar51 = (ushort)bVar4;
            uVar23 = WasmOpcodes::IsPrefixOpcode(uVar51);
            if ((uVar23 & 1) != 0) {
              if (*(byte **)pWVar49 <= pbVar53 + 1) {
                pcVar24 = "<end>";
                goto LAB_0132f964;
              }
              uVar51 = CONCAT11(bVar4,pbVar53[1]);
            }
            pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
          }
          else {
            pcVar24 = "<end>";
          }
LAB_0132f964:
          Decoder::errorf((uchar *)this,(char *)pbVar53,"%s found empty stack",pcVar24);
        }
        if (((byte)this[0x30] & 1) == 0) {
          if ((byte)this[0x30] >> 1 == 0) {
LAB_0132fae0:
            if (uVar14 < 0xfff1) {
              pbVar53 = *(byte **)pWVar52;
              if (uVar14 <= (uint)(*(int *)pWVar49 - (int)pbVar53)) {
                lVar17 = *(long *)pWVar47 - *(long *)this_02;
                if (lVar17 + 0x57U < 0xaf) {
                  local_1b0 = (void *)0x0;
                }
                else {
                  if (lVar17 < -0x57) {
LAB_01332c6c:
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  uVar20 = lVar17 / 0x58;
                  uVar50 = uVar20 - 1 >> 6;
                  local_1b0 = operator_new(uVar50 * 8 + 8);
                  __n = (uVar20 >> 6) * 8;
                  uVar23 = 0;
                  if (0x40 < uVar20) {
                    uVar23 = uVar50;
                  }
                  *(undefined8 *)((long)local_1b0 + uVar23 * 8) = 0;
                  memset(local_1b0,0,__n);
                  if ((uVar20 & 0x3f) != 0) {
                    *(ulong *)((long)local_1b0 + __n) =
                         *(ulong *)((long)local_1b0 + __n) &
                         (0xffffffffffffffffU >> (-(uVar20 & 0x3f) & 0x3f) ^ 0xffffffffffffffff);
                  }
                }
                local_118 = (ValueBase *)0x0;
                local_110 = (ValueBase *)0x0;
                local_120 = (ValueBase *)0x0;
                pbVar53 = pbVar31 + uVar34;
                uVar45 = 0;
                pVVar18 = local_120;
                pVVar43 = local_110;
                do {
                  while( true ) {
                    do {
                      local_110 = pVVar43;
                      local_120 = pVVar18;
                      uVar44 = uVar45;
                      pbVar46 = pbVar53;
                      if (((byte)this[0x30] & 1) == 0) {
                        uVar34 = (ulong)((byte)this[0x30] >> 1);
                      }
                      else {
                        uVar34 = *(ulong *)(this + 0x38);
                      }
                      if ((uVar14 < uVar44) || (uVar34 != 0)) goto LAB_0132fdec;
                      uVar45 = uVar44 + 1;
                      if (pbVar46 < *(byte **)pWVar49) {
                        uVar15 = *pbVar46 & 0x7f;
                        if ((char)*pbVar46 < '\0') {
                          uVar15 = Decoder::
                                   read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                                             ((Decoder *)this,pbVar46 + 1,&local_88,
                                              "branch table entry",uVar15);
                          uVar34 = (ulong)local_88;
                        }
                        else {
                          uVar34 = 1;
                          local_88 = 1;
                        }
                      }
                      else {
                        local_88 = 0;
                        Decoder::errorf((uchar *)this,(char *)pbVar46,"expected %s",
                                        "branch table entry");
                        uVar34 = 0;
                        uVar15 = 0;
                      }
                      lVar17 = *(long *)pWVar47;
                      uVar23 = (ulong)uVar15;
                      pbVar53 = pbVar46 + uVar34;
                      uVar34 = (lVar17 - *(long *)this_02 >> 3) * 0x2e8ba2e8ba2e8ba3;
                      if (uVar34 < uVar23 || uVar34 - uVar23 == 0) {
                        Decoder::errorf((uchar *)this,(char *)pbVar46,
                                        "improper branch in br_table target %u (depth %u)",
                                        (ulong)uVar44);
                        pbVar46 = pbVar53;
                        uVar44 = uVar45;
                        goto LAB_0132fdec;
                      }
                      uVar34 = *(ulong *)((long)local_1b0 + (ulong)(uVar15 >> 6) * 8);
                      uVar20 = 1L << (uVar23 & 0x3f);
                      pVVar18 = local_120;
                      pVVar43 = local_110;
                    } while ((uVar34 & uVar20) != 0);
                    *(ulong *)((long)local_1b0 + (ulong)(uVar15 >> 6) * 8) = uVar34 | uVar20;
                    if (uVar44 != 0) break;
                    lVar17 = lVar17 + uVar23 * -0x58;
                    puVar3 = (uint *)(lVar17 + -0x40);
                    if (*(char *)(lVar17 + -0x58) != '\x03') {
                      puVar3 = (uint *)(lVar17 + -0x20);
                    }
                    uVar44 = *puVar3;
                    uVar34 = (ulong)(int)uVar44;
                    if (uVar44 == 0) {
                      pVVar43 = (ValueBase *)0x0;
                      pVVar18 = (ValueBase *)0x0;
                    }
                    else {
                      if ((int)uVar44 < 0) goto LAB_01332c6c;
                      pVVar18 = operator_new(uVar34);
                      pVVar43 = pVVar18 + uVar34;
                      memset(pVVar18,0,uVar34);
                      lVar17 = 0;
                      pVVar39 = pVVar18;
                      do {
                        puVar42 = puVar3 + 2;
                        if (*puVar3 != 1) {
                          puVar42 = (uint *)(*(long *)(puVar3 + 2) + lVar17);
                        }
                        lVar17 = lVar17 + 0x10;
                        *pVVar39 = *(ValueBase *)(puVar42 + 2);
                        pVVar39 = pVVar39 + 1;
                      } while ((ulong)uVar44 * 0x10 - lVar17 != 0);
                    }
                    local_118 = pVVar43;
                    if (local_120 != (ValueBase *)0x0) {
                      local_118 = local_120;
                      operator_delete(local_120);
                      local_118 = pVVar43;
                    }
                  }
                  uVar34 = UpdateBrTableResultTypes(this,(vector *)&local_120,uVar15,pbVar46,uVar44)
                  ;
                  pbVar46 = pbVar53;
                  uVar44 = uVar45;
                  pVVar18 = local_120;
                  pVVar43 = local_110;
                } while ((uVar34 & 1) != 0);
LAB_0132fdec:
                uVar34 = TypeCheckBrTable(this,(vector *)&local_120);
                if ((uVar34 & 1) == 0) {
                  uVar34 = 1;
                }
                else {
                  if ((*(char *)(*(long *)pWVar47 + -0x48) == '\0') &&
                     (uVar34 = (*(long *)pWVar47 - *(long *)this_02 >> 3) * 0xba2e8ba3,
                     0 < (int)uVar34)) {
                    uVar23 = 0;
                    do {
                      if ((*(ulong *)((long)local_1b0 + (uVar23 >> 3 & 0x1ffffffffffffff8)) >>
                           (uVar23 & 0x3f) & 1) != 0) {
                        lVar17 = *(long *)pWVar47 + uVar23 * -0x58;
                        lVar30 = lVar17 + -0x40;
                        if (*(char *)(lVar17 + -0x58) != '\x03') {
                          lVar30 = lVar17 + -0x20;
                        }
                        *(undefined1 *)(lVar30 + 0x18) = 1;
                      }
                      uVar23 = uVar23 + 1;
                    } while (uVar23 != (uVar34 & 0xffffffff));
                  }
LAB_0132fec0:
                  WVar8 = this[0x30];
                  if (((byte)WVar8 & 1) != 0) goto LAB_0132fed8;
                  while (uVar34 = (ulong)((byte)WVar8 >> 1), uVar44 <= uVar14) {
                    while( true ) {
                      if (uVar34 != 0) goto LAB_0132ff74;
                      uVar44 = uVar44 + 1;
                      if (*(byte **)pWVar49 <= pbVar46) {
                        local_88 = 0;
                        Decoder::errorf((uchar *)this,(char *)pbVar46,"expected %s",
                                        "branch table entry");
                        goto LAB_0132fec0;
                      }
                      if ((char)*pbVar46 < '\0') {
                        Decoder::
                        read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                                  ((Decoder *)this,pbVar46 + 1,&local_88,"branch table entry",
                                   *pbVar46 & 0x7f);
                        uVar34 = (ulong)local_88;
                      }
                      else {
                        uVar34 = 1;
                        local_88 = 1;
                      }
                      pbVar46 = pbVar46 + uVar34;
                      WVar8 = this[0x30];
                      if (((byte)WVar8 & 1) == 0) break;
LAB_0132fed8:
                      uVar34 = *(ulong *)(this + 0x38);
                      if (uVar14 < uVar44) goto LAB_0132ff74;
                    }
                  }
LAB_0132ff74:
                  uVar34 = (ulong)(((int)pbVar46 - (int)pbVar31) + 1);
                  lVar17 = *(long *)(this + 0xa0) +
                           (ulong)*(uint *)(*(long *)(this + 200) + -0x54) * 0x10;
                  if (lVar17 != *(long *)(this + 0xa8)) {
                    *(long *)pWVar41 = lVar17;
                  }
                  *(undefined1 *)(*(long *)(this + 200) + -0x48) = 2;
                }
                if (local_120 != (ValueBase *)0x0) {
                  local_118 = local_120;
                  operator_delete(local_120);
                }
                if (local_1b0 != (void *)0x0) {
                  operator_delete(local_1b0);
                }
                break;
              }
              pcVar24 = "expected %u bytes, fell off end";
            }
            else {
              pcVar24 = "invalid table count (> max br_table size): %u";
              pbVar53 = (byte *)(*(long *)(this + 0x10) + 1);
            }
            uVar34 = (ulong)uVar14;
            goto LAB_0132fb04;
          }
        }
        else if (*(long *)(this + 0x38) == 0) goto LAB_0132fae0;
        goto LAB_0132bc3c;
      case 0xf:
        lVar17 = *(long *)pWVar47;
        if (*(char *)(lVar17 + -0x48) == '\0') {
          uVar34 = TypeCheckReturn(this);
          if ((uVar34 & 1) == 0) goto LAB_0132bc3c;
        }
        else {
          puVar36 = *(ulong **)(this + 0x60);
          uVar34 = *puVar36;
          if (0 < (int)uVar34) {
            uVar23 = 0;
            do {
              lVar30 = *(long *)pWVar41;
              bVar4 = *(byte *)(puVar36[2] + uVar23);
              if ((ulong)*(uint *)(lVar17 + -0x54) < (ulong)(lVar30 - *(long *)this_01 >> 4)) {
                pbVar53 = *(byte **)(lVar30 + -0x10);
                bVar7 = *(byte *)(lVar30 + -8);
                uVar20 = (ulong)bVar7;
                *(undefined8 **)pWVar41 = (undefined8 *)(lVar30 + -0x10);
                if (bVar7 != bVar4) {
LAB_01332550:
                  uVar14 = (uint)uVar20;
                  if ((bVar4 != 7 || uVar14 != 8) && (bVar4 != 6 || 2 < uVar14 - 7)) {
                    if ((bVar4 != 10) && ((uVar20 != 10 && (bVar4 != 9 || uVar14 != 8)))) {
                      pbVar31 = *(byte **)pWVar52;
                      if (pbVar31 < *(byte **)pWVar49) {
                        bVar7 = *pbVar31;
                        uVar51 = (ushort)bVar7;
                        uVar50 = WasmOpcodes::IsPrefixOpcode(uVar51);
                        if ((uVar50 & 1) != 0) {
                          if (*(byte **)pWVar49 <= pbVar31 + 1) goto LAB_013325f0;
                          uVar51 = CONCAT11(bVar7,pbVar31[1]);
                        }
                        pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
                      }
                      else {
LAB_013325f0:
                        pcVar24 = "<end>";
                      }
                      if (bVar4 < 10) {
                        pcVar19 = (&PTR_s_<stmt>_01cc3d10)[(char)bVar4];
                      }
                      else {
                        pcVar19 = "<unknown>";
                      }
                      if (pbVar53 < *(byte **)pWVar49) {
                        bVar4 = *pbVar53;
                        uVar51 = (ushort)bVar4;
                        uVar50 = WasmOpcodes::IsPrefixOpcode(uVar51);
                        if ((uVar50 & 1) != 0) {
                          if (*(byte **)pWVar49 <= pbVar53 + 1) goto LAB_0133266c;
                          uVar51 = CONCAT11(bVar4,pbVar53[1]);
                        }
                        pcVar27 = (char *)WasmOpcodes::OpcodeName(uVar51);
                        if (10 < uVar14) goto LAB_013326a4;
LAB_0133267c:
                        pcVar28 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                                            (-(uVar20 >> 7) & 0xfffffffffffff800 | uVar20 << 3));
                      }
                      else {
LAB_0133266c:
                        pcVar27 = "<end>";
                        if (uVar14 < 0xb) goto LAB_0133267c;
LAB_013326a4:
                        pcVar28 = "<unknown>";
                      }
                      Decoder::errorf((uchar *)this,(char *)pbVar53,
                                      "%s[%d] expected type %s, found %s of type %s",pcVar24,
                                      uVar23 & 0xffffffff,pcVar19,pcVar27,pcVar28);
                    }
                  }
                }
              }
              else {
                if (*(char *)(lVar17 + -0x48) != '\x02') {
                  pcVar24 = *(char **)pWVar52;
                  if (pcVar24 < *(char **)pWVar49) {
                    cVar5 = *pcVar24;
                    uVar20 = WasmOpcodes::IsPrefixOpcode(cVar5);
                    if ((uVar20 & 1) == 0) {
                      pcVar19 = (char *)WasmOpcodes::OpcodeName(cVar5);
                    }
                    else if (pcVar24 + 1 < *(char **)pWVar49) {
                      pcVar19 = (char *)WasmOpcodes::OpcodeName(CONCAT11(cVar5,pcVar24[1]));
                    }
                    else {
                      pcVar19 = "<end>";
                    }
                  }
                  else {
                    pcVar19 = "<end>";
                  }
                  Decoder::errorf((uchar *)this,pcVar24,"%s found empty stack",pcVar19);
                }
                pbVar53 = *(byte **)pWVar52;
                uVar20 = 10;
                if (bVar4 != 10) goto LAB_01332550;
              }
              if ((uVar34 & 0xffffffff) - 1 == uVar23) break;
              puVar36 = *(ulong **)(this + 0x60);
              lVar17 = *(long *)(this + 200);
              uVar23 = uVar23 + 1;
            } while( true );
          }
        }
switchD_0132bc7c_caseD_0:
        lVar30 = *(long *)(this + 200);
        lVar17 = *(long *)(this + 0xa0) + (ulong)*(uint *)(lVar30 + -0x54) * 0x10;
        if (lVar17 != *(long *)(this + 0xa8)) {
          *(long *)pWVar41 = lVar17;
        }
LAB_01331048:
        *(undefined1 *)(lVar30 + -0x48) = 2;
        goto LAB_0132bc3c;
      case 0x10:
        local_80 = (long *)0x0;
        pbVar31 = pbVar53 + 1;
        if (pbVar31 < *(byte **)pWVar49) {
          uVar14 = *pbVar31 & 0x7f;
          uVar23 = (ulong)uVar14;
          if ((char)*pbVar31 < '\0') {
            uVar14 = Decoder::
                     read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                               ((Decoder *)this,pbVar53 + 2,(uint *)&local_78,"function index",
                                uVar14);
            uVar23 = (ulong)uVar14;
          }
          else {
            local_78 = (long *)CONCAT44(local_78._4_4_,1);
          }
        }
        else {
          local_78 = (long *)((ulong)local_78._4_4_ << 0x20);
          Decoder::errorf((uchar *)this,(char *)pbVar31,"expected %s","function index");
          uVar23 = 0;
        }
        local_88 = (uint)uVar23;
        lVar17 = *(long *)(this + 0x48);
        pcVar24 = *(char **)(this + 0x10);
        uVar34 = (ulong)((uint)local_78 + 1);
        if ((lVar17 == 0) ||
           ((ulong)(*(long *)(lVar17 + 0x90) - *(long *)(lVar17 + 0x88) >> 5) <= uVar23)) {
LAB_0132eabc:
          pbVar53 = (byte *)(pcVar24 + 1);
          pcVar24 = "invalid function index: %u";
LAB_0132edd0:
          Decoder::errorf((uchar *)this,(char *)pbVar53,pcVar24,uVar23);
        }
        else {
          plVar32 = *(long **)(*(long *)(lVar17 + 0x88) + uVar23 * 0x20);
          local_120 = (ValueBase *)local_108;
          local_118 = (ValueBase *)local_108;
          local_110 = (ValueBase *)&local_88;
          local_80 = plVar32;
          if (plVar32 != (long *)0x0) {
            uVar23 = plVar32[1];
            uVar14 = (uint)uVar23;
            uVar20 = (ulong)(int)uVar14;
            if (8 < uVar14) {
              base::SmallVector<v8::internal::wasm::ValueBase,8ul>::Grow
                        ((SmallVector<v8::internal::wasm::ValueBase,8ul> *)&local_120,uVar20);
            }
            local_118 = local_120 + uVar20 * 0x10;
            if (0 < (int)uVar14) {
              uVar23 = -(uVar23 >> 0x1f & 1) & 0xfffffff000000000 | (uVar23 & 0xffffffff) << 4;
              do {
                uVar14 = uVar14 - 1;
                lVar17 = *(long *)pWVar41;
                bVar4 = *(byte *)(plVar32[2] + *plVar32 + uVar20 + -1);
                if ((ulong)*(uint *)(*(long *)pWVar47 + -0x54) <
                    (ulong)(lVar17 - *(long *)this_01 >> 4)) {
                  pbVar53 = *(byte **)(lVar17 + -0x10);
                  uVar50 = (ulong)*(byte *)(lVar17 + -8);
                  *(undefined8 **)pWVar41 = (undefined8 *)(lVar17 + -0x10);
                }
                else {
                  if (*(char *)(*(long *)pWVar47 + -0x48) != '\x02') {
                    pbVar53 = *(byte **)pWVar52;
                    if (pbVar53 < *(byte **)pWVar49) {
                      bVar7 = *pbVar53;
                      uVar51 = (ushort)bVar7;
                      uVar50 = WasmOpcodes::IsPrefixOpcode(uVar51);
                      if ((uVar50 & 1) != 0) {
                        if (*(byte **)pWVar49 <= pbVar53 + 1) goto LAB_0132e154;
                        uVar51 = CONCAT11(bVar7,pbVar53[1]);
                      }
                      pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
                    }
                    else {
LAB_0132e154:
                      pcVar24 = "<end>";
                    }
                    Decoder::errorf((uchar *)this,(char *)pbVar53,"%s found empty stack",pcVar24);
                  }
                  pbVar53 = *(byte **)pWVar52;
                  uVar50 = 10;
                }
                uVar45 = (uint)uVar50;
                uVar20 = uVar20 - 1;
                if (uVar45 != bVar4) {
                  if ((bVar4 != 7 || uVar45 != 8) && (bVar4 != 6 || 2 < uVar45 - 7)) {
                    if ((bVar4 != 10) && ((uVar50 != 10 && (bVar4 != 9 || uVar45 != 8)))) {
                      pbVar31 = *(byte **)pWVar52;
                      if (pbVar31 < *(byte **)pWVar49) {
                        bVar7 = *pbVar31;
                        uVar51 = (ushort)bVar7;
                        uVar21 = WasmOpcodes::IsPrefixOpcode(uVar51);
                        if ((uVar21 & 1) != 0) {
                          if (*(byte **)pWVar49 <= pbVar31 + 1) goto LAB_0132e240;
                          uVar51 = CONCAT11(bVar7,pbVar31[1]);
                        }
                        pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
                      }
                      else {
LAB_0132e240:
                        pcVar24 = "<end>";
                      }
                      if (bVar4 < 10) {
                        pcVar19 = (&PTR_s_<stmt>_01cc3d10)[(char)bVar4];
                      }
                      else {
                        pcVar19 = "<unknown>";
                      }
                      if (pbVar53 < *(byte **)pWVar49) {
                        bVar4 = *pbVar53;
                        uVar51 = (ushort)bVar4;
                        uVar21 = WasmOpcodes::IsPrefixOpcode(uVar51);
                        if ((uVar21 & 1) == 0) {
LAB_0132e2e0:
                          pcVar27 = (char *)WasmOpcodes::OpcodeName(uVar51);
                        }
                        else {
                          if (pbVar53 + 1 < *(byte **)pWVar49) {
                            uVar51 = CONCAT11(bVar4,pbVar53[1]);
                            goto LAB_0132e2e0;
                          }
                          pcVar27 = "<end>";
                        }
                        if (10 < uVar45) goto LAB_0132e308;
LAB_0132e06c:
                        pcVar28 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                                            (-(uVar50 >> 7) & 0xfffffffffffff800 | uVar50 << 3));
                      }
                      else {
                        pcVar27 = "<end>";
                        if (uVar45 < 0xb) goto LAB_0132e06c;
LAB_0132e308:
                        pcVar28 = "<unknown>";
                      }
                      Decoder::errorf((uchar *)this,(char *)pbVar53,
                                      "%s[%d] expected type %s, found %s of type %s",pcVar24,
                                      (ulong)uVar14,pcVar19,pcVar27,pcVar28);
                    }
                  }
                }
                *(byte **)(local_120 + (uVar23 - 0x10)) = pbVar53;
                local_120[uVar23 - 8] = SUB81(uVar50,0);
                uVar23 = uVar23 - 0x10;
              } while (0 < (long)uVar20);
            }
          }
          plVar32 = local_80;
          lVar17 = *local_80;
          if (lVar17 != 0) {
            lVar30 = 0;
            do {
              puVar22 = *(undefined8 **)(this + 0xa8);
              local_12c = CONCAT31(local_12c._1_3_,*(undefined1 *)(plVar32[2] + lVar30));
              if (puVar22 < *(undefined8 **)(this + 0xb0)) {
                uVar38 = *(undefined8 *)pWVar52;
                *(undefined1 *)(puVar22 + 1) = *(undefined1 *)(plVar32[2] + lVar30);
                *puVar22 = uVar38;
                *(long *)pWVar41 = *(long *)pWVar41 + 0x10;
              }
              else {
                std::__ndk1::
                vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
                ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                          (this_01,(uchar **)pWVar52,(ValueType *)&local_12c);
              }
              lVar30 = lVar30 + 1;
            } while (lVar17 != lVar30);
          }
LAB_01332128:
          if (local_120 != (ValueBase *)local_108) {
            free(local_120);
          }
        }
        break;
      case 0x11:
        CallIndirectImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::CallIndirectImmediate
                  ((CallIndirectImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)&local_88,
                   *(undefined4 *)(this + 0x50),this,pbVar53);
        lVar17 = *(long *)(this + 0x48);
        uVar34 = (ulong)((uint)local_78 + 1);
        if (lVar17 == 0) goto LAB_0132d4c8;
        if ((ulong)(*(long *)(lVar17 + 0xc0) - *(long *)(lVar17 + 0xb8) >> 4) <= (ulong)local_88)
        goto LAB_0132d4c8;
        if (*(char *)(*(long *)(lVar17 + 0xb8) + (ulong)local_88 * 0x10) == '\a') {
          pbVar53 = *(byte **)(this + 0x10);
          if ((ulong)(*(long *)(lVar17 + 0x60) - *(long *)(lVar17 + 0x58) >> 3) <= (ulong)local_84)
          {
            Decoder::errorf((uchar *)this,(char *)(pbVar53 + 1),"invalid signature index: #%u");
            break;
          }
          local_80 = *(long **)(*(long *)(lVar17 + 0x58) + (ulong)local_84 * 8);
          lVar17 = *(long *)pWVar41;
          if ((ulong)*(uint *)(*(long *)pWVar47 + -0x54) < (ulong)(lVar17 - *(long *)this_01 >> 4))
          {
            pbVar31 = *(byte **)(lVar17 + -0x10);
            uVar23 = *(ulong *)(lVar17 + -8);
            *(undefined8 **)pWVar41 = (undefined8 *)(lVar17 + -0x10);
            if ((((uint)uVar23 & 0xff) != 1) && (uVar23 = uVar23 & 0xff, uVar23 != 10)) {
              if (pbVar53 < *(byte **)pWVar49) {
                bVar4 = *pbVar53;
                uVar51 = (ushort)bVar4;
                uVar20 = WasmOpcodes::IsPrefixOpcode(uVar51);
                if ((uVar20 & 1) != 0) {
                  if (*(byte **)pWVar49 <= pbVar53 + 1) {
                    pcVar24 = "<end>";
                    goto LAB_01331ce0;
                  }
                  uVar51 = CONCAT11(bVar4,pbVar53[1]);
                }
                pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
              }
              else {
                pcVar24 = "<end>";
              }
LAB_01331ce0:
              if (pbVar31 < *(byte **)pWVar49) {
                bVar4 = *pbVar31;
                uVar51 = (ushort)bVar4;
                uVar20 = WasmOpcodes::IsPrefixOpcode(uVar51);
                if ((uVar20 & 1) != 0) {
                  if (*(byte **)pWVar49 <= pbVar31 + 1) goto LAB_01331d1c;
                  uVar51 = CONCAT11(bVar4,pbVar31[1]);
                }
                pcVar19 = (char *)WasmOpcodes::OpcodeName(uVar51);
                if (10 < (uint)uVar23) goto LAB_01331d54;
LAB_01331d2c:
                pcVar27 = *(char **)((long)&PTR_s_<stmt>_01cc3e10 +
                                    (-(uVar23 >> 7) & 0xfffffffffffff800 | uVar23 << 3));
              }
              else {
LAB_01331d1c:
                pcVar19 = "<end>";
                if ((uint)uVar23 < 0xb) goto LAB_01331d2c;
LAB_01331d54:
                pcVar27 = "<unknown>";
              }
              Decoder::errorf((uchar *)this,(char *)pbVar31,
                              "%s[%d] expected type %s, found %s of type %s",pcVar24,0,"i32",pcVar19
                              ,pcVar27);
            }
          }
          else if (*(char *)(*(long *)pWVar47 + -0x48) != '\x02') {
            if (pbVar53 < *(byte **)pWVar49) {
              bVar4 = *pbVar53;
              uVar51 = (ushort)bVar4;
              uVar23 = WasmOpcodes::IsPrefixOpcode(uVar51);
              if ((uVar23 & 1) != 0) {
                if (*(byte **)pWVar49 <= pbVar53 + 1) goto LAB_01330d04;
                uVar51 = CONCAT11(bVar4,pbVar53[1]);
              }
              pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
            }
            else {
LAB_01330d04:
              pcVar24 = "<end>";
            }
            Decoder::errorf((uchar *)this,(char *)pbVar53,"%s found empty stack",pcVar24);
          }
          plVar32 = local_80;
          local_120 = (ValueBase *)local_108;
          local_118 = (ValueBase *)local_108;
          local_110 = (ValueBase *)&local_88;
          if (local_80 != (long *)0x0) {
            uVar23 = local_80[1];
            uVar14 = (uint)uVar23;
            uVar20 = (ulong)(int)uVar14;
            if (8 < uVar14) {
              base::SmallVector<v8::internal::wasm::ValueBase,8ul>::Grow
                        ((SmallVector<v8::internal::wasm::ValueBase,8ul> *)&local_120,uVar20);
            }
            local_118 = local_120 + uVar20 * 0x10;
            if (0 < (int)uVar14) {
              uVar23 = -(uVar23 >> 0x1f & 1) & 0xfffffff000000000 | (uVar23 & 0xffffffff) << 4;
              do {
                uVar14 = uVar14 - 1;
                lVar17 = *(long *)pWVar41;
                bVar4 = *(byte *)(plVar32[2] + *plVar32 + uVar20 + -1);
                if ((ulong)*(uint *)(*(long *)pWVar47 + -0x54) <
                    (ulong)(lVar17 - *(long *)this_01 >> 4)) {
                  pbVar53 = *(byte **)(lVar17 + -0x10);
                  uVar50 = (ulong)*(byte *)(lVar17 + -8);
                  *(undefined8 **)pWVar41 = (undefined8 *)(lVar17 + -0x10);
                }
                else {
                  if (*(char *)(*(long *)pWVar47 + -0x48) != '\x02') {
                    pbVar53 = *(byte **)pWVar52;
                    if (pbVar53 < *(byte **)pWVar49) {
                      bVar7 = *pbVar53;
                      uVar51 = (ushort)bVar7;
                      uVar50 = WasmOpcodes::IsPrefixOpcode(uVar51);
                      if ((uVar50 & 1) != 0) {
                        if (*(byte **)pWVar49 <= pbVar53 + 1) goto LAB_01331ed4;
                        uVar51 = CONCAT11(bVar7,pbVar53[1]);
                      }
                      pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
                    }
                    else {
LAB_01331ed4:
                      pcVar24 = "<end>";
                    }
                    Decoder::errorf((uchar *)this,(char *)pbVar53,"%s found empty stack",pcVar24);
                  }
                  pbVar53 = *(byte **)pWVar52;
                  uVar50 = 10;
                }
                uVar45 = (uint)uVar50;
                uVar20 = uVar20 - 1;
                if (uVar45 != bVar4) {
                  if ((bVar4 != 7 || uVar45 != 8) && (bVar4 != 6 || 2 < uVar45 - 7)) {
                    if ((bVar4 != 10) && ((uVar50 != 10 && (bVar4 != 9 || uVar45 != 8)))) {
                      pbVar31 = *(byte **)pWVar52;
                      if (pbVar31 < *(byte **)pWVar49) {
                        bVar7 = *pbVar31;
                        uVar51 = (ushort)bVar7;
                        uVar21 = WasmOpcodes::IsPrefixOpcode(uVar51);
                        if ((uVar21 & 1) != 0) {
                          if (*(byte **)pWVar49 <= pbVar31 + 1) {
                            pcVar24 = "<end>";
                            goto LAB_01331ff0;
                          }
                          uVar51 = CONCAT11(bVar7,pbVar31[1]);
                        }
                        pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
                      }
                      else {
                        pcVar24 = "<end>";
                      }
LAB_01331ff0:
                      if (bVar4 < 10) {
                        pcVar19 = (&PTR_s_<stmt>_01cc3d10)[(char)bVar4];
                      }
                      else {
                        pcVar19 = "<unknown>";
                      }
                      if (pbVar53 < *(byte **)pWVar49) {
                        bVar4 = *pbVar53;
                        uVar51 = (ushort)bVar4;
                        uVar21 = WasmOpcodes::IsPrefixOpcode(uVar51);
                        if ((uVar21 & 1) == 0) {
LAB_01332074:
                          pcVar27 = (char *)WasmOpcodes::OpcodeName(uVar51);
                        }
                        else {
                          if (pbVar53 + 1 < *(byte **)pWVar49) {
                            uVar51 = CONCAT11(bVar4,pbVar53[1]);
                            goto LAB_01332074;
                          }
                          pcVar27 = "<end>";
                        }
                        if (10 < uVar45) goto LAB_0133209c;
LAB_01331dec:
                        pcVar28 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                                            (-(uVar50 >> 7) & 0xfffffffffffff800 | uVar50 << 3));
                      }
                      else {
                        pcVar27 = "<end>";
                        if (uVar45 < 0xb) goto LAB_01331dec;
LAB_0133209c:
                        pcVar28 = "<unknown>";
                      }
                      Decoder::errorf((uchar *)this,(char *)pbVar53,
                                      "%s[%d] expected type %s, found %s of type %s",pcVar24,
                                      (ulong)uVar14,pcVar19,pcVar27,pcVar28);
                    }
                  }
                }
                *(byte **)(local_120 + (uVar23 - 0x10)) = pbVar53;
                local_120[uVar23 - 8] = SUB81(uVar50,0);
                uVar23 = uVar23 - 0x10;
              } while (0 < (long)uVar20);
            }
          }
          plVar32 = local_80;
          lVar17 = *local_80;
          if (lVar17 != 0) {
            lVar30 = 0;
            do {
              puVar22 = *(undefined8 **)(this + 0xa8);
              local_12c = CONCAT31(local_12c._1_3_,*(undefined1 *)(plVar32[2] + lVar30));
              if (puVar22 < *(undefined8 **)(this + 0xb0)) {
                uVar38 = *(undefined8 *)pWVar52;
                *(undefined1 *)(puVar22 + 1) = *(undefined1 *)(plVar32[2] + lVar30);
                *puVar22 = uVar38;
                *(long *)pWVar41 = *(long *)pWVar41 + 0x10;
              }
              else {
                std::__ndk1::
                vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
                ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                          (this_01,(uchar **)pWVar52,(ValueType *)&local_12c);
              }
              lVar30 = lVar30 + 1;
            } while (lVar17 != lVar30);
          }
          goto LAB_01332128;
        }
LAB_0132dcf0:
        pcVar24 = "table of call_indirect must be of type funcref";
        goto LAB_0132d4d0;
      case 0x12:
        if (((byte)this[0x50] >> 3 & 1) == 0) {
LAB_0132c6e4:
          pcVar24 = "Invalid opcode (enable with --experimental-wasm-return_call)";
          goto LAB_0132c808;
        }
        **(uint **)(this + 0x58) = **(uint **)(this + 0x58) | 8;
        local_80 = (long *)0x0;
        pbVar53 = (byte *)(*(long *)(this + 0x10) + 1);
        if (pbVar53 < *(byte **)(this + 0x18)) {
          uVar14 = *pbVar53 & 0x7f;
          uVar23 = (ulong)uVar14;
          if ((char)*pbVar53 < '\0') {
            uVar14 = Decoder::
                     read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                               ((Decoder *)this,(uchar *)(*(long *)(this + 0x10) + 2),
                                (uint *)&local_78,"function index",uVar14);
            uVar23 = (ulong)uVar14;
          }
          else {
            local_78 = (long *)CONCAT44(local_78._4_4_,1);
          }
        }
        else {
          local_78 = (long *)((ulong)local_78._4_4_ << 0x20);
          Decoder::errorf((uchar *)this,(char *)pbVar53,"expected %s","function index");
          uVar23 = 0;
        }
        local_88 = (uint)uVar23;
        lVar17 = *(long *)(this + 0x48);
        pcVar24 = *(char **)(this + 0x10);
        uVar34 = (ulong)((uint)local_78 + 1);
        if ((lVar17 == 0) ||
           ((ulong)(*(long *)(lVar17 + 0x90) - *(long *)(lVar17 + 0x88) >> 5) <= uVar23))
        goto LAB_0132eabc;
        plVar32 = *(long **)(*(long *)(lVar17 + 0x88) + uVar23 * 0x20);
        local_80 = plVar32;
        if (plVar32 != (long *)0x0) {
          lVar17 = **(long **)(this + 0x60);
          if (lVar17 == *plVar32) {
            if (lVar17 != 0) {
              pcVar27 = (char *)(*(long **)(this + 0x60))[2];
              pcVar19 = (char *)plVar32[2];
              do {
                if (*pcVar27 != *pcVar19) goto LAB_0132eac8;
                lVar17 = lVar17 + -1;
                pcVar19 = pcVar19 + 1;
                pcVar27 = pcVar27 + 1;
              } while (lVar17 != 0);
            }
            uVar23 = plVar32[1];
            uVar14 = (uint)uVar23;
            uVar20 = (ulong)(int)uVar14;
            local_120 = (ValueBase *)local_108;
            local_110 = (ValueBase *)&local_88;
            if (8 < uVar14) {
              local_118 = (ValueBase *)local_108;
              base::SmallVector<v8::internal::wasm::ValueBase,8ul>::Grow
                        ((SmallVector<v8::internal::wasm::ValueBase,8ul> *)&local_120,uVar20);
            }
            local_118 = local_120 + uVar20 * 0x10;
            if (0 < (int)uVar14) {
              uVar23 = -(uVar23 >> 0x1f & 1) & 0xfffffff000000000 | (uVar23 & 0xffffffff) << 4;
              do {
                uVar14 = uVar14 - 1;
                lVar17 = *(long *)pWVar41;
                bVar4 = *(byte *)(plVar32[2] + *plVar32 + uVar20 + -1);
                if ((ulong)*(uint *)(*(long *)pWVar47 + -0x54) <
                    (ulong)(lVar17 - *(long *)this_01 >> 4)) {
                  pbVar53 = *(byte **)(lVar17 + -0x10);
                  uVar50 = (ulong)*(byte *)(lVar17 + -8);
                  *(undefined8 **)pWVar41 = (undefined8 *)(lVar17 + -0x10);
                }
                else {
                  if (*(char *)(*(long *)pWVar47 + -0x48) != '\x02') {
                    pbVar53 = *(byte **)pWVar52;
                    if (pbVar53 < *(byte **)pWVar49) {
                      bVar7 = *pbVar53;
                      uVar51 = (ushort)bVar7;
                      uVar50 = WasmOpcodes::IsPrefixOpcode(uVar51);
                      if ((uVar50 & 1) != 0) {
                        if (*(byte **)pWVar49 <= pbVar53 + 1) goto LAB_0132f65c;
                        uVar51 = CONCAT11(bVar7,pbVar53[1]);
                      }
                      pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
                    }
                    else {
LAB_0132f65c:
                      pcVar24 = "<end>";
                    }
                    Decoder::errorf((uchar *)this,(char *)pbVar53,"%s found empty stack",pcVar24);
                  }
                  pbVar53 = *(byte **)pWVar52;
                  uVar50 = 10;
                }
                uVar45 = (uint)uVar50;
                uVar20 = uVar20 - 1;
                if (uVar45 != bVar4) {
                  if ((bVar4 != 7 || uVar45 != 8) && (bVar4 != 6 || 2 < uVar45 - 7)) {
                    if ((bVar4 != 10) && ((uVar50 != 10 && (bVar4 != 9 || uVar45 != 8)))) {
                      pbVar31 = *(byte **)pWVar52;
                      if (pbVar31 < *(byte **)pWVar49) {
                        bVar7 = *pbVar31;
                        uVar51 = (ushort)bVar7;
                        uVar21 = WasmOpcodes::IsPrefixOpcode(uVar51);
                        if ((uVar21 & 1) != 0) {
                          if (*(byte **)pWVar49 <= pbVar31 + 1) {
                            pcVar24 = "<end>";
                            goto LAB_0132f778;
                          }
                          uVar51 = CONCAT11(bVar7,pbVar31[1]);
                        }
                        pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
                      }
                      else {
                        pcVar24 = "<end>";
                      }
LAB_0132f778:
                      if (bVar4 < 10) {
                        pcVar19 = (&PTR_s_<stmt>_01cc3d10)[(char)bVar4];
                      }
                      else {
                        pcVar19 = "<unknown>";
                      }
                      if (pbVar53 < *(byte **)pWVar49) {
                        bVar4 = *pbVar53;
                        uVar51 = (ushort)bVar4;
                        uVar21 = WasmOpcodes::IsPrefixOpcode(uVar51);
                        if ((uVar21 & 1) == 0) {
LAB_0132f7fc:
                          pcVar27 = (char *)WasmOpcodes::OpcodeName(uVar51);
                        }
                        else {
                          if (pbVar53 + 1 < *(byte **)pWVar49) {
                            uVar51 = CONCAT11(bVar4,pbVar53[1]);
                            goto LAB_0132f7fc;
                          }
                          pcVar27 = "<end>";
                        }
                        if (10 < uVar45) goto LAB_0132f824;
LAB_0132f578:
                        pcVar28 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                                            (-(uVar50 >> 7) & 0xfffffffffffff800 | uVar50 << 3));
                      }
                      else {
                        pcVar27 = "<end>";
                        if (uVar45 < 0xb) goto LAB_0132f578;
LAB_0132f824:
                        pcVar28 = "<unknown>";
                      }
                      Decoder::errorf((uchar *)this,(char *)pbVar53,
                                      "%s[%d] expected type %s, found %s of type %s",pcVar24,
                                      (ulong)uVar14,pcVar19,pcVar27,pcVar28);
                    }
                  }
                }
                *(byte **)(local_120 + (uVar23 - 0x10)) = pbVar53;
                local_120[uVar23 - 8] = SUB81(uVar50,0);
                uVar23 = uVar23 - 0x10;
              } while (0 < (long)uVar20);
            }
            goto LAB_01332b50;
          }
        }
LAB_0132eac8:
        uVar38 = WasmOpcodes::OpcodeName(bVar4);
        Decoder::errorf((uchar *)this,pcVar24,"%s: %s",uVar38,"tail call return types mismatch");
        break;
      case 0x13:
        if (((byte)this[0x50] >> 3 & 1) == 0) goto LAB_0132c6e4;
        **(uint **)(this + 0x58) = **(uint **)(this + 0x58) | 8;
        CallIndirectImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::CallIndirectImmediate
                  ((CallIndirectImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)&local_88,
                   *(undefined4 *)(this + 0x50),this,*(undefined8 *)(this + 0x10));
        lVar17 = *(long *)(this + 0x48);
        uVar34 = (ulong)((uint)local_78 + 1);
        if (lVar17 != 0) {
          if ((ulong)local_88 < (ulong)(*(long *)(lVar17 + 0xc0) - *(long *)(lVar17 + 0xb8) >> 4)) {
            if (*(char *)(*(long *)(lVar17 + 0xb8) + (ulong)local_88 * 0x10) != '\a')
            goto LAB_0132dcf0;
            uVar23 = (ulong)local_84;
            pcVar24 = *(char **)(this + 0x10);
            if ((ulong)(*(long *)(lVar17 + 0x60) - *(long *)(lVar17 + 0x58) >> 3) <= uVar23) {
              pbVar53 = (byte *)(pcVar24 + 1);
              pcVar24 = "invalid signature index: #%u";
              goto LAB_0132ec78;
            }
            local_80 = *(long **)(*(long *)(lVar17 + 0x58) + uVar23 * 8);
            if (local_80 != (long *)0x0) {
              lVar17 = **(long **)(this + 0x60);
              if (lVar17 == *local_80) {
                if (lVar17 != 0) {
                  pcVar27 = (char *)(*(long **)(this + 0x60))[2];
                  pcVar19 = (char *)local_80[2];
                  do {
                    if (*pcVar27 != *pcVar19) goto LAB_013302ec;
                    lVar17 = lVar17 + -1;
                    pcVar19 = pcVar19 + 1;
                    pcVar27 = pcVar27 + 1;
                  } while (lVar17 != 0);
                }
                lVar17 = *(long *)pWVar41;
                if ((ulong)*(uint *)(*(long *)pWVar47 + -0x54) <
                    (ulong)(lVar17 - *(long *)this_01 >> 4)) {
                  pbVar53 = *(byte **)(lVar17 + -0x10);
                  uVar23 = *(ulong *)(lVar17 + -8);
                  *(undefined8 **)pWVar41 = (undefined8 *)(lVar17 + -0x10);
                  if ((((uint)uVar23 & 0xff) != 1) && (uVar23 = uVar23 & 0xff, uVar23 != 10)) {
                    if (pcVar24 < *(char **)pWVar49) {
                      cVar5 = *pcVar24;
                      uVar20 = WasmOpcodes::IsPrefixOpcode(cVar5);
                      if ((uVar20 & 1) == 0) {
                        pcVar24 = (char *)WasmOpcodes::OpcodeName(cVar5);
                      }
                      else if (pcVar24 + 1 < *(char **)pWVar49) {
                        pcVar24 = (char *)WasmOpcodes::OpcodeName(CONCAT11(cVar5,pcVar24[1]));
                      }
                      else {
                        pcVar24 = "<end>";
                      }
                    }
                    else {
                      pcVar24 = "<end>";
                    }
                    if (pbVar53 < *(byte **)pWVar49) {
                      bVar4 = *pbVar53;
                      uVar51 = (ushort)bVar4;
                      uVar20 = WasmOpcodes::IsPrefixOpcode(uVar51);
                      if ((uVar20 & 1) == 0) {
LAB_013327cc:
                        pcVar19 = (char *)WasmOpcodes::OpcodeName(uVar51);
                      }
                      else {
                        if (pbVar53 + 1 < *(byte **)pWVar49) {
                          uVar51 = CONCAT11(bVar4,pbVar53[1]);
                          goto LAB_013327cc;
                        }
                        pcVar19 = "<end>";
                      }
                      if (10 < (uint)uVar23) goto LAB_01332814;
LAB_013327b4:
                      pcVar27 = *(char **)((long)&PTR_s_<stmt>_01cc3e10 +
                                          (-(uVar23 >> 7) & 0xfffffffffffff800 | uVar23 << 3));
                    }
                    else {
                      pcVar19 = "<end>";
                      if ((uint)uVar23 < 0xb) goto LAB_013327b4;
LAB_01332814:
                      pcVar27 = "<unknown>";
                    }
                    Decoder::errorf((uchar *)this,(char *)pbVar53,
                                    "%s[%d] expected type %s, found %s of type %s",pcVar24,0,"i32",
                                    pcVar19,pcVar27);
                  }
                }
                else if (*(char *)(*(long *)pWVar47 + -0x48) != '\x02') {
                  if (pcVar24 < *(char **)pWVar49) {
                    cVar5 = *pcVar24;
                    uVar23 = WasmOpcodes::IsPrefixOpcode(cVar5);
                    if ((uVar23 & 1) == 0) {
                      pcVar19 = (char *)WasmOpcodes::OpcodeName(cVar5);
                    }
                    else if (pcVar24 + 1 < *(char **)pWVar49) {
                      pcVar19 = (char *)WasmOpcodes::OpcodeName(CONCAT11(cVar5,pcVar24[1]));
                    }
                    else {
                      pcVar19 = "<end>";
                    }
                  }
                  else {
                    pcVar19 = "<end>";
                  }
                  Decoder::errorf((uchar *)this,pcVar24,"%s found empty stack",pcVar19);
                }
                plVar32 = local_80;
                local_120 = (ValueBase *)local_108;
                local_118 = (ValueBase *)local_108;
                local_110 = (ValueBase *)&local_88;
                if (local_80 != (long *)0x0) {
                  uVar23 = local_80[1];
                  uVar14 = (uint)uVar23;
                  uVar20 = (ulong)(int)uVar14;
                  if (8 < uVar14) {
                    base::SmallVector<v8::internal::wasm::ValueBase,8ul>::Grow
                              ((SmallVector<v8::internal::wasm::ValueBase,8ul> *)&local_120,uVar20);
                  }
                  local_118 = local_120 + uVar20 * 0x10;
                  if (0 < (int)uVar14) {
                    uVar23 = -(uVar23 >> 0x1f & 1) & 0xfffffff000000000 | (uVar23 & 0xffffffff) << 4
                    ;
                    do {
                      uVar14 = uVar14 - 1;
                      lVar17 = *(long *)pWVar41;
                      bVar4 = *(byte *)(plVar32[2] + *plVar32 + uVar20 + -1);
                      if ((ulong)*(uint *)(*(long *)pWVar47 + -0x54) <
                          (ulong)(lVar17 - *(long *)this_01 >> 4)) {
                        pbVar53 = *(byte **)(lVar17 + -0x10);
                        uVar50 = (ulong)*(byte *)(lVar17 + -8);
                        *(undefined8 **)pWVar41 = (undefined8 *)(lVar17 + -0x10);
                      }
                      else {
                        if (*(char *)(*(long *)pWVar47 + -0x48) != '\x02') {
                          pbVar53 = *(byte **)pWVar52;
                          if (pbVar53 < *(byte **)pWVar49) {
                            bVar7 = *pbVar53;
                            uVar51 = (ushort)bVar7;
                            uVar50 = WasmOpcodes::IsPrefixOpcode(uVar51);
                            if ((uVar50 & 1) != 0) {
                              if (*(byte **)pWVar49 <= pbVar53 + 1) goto LAB_0133298c;
                              uVar51 = CONCAT11(bVar7,pbVar53[1]);
                            }
                            pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
                          }
                          else {
LAB_0133298c:
                            pcVar24 = "<end>";
                          }
                          Decoder::errorf((uchar *)this,(char *)pbVar53,"%s found empty stack",
                                          pcVar24);
                        }
                        pbVar53 = *(byte **)pWVar52;
                        uVar50 = 10;
                      }
                      uVar45 = (uint)uVar50;
                      uVar20 = uVar20 - 1;
                      if (uVar45 != bVar4) {
                        if ((bVar4 != 7 || uVar45 != 8) && (bVar4 != 6 || 2 < uVar45 - 7)) {
                          if ((bVar4 != 10) && ((uVar50 != 10 && (bVar4 != 9 || uVar45 != 8)))) {
                            pbVar31 = *(byte **)pWVar52;
                            if (pbVar31 < *(byte **)pWVar49) {
                              bVar7 = *pbVar31;
                              uVar51 = (ushort)bVar7;
                              uVar21 = WasmOpcodes::IsPrefixOpcode();
                              if ((uVar21 & 1) != 0) {
                                if (*(byte **)pWVar49 <= pbVar31 + 1) goto LAB_01332a7c;
                                uVar51 = CONCAT11(bVar7,pbVar31[1]);
                              }
                              pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
                            }
                            else {
LAB_01332a7c:
                              pcVar24 = "<end>";
                            }
                            if (bVar4 < 10) {
                              pcVar19 = (&PTR_s_<stmt>_01cc3d10)[(char)bVar4];
                            }
                            else {
                              pcVar19 = "<unknown>";
                            }
                            if (pbVar53 < *(byte **)pWVar49) {
                              bVar4 = *pbVar53;
                              uVar51 = (ushort)bVar4;
                              uVar21 = WasmOpcodes::IsPrefixOpcode(uVar51);
                              if ((uVar21 & 1) == 0) {
LAB_01332b1c:
                                pcVar27 = (char *)WasmOpcodes::OpcodeName(uVar51);
                              }
                              else {
                                if (pbVar53 + 1 < *(byte **)pWVar49) {
                                  uVar51 = CONCAT11(bVar4,pbVar53[1]);
                                  goto LAB_01332b1c;
                                }
                                pcVar27 = "<end>";
                              }
                              if (10 < uVar45) goto LAB_01332b44;
LAB_013328a8:
                              pcVar28 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                                                  (-(uVar50 >> 7) & 0xfffffffffffff800 | uVar50 << 3
                                                  ));
                            }
                            else {
                              pcVar27 = "<end>";
                              if (uVar45 < 0xb) goto LAB_013328a8;
LAB_01332b44:
                              pcVar28 = "<unknown>";
                            }
                            Decoder::errorf((uchar *)this,(char *)pbVar53,
                                            "%s[%d] expected type %s, found %s of type %s",pcVar24,
                                            (ulong)uVar14,pcVar19,pcVar27,pcVar28);
                          }
                        }
                      }
                      *(byte **)(local_120 + (uVar23 - 0x10)) = pbVar53;
                      local_120[uVar23 - 8] = SUB81(uVar50,0);
                      uVar23 = uVar23 - 0x10;
                    } while (0 < (long)uVar20);
                  }
                }
                goto LAB_01332b50;
              }
            }
LAB_013302ec:
            uVar38 = WasmOpcodes::OpcodeName(bVar4);
            Decoder::errorf((uchar *)this,pcVar24,"%s: %s",uVar38,"tail call return types mismatch")
            ;
            break;
          }
        }
LAB_0132d4c8:
        pcVar24 = "function table has to exist to execute call_indirect";
LAB_0132d4d0:
        Decoder::error((Decoder *)this,pcVar24);
        break;
      default:
        if ((*(long *)(this + 0x48) != 0) && (*(char *)(*(long *)(this + 0x48) + 0x178) != '\0')) {
          lVar17 = WasmOpcodes::AsmjsSignature(uVar51);
          if (lVar17 != 0) {
            BuildSimpleOperator(this,uVar51,lVar17);
          }
          goto LAB_0132bc3c;
        }
        pcVar24 = "Invalid opcode";
        goto LAB_01332c1c;
      case 0x1a:
        if ((ulong)*(uint *)(*(long *)pWVar47 + -0x54) <
            (ulong)(*(long *)pWVar41 - *(long *)this_01 >> 4)) {
          *(long *)pWVar41 = *(long *)pWVar41 + -0x10;
        }
        else if (*(char *)(*(long *)pWVar47 + -0x48) != '\x02') {
          uVar34 = WasmOpcodes::IsPrefixOpcode(uVar51);
          if ((uVar34 & 1) == 0) {
LAB_0132cbe4:
            pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
          }
          else {
            if (pbVar53 + 1 < *(byte **)pWVar49) {
              uVar51 = CONCAT11(bVar4,pbVar53[1]);
              goto LAB_0132cbe4;
            }
            pcVar24 = "<end>";
          }
          Decoder::errorf((uchar *)this,(char *)pbVar53,"%s found empty stack",pcVar24);
        }
        goto LAB_0132bc3c;
      case 0x1b:
        lVar17 = *(long *)pWVar41;
        if ((ulong)*(uint *)(*(long *)pWVar47 + -0x54) < (ulong)(lVar17 - *(long *)this_01 >> 4)) {
          pbVar53 = *(byte **)(lVar17 + -0x10);
          uVar34 = *(ulong *)(lVar17 + -8);
          *(undefined8 **)pWVar41 = (undefined8 *)(lVar17 + -0x10);
          if ((((uint)uVar34 & 0xff) != 1) && (uVar34 = uVar34 & 0xff, uVar34 != 10)) {
            pbVar31 = *(byte **)pWVar52;
            if (pbVar31 < *(byte **)pWVar49) {
              bVar4 = *pbVar31;
              uVar51 = (ushort)bVar4;
              uVar23 = WasmOpcodes::IsPrefixOpcode(uVar51);
              if ((uVar23 & 1) != 0) {
                if (*(byte **)pWVar49 <= pbVar31 + 1) goto LAB_0132e6f0;
                uVar51 = CONCAT11(bVar4,pbVar31[1]);
              }
              pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
            }
            else {
LAB_0132e6f0:
              pcVar24 = "<end>";
            }
            if (pbVar53 < *(byte **)pWVar49) {
              bVar4 = *pbVar53;
              uVar51 = (ushort)bVar4;
              uVar23 = WasmOpcodes::IsPrefixOpcode(uVar51);
              if ((uVar23 & 1) == 0) {
LAB_0132f51c:
                pcVar19 = (char *)WasmOpcodes::OpcodeName(uVar51);
              }
              else {
                if (pbVar53 + 1 < *(byte **)pWVar49) {
                  uVar51 = CONCAT11(bVar4,pbVar53[1]);
                  goto LAB_0132f51c;
                }
                pcVar19 = "<end>";
              }
              if (10 < (uint)uVar34) goto LAB_0132f9b4;
LAB_0132f3bc:
              pcVar27 = *(char **)((long)&PTR_s_<stmt>_01cc3e10 +
                                  (-(uVar34 >> 7) & 0xfffffffffffff800 | uVar34 << 3));
            }
            else {
              pcVar19 = "<end>";
              if ((uint)uVar34 < 0xb) goto LAB_0132f3bc;
LAB_0132f9b4:
              pcVar27 = "<unknown>";
            }
            Decoder::errorf((uchar *)this,(char *)pbVar53,
                            "%s[%d] expected type %s, found %s of type %s",pcVar24,2,"i32",pcVar19,
                            pcVar27);
          }
        }
        else {
          if (*(char *)(*(long *)pWVar47 + -0x48) == '\x02') goto LAB_0132f9e8;
          uVar34 = WasmOpcodes::IsPrefixOpcode(uVar51);
          if ((uVar34 & 1) == 0) {
LAB_0132cc78:
            pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
          }
          else {
            if (pbVar53 + 1 < *(byte **)pWVar49) {
              uVar51 = CONCAT11(bVar4,pbVar53[1]);
              goto LAB_0132cc78;
            }
            pcVar24 = "<end>";
          }
          Decoder::errorf((uchar *)this,(char *)pbVar53,"%s found empty stack",pcVar24);
        }
LAB_0132f9e8:
        lVar33 = *(long *)pWVar47;
        lVar30 = *(long *)pWVar41;
        lVar17 = *(long *)this_01;
        if ((ulong)*(uint *)(lVar33 + -0x54) < (ulong)(lVar30 - lVar17 >> 4)) {
          uVar34 = *(ulong *)(lVar30 + -8);
          lVar30 = lVar30 + -0x10;
          *(long *)pWVar41 = lVar30;
        }
        else {
          if (*(char *)(lVar33 + -0x48) != '\x02') {
            pbVar53 = *(byte **)pWVar52;
            if (pbVar53 < *(byte **)pWVar49) {
              bVar4 = *pbVar53;
              uVar51 = (ushort)bVar4;
              uVar34 = WasmOpcodes::IsPrefixOpcode(uVar51);
              if ((uVar34 & 1) != 0) {
                if (*(byte **)pWVar49 <= pbVar53 + 1) {
                  pcVar24 = "<end>";
                  goto LAB_013300b8;
                }
                uVar51 = CONCAT11(bVar4,pbVar53[1]);
              }
              pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
            }
            else {
              pcVar24 = "<end>";
            }
LAB_013300b8:
            Decoder::errorf((uchar *)this,(char *)pbVar53,"%s found empty stack",pcVar24);
            lVar33 = *(long *)(this + 200);
            lVar17 = *(long *)(this + 0xa0);
            lVar30 = *(long *)(this + 0xa8);
          }
          uVar34 = 10;
        }
        uVar14 = (uint)uVar34;
        if ((ulong)*(uint *)(lVar33 + -0x54) < (ulong)(lVar30 - lVar17 >> 4)) {
          pbVar53 = *(byte **)(lVar30 + -0x10);
          bVar4 = *(byte *)(lVar30 + -8);
          uVar23 = (ulong)bVar4;
          *(undefined8 **)pWVar41 = (undefined8 *)(lVar30 + -0x10);
          if ((uint)bVar4 != (uVar14 & 0xff)) {
LAB_01330190:
            uVar45 = (uint)uVar23;
            if (((uVar14 & 0xff) != 7 || uVar45 != 8) && ((uVar14 & 0xff) != 6 || 2 < uVar45 - 7)) {
              if (((uVar14 & 0xff) != 10) &&
                 ((uVar23 != 10 && ((uVar14 & 0xff) != 9 || uVar45 != 8)))) {
                pbVar31 = *(byte **)pWVar52;
                if (pbVar31 < *(byte **)pWVar49) {
                  bVar4 = *pbVar31;
                  uVar51 = (ushort)bVar4;
                  uVar20 = WasmOpcodes::IsPrefixOpcode(uVar51);
                  if ((uVar20 & 1) != 0) {
                    if (*(byte **)pWVar49 <= pbVar31 + 1) goto LAB_01330238;
                    uVar51 = CONCAT11(bVar4,pbVar31[1]);
                  }
                  pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
                }
                else {
LAB_01330238:
                  pcVar24 = "<end>";
                }
                if ((uVar14 & 0xff) < 10) {
                  pcVar19 = *(char **)((long)&PTR_s_<stmt>_01cc3d10 +
                                      (-(uVar34 >> 7 & 1) & 0xfffffffffffff800 |
                                      (uVar34 & 0xff) << 3));
                }
                else {
                  pcVar19 = "<unknown>";
                }
                if (pbVar53 < *(byte **)pWVar49) {
                  bVar4 = *pbVar53;
                  uVar51 = (ushort)bVar4;
                  uVar34 = WasmOpcodes::IsPrefixOpcode(uVar51);
                  if ((uVar34 & 1) == 0) {
LAB_013302e0:
                    pcVar27 = (char *)WasmOpcodes::OpcodeName(uVar51);
                  }
                  else {
                    if (pbVar53 + 1 < *(byte **)pWVar49) {
                      uVar51 = CONCAT11(bVar4,pbVar53[1]);
                      goto LAB_013302e0;
                    }
                    pcVar27 = "<end>";
                  }
                  if (10 < uVar45) goto LAB_01330acc;
LAB_013302c8:
                  pcVar28 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                                      (-(uVar23 >> 7) & 0xfffffffffffff800 | uVar23 << 3));
                }
                else {
                  pcVar27 = "<end>";
                  if (uVar45 < 0xb) goto LAB_013302c8;
LAB_01330acc:
                  pcVar28 = "<unknown>";
                }
                Decoder::errorf((uchar *)this,(char *)pbVar53,
                                "%s[%d] expected type %s, found %s of type %s",pcVar24,0,pcVar19,
                                pcVar27,pcVar28);
              }
            }
          }
        }
        else {
          if (*(char *)(lVar33 + -0x48) != '\x02') {
            pbVar53 = *(byte **)pWVar52;
            if (pbVar53 < *(byte **)pWVar49) {
              bVar4 = *pbVar53;
              uVar51 = (ushort)bVar4;
              uVar23 = WasmOpcodes::IsPrefixOpcode(uVar51);
              if ((uVar23 & 1) != 0) {
                if (*(byte **)pWVar49 <= pbVar53 + 1) goto LAB_01330150;
                uVar51 = CONCAT11(bVar4,pbVar53[1]);
              }
              pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
            }
            else {
LAB_01330150:
              pcVar24 = "<end>";
            }
            Decoder::errorf((uchar *)this,(char *)pbVar53,"%s found empty stack",pcVar24);
          }
          pbVar53 = *(byte **)pWVar52;
          uVar23 = 10;
          if ((uVar14 & 0xff) != 10) goto LAB_01330190;
        }
        if ((uint)uVar23 != 10) {
          uVar14 = (uint)uVar23;
        }
        if ((uVar14 - 6 & 0xff) < 4) {
          Decoder::error((Decoder *)this,"select without type is only valid for value type inputs");
        }
        else {
          local_120 = (ValueBase *)CONCAT71(local_120._1_7_,(char)uVar14);
          puVar22 = *(undefined8 **)(this + 0xa8);
          if (puVar22 < *(undefined8 **)(this + 0xb0)) {
            uVar38 = *(undefined8 *)pWVar52;
            *(char *)(puVar22 + 1) = (char)uVar14;
            *puVar22 = uVar38;
            *(long *)pWVar41 = *(long *)pWVar41 + 0x10;
          }
          else {
            std::__ndk1::
            vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
            ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                      (this_01,(uchar **)pWVar52,(ValueType *)&local_120);
          }
        }
        goto LAB_0132bc3c;
      case 0x1c:
        if (((byte)this[0x50] >> 5 & 1) == 0) {
LAB_0132c800:
          pcVar24 = "Invalid opcode (enable with --experimental-wasm-anyref)";
          goto LAB_0132c808;
        }
        **(uint **)(this + 0x58) = **(uint **)(this + 0x58) | 0x20;
        SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::SelectTypeImmediate
                  ((SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)&local_120,
                   (Decoder *)this,*(uchar **)(this + 0x10));
        if (((byte)this[0x30] & 1) == 0) {
          if ((byte)this[0x30] >> 1 == 0) {
LAB_0132daac:
            lVar17 = *(long *)pWVar41;
            if ((ulong)*(uint *)(*(long *)pWVar47 + -0x54) < (ulong)(lVar17 - *(long *)this_01 >> 4)
               ) {
              pbVar53 = *(byte **)(lVar17 + -0x10);
              uVar34 = *(ulong *)(lVar17 + -8);
              *(undefined8 **)pWVar41 = (undefined8 *)(lVar17 + -0x10);
              if ((((uint)uVar34 & 0xff) != 1) && (uVar34 = uVar34 & 0xff, uVar34 != 10)) {
                pbVar31 = *(byte **)pWVar52;
                if (pbVar31 < *(byte **)pWVar49) {
                  bVar4 = *pbVar31;
                  uVar51 = (ushort)bVar4;
                  uVar23 = WasmOpcodes::IsPrefixOpcode(uVar51);
                  if ((uVar23 & 1) != 0) {
                    if (*(byte **)pWVar49 <= pbVar31 + 1) goto LAB_01330328;
                    uVar51 = CONCAT11(bVar4,pbVar31[1]);
                  }
                  pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
                }
                else {
LAB_01330328:
                  pcVar24 = "<end>";
                }
                if (pbVar53 < *(byte **)pWVar49) {
                  bVar4 = *pbVar53;
                  uVar51 = (ushort)bVar4;
                  uVar23 = WasmOpcodes::IsPrefixOpcode(uVar51);
                  if ((uVar23 & 1) == 0) {
LAB_01330d90:
                    pcVar19 = (char *)WasmOpcodes::OpcodeName(uVar51);
                  }
                  else {
                    if (pbVar53 + 1 < *(byte **)pWVar49) {
                      uVar51 = CONCAT11(bVar4,pbVar53[1]);
                      goto LAB_01330d90;
                    }
                    pcVar19 = "<end>";
                  }
                  if (10 < (uint)uVar34) goto LAB_01331214;
LAB_01330d68:
                  pcVar27 = *(char **)((long)&PTR_s_<stmt>_01cc3e10 +
                                      (-(uVar34 >> 7) & 0xfffffffffffff800 | uVar34 << 3));
                }
                else {
                  pcVar19 = "<end>";
                  if ((uint)uVar34 < 0xb) goto LAB_01330d68;
LAB_01331214:
                  pcVar27 = "<unknown>";
                }
                Decoder::errorf((uchar *)this,(char *)pbVar53,
                                "%s[%d] expected type %s, found %s of type %s",pcVar24,2,"i32",
                                pcVar19,pcVar27);
              }
            }
            else if (*(char *)(*(long *)pWVar47 + -0x48) != '\x02') {
              pbVar53 = *(byte **)pWVar52;
              if (pbVar53 < *(byte **)pWVar49) {
                bVar4 = *pbVar53;
                uVar51 = (ushort)bVar4;
                uVar34 = WasmOpcodes::IsPrefixOpcode(uVar51);
                if ((uVar34 & 1) != 0) {
                  if (*(byte **)pWVar49 <= pbVar53 + 1) {
                    pcVar24 = "<end>";
                    goto LAB_013311e8;
                  }
                  uVar51 = CONCAT11(bVar4,pbVar53[1]);
                }
                pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
              }
              else {
                pcVar24 = "<end>";
              }
LAB_013311e8:
              Decoder::errorf((uchar *)this,(char *)pbVar53,"%s found empty stack",pcVar24);
            }
            lVar17 = *(long *)pWVar41;
            bVar4 = local_120._4_1_;
            lVar30 = (long)(char)local_120._4_1_;
            if ((ulong)*(uint *)(*(long *)pWVar47 + -0x54) < (ulong)(lVar17 - *(long *)this_01 >> 4)
               ) {
              pbVar53 = *(byte **)(lVar17 + -0x10);
              bVar7 = *(byte *)(lVar17 + -8);
              uVar34 = (ulong)bVar7;
              *(undefined8 **)pWVar41 = (undefined8 *)(lVar17 + -0x10);
              if (bVar7 != local_120._4_1_) {
LAB_0133131c:
                uVar14 = (uint)uVar34;
                if ((bVar4 != 7 || uVar14 != 8) && (bVar4 != 6 || 2 < uVar14 - 7)) {
                  if ((bVar4 != 10) && ((uVar34 != 10 && (bVar4 != 9 || uVar14 != 8)))) {
                    pbVar31 = *(byte **)pWVar52;
                    if (pbVar31 < *(byte **)pWVar49) {
                      bVar7 = *pbVar31;
                      uVar51 = (ushort)bVar7;
                      uVar23 = WasmOpcodes::IsPrefixOpcode(uVar51);
                      if ((uVar23 & 1) != 0) {
                        if (*(byte **)pWVar49 <= pbVar31 + 1) goto LAB_013313bc;
                        uVar51 = CONCAT11(bVar7,pbVar31[1]);
                      }
                      pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
                    }
                    else {
LAB_013313bc:
                      pcVar24 = "<end>";
                    }
                    if (bVar4 < 10) {
                      pcVar19 = (&PTR_s_<stmt>_01cc3d10)[lVar30];
                    }
                    else {
                      pcVar19 = "<unknown>";
                    }
                    if (pbVar53 < *(byte **)pWVar49) {
                      bVar4 = *pbVar53;
                      uVar51 = (ushort)bVar4;
                      uVar23 = WasmOpcodes::IsPrefixOpcode(uVar51);
                      if ((uVar23 & 1) == 0) {
LAB_01331460:
                        pcVar27 = (char *)WasmOpcodes::OpcodeName(uVar51);
                      }
                      else {
                        if (pbVar53 + 1 < *(byte **)pWVar49) {
                          uVar51 = CONCAT11(bVar4,pbVar53[1]);
                          goto LAB_01331460;
                        }
                        pcVar27 = "<end>";
                      }
                      if (10 < uVar14) goto LAB_013319ec;
LAB_01331448:
                      pcVar28 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                                          (-(uVar34 >> 7) & 0xfffffffffffff800 | uVar34 << 3));
                    }
                    else {
                      pcVar27 = "<end>";
                      if (uVar14 < 0xb) goto LAB_01331448;
LAB_013319ec:
                      pcVar28 = "<unknown>";
                    }
                    Decoder::errorf((uchar *)this,(char *)pbVar53,
                                    "%s[%d] expected type %s, found %s of type %s",pcVar24,1,pcVar19
                                    ,pcVar27,pcVar28);
                  }
                }
              }
            }
            else {
              if (*(char *)(*(long *)pWVar47 + -0x48) != '\x02') {
                pbVar53 = *(byte **)pWVar52;
                if (pbVar53 < *(byte **)pWVar49) {
                  bVar7 = *pbVar53;
                  uVar51 = (ushort)bVar7;
                  uVar34 = WasmOpcodes::IsPrefixOpcode(uVar51);
                  if ((uVar34 & 1) != 0) {
                    if (*(byte **)pWVar49 <= pbVar53 + 1) {
                      pcVar24 = "<end>";
                      goto LAB_013312f4;
                    }
                    uVar51 = CONCAT11(bVar7,pbVar53[1]);
                  }
                  pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
                }
                else {
                  pcVar24 = "<end>";
                }
LAB_013312f4:
                Decoder::errorf((uchar *)this,(char *)pbVar53,"%s found empty stack",pcVar24);
              }
              pbVar53 = *(byte **)pWVar52;
              uVar34 = 10;
              if (bVar4 != 10) goto LAB_0133131c;
            }
            lVar17 = *(long *)pWVar41;
            bVar4 = local_120._4_1_;
            lVar30 = (long)(char)local_120._4_1_;
            if ((ulong)*(uint *)(*(long *)pWVar47 + -0x54) < (ulong)(lVar17 - *(long *)this_01 >> 4)
               ) {
              pbVar53 = *(byte **)(lVar17 + -0x10);
              bVar7 = *(byte *)(lVar17 + -8);
              uVar34 = (ulong)bVar7;
              *(undefined8 **)pWVar41 = (undefined8 *)(lVar17 + -0x10);
              if (bVar7 != local_120._4_1_) {
LAB_01331af4:
                uVar14 = (uint)uVar34;
                if ((bVar4 != 7 || uVar14 != 8) && (bVar4 != 6 || 2 < uVar14 - 7)) {
                  if ((bVar4 != 10) && ((uVar34 != 10 && (bVar4 != 9 || uVar14 != 8)))) {
                    pbVar31 = *(byte **)pWVar52;
                    if (pbVar31 < *(byte **)pWVar49) {
                      bVar7 = *pbVar31;
                      uVar51 = (ushort)bVar7;
                      uVar23 = WasmOpcodes::IsPrefixOpcode(uVar51);
                      if ((uVar23 & 1) != 0) {
                        if (*(byte **)pWVar49 <= pbVar31 + 1) goto LAB_01331b94;
                        uVar51 = CONCAT11(bVar7,pbVar31[1]);
                      }
                      pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
                    }
                    else {
LAB_01331b94:
                      pcVar24 = "<end>";
                    }
                    if (bVar4 < 10) {
                      pcVar19 = (&PTR_s_<stmt>_01cc3d10)[lVar30];
                    }
                    else {
                      pcVar19 = "<unknown>";
                    }
                    if (pbVar53 < *(byte **)pWVar49) {
                      bVar4 = *pbVar53;
                      uVar51 = (ushort)bVar4;
                      uVar23 = WasmOpcodes::IsPrefixOpcode(uVar51);
                      if ((uVar23 & 1) == 0) {
LAB_01331c38:
                        pcVar27 = (char *)WasmOpcodes::OpcodeName(uVar51);
                      }
                      else {
                        if (pbVar53 + 1 < *(byte **)pWVar49) {
                          uVar51 = CONCAT11(bVar4,pbVar53[1]);
                          goto LAB_01331c38;
                        }
                        pcVar27 = "<end>";
                      }
                      if (10 < uVar14) goto LAB_01331c58;
LAB_01331c20:
                      pcVar28 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                                          (-(uVar34 >> 7) & 0xfffffffffffff800 | uVar34 << 3));
                    }
                    else {
                      pcVar27 = "<end>";
                      if (uVar14 < 0xb) goto LAB_01331c20;
LAB_01331c58:
                      pcVar28 = "<unknown>";
                    }
                    Decoder::errorf((uchar *)this,(char *)pbVar53,
                                    "%s[%d] expected type %s, found %s of type %s",pcVar24,0,pcVar19
                                    ,pcVar27,pcVar28);
                  }
                }
              }
            }
            else {
              if (*(char *)(*(long *)pWVar47 + -0x48) != '\x02') {
                pbVar53 = *(byte **)pWVar52;
                if (pbVar53 < *(byte **)pWVar49) {
                  bVar7 = *pbVar53;
                  uVar51 = (ushort)bVar7;
                  uVar34 = WasmOpcodes::IsPrefixOpcode(uVar51);
                  if ((uVar34 & 1) != 0) {
                    if (*(byte **)pWVar49 <= pbVar53 + 1) {
                      pcVar24 = "<end>";
                      goto LAB_01331acc;
                    }
                    uVar51 = CONCAT11(bVar7,pbVar53[1]);
                  }
                  pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
                }
                else {
                  pcVar24 = "<end>";
                }
LAB_01331acc:
                Decoder::errorf((uchar *)this,(char *)pbVar53,"%s found empty stack",pcVar24);
              }
              pbVar53 = *(byte **)pWVar52;
              uVar34 = 10;
              if (bVar4 != 10) goto LAB_01331af4;
            }
            local_88 = CONCAT31(local_88._1_3_,local_120._4_1_);
            puVar22 = *(undefined8 **)(this + 0xa8);
            if (puVar22 < *(undefined8 **)(this + 0xb0)) {
              uVar38 = *(undefined8 *)pWVar52;
              *(byte *)(puVar22 + 1) = local_120._4_1_;
              *puVar22 = uVar38;
              *(long *)pWVar41 = *(long *)pWVar41 + 0x10;
            }
            else {
              std::__ndk1::
              vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
              ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                        (this_01,(uchar **)pWVar52,(ValueType *)&local_88);
            }
            uVar34 = (ulong)((uint)local_120 + 1);
            break;
          }
        }
        else if (*(long *)(this + 0x38) == 0) goto LAB_0132daac;
        goto LAB_0132bc3c;
      case 0x20:
        local_120._0_5_ = (uint5)(uint)local_120;
        pbVar31 = pbVar53 + 1;
        if (pbVar31 < *(byte **)pWVar49) {
          uVar14 = *pbVar31 & 0x7f;
          if ((char)*pbVar31 < '\0') {
            uVar14 = Decoder::
                     read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                               ((Decoder *)this,pbVar53 + 2,(uint *)&local_118,"local index",uVar14)
            ;
          }
          else {
            local_118 = (ValueBase *)CONCAT44(local_118._4_4_,1);
          }
        }
        else {
          local_118 = (ValueBase *)((ulong)local_118._4_4_ << 0x20);
          Decoder::errorf((uchar *)this,(char *)pbVar31,"expected %s","local index");
          uVar14 = 0;
        }
        uVar38 = local_120;
        local_120 = (ValueBase *)CONCAT44(local_120._4_4_,uVar14);
        plVar32 = *(long **)(this + 0x68);
        lVar17 = *(long *)(this + 0x10);
        if (plVar32 != (long *)0x0) {
          uVar34 = plVar32[1] - *plVar32;
          if (uVar14 < (uint)uVar34) {
            if (uVar34 <= uVar14) goto LAB_01332c6c;
            uVar40 = *(undefined1 *)(*plVar32 + (ulong)uVar14);
            local_120._5_3_ = SUB83(uVar38,5);
            local_120._0_5_ = CONCAT14(uVar40,uVar14);
            local_88 = CONCAT31(local_88._1_3_,uVar40);
            plVar32 = *(long **)(this + 0xa8);
            if (*(long **)(this + 0xb0) <= plVar32) goto LAB_0132e42c;
            *(undefined1 *)(plVar32 + 1) = uVar40;
            *plVar32 = lVar17;
            goto LAB_0132e40c;
          }
        }
        pcVar24 = (char *)(lVar17 + 1);
        pcVar19 = "invalid local index: %u";
        goto LAB_0132f260;
      case 0x21:
        local_120._0_5_ = (uint5)(uint)local_120;
        pbVar31 = pbVar53 + 1;
        if (pbVar31 < *(byte **)pWVar49) {
          uVar14 = *pbVar31 & 0x7f;
          uVar34 = (ulong)uVar14;
          if ((char)*pbVar31 < '\0') {
            uVar14 = Decoder::
                     read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                               ((Decoder *)this,pbVar53 + 2,(uint *)&local_118,"local index",uVar14)
            ;
            uVar34 = (ulong)uVar14;
          }
          else {
            local_118 = (ValueBase *)CONCAT44(local_118._4_4_,1);
          }
        }
        else {
          local_118 = (ValueBase *)((ulong)local_118._4_4_ << 0x20);
          Decoder::errorf((uchar *)this,(char *)pbVar31,"expected %s","local index");
          uVar34 = 0;
        }
        uVar38 = local_120;
        uVar14 = (uint)uVar34;
        local_120 = (ValueBase *)CONCAT44(local_120._4_4_,uVar14);
        plVar32 = *(long **)(this + 0x68);
        pbVar53 = *(byte **)(this + 0x10);
        if (plVar32 != (long *)0x0) {
          uVar23 = plVar32[1] - *plVar32;
          if (uVar14 < (uint)uVar23) {
            if (uVar23 <= uVar34) goto LAB_01332c6c;
            local_120._5_3_ = SUB83(uVar38,5);
            local_120._0_5_ = CONCAT14(*(undefined1 *)(*plVar32 + uVar34),uVar14);
            lVar17 = *(long *)(this + 0xa8);
            bVar4 = *(byte *)(*(long *)(this + 0x80) + uVar34);
            if ((ulong)*(uint *)(*(long *)(this + 200) + -0x54) <
                (ulong)(lVar17 - *(long *)(this + 0xa0) >> 4)) {
              pbVar31 = *(byte **)(lVar17 + -0x10);
              bVar7 = *(byte *)(lVar17 + -8);
              uVar34 = (ulong)bVar7;
              *(undefined8 **)pWVar41 = (undefined8 *)(lVar17 + -0x10);
              if (bVar7 != bVar4) {
LAB_013308e4:
                uVar14 = (uint)uVar34;
                if ((bVar4 != 7 || uVar14 != 8) && (bVar4 != 6 || 2 < uVar14 - 7)) {
                  if ((bVar4 != 10) && ((uVar34 != 10 && (bVar4 != 9 || uVar14 != 8)))) {
                    if (pbVar53 < *(byte **)pWVar49) {
                      bVar7 = *pbVar53;
                      uVar51 = (ushort)bVar7;
                      uVar23 = WasmOpcodes::IsPrefixOpcode(uVar51);
                      if ((uVar23 & 1) != 0) {
                        if (*(byte **)pWVar49 <= pbVar53 + 1) goto LAB_01330978;
                        uVar51 = CONCAT11(bVar7,pbVar53[1]);
                      }
                      pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
                    }
                    else {
LAB_01330978:
                      pcVar24 = "<end>";
                    }
                    if (bVar4 < 10) {
                      pcVar19 = (&PTR_s_<stmt>_01cc3d10)[(char)bVar4];
                    }
                    else {
                      pcVar19 = "<unknown>";
                    }
                    if (pbVar31 < *(byte **)pWVar49) {
                      bVar4 = *pbVar31;
                      uVar51 = (ushort)bVar4;
                      uVar23 = WasmOpcodes::IsPrefixOpcode(uVar51);
                      if ((uVar23 & 1) != 0) {
                        if (*(byte **)pWVar49 <= pbVar31 + 1) goto LAB_01330edc;
                        uVar51 = CONCAT11(bVar4,pbVar31[1]);
                      }
                      pcVar27 = (char *)WasmOpcodes::OpcodeName(uVar51);
                      if (10 < uVar14) goto LAB_01330fac;
LAB_01330eec:
                      pcVar28 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                                          (-(uVar34 >> 7) & 0xfffffffffffff800 | uVar34 << 3));
                    }
                    else {
LAB_01330edc:
                      pcVar27 = "<end>";
                      if (uVar14 < 0xb) goto LAB_01330eec;
LAB_01330fac:
                      pcVar28 = "<unknown>";
                    }
                    Decoder::errorf((uchar *)this,(char *)pbVar31,
                                    "%s[%d] expected type %s, found %s of type %s",pcVar24,0,pcVar19
                                    ,pcVar27,pcVar28);
                  }
                }
              }
            }
            else {
              pbVar31 = pbVar53;
              if (*(char *)(*(long *)(this + 200) + -0x48) != '\x02') {
                if (pbVar53 < *(byte **)pWVar49) {
                  bVar7 = *pbVar53;
                  uVar51 = (ushort)bVar7;
                  uVar34 = WasmOpcodes::IsPrefixOpcode(uVar51);
                  if ((uVar34 & 1) != 0) {
                    if (*(byte **)pWVar49 <= pbVar53 + 1) goto LAB_0132f56c;
                    uVar51 = CONCAT11(bVar7,pbVar53[1]);
                  }
                  pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
                }
                else {
LAB_0132f56c:
                  pcVar24 = "<end>";
                }
                Decoder::errorf((uchar *)this,(char *)pbVar53,"%s found empty stack",pcVar24);
                pbVar31 = *(byte **)(this + 0x10);
              }
              uVar34 = 10;
              pbVar53 = pbVar31;
              if (bVar4 != 10) goto LAB_013308e4;
            }
            uVar34 = (ulong)((uint)local_118 + 1);
            break;
          }
        }
        goto LAB_0132e6c4;
      case 0x22:
        local_120._0_5_ = (uint5)(uint)local_120;
        pbVar31 = pbVar53 + 1;
        if (pbVar31 < *(byte **)pWVar49) {
          uVar14 = *pbVar31 & 0x7f;
          uVar34 = (ulong)uVar14;
          if ((char)*pbVar31 < '\0') {
            uVar14 = Decoder::
                     read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                               ((Decoder *)this,pbVar53 + 2,(uint *)&local_118,"local index",uVar14)
            ;
            uVar34 = (ulong)uVar14;
          }
          else {
            local_118 = (ValueBase *)CONCAT44(local_118._4_4_,1);
          }
        }
        else {
          local_118 = (ValueBase *)((ulong)local_118._4_4_ << 0x20);
          Decoder::errorf((uchar *)this,(char *)pbVar31,"expected %s","local index");
          uVar34 = 0;
        }
        uVar38 = local_120;
        uVar14 = (uint)uVar34;
        local_120 = (ValueBase *)CONCAT44(local_120._4_4_,uVar14);
        plVar32 = *(long **)(this + 0x68);
        pbVar53 = *(byte **)(this + 0x10);
        if (plVar32 != (long *)0x0) {
          uVar23 = plVar32[1] - *plVar32;
          if (uVar14 < (uint)uVar23) {
            if (uVar23 <= uVar34) goto LAB_01332c6c;
            local_120._5_3_ = SUB83(uVar38,5);
            local_120._0_5_ = CONCAT14(*(undefined1 *)(*plVar32 + uVar34),uVar14);
            lVar17 = *(long *)(this + 0xa8);
            bVar4 = *(byte *)(*(long *)(this + 0x80) + uVar34);
            if ((ulong)*(uint *)(*(long *)(this + 200) + -0x54) <
                (ulong)(lVar17 - *(long *)(this + 0xa0) >> 4)) {
              pbVar31 = *(byte **)(lVar17 + -0x10);
              bVar7 = *(byte *)(lVar17 + -8);
              uVar34 = (ulong)bVar7;
              *(undefined8 **)pWVar41 = (undefined8 *)(lVar17 + -0x10);
              if (bVar7 != bVar4) {
LAB_01330810:
                uVar14 = (uint)uVar34;
                if ((bVar4 != 7 || uVar14 != 8) && (bVar4 != 6 || 2 < uVar14 - 7)) {
                  if ((bVar4 != 10) && ((uVar34 != 10 && (bVar4 != 9 || uVar14 != 8)))) {
                    if (pbVar53 < *(byte **)pWVar49) {
                      bVar7 = *pbVar53;
                      uVar51 = (ushort)bVar7;
                      uVar23 = WasmOpcodes::IsPrefixOpcode(uVar51);
                      if ((uVar23 & 1) != 0) {
                        if (*(byte **)pWVar49 <= pbVar53 + 1) goto LAB_013308a4;
                        uVar51 = CONCAT11(bVar7,pbVar53[1]);
                      }
                      pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
                    }
                    else {
LAB_013308a4:
                      pcVar24 = "<end>";
                    }
                    if (bVar4 < 10) {
                      pcVar19 = (&PTR_s_<stmt>_01cc3d10)[(char)bVar4];
                    }
                    else {
                      pcVar19 = "<unknown>";
                    }
                    if (pbVar31 < *(byte **)pWVar49) {
                      bVar4 = *pbVar31;
                      uVar51 = (ushort)bVar4;
                      uVar23 = WasmOpcodes::IsPrefixOpcode(uVar51);
                      if ((uVar23 & 1) != 0) {
                        if (*(byte **)pWVar49 <= pbVar31 + 1) goto LAB_01330e48;
                        uVar51 = CONCAT11(bVar4,pbVar31[1]);
                      }
                      pcVar27 = (char *)WasmOpcodes::OpcodeName(uVar51);
                      if (10 < uVar14) goto LAB_01330f20;
LAB_01330e58:
                      pcVar28 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                                          (-(uVar34 >> 7) & 0xfffffffffffff800 | uVar34 << 3));
                    }
                    else {
LAB_01330e48:
                      pcVar27 = "<end>";
                      if (uVar14 < 0xb) goto LAB_01330e58;
LAB_01330f20:
                      pcVar28 = "<unknown>";
                    }
                    Decoder::errorf((uchar *)this,(char *)pbVar31,
                                    "%s[%d] expected type %s, found %s of type %s",pcVar24,0,pcVar19
                                    ,pcVar27,pcVar28);
                  }
                }
              }
            }
            else {
              pbVar31 = pbVar53;
              if (*(char *)(*(long *)(this + 200) + -0x48) != '\x02') {
                if (pbVar53 < *(byte **)pWVar49) {
                  bVar7 = *pbVar53;
                  uVar51 = (ushort)bVar7;
                  uVar34 = WasmOpcodes::IsPrefixOpcode(uVar51);
                  if ((uVar34 & 1) != 0) {
                    if (*(byte **)pWVar49 <= pbVar53 + 1) goto LAB_0132f560;
                    uVar51 = CONCAT11(bVar7,pbVar53[1]);
                  }
                  pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
                }
                else {
LAB_0132f560:
                  pcVar24 = "<end>";
                }
                Decoder::errorf((uchar *)this,(char *)pbVar53,"%s found empty stack",pcVar24);
                pbVar31 = *(byte **)(this + 0x10);
              }
              uVar34 = 10;
              pbVar53 = pbVar31;
              if (bVar4 != 10) goto LAB_01330810;
            }
            local_88 = CONCAT31(local_88._1_3_,(char)uVar34);
            puVar22 = *(undefined8 **)(this + 0xa8);
            if (puVar22 < *(undefined8 **)(this + 0xb0)) {
              uVar38 = *(undefined8 *)pWVar52;
              *(char *)(puVar22 + 1) = (char)uVar34;
              *puVar22 = uVar38;
              *(long *)pWVar41 = *(long *)pWVar41 + 0x10;
            }
            else {
              std::__ndk1::
              vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
              ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                        (this_01,(uchar **)pWVar52,(ValueType *)&local_88);
            }
            goto LAB_0132e43c;
          }
        }
LAB_0132e6c4:
        Decoder::errorf((uchar *)this,(char *)(pbVar53 + 1),"invalid local index: %u",uVar34);
        goto LAB_0132bc3c;
      case 0x23:
        local_120._0_5_ = (uint5)(uint)local_120;
        local_118 = (ValueBase *)0x0;
        pbVar31 = pbVar53 + 1;
        if (pbVar31 < *(byte **)pWVar49) {
          uVar14 = *pbVar31 & 0x7f;
          uVar23 = (ulong)uVar14;
          if ((char)*pbVar31 < '\0') {
            uVar14 = Decoder::
                     read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                               ((Decoder *)this,pbVar53 + 2,(uint *)&local_110,"global index",uVar14
                               );
            uVar23 = (ulong)uVar14;
          }
          else {
            local_110 = (ValueBase *)CONCAT44(local_110._4_4_,1);
          }
        }
        else {
          local_110 = (ValueBase *)((ulong)local_110._4_4_ << 0x20);
          Decoder::errorf((uchar *)this,(char *)pbVar31,"expected %s","global index");
          uVar23 = 0;
        }
        uVar38 = local_120;
        local_120 = (ValueBase *)CONCAT44(local_120._4_4_,(int)uVar23);
        lVar30 = *(long *)(this + 0x48);
        lVar17 = *(long *)(this + 0x10);
        uVar34 = (ulong)((uint)local_110 + 1);
        if ((lVar30 == 0) ||
           (lVar33 = *(long *)(lVar30 + 0x18),
           (ulong)(*(long *)(lVar30 + 0x20) - lVar33 >> 5) <= uVar23)) {
          pbVar53 = (byte *)(lVar17 + 1);
          pcVar24 = "invalid global index: %u";
          goto LAB_0132edd0;
        }
        local_118 = (ValueBase *)(lVar33 + uVar23 * 0x20);
        uVar40 = *(undefined1 *)(lVar33 + uVar23 * 0x20);
        local_120._5_3_ = SUB83(uVar38,5);
        local_120._0_5_ = CONCAT14(uVar40,(int)uVar23);
        local_88 = CONCAT31(local_88._1_3_,uVar40);
        plVar32 = *(long **)(this + 0xa8);
        if (plVar32 < *(long **)(this + 0xb0)) {
          *(undefined1 *)(plVar32 + 1) = uVar40;
          *plVar32 = lVar17;
          goto LAB_0132ca30;
        }
LAB_013316ac:
        std::__ndk1::
        vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
        ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                  (this_01,(uchar **)pWVar52,(ValueType *)&local_88);
        break;
      case 0x24:
        local_120._0_5_ = (uint5)(uint)local_120;
        local_118 = (ValueBase *)0x0;
        pbVar31 = pbVar53 + 1;
        if (pbVar31 < *(byte **)pWVar49) {
          uVar14 = *pbVar31 & 0x7f;
          uVar23 = (ulong)uVar14;
          if ((char)*pbVar31 < '\0') {
            uVar14 = Decoder::
                     read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                               ((Decoder *)this,pbVar53 + 2,(uint *)&local_110,"global index",uVar14
                               );
            uVar23 = (ulong)uVar14;
          }
          else {
            local_110 = (ValueBase *)CONCAT44(local_110._4_4_,1);
          }
        }
        else {
          local_110 = (ValueBase *)((ulong)local_110._4_4_ << 0x20);
          Decoder::errorf((uchar *)this,(char *)pbVar31,"expected %s","global index");
          uVar23 = 0;
        }
        uVar38 = local_120;
        local_120 = (ValueBase *)CONCAT44(local_120._4_4_,(int)uVar23);
        lVar17 = *(long *)(this + 0x48);
        pbVar53 = *(byte **)(this + 0x10);
        uVar34 = (ulong)((uint)local_110 + 1);
        if ((lVar17 == 0) ||
           ((ulong)(*(long *)(lVar17 + 0x20) - *(long *)(lVar17 + 0x18) >> 5) <= uVar23)) {
          pbVar53 = pbVar53 + 1;
          pcVar24 = "invalid global index: %u";
        }
        else {
          local_118 = (ValueBase *)(*(long *)(lVar17 + 0x18) + uVar23 * 0x20);
          VVar10 = *local_118;
          local_120._5_3_ = SUB83(uVar38,5);
          local_120._0_5_ = CONCAT14(VVar10,(int)uVar23);
          if (local_118[1] != (ValueBase)0x0) {
            lVar17 = *(long *)pWVar41;
            if ((ulong)*(uint *)(*(long *)pWVar47 + -0x54) < (ulong)(lVar17 - *(long *)this_01 >> 4)
               ) {
              pbVar31 = *(byte **)(lVar17 + -0x10);
              VVar6 = *(ValueBase *)(lVar17 + -8);
              uVar23 = (ulong)(byte)VVar6;
              *(undefined8 **)pWVar41 = (undefined8 *)(lVar17 + -0x10);
              if (VVar6 == VVar10) break;
            }
            else {
              pbVar31 = pbVar53;
              if (*(char *)(*(long *)pWVar47 + -0x48) != '\x02') {
                if (pbVar53 < *(byte **)pWVar49) {
                  bVar4 = *pbVar53;
                  uVar51 = (ushort)bVar4;
                  uVar23 = WasmOpcodes::IsPrefixOpcode(uVar51);
                  if ((uVar23 & 1) != 0) {
                    if (*(byte **)pWVar49 <= pbVar53 + 1) goto LAB_0133031c;
                    uVar51 = CONCAT11(bVar4,pbVar53[1]);
                  }
                  pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
                }
                else {
LAB_0133031c:
                  pcVar24 = "<end>";
                }
                Decoder::errorf((uchar *)this,(char *)pbVar53,"%s found empty stack",pcVar24);
                pbVar31 = *(byte **)(this + 0x10);
              }
              uVar23 = 10;
              pbVar53 = pbVar31;
              if (VVar10 == (ValueBase)0xa) break;
            }
            uVar14 = (uint)uVar23;
            if ((VVar10 != (ValueBase)0x7 || uVar14 != 8) &&
               (VVar10 != (ValueBase)0x6 || 2 < uVar14 - 7)) {
              if ((VVar10 != (ValueBase)0xa) &&
                 ((uVar23 != 10 && (VVar10 != (ValueBase)0x9 || uVar14 != 8)))) {
                if (pbVar53 < *(byte **)pWVar49) {
                  bVar4 = *pbVar53;
                  uVar51 = (ushort)bVar4;
                  uVar20 = WasmOpcodes::IsPrefixOpcode(uVar51);
                  if ((uVar20 & 1) != 0) {
                    if (*(byte **)pWVar49 <= pbVar53 + 1) goto LAB_01330cf8;
                    uVar51 = CONCAT11(bVar4,pbVar53[1]);
                  }
                  pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
                }
                else {
LAB_01330cf8:
                  pcVar24 = "<end>";
                }
                if ((byte)VVar10 < 10) {
                  pcVar19 = (&PTR_s_<stmt>_01cc3d10)[(char)VVar10];
                }
                else {
                  pcVar19 = "<unknown>";
                }
                if (pbVar31 < *(byte **)pWVar49) {
                  bVar4 = *pbVar31;
                  uVar51 = (ushort)bVar4;
                  uVar20 = WasmOpcodes::IsPrefixOpcode(uVar51);
                  if ((uVar20 & 1) != 0) {
                    if (*(byte **)pWVar49 <= pbVar31 + 1) goto LAB_01331174;
                    uVar51 = CONCAT11(bVar4,pbVar31[1]);
                  }
                  pcVar27 = (char *)WasmOpcodes::OpcodeName(uVar51);
                  if (10 < uVar14) goto LAB_013311ac;
LAB_01331184:
                  pcVar28 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                                      (-(uVar23 >> 7) & 0xfffffffffffff800 | uVar23 << 3));
                }
                else {
LAB_01331174:
                  pcVar27 = "<end>";
                  if (uVar14 < 0xb) goto LAB_01331184;
LAB_013311ac:
                  pcVar28 = "<unknown>";
                }
                Decoder::errorf((uchar *)this,(char *)pbVar31,
                                "%s[%d] expected type %s, found %s of type %s",pcVar24,0,pcVar19,
                                pcVar27,pcVar28);
              }
            }
            break;
          }
          pcVar24 = "immutable global #%u cannot be assigned";
        }
        Decoder::errorf((uchar *)this,(char *)pbVar53,pcVar24,uVar23);
        break;
      case 0x25:
        if (((byte)this[0x50] >> 5 & 1) == 0) goto LAB_0132c800;
        **(uint **)(this + 0x58) = **(uint **)(this + 0x58) | 0x20;
        local_120 = (ValueBase *)0x100000000;
        pbVar53 = (byte *)(*(long *)(this + 0x10) + 1);
        if (pbVar53 < *(byte **)(this + 0x18)) {
          uVar14 = *pbVar53 & 0x7f;
          uVar23 = (ulong)uVar14;
          if ((char)*pbVar53 < '\0') {
            uVar14 = Decoder::
                     read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                               ((Decoder *)this,(uchar *)(*(long *)(this + 0x10) + 2),puVar35,
                                "table index",uVar14);
            uVar23 = (ulong)uVar14;
          }
          else {
            local_120 = (ValueBase *)0x100000000;
          }
        }
        else {
          local_120 = (ValueBase *)0x0;
          Decoder::errorf((uchar *)this,(char *)pbVar53,"expected %s","table index");
          uVar23 = 0;
        }
        local_120 = (ValueBase *)CONCAT44(local_120._4_4_,(int)uVar23);
        lVar17 = *(long *)(this + 0x48);
        pbVar53 = *(byte **)(this + 0x10);
        uVar34 = (ulong)(local_120._4_4_ + 1);
        if ((lVar17 == 0) ||
           ((ulong)(*(long *)(lVar17 + 0xc0) - *(long *)(lVar17 + 0xb8) >> 4) <= uVar23)) {
          pcVar24 = "invalid table index: %u";
          goto LAB_0132edd0;
        }
        lVar17 = *(long *)pWVar41;
        if ((ulong)*(uint *)(*(long *)pWVar47 + -0x54) < (ulong)(lVar17 - *(long *)this_01 >> 4)) {
          pbVar31 = *(byte **)(lVar17 + -0x10);
          uVar23 = *(ulong *)(lVar17 + -8);
          *(undefined8 **)pWVar41 = (undefined8 *)(lVar17 + -0x10);
          if ((((uint)uVar23 & 0xff) != 1) && (uVar23 = uVar23 & 0xff, uVar23 != 10)) {
            if (pbVar53 < *(byte **)pWVar49) {
              bVar4 = *pbVar53;
              uVar51 = (ushort)bVar4;
              uVar20 = WasmOpcodes::IsPrefixOpcode(uVar51);
              if ((uVar20 & 1) != 0) {
                if (*(byte **)pWVar49 <= pbVar53 + 1) {
                  pcVar24 = "<end>";
                  goto LAB_01331488;
                }
                uVar51 = CONCAT11(bVar4,pbVar53[1]);
              }
              pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
            }
            else {
              pcVar24 = "<end>";
            }
LAB_01331488:
            if (pbVar31 < *(byte **)pWVar49) {
              bVar4 = *pbVar31;
              uVar51 = (ushort)bVar4;
              uVar20 = WasmOpcodes::IsPrefixOpcode(uVar51);
              if ((uVar20 & 1) == 0) {
LAB_013314ec:
                pcVar19 = (char *)WasmOpcodes::OpcodeName(uVar51);
              }
              else {
                if (pbVar31 + 1 < *(byte **)pWVar49) {
                  uVar51 = CONCAT11(bVar4,pbVar31[1]);
                  goto LAB_013314ec;
                }
                pcVar19 = "<end>";
              }
              if (10 < (uint)uVar23) goto LAB_0133163c;
LAB_013314d4:
              pcVar27 = *(char **)((long)&PTR_s_<stmt>_01cc3e10 +
                                  (-(uVar23 >> 7) & 0xfffffffffffff800 | uVar23 << 3));
            }
            else {
              pcVar19 = "<end>";
              if ((uint)uVar23 < 0xb) goto LAB_013314d4;
LAB_0133163c:
              pcVar27 = "<unknown>";
            }
            Decoder::errorf((uchar *)this,(char *)pbVar31,
                            "%s[%d] expected type %s, found %s of type %s",pcVar24,0,"i32",pcVar19,
                            pcVar27);
          }
        }
        else if (*(char *)(*(long *)pWVar47 + -0x48) != '\x02') {
          if (pbVar53 < *(byte **)pWVar49) {
            bVar4 = *pbVar53;
            uVar51 = (ushort)bVar4;
            uVar23 = WasmOpcodes::IsPrefixOpcode(uVar51);
            if ((uVar23 & 1) != 0) {
              if (*(byte **)pWVar49 <= pbVar53 + 1) {
                pcVar24 = "<end>";
                goto LAB_01331504;
              }
              uVar51 = CONCAT11(bVar4,pbVar53[1]);
            }
            pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
          }
          else {
            pcVar24 = "<end>";
          }
LAB_01331504:
          Decoder::errorf((uchar *)this,(char *)pbVar53,"%s found empty stack",pcVar24);
        }
        uVar40 = *(undefined1 *)
                  (*(long *)(*(long *)(this + 0x48) + 0xb8) + ((ulong)local_120 & 0xffffffff) * 0x10
                  );
        local_88 = CONCAT31(local_88._1_3_,uVar40);
        puVar22 = *(undefined8 **)(this + 0xa8);
        if (*(undefined8 **)(this + 0xb0) <= puVar22) goto LAB_013316ac;
        uVar38 = *(undefined8 *)pWVar52;
        *(undefined1 *)(puVar22 + 1) = uVar40;
LAB_01331698:
        *puVar22 = uVar38;
        *(long *)pWVar41 = *(long *)pWVar41 + 0x10;
        break;
      case 0x26:
        if (((byte)this[0x50] >> 5 & 1) == 0) goto LAB_0132c800;
        **(uint **)(this + 0x58) = **(uint **)(this + 0x58) | 0x20;
        local_120 = (ValueBase *)0x100000000;
        pbVar53 = (byte *)(*(long *)(this + 0x10) + 1);
        if (pbVar53 < *(byte **)(this + 0x18)) {
          uVar14 = *pbVar53 & 0x7f;
          uVar23 = (ulong)uVar14;
          if ((char)*pbVar53 < '\0') {
            uVar14 = Decoder::
                     read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                               ((Decoder *)this,(uchar *)(*(long *)(this + 0x10) + 2),puVar35,
                                "table index",uVar14);
            uVar23 = (ulong)uVar14;
          }
          else {
            local_120 = (ValueBase *)0x100000000;
          }
        }
        else {
          local_120 = (ValueBase *)0x0;
          Decoder::errorf((uchar *)this,(char *)pbVar53,"expected %s","table index");
          uVar23 = 0;
        }
        local_120 = (ValueBase *)CONCAT44(local_120._4_4_,(int)uVar23);
        lVar17 = *(long *)(this + 0x48);
        pbVar53 = *(byte **)(this + 0x10);
        uVar34 = (ulong)(local_120._4_4_ + 1);
        if ((lVar17 == 0) ||
           ((ulong)(*(long *)(lVar17 + 0xc0) - *(long *)(lVar17 + 0xb8) >> 4) <= uVar23)) {
          pcVar24 = "invalid table index: %u";
LAB_0132ec78:
          Decoder::errorf((uchar *)this,(char *)pbVar53,pcVar24,uVar23);
          break;
        }
        lVar30 = *(long *)pWVar41;
        bVar4 = *(byte *)(*(long *)(lVar17 + 0xb8) + uVar23 * 0x10);
        if ((ulong)*(uint *)(*(long *)pWVar47 + -0x54) < (ulong)(lVar30 - *(long *)this_01 >> 4)) {
          pbVar31 = *(byte **)(lVar30 + -0x10);
          bVar7 = *(byte *)(lVar30 + -8);
          uVar23 = (ulong)bVar7;
          *(undefined8 **)pWVar41 = (undefined8 *)(lVar30 + -0x10);
          if (bVar7 != bVar4) {
LAB_01331554:
            uVar14 = (uint)uVar23;
            if ((bVar4 != 7 || uVar14 != 8) && (bVar4 != 6 || 2 < uVar14 - 7)) {
              if ((bVar4 != 10) && ((uVar23 != 10 && (bVar4 != 9 || uVar14 != 8)))) {
                if (pbVar53 < *(byte **)pWVar49) {
                  bVar7 = *pbVar53;
                  uVar51 = (ushort)bVar7;
                  uVar20 = WasmOpcodes::IsPrefixOpcode(uVar51);
                  if ((uVar20 & 1) != 0) {
                    if (*(byte **)pWVar49 <= pbVar53 + 1) goto LAB_013315e8;
                    uVar51 = CONCAT11(bVar7,pbVar53[1]);
                  }
                  pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
                }
                else {
LAB_013315e8:
                  pcVar24 = "<end>";
                }
                if (bVar4 < 10) {
                  pcVar19 = (&PTR_s_<stmt>_01cc3d10)[(char)bVar4];
                }
                else {
                  pcVar19 = "<unknown>";
                }
                if (pbVar31 < *(byte **)pWVar49) {
                  bVar4 = *pbVar31;
                  uVar51 = (ushort)bVar4;
                  uVar20 = WasmOpcodes::IsPrefixOpcode(uVar51);
                  if ((uVar20 & 1) != 0) {
                    if (*(byte **)pWVar49 <= pbVar31 + 1) goto LAB_01331730;
                    uVar51 = CONCAT11(bVar4,pbVar31[1]);
                  }
                  pcVar27 = (char *)WasmOpcodes::OpcodeName(uVar51);
                  if (10 < uVar14) goto LAB_01331768;
LAB_01331740:
                  pcVar28 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                                      (-(uVar23 >> 7) & 0xfffffffffffff800 | uVar23 << 3));
                }
                else {
LAB_01331730:
                  pcVar27 = "<end>";
                  if (uVar14 < 0xb) goto LAB_01331740;
LAB_01331768:
                  pcVar28 = "<unknown>";
                }
                Decoder::errorf((uchar *)this,(char *)pbVar31,
                                "%s[%d] expected type %s, found %s of type %s",pcVar24,1,pcVar19,
                                pcVar27,pcVar28);
              }
            }
          }
        }
        else {
          pbVar31 = pbVar53;
          if (*(char *)(*(long *)pWVar47 + -0x48) != '\x02') {
            if (pbVar53 < *(byte **)pWVar49) {
              bVar7 = *pbVar53;
              uVar51 = (ushort)bVar7;
              uVar23 = WasmOpcodes::IsPrefixOpcode(uVar51);
              if ((uVar23 & 1) != 0) {
                if (*(byte **)pWVar49 <= pbVar53 + 1) {
                  pcVar24 = "<end>";
                  goto LAB_01331528;
                }
                uVar51 = CONCAT11(bVar7,pbVar53[1]);
              }
              pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
            }
            else {
              pcVar24 = "<end>";
            }
LAB_01331528:
            Decoder::errorf((uchar *)this,(char *)pbVar53,"%s found empty stack",pcVar24);
            pbVar31 = *(byte **)(this + 0x10);
          }
          uVar23 = 10;
          pbVar53 = pbVar31;
          if (bVar4 != 10) goto LAB_01331554;
        }
        lVar17 = *(long *)pWVar41;
        if ((ulong)*(uint *)(*(long *)pWVar47 + -0x54) < (ulong)(lVar17 - *(long *)this_01 >> 4)) {
          pbVar53 = *(byte **)(lVar17 + -0x10);
          uVar23 = *(ulong *)(lVar17 + -8);
          *(undefined8 **)pWVar41 = (undefined8 *)(lVar17 + -0x10);
          if ((((uint)uVar23 & 0xff) != 1) && (uVar23 = uVar23 & 0xff, uVar23 != 10)) {
            pbVar31 = *(byte **)pWVar52;
            if (pbVar31 < *(byte **)pWVar49) {
              bVar4 = *pbVar31;
              uVar51 = (ushort)bVar4;
              uVar20 = WasmOpcodes::IsPrefixOpcode(uVar51);
              if ((uVar20 & 1) != 0) {
                if (*(byte **)pWVar49 <= pbVar31 + 1) goto LAB_0133187c;
                uVar51 = CONCAT11(bVar4,pbVar31[1]);
              }
              pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
            }
            else {
LAB_0133187c:
              pcVar24 = "<end>";
            }
            if (pbVar53 < *(byte **)pWVar49) {
              bVar4 = *pbVar53;
              uVar51 = (ushort)bVar4;
              uVar20 = WasmOpcodes::IsPrefixOpcode(uVar51);
              if ((uVar20 & 1) == 0) {
LAB_01331918:
                pcVar19 = (char *)WasmOpcodes::OpcodeName(uVar51);
              }
              else {
                if (pbVar53 + 1 < *(byte **)pWVar49) {
                  uVar51 = CONCAT11(bVar4,pbVar53[1]);
                  goto LAB_01331918;
                }
                pcVar19 = "<end>";
              }
              if (10 < (uint)uVar23) goto LAB_0133195c;
LAB_013318f0:
              pcVar27 = *(char **)((long)&PTR_s_<stmt>_01cc3e10 +
                                  (-(uVar23 >> 7) & 0xfffffffffffff800 | uVar23 << 3));
            }
            else {
              pcVar19 = "<end>";
              if ((uint)uVar23 < 0xb) goto LAB_013318f0;
LAB_0133195c:
              pcVar27 = "<unknown>";
            }
            Decoder::errorf((uchar *)this,(char *)pbVar53,
                            "%s[%d] expected type %s, found %s of type %s",pcVar24,0,"i32",pcVar19,
                            pcVar27);
          }
        }
        else if (*(char *)(*(long *)pWVar47 + -0x48) != '\x02') {
          pbVar53 = *(byte **)pWVar52;
          if (pbVar53 < *(byte **)pWVar49) {
            bVar4 = *pbVar53;
            uVar51 = (ushort)bVar4;
            uVar23 = WasmOpcodes::IsPrefixOpcode(uVar51);
            if ((uVar23 & 1) != 0) {
              if (*(byte **)pWVar49 <= pbVar53 + 1) {
                pcVar24 = "<end>";
                goto LAB_01331930;
              }
              uVar51 = CONCAT11(bVar4,pbVar53[1]);
            }
            pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
          }
          else {
            pcVar24 = "<end>";
          }
LAB_01331930:
          Decoder::errorf((uchar *)this,(char *)pbVar53,"%s found empty stack",pcVar24);
        }
        break;
      case 0x28:
        uVar38 = 0;
        goto LAB_0132c85c;
      case 0x29:
        uVar38 = 5;
        goto LAB_0132c85c;
      case 0x2a:
        uVar38 = 0xc;
        goto LAB_0132c85c;
      case 0x2b:
        uVar38 = 0xd;
        goto LAB_0132c85c;
      case 0x2c:
        uVar38 = 1;
        goto LAB_0132c85c;
      case 0x2d:
        uVar38 = 2;
        goto LAB_0132c85c;
      case 0x2e:
        uVar38 = 3;
        goto LAB_0132c85c;
      case 0x2f:
        uVar38 = 4;
        goto LAB_0132c85c;
      case 0x30:
        uVar38 = 6;
        goto LAB_0132c85c;
      case 0x31:
        uVar38 = 7;
        goto LAB_0132c85c;
      case 0x32:
        uVar38 = 8;
        goto LAB_0132c85c;
      case 0x33:
        uVar38 = 9;
        goto LAB_0132c85c;
      case 0x34:
        uVar38 = 10;
        goto LAB_0132c85c;
      case 0x35:
        uVar38 = 0xb;
LAB_0132c85c:
        iVar13 = DecodeLoadMem(this,uVar38,0);
        uVar34 = (ulong)(iVar13 + 1);
        break;
      case 0x36:
        uVar38 = 0;
        goto LAB_0132ca58;
      case 0x37:
        uVar38 = 3;
        goto LAB_0132ca58;
      case 0x38:
        uVar38 = 7;
        goto LAB_0132ca58;
      case 0x39:
        uVar38 = 8;
        goto LAB_0132ca58;
      case 0x3a:
        uVar38 = 1;
        goto LAB_0132ca58;
      case 0x3b:
        uVar38 = 2;
        goto LAB_0132ca58;
      case 0x3c:
        uVar38 = 4;
        goto LAB_0132ca58;
      case 0x3d:
        uVar38 = 5;
        goto LAB_0132ca58;
      case 0x3e:
        uVar38 = 6;
LAB_0132ca58:
        iVar13 = DecodeStoreMem(this,uVar38,0);
        uVar34 = (ulong)(iVar13 + 1);
        break;
      case 0x3f:
        if (*(char *)(*(long *)(this + 0x48) + 0x12) == '\0') {
LAB_0132cad4:
          pbVar53 = pbVar53 + -1;
          pcVar24 = "memory instruction with no memory";
          goto LAB_0132d65c;
        }
        puVar2 = (uchar *)(*(long *)pWVar52 + 1);
        if ((*(uchar **)pWVar49 < puVar2) || ((int)*(uchar **)pWVar49 == (int)puVar2)) {
          Decoder::error((Decoder *)this,puVar2,"memory index");
        }
        else if (*puVar2 != '\0') {
          Decoder::errorf((uchar *)this,(char *)puVar2,"expected memory index 0, found %u");
        }
        local_120 = (ValueBase *)CONCAT71(local_120._1_7_,1);
        puVar22 = *(undefined8 **)(this + 0xa8);
        if (puVar22 < *(undefined8 **)(this + 0xb0)) {
          uVar38 = *(undefined8 *)pWVar52;
          *(undefined1 *)(puVar22 + 1) = 1;
          uVar34 = 2;
          goto LAB_0132ca28;
        }
        goto LAB_013310e0;
      case 0x40:
        if (*(char *)(*(long *)(this + 0x48) + 0x12) == '\0') goto LAB_0132cad4;
        puVar2 = (uchar *)(*(long *)pWVar52 + 1);
        if ((*(uchar **)pWVar49 < puVar2) || ((int)*(uchar **)pWVar49 == (int)puVar2)) {
          Decoder::error((Decoder *)this,puVar2,"memory index");
        }
        else if (*puVar2 != '\0') {
          Decoder::errorf((uchar *)this,(char *)puVar2,"expected memory index 0, found %u");
        }
        if (*(char *)(*(long *)(this + 0x48) + 0x178) != '\0') {
          pcVar24 = "grow_memory is not supported for asmjs modules";
          goto LAB_0132d68c;
        }
        lVar17 = *(long *)pWVar41;
        if ((ulong)*(uint *)(*(long *)pWVar47 + -0x54) < (ulong)(lVar17 - *(long *)this_01 >> 4)) {
          pbVar53 = *(byte **)(lVar17 + -0x10);
          uVar34 = *(ulong *)(lVar17 + -8);
          *(undefined8 **)pWVar41 = (undefined8 *)(lVar17 + -0x10);
          if ((((uint)uVar34 & 0xff) != 1) && (uVar34 = uVar34 & 0xff, uVar34 != 10)) {
            pbVar31 = *(byte **)pWVar52;
            if (pbVar31 < *(byte **)pWVar49) {
              bVar4 = *pbVar31;
              uVar51 = (ushort)bVar4;
              uVar23 = WasmOpcodes::IsPrefixOpcode(uVar51);
              if ((uVar23 & 1) != 0) {
                if (*(byte **)pWVar49 <= pbVar31 + 1) goto LAB_0132f93c;
                uVar51 = CONCAT11(bVar4,pbVar31[1]);
              }
              pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
            }
            else {
LAB_0132f93c:
              pcVar24 = "<end>";
            }
            if (pbVar53 < *(byte **)pWVar49) {
              bVar4 = *pbVar53;
              uVar51 = (ushort)bVar4;
              uVar23 = WasmOpcodes::IsPrefixOpcode(uVar51);
              if ((uVar23 & 1) == 0) {
LAB_01330c24:
                pcVar19 = (char *)WasmOpcodes::OpcodeName(uVar51);
              }
              else {
                if (pbVar53 + 1 < *(byte **)pWVar49) {
                  uVar51 = CONCAT11(bVar4,pbVar53[1]);
                  goto LAB_01330c24;
                }
                pcVar19 = "<end>";
              }
              if (10 < (uint)uVar34) goto LAB_0133108c;
LAB_01330bfc:
              pcVar27 = *(char **)((long)&PTR_s_<stmt>_01cc3e10 +
                                  (-(uVar34 >> 7) & 0xfffffffffffff800 | uVar34 << 3));
            }
            else {
              pcVar19 = "<end>";
              if ((uint)uVar34 < 0xb) goto LAB_01330bfc;
LAB_0133108c:
              pcVar27 = "<unknown>";
            }
            Decoder::errorf((uchar *)this,(char *)pbVar53,
                            "%s[%d] expected type %s, found %s of type %s",pcVar24,0,"i32",pcVar19,
                            pcVar27);
          }
        }
        else if (*(char *)(*(long *)pWVar47 + -0x48) != '\x02') {
          pbVar53 = *(byte **)pWVar52;
          if (pbVar53 < *(byte **)pWVar49) {
            bVar4 = *pbVar53;
            uVar51 = (ushort)bVar4;
            uVar34 = WasmOpcodes::IsPrefixOpcode(uVar51);
            if ((uVar34 & 1) != 0) {
              if (*(byte **)pWVar49 <= pbVar53 + 1) {
                pcVar24 = "<end>";
                goto LAB_01331060;
              }
              uVar51 = CONCAT11(bVar4,pbVar53[1]);
            }
            pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
          }
          else {
            pcVar24 = "<end>";
          }
LAB_01331060:
          Decoder::errorf((uchar *)this,(char *)pbVar53,"%s found empty stack",pcVar24);
        }
        local_120 = (ValueBase *)CONCAT71(local_120._1_7_,1);
        puVar22 = *(undefined8 **)(this + 0xa8);
        if (puVar22 < *(undefined8 **)(this + 0xb0)) {
          uVar38 = *(undefined8 *)pWVar52;
          *(undefined1 *)(puVar22 + 1) = 1;
          uVar34 = 2;
          goto LAB_01331698;
        }
LAB_013310e0:
        std::__ndk1::
        vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
        ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                  (this_01,(uchar **)pWVar52,(ValueType *)&local_120);
        uVar34 = 2;
        break;
      case 0x41:
        iVar13 = Decoder::read_i32v<(v8::internal::wasm::Decoder::ValidateFlag)1>
                           ((Decoder *)this,pbVar53 + 1,puVar35,"immi32");
        local_120 = (ValueBase *)CONCAT44(local_120._4_4_,iVar13);
        local_88 = CONCAT31(local_88._1_3_,1);
        puVar22 = *(undefined8 **)(this + 0xa8);
        if (puVar22 < *(undefined8 **)(this + 0xb0)) {
          uVar38 = *(undefined8 *)pWVar52;
          *(undefined1 *)(puVar22 + 1) = 1;
          *puVar22 = uVar38;
LAB_0132c8a8:
          *(long *)pWVar41 = *(long *)pWVar41 + 0x10;
        }
        else {
LAB_0132f244:
          std::__ndk1::
          vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
          ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                    (this_01,(uchar **)pWVar52,(ValueType *)&local_88);
        }
LAB_01330084:
        uVar34 = (ulong)(local_120._4_4_ + 1);
        break;
      case 0x42:
        local_120 = (ValueBase *)
                    Decoder::read_i64v<(v8::internal::wasm::Decoder::ValidateFlag)1>
                              ((Decoder *)this,pbVar53 + 1,(uint *)&local_118,"immi64");
        local_88 = CONCAT31(local_88._1_3_,2);
        puVar22 = *(undefined8 **)(this + 0xa8);
        if (puVar22 < *(undefined8 **)(this + 0xb0)) {
          uVar38 = *(undefined8 *)pWVar52;
          *(undefined1 *)(puVar22 + 1) = 2;
          *puVar22 = uVar38;
LAB_0132e40c:
          *(long *)pWVar41 = *(long *)pWVar41 + 0x10;
        }
        else {
LAB_0132e42c:
          std::__ndk1::
          vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
          ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                    (this_01,(uchar **)pWVar52,(ValueType *)&local_88);
        }
LAB_0132e43c:
        uVar34 = (ulong)((uint)local_118 + 1);
        break;
      case 0x43:
        pbVar53 = pbVar53 + 1;
        if ((*(byte **)pWVar49 < pbVar53) || ((uint)((int)*(byte **)pWVar49 - (int)pbVar53) < 4)) {
          Decoder::error((Decoder *)this,pbVar53,"immf32");
        }
        local_120 = (ValueBase *)CONCAT71(local_120._1_7_,3);
        puVar22 = *(undefined8 **)(this + 0xa8);
        if (puVar22 < *(undefined8 **)(this + 0xb0)) {
          uVar38 = *(undefined8 *)pWVar52;
          *(undefined1 *)(puVar22 + 1) = 3;
          uVar34 = 5;
LAB_0132ca28:
          *puVar22 = uVar38;
LAB_0132ca30:
          *(long *)pWVar41 = *(long *)pWVar41 + 0x10;
        }
        else {
          std::__ndk1::
          vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
          ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                    (this_01,(uchar **)pWVar52,(ValueType *)&local_120);
          uVar34 = 5;
        }
        break;
      case 0x44:
        pbVar53 = pbVar53 + 1;
        if ((*(byte **)pWVar49 < pbVar53) || ((uint)((int)*(byte **)pWVar49 - (int)pbVar53) < 8)) {
          Decoder::error((Decoder *)this,pbVar53,"immf64");
        }
        local_120 = (ValueBase *)CONCAT71(local_120._1_7_,4);
        puVar22 = *(undefined8 **)(this + 0xa8);
        if (puVar22 < *(undefined8 **)(this + 0xb0)) {
          uVar38 = *(undefined8 *)pWVar52;
          *(undefined1 *)(puVar22 + 1) = 4;
          uVar34 = 9;
          goto LAB_0132ca28;
        }
        std::__ndk1::
        vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
        ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                  (this_01,(uchar **)pWVar52,(ValueType *)&local_120);
        uVar34 = 9;
        break;
      case 0x45:
        uVar38 = 1;
        goto LAB_0132ca70;
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
        uVar38 = 1;
        uVar25 = 1;
        goto LAB_0132bd20;
      case 0x50:
        uVar38 = 2;
LAB_0132ca70:
        uVar34 = 1;
        BuildSimpleOperator(this,bVar4,1,uVar38);
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
        uVar38 = 2;
        uVar25 = 2;
        goto LAB_0132bd20;
      case 0x5b:
      case 0x5c:
      case 0x5d:
      case 0x5e:
      case 0x5f:
      case 0x60:
        uVar38 = 3;
        uVar25 = 3;
        goto LAB_0132bd20;
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x65:
        uVar38 = 4;
        uVar25 = 4;
LAB_0132bd20:
        uVar34 = 1;
        BuildSimpleOperator(this,bVar4,1,uVar38,uVar25);
        break;
      case 0x66:
        uVar38 = 1;
        goto LAB_0132bcc4;
      case 0x67:
      case 0x68:
      case 0x69:
        uVar38 = 1;
        uVar25 = 1;
        goto LAB_0132bc30;
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
        uVar38 = 1;
        uVar25 = 1;
        uVar26 = 1;
        goto LAB_0132bcdc;
      case 0x79:
      case 0x7a:
      case 0x7b:
        uVar38 = 2;
        uVar25 = 2;
        goto LAB_0132bc30;
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
        uVar38 = 2;
        uVar25 = 2;
        uVar26 = 2;
        goto LAB_0132bcdc;
      case 0x8b:
      case 0x8c:
      case 0x8d:
      case 0x8e:
      case 0x8f:
      case 0x90:
      case 0x91:
        uVar38 = 3;
        goto LAB_0132bc2c;
      case 0x92:
      case 0x93:
      case 0x94:
      case 0x95:
      case 0x96:
      case 0x97:
      case 0x98:
        uVar38 = 3;
        uVar25 = 3;
        uVar26 = 3;
        goto LAB_0132bcdc;
      case 0x99:
      case 0x9a:
      case 0x9b:
      case 0x9c:
      case 0x9d:
      case 0x9e:
      case 0x9f:
        uVar38 = 4;
        goto LAB_0132ca88;
      case 0xa0:
      case 0xa1:
      case 0xa2:
      case 0xa3:
      case 0xa4:
      case 0xa5:
      case 0xa6:
        uVar38 = 4;
LAB_0132bcc4:
        uVar25 = 4;
        uVar26 = 4;
LAB_0132bcdc:
        BuildSimpleOperator(this,bVar4,uVar38,uVar25,uVar26);
        goto LAB_0132bc3c;
      case 0xa7:
        uVar38 = 1;
        uVar25 = 2;
        goto LAB_0132bc30;
      case 0xa8:
      case 0xa9:
      case 0xbc:
        uVar38 = 1;
        goto LAB_0132bc2c;
      case 0xaa:
      case 0xab:
        uVar38 = 1;
        goto LAB_0132ca88;
      case 0xac:
      case 0xad:
        uVar38 = 2;
        uVar25 = 1;
        goto LAB_0132bc30;
      case 0xae:
      case 0xaf:
        uVar38 = 2;
        goto LAB_0132bc2c;
      case 0xb0:
      case 0xb1:
      case 0xbd:
        uVar38 = 2;
        goto LAB_0132ca88;
      case 0xb2:
      case 0xb3:
      case 0xbe:
        uVar38 = 3;
        uVar25 = 1;
        goto LAB_0132bc30;
      case 0xb4:
      case 0xb5:
        uVar38 = 3;
        uVar25 = 2;
        goto LAB_0132bc30;
      case 0xb6:
        uVar38 = 3;
LAB_0132ca88:
        uVar25 = 4;
        goto LAB_0132bc30;
      case 0xb7:
      case 0xb8:
        uVar38 = 4;
        uVar25 = 1;
        goto LAB_0132bc30;
      case 0xb9:
      case 0xba:
      case 0xbf:
        uVar38 = 4;
        uVar25 = 2;
        goto LAB_0132bc30;
      case 0xbb:
        uVar38 = 4;
LAB_0132bc2c:
        uVar25 = 3;
LAB_0132bc30:
        BuildSimpleOperator(this,uVar51,uVar38,uVar25);
        goto LAB_0132bc3c;
      case 0xc0:
      case 0xc1:
      case 0xc2:
      case 0xc3:
      case 0xc4:
      case 0xd1:
        BuildSimplePrototypeOperator(this,bVar4);
        goto LAB_0132bc3c;
      case 0xd0:
        if (((byte)this[0x50] >> 5 & 1) == 0) goto LAB_0132c800;
        **(uint **)(this + 0x58) = **(uint **)(this + 0x58) | 0x20;
        local_120 = (ValueBase *)CONCAT71(local_120._1_7_,8);
        puVar22 = *(undefined8 **)(this + 0xa8);
        if (puVar22 < *(undefined8 **)(this + 0xb0)) {
          uVar38 = *(undefined8 *)pWVar52;
          *(undefined1 *)(puVar22 + 1) = 8;
          uVar34 = 1;
          goto LAB_0132ca28;
        }
LAB_0132d664:
        std::__ndk1::
        vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
        ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                  (this_01,(uchar **)pWVar52,(ValueType *)&local_120);
        goto LAB_0132bc3c;
      case 0xd2:
        if (((byte)this[0x50] >> 5 & 1) == 0) goto LAB_0132c800;
        **(uint **)(this + 0x58) = **(uint **)(this + 0x58) | 0x20;
        local_120 = (ValueBase *)0x100000000;
        pbVar53 = (byte *)(*(long *)(this + 0x10) + 1);
        if (pbVar53 < *(byte **)(this + 0x18)) {
          uVar14 = *pbVar53 & 0x7f;
          if ((char)*pbVar53 < '\0') {
            uVar14 = Decoder::
                     read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                               ((Decoder *)this,(uchar *)(*(long *)(this + 0x10) + 2),puVar35,
                                "function index",uVar14);
          }
          else {
            local_120 = (ValueBase *)0x100000000;
          }
        }
        else {
          local_120 = (ValueBase *)0x0;
          Decoder::errorf((uchar *)this,(char *)pbVar53,"expected %s","function index");
          uVar14 = 0;
        }
        local_120 = (ValueBase *)CONCAT44(local_120._4_4_,uVar14);
        lVar17 = *(long *)(this + 0x48);
        pcVar24 = *(char **)(this + 0x10);
        if ((lVar17 != 0) &&
           ((ulong)uVar14 < (ulong)(*(long *)(lVar17 + 0x90) - *(long *)(lVar17 + 0x88) >> 5))) {
          local_88 = CONCAT31(local_88._1_3_,7);
          plVar32 = *(long **)(this + 0xa8);
          if (*(long **)(this + 0xb0) <= plVar32) goto LAB_0132f244;
          *plVar32 = (long)pcVar24;
          *(undefined1 *)(plVar32 + 1) = 7;
          goto LAB_0132c8a8;
        }
        pcVar19 = "invalid function index: %u";
LAB_0132f260:
        uVar34 = (ulong)uVar14;
LAB_013300a4:
        Decoder::errorf((uchar *)this,pcVar24,pcVar19,uVar34);
LAB_0132bc3c:
        uVar34 = 1;
        break;
      case 0xfc:
        pbVar53 = pbVar53 + 1;
        if ((*(byte **)pWVar49 < pbVar53) || ((int)*(byte **)pWVar49 == (int)pbVar53)) {
          Decoder::error((Decoder *)this,pbVar53,"numeric index");
          uVar14 = 0;
        }
        else {
          uVar14 = (uint)*pbVar53;
        }
        uVar14 = uVar14 | (uint)bVar4 << 8;
        if (uVar14 < 0xfc08) {
          if (((byte)this[0x51] >> 2 & 1) != 0) {
            uVar14 = 0x400;
            goto LAB_0132e7ec;
          }
          pcVar24 = "Invalid opcode (enable with --experimental-wasm-sat_f2i_conversions)";
        }
        else if (uVar14 - 0xfc0f < 3) {
          if ((*(uint *)(this + 0x50) >> 5 & 1) != 0) {
            uVar14 = 0x20;
LAB_0132e7ec:
            **(uint **)(this + 0x58) = **(uint **)(this + 0x58) | uVar14;
            iVar13 = DecodeNumericOpcode(this);
            uVar34 = (ulong)(iVar13 + 2);
            break;
          }
          pcVar24 = "Invalid opcode (enable with --experimental-wasm-anyref)";
        }
        else {
          if ((*(uint *)(this + 0x50) >> 9 & 1) != 0) {
            uVar14 = 0x200;
            goto LAB_0132e7ec;
          }
          pcVar24 = "Invalid opcode (enable with --experimental-wasm-bulk_memory)";
        }
LAB_0132d68c:
        Decoder::error((Decoder *)this,pcVar24);
        uVar34 = 2;
        break;
      case 0xfd:
        if (((byte)this[0x50] >> 2 & 1) == 0) {
          pcVar24 = "Invalid opcode (enable with --experimental-wasm-simd)";
          goto LAB_0132c808;
        }
        **(uint **)(this + 0x58) = **(uint **)(this + 0x58) | 4;
        pbVar53 = (byte *)(*(long *)(this + 0x10) + 1);
        if ((*(byte **)(this + 0x18) < pbVar53) || ((int)*(byte **)(this + 0x18) == (int)pbVar53)) {
          Decoder::error((Decoder *)this,pbVar53,"simd index");
          uVar14 = 0;
        }
        else {
          uVar14 = (uint)*pbVar53;
        }
        iVar13 = DecodeSimdOpcode(this,uVar14 | (uint)bVar4 << 8);
        uVar34 = (ulong)(iVar13 + 2);
        break;
      case 0xfe:
        if (((byte)this[0x50] >> 1 & 1) == 0) {
          pcVar24 = "Invalid opcode (enable with --experimental-wasm-threads)";
          goto LAB_0132c808;
        }
        **(uint **)(this + 0x58) = **(uint **)(this + 0x58) | 2;
        pbVar53 = (byte *)(*(long *)(this + 0x10) + 1);
        if ((*(byte **)(this + 0x18) < pbVar53) || ((int)*(byte **)(this + 0x18) == (int)pbVar53)) {
          Decoder::error((Decoder *)this,pbVar53,"atomic index");
          uVar14 = 0;
        }
        else {
          uVar14 = (uint)*pbVar53;
        }
        iVar13 = DecodeAtomicOpcode(this,uVar14 | (uint)bVar4 << 8);
        uVar34 = (ulong)(iVar13 + 2);
      }
      pbVar53 = (byte *)(*(long *)pWVar52 + uVar34);
      *(byte **)pWVar52 = pbVar53;
      pbVar31 = *(byte **)pWVar49;
    } while (pbVar53 < pbVar31);
  }
  if (pbVar53 != pbVar31) {
    if (((byte)this[0x30] & 1) == 0) {
      if ((byte)this[0x30] >> 1 != 0) goto LAB_01332c24;
    }
    else if (*(long *)(this + 0x38) != 0) goto LAB_01332c24;
    pcVar24 = "Beyond end of code";
LAB_01332c1c:
    Decoder::error((Decoder *)this,pcVar24);
  }
LAB_01332c24:
  if (*(long *)(lVar11 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x01332328:
  pbVar53 = *(byte **)pWVar52;
  if (pbVar53 < *(byte **)pWVar49) {
    bVar4 = *pbVar53;
    uVar51 = (ushort)bVar4;
    uVar34 = WasmOpcodes::IsPrefixOpcode(uVar51);
    if ((uVar34 & 1) != 0) {
      if (*(byte **)pWVar49 <= pbVar53 + 1) {
        pcVar24 = "<end>";
        goto LAB_01332394;
      }
      uVar51 = CONCAT11(bVar4,pbVar53[1]);
    }
    pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar51);
  }
  else {
    pcVar24 = "<end>";
  }
LAB_01332394:
  Decoder::errorf((uchar *)this,(char *)pbVar53,"%s found empty stack",pcVar24);
  lVar17 = lVar17 + -1;
  goto joined_r0x013322e4;
}

