
/* v8::internal::ProfilerListener::CodeCreateEvent(v8::internal::CodeEventListener::LogEventsAndTags,
   v8::internal::AbstractCode, v8::internal::SharedFunctionInfo, v8::internal::Name, int, int) */

void __thiscall
v8::internal::ProfilerListener::CodeCreateEvent
          (ProfilerListener *this,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5,
          undefined4 param_6,undefined4 param_7)

{
  uint *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  CodeEntry *pCVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  Isolate *pIVar9;
  ulong *puVar10;
  undefined1 *puVar11;
  CodeEntry *pCVar12;
  ProfilerListener *pPVar13;
  undefined8 uVar14;
  long lVar15;
  void *pvVar16;
  void *pvVar17;
  uint uVar18;
  ulong uVar19;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  void *extraout_x1_03;
  void *extraout_x1_04;
  void *extraout_x1_05;
  void *extraout_x1_06;
  void *extraout_x1_07;
  void *extraout_x1_08;
  void *extraout_x1_09;
  void *extraout_x1_10;
  void *extraout_x1_11;
  uint uVar20;
  Isolate *pIVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  ulong uVar25;
  long lVar26;
  undefined8 uVar27;
  ulong *puVar28;
  ulong uVar29;
  void *pvVar30;
  ulong *puVar31;
  RareData *pRVar32;
  Malloced *pMVar33;
  undefined8 *puVar34;
  void *pvVar35;
  ulong uVar36;
  undefined2 uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  uint local_294;
  undefined8 *local_290;
  SourcePositionTable *local_248;
  CodeEntry *local_220;
  int iStack_218;
  undefined4 uStack_214;
  CodeEntry *local_210;
  ulong local_208 [3];
  undefined8 local_1f0;
  undefined8 *local_1e8;
  undefined8 *local_1e0;
  undefined8 *puStack_1d8;
  uint *local_1d0;
  uint *local_1c8;
  int local_1b4;
  void *local_1b0;
  ulong uStack_1a8;
  undefined8 *local_1a0;
  long lStack_198;
  undefined4 local_190;
  void *local_188;
  ulong local_180;
  undefined8 *local_178;
  long local_170;
  undefined4 local_168;
  ulong local_160 [3];
  int local_148;
  int local_140;
  ulong local_138;
  void *local_120;
  ulong uStack_118;
  undefined8 *local_110;
  long lStack_108;
  undefined4 local_100;
  void *local_f0;
  ulong uStack_e8;
  undefined8 *local_e0;
  long local_d8;
  undefined4 local_d0;
  undefined4 local_c0 [2];
  undefined8 local_b8;
  CodeEntry *local_b0;
  int local_a8;
  long local_80;
  
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
  pIVar21 = *(Isolate **)(this + 8);
  uVar18 = (uint)param_2;
  uVar27 = *(undefined8 *)(pIVar21 + 0x95a0);
  *(int *)(pIVar21 + 0x95b0) = *(int *)(pIVar21 + 0x95b0) + 1;
  pIVar9 = *(Isolate **)(this + 8);
  lVar26 = *(long *)(pIVar21 + 0x95a8);
  if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar31 = *(ulong **)(pIVar9 + 0x95a0);
    if (puVar31 == *(ulong **)(pIVar9 + 0x95a8)) {
      auVar38 = HandleScope::Extend(pIVar9);
      param_2 = auVar38._8_8_;
      puVar31 = auVar38._0_8_;
    }
    auVar38._8_8_ = param_2;
    auVar38._0_8_ = puVar31;
    *(ulong **)(pIVar9 + 0x95a0) = puVar31 + 1;
    *puVar31 = param_3;
  }
  else {
    auVar38 = CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar9 + 0x95b8),param_3);
  }
  puVar31 = auVar38._0_8_;
  pIVar9 = *(Isolate **)(this + 8);
  if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    lVar15 = *(long *)(pIVar9 + 0x95a0);
    auVar39._8_8_ = auVar38._8_8_;
    auVar39._0_8_ = lVar15;
    if (lVar15 == *(long *)(pIVar9 + 0x95a8)) {
      auVar39 = HandleScope::Extend(pIVar9);
    }
    *(ulong **)(pIVar9 + 0x95a0) = auVar39._0_8_ + 1;
    *auVar39._0_8_ = param_4;
  }
  else {
    auVar39 = CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar9 + 0x95b8),param_4);
  }
  puVar28 = auVar39._0_8_;
  pIVar9 = *(Isolate **)(this + 8);
  if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    lVar15 = *(long *)(pIVar9 + 0x95a0);
    auVar40._8_8_ = auVar39._8_8_;
    auVar40._0_8_ = lVar15;
    if (lVar15 == *(long *)(pIVar9 + 0x95a8)) {
      auVar40 = HandleScope::Extend(pIVar9);
    }
    *(ulong **)(pIVar9 + 0x95a0) = auVar40._0_8_ + 1;
    *auVar40._0_8_ = param_5;
  }
  else {
    auVar40 = CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar9 + 0x95b8),param_5);
  }
  local_290 = auVar40._0_8_;
  local_c0[0] = 1;
  uVar22 = *puVar31;
  if (*(short *)((uVar22 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar22 - 1)) == 0x9a) {
    local_160[0] = uVar22;
    if (*(int *)(uVar22 + 0x17) < 0) {
      auVar41 = Code::OffHeapInstructionStart((Code *)local_160);
    }
    else {
      auVar41._8_8_ = auVar40._8_8_;
      auVar41._0_8_ = uVar22 + 0x3f;
    }
  }
  else {
    auVar41._8_8_ = auVar40._8_8_;
    auVar41._0_8_ = uVar22 + 0x21;
  }
  local_b8 = auVar41._0_8_;
  uStack_e8 = 0;
  local_f0 = (void *)0x0;
  local_d8 = 0;
  local_e0 = (undefined8 *)0x0;
  local_d0 = 0x3f800000;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  lStack_108 = 0;
  local_110 = (undefined8 *)0x0;
  local_100 = 0x3f800000;
  uVar23 = *puVar28 & 0xffffffff00000000;
  uVar29 = uVar23 | *(uint *)(*puVar28 + 0xf);
  uVar22 = uVar29;
  if (*(short *)((uVar23 | 7) + (ulong)*(uint *)(uVar29 - 1)) == 0x5b) {
    uVar22 = uVar23 | *(uint *)(uVar29 + 0xb);
  }
  if (*(short *)((uVar22 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar22 - 1)) != 0x65) {
    local_248 = (SourcePositionTable *)0x0;
    local_294 = 0;
    goto LAB_011b3ddc;
  }
  if (*(short *)((uVar23 | 7) + (ulong)*(uint *)(uVar29 - 1)) == 0x5b) {
    uVar29 = uVar23 | *(uint *)(uVar29 + 0xb);
  }
  pIVar9 = *(Isolate **)(this + 8);
  if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar10 = *(ulong **)(pIVar9 + 0x95a0);
    if (puVar10 == *(ulong **)(pIVar9 + 0x95a8)) {
      auVar38 = HandleScope::Extend(pIVar9);
      auVar41._8_8_ = auVar38._8_8_;
      auVar41._0_8_ = local_b8;
      puVar10 = auVar38._0_8_;
    }
    auVar42._8_8_ = auVar41._8_8_;
    auVar42._0_8_ = puVar10;
    local_b8 = auVar41._0_8_;
    *(ulong **)(pIVar9 + 0x95a0) = puVar10 + 1;
    *puVar10 = uVar29;
  }
  else {
    auVar42 = CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar29);
  }
  local_248 = Malloced::operator_new((Malloced *)0x18,auVar42._8_8_);
  *(undefined8 *)(local_248 + 8) = 0;
  *(undefined8 *)(local_248 + 0x10) = 0;
  *(undefined8 *)local_248 = 0;
  uVar29 = *puVar31;
  uVar22 = uVar29 & 0xffffffff00000000;
  uVar23 = uVar22 | 7;
  if (*(short *)(uVar23 + *(uint *)(uVar29 - 1)) == 0x9a) {
    uVar19 = uVar22 | *(uint *)(uVar29 + 0xb);
    if (((*(uint *)(uVar29 + 0xb) & 1) == 0) || (*(short *)(uVar23 + *(uint *)(uVar19 - 1)) != 0x85)
       ) {
LAB_011b39b0:
      uVar19 = uVar22 | *(uint *)(uVar19 + 3);
    }
  }
  else {
    uVar20 = *(uint *)(uVar29 + 0xf);
    uVar19 = uVar22 | uVar20;
    if (((uVar20 & 1) == 0) || (*(short *)(uVar23 + *(uint *)(uVar19 - 1)) != 0x85)) {
      if (uVar20 != *(uint *)(uVar22 + 0x180)) goto LAB_011b39b0;
      uVar19 = *(ulong *)(uVar22 + 0x3c0);
    }
  }
  local_294 = *(uint *)(*auVar42._0_8_ + 0x2f) >> 4 & 1;
  SourcePositionTableIterator::SourcePositionTableIterator
            ((SourcePositionTableIterator *)local_160,uVar19,0);
  if (local_148 != -1) {
    do {
      local_1b4 = ((uint)(local_138 >> 0x1f) & 0xffff) - 1;
      if ((local_138 >> 0x1f & 0xffff) == 0) {
        local_208[0] = *auVar42._0_8_;
        iVar7 = Script::GetLineNumber((Script *)local_208,((uint)local_138 >> 1 & 0x3fffffff) - 1);
        SourcePositionTable::SetPosition(local_248,local_140,iVar7 + 1,local_1b4);
      }
      else {
        uVar22 = *puVar31;
        pIVar9 = *(Isolate **)(this + 8);
        if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar10 = *(ulong **)(pIVar9 + 0x95a0);
          if (puVar10 == *(ulong **)(pIVar9 + 0x95a8)) {
            puVar10 = (ulong *)HandleScope::Extend(pIVar9);
          }
          *(ulong **)(pIVar9 + 0x95a0) = puVar10 + 1;
          *puVar10 = uVar22;
        }
        else {
          puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar22);
        }
        local_208[0] = local_138;
        SourcePosition::InliningStack(&local_1d0,local_208,puVar10);
        SourcePositionTable::SetPosition(local_248,local_140,local_1d0[6] + 1,local_1b4);
        puVar6 = local_1c8;
        local_1e0 = (undefined8 *)0x0;
        puStack_1d8 = (undefined8 *)0x0;
        local_1e8 = (undefined8 *)0x0;
        for (puVar1 = local_1d0; puVar1 != puVar6; puVar1 = puVar1 + 8) {
          if (((*puVar1 & 0x7ffffffe) != 0) && (*(ulong **)(puVar1 + 4) != (ulong *)0x0)) {
            local_208[0] = **(ulong **)(puVar1 + 4);
            iVar7 = Script::GetLineNumber((Script *)local_208,(*puVar1 >> 1 & 0x3fffffff) - 1);
            uVar22 = **(ulong **)(puVar1 + 4);
            puVar11 = &DAT_0189703a;
            if (((*(uint *)(uVar22 + 7) & 1) != 0) &&
               (*(ushort *)
                 ((uVar22 & 0xffffffff00000000 | 7) +
                 (ulong)*(uint *)((uVar22 & 0xffffffff00000000 | (ulong)*(uint *)(uVar22 + 7)) - 1))
                < 0x41)) {
              puVar11 = (undefined1 *)StringsStorage::GetName((StringsStorage *)(this + 0x18));
              uVar22 = **(ulong **)(puVar1 + 4);
            }
            uVar20 = *(uint *)(uVar22 + 0x2f);
            local_220 = (CodeEntry *)**(undefined8 **)(puVar1 + 2);
            iVar8 = SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_220);
            SourcePositionInfo::SourcePositionInfo
                      ((SourcePositionInfo *)local_208,
                       (-(ulong)(iVar8 + 1U >> 0x1f) & 0xfffffffe00000000 | (ulong)(iVar8 + 1U) << 1
                       ) & 0xffff80007fffffff,*(undefined8 *)(puVar1 + 2));
            uVar14 = GetFunctionName(this,**(undefined8 **)(puVar1 + 2));
            local_220 = (CodeEntry *)*puVar10;
            iVar8 = (int)local_1f0;
            uVar22 = (ulong)local_1f0 >> 0x20;
            if (*(int *)((long)local_220 + 0x17) < 0) {
              lVar15 = Code::OffHeapInstructionStart((Code *)&local_220);
            }
            else {
              lVar15 = (long)local_220 + 0x3f;
            }
            iVar7 = iVar7 + 1;
            pCVar12 = operator_new(0x40);
            *(undefined8 *)(pCVar12 + 8) = uVar14;
            *(undefined1 **)(pCVar12 + 0x10) = puVar11;
            *(ulong *)(pCVar12 + 0x18) = CONCAT44((int)uVar22 + 1,iVar8 + 1);
            *(undefined8 *)(pCVar12 + 0x20) = 0;
            *(undefined8 *)(pCVar12 + 0x28) = 0;
            *(uint *)pCVar12 = (uVar20 & 0x10) << 0x1b | uVar18 | 0x5bc00;
            *(long *)(pCVar12 + 0x30) = lVar15;
            *(undefined8 *)(pCVar12 + 0x38) = 0;
            CodeEntry::FillFunctionInfo(pCVar12,**(undefined8 **)(puVar1 + 2));
            local_210 = pCVar12;
            uVar23 = CodeEntry::GetHash(pCVar12);
            uVar22 = uStack_118;
            if (uStack_118 != 0) {
              uVar14 = CONCAT17(POPCOUNT((char)(uStack_118 >> 0x38)),
                                CONCAT16(POPCOUNT((char)(uStack_118 >> 0x30)),
                                         CONCAT15(POPCOUNT((char)(uStack_118 >> 0x28)),
                                                  CONCAT14(POPCOUNT((char)(uStack_118 >> 0x20)),
                                                           CONCAT13(POPCOUNT((char)(uStack_118 >>
                                                                                   0x18)),
                                                                    CONCAT12(POPCOUNT((char)(
                                                  uStack_118 >> 0x10)),
                                                  CONCAT11(POPCOUNT((char)(uStack_118 >> 8)),
                                                           POPCOUNT((char)uStack_118))))))));
              uVar37 = NEON_uaddlv(uVar14,1);
              uVar29 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar37) & 0xffffffff;
              uVar23 = uVar23 & 0xffffffff;
              if (uVar29 < 2) {
                uVar19 = (int)uStack_118 - 1 & uVar23;
              }
              else {
                uVar19 = uVar23;
                if (uStack_118 <= uVar23) {
                  uVar19 = 0;
                  if (uStack_118 != 0) {
                    uVar19 = uVar23 / uStack_118;
                  }
                  uVar19 = uVar23 - uVar19 * uStack_118;
                }
              }
              plVar24 = *(long **)((long)local_120 + uVar19 * 8);
              if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0))
              {
                uVar36 = uStack_118 - 1;
                do {
                  uVar25 = plVar24[1];
                  if (uVar25 == uVar23) {
                    auVar38 = CodeEntry::IsSameFunctionAs((CodeEntry *)plVar24[2],local_210);
                    pvVar16 = auVar38._8_8_;
                    if ((auVar38._0_8_ & 1) != 0) {
                      pCVar12 = (CodeEntry *)plVar24[2];
                      goto LAB_011b3d18;
                    }
                  }
                  else {
                    if (uVar29 < 2) {
                      uVar25 = uVar25 & uVar36;
                    }
                    else if (uVar22 <= uVar25) {
                      uVar2 = 0;
                      if (uVar22 != 0) {
                        uVar2 = uVar25 / uVar22;
                      }
                      uVar25 = uVar25 - uVar2 * uVar22;
                    }
                    if (uVar25 != uVar19) break;
                  }
                  plVar24 = (long *)*plVar24;
                } while (plVar24 != (long *)0x0);
              }
            }
            pCVar12 = local_210;
            std::__ndk1::
            __hash_table<std::__ndk1::unique_ptr<v8::internal::CodeEntry,std::__ndk1::default_delete<v8::internal::CodeEntry>>,v8::internal::CodeEntry::Hasher,v8::internal::CodeEntry::Equals,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::CodeEntry,std::__ndk1::default_delete<v8::internal::CodeEntry>>>>
            ::
            __emplace_unique_key_args<std::__ndk1::unique_ptr<v8::internal::CodeEntry,std::__ndk1::default_delete<v8::internal::CodeEntry>>,std::__ndk1::unique_ptr<v8::internal::CodeEntry,std::__ndk1::default_delete<v8::internal::CodeEntry>>>
                      ((__hash_table<std::__ndk1::unique_ptr<v8::internal::CodeEntry,std::__ndk1::default_delete<v8::internal::CodeEntry>>,v8::internal::CodeEntry::Hasher,v8::internal::CodeEntry::Equals,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::CodeEntry,std::__ndk1::default_delete<v8::internal::CodeEntry>>>>
                        *)&local_120,(unique_ptr *)&local_210,(unique_ptr *)&local_210);
            pvVar16 = extraout_x1;
LAB_011b3d18:
            pCVar5 = local_210;
            local_210 = (CodeEntry *)0x0;
            if (pCVar5 != (CodeEntry *)0x0) {
              pRVar32 = *(RareData **)(pCVar5 + 0x38);
              *(undefined8 *)(pCVar5 + 0x38) = 0;
              if (pRVar32 != (RareData *)0x0) {
                CodeEntry::RareData::~RareData(pRVar32);
                operator_delete(pRVar32);
                pvVar16 = extraout_x1_00;
              }
              pMVar33 = *(Malloced **)(pCVar5 + 0x28);
              *(undefined8 *)(pCVar5 + 0x28) = 0;
              if (pMVar33 != (Malloced *)0x0) {
                pvVar17 = *(void **)pMVar33;
                if (pvVar17 != (void *)0x0) {
                  *(void **)(pMVar33 + 8) = pvVar17;
                  operator_delete(pvVar17);
                  pvVar16 = extraout_x1_01;
                }
                Malloced::operator_delete(pMVar33,pvVar16);
              }
              operator_delete(pCVar5);
            }
            local_220 = pCVar12;
            iStack_218 = iVar7;
            if (local_1e0 < puStack_1d8) {
              local_1e0[1] = CONCAT44(uStack_214,iVar7);
              *local_1e0 = pCVar12;
              local_1e0 = local_1e0 + 2;
            }
            else {
              std::__ndk1::
              vector<v8::internal::CodeEntryAndLineNumber,std::__ndk1::allocator<v8::internal::CodeEntryAndLineNumber>>
              ::__push_back_slow_path<v8::internal::CodeEntryAndLineNumber>
                        ((vector<v8::internal::CodeEntryAndLineNumber,std::__ndk1::allocator<v8::internal::CodeEntryAndLineNumber>>
                          *)&local_1e8,(CodeEntryAndLineNumber *)&local_220);
            }
          }
        }
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::vector<v8::internal::CodeEntryAndLineNumber,std::__ndk1::allocator<v8::internal::CodeEntryAndLineNumber>>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::vector<v8::internal::CodeEntryAndLineNumber,std::__ndk1::allocator<v8::internal::CodeEntryAndLineNumber>>>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::vector<v8::internal::CodeEntryAndLineNumber,std::__ndk1::allocator<v8::internal::CodeEntryAndLineNumber>>>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::vector<v8::internal::CodeEntryAndLineNumber,std::__ndk1::allocator<v8::internal::CodeEntryAndLineNumber>>>>>
        ::
        __emplace_unique_key_args<int,int&,std::__ndk1::vector<v8::internal::CodeEntryAndLineNumber,std::__ndk1::allocator<v8::internal::CodeEntryAndLineNumber>>>
                  ((__hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::vector<v8::internal::CodeEntryAndLineNumber,std::__ndk1::allocator<v8::internal::CodeEntryAndLineNumber>>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::vector<v8::internal::CodeEntryAndLineNumber,std::__ndk1::allocator<v8::internal::CodeEntryAndLineNumber>>>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::vector<v8::internal::CodeEntryAndLineNumber,std::__ndk1::allocator<v8::internal::CodeEntryAndLineNumber>>>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::vector<v8::internal::CodeEntryAndLineNumber,std::__ndk1::allocator<v8::internal::CodeEntryAndLineNumber>>>>>
                    *)&local_f0,&local_1b4,&local_1b4,(vector *)&local_1e8);
        if (local_1e8 != (undefined8 *)0x0) {
          local_1e0 = local_1e8;
          operator_delete(local_1e8);
        }
        if (local_1d0 != (uint *)0x0) {
          local_1c8 = local_1d0;
          operator_delete(local_1d0);
        }
      }
      SourcePositionTableIterator::Advance((SourcePositionTableIterator *)local_160);
    } while (local_148 != -1);
  }
LAB_011b3ddc:
  pCVar12 = operator_new(0x40);
  pPVar13 = (ProfilerListener *)GetFunctionName(this,*puVar28);
  uVar14 = InferScriptName(pPVar13,*local_290,*puVar28);
  uVar14 = StringsStorage::GetName((StringsStorage *)(this + 0x18),uVar14);
  uVar22 = *puVar31;
  if (*(short *)((uVar22 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar22 - 1)) == 0x9a) {
    local_160[0] = uVar22;
    if (*(int *)(uVar22 + 0x17) < 0) {
      lVar15 = Code::OffHeapInstructionStart((Code *)local_160);
    }
    else {
      lVar15 = uVar22 + 0x3f;
    }
  }
  else {
    lVar15 = uVar22 + 0x21;
  }
  uVar23 = uStack_e8;
  pvVar17 = local_f0;
  uVar22 = uStack_118;
  pvVar16 = local_120;
  *(ProfilerListener **)(pCVar12 + 8) = pPVar13;
  *(undefined8 *)(pCVar12 + 0x10) = uVar14;
  *(undefined4 *)(pCVar12 + 0x18) = param_6;
  uVar20 = 0x80000000;
  if (local_294 == 0) {
    uVar20 = 0;
  }
  *(undefined4 *)(pCVar12 + 0x1c) = param_7;
  *(SourcePositionTable **)(pCVar12 + 0x28) = local_248;
  *(long *)(pCVar12 + 0x30) = lVar15;
  *(undefined8 *)(pCVar12 + 0x20) = 0;
  *(undefined8 *)(pCVar12 + 0x38) = 0;
  *(uint *)pCVar12 = uVar20 | uVar18 | 0x5bc00;
  local_b0 = pCVar12;
  if (local_d8 != 0) {
    local_120 = (void *)0x0;
    uStack_118 = 0;
    local_188 = pvVar16;
    local_180 = uVar22;
    local_178 = local_110;
    local_170 = lStack_108;
    local_168 = local_100;
    if (lStack_108 != 0) {
      uVar29 = local_110[1];
      if ((uVar22 & uVar22 - 1) == 0) {
        uVar29 = uVar29 & uVar22 - 1;
      }
      else if (uVar22 <= uVar29) {
        uVar19 = 0;
        if (uVar22 != 0) {
          uVar19 = uVar29 / uVar22;
        }
        uVar29 = uVar29 - uVar19 * uVar22;
      }
      *(undefined8 ***)((long)pvVar16 + uVar29 * 8) = &local_178;
      local_110 = (undefined8 *)0x0;
      lStack_108 = 0;
    }
    local_f0 = (void *)0x0;
    uStack_e8 = 0;
    local_1b0 = pvVar17;
    uStack_1a8 = uVar23;
    local_1a0 = local_e0;
    lStack_198 = local_d8;
    local_190 = local_d0;
    if (local_d8 != 0) {
      uVar22 = local_e0[1];
      if ((uVar23 & uVar23 - 1) == 0) {
        uVar22 = uVar22 & uVar23 - 1;
      }
      else if (uVar23 <= uVar22) {
        uVar29 = 0;
        if (uVar23 != 0) {
          uVar29 = uVar22 / uVar23;
        }
        uVar22 = uVar22 - uVar29 * uVar23;
      }
      *(undefined8 ***)((long)pvVar17 + uVar22 * 8) = &local_1a0;
      local_e0 = (undefined8 *)0x0;
      local_d8 = 0;
    }
    CodeEntry::SetInlineStacks(pCVar12,&local_188,&local_1b0);
    pvVar16 = extraout_x1_02;
    pvVar17 = local_1b0;
    puVar4 = local_1a0;
    while (puVar4 != (void *)0x0) {
      pvVar16 = (void *)puVar4[3];
      pvVar30 = (void *)*puVar4;
      local_1b0 = pvVar17;
      if (pvVar16 != (void *)0x0) {
        puVar4[4] = pvVar16;
        operator_delete(pvVar16);
      }
      operator_delete(puVar4);
      pvVar16 = extraout_x1_03;
      pvVar17 = local_1b0;
      puVar4 = pvVar30;
    }
    local_1b0 = (void *)0x0;
    pvVar30 = local_188;
    puVar4 = local_178;
    if (pvVar17 != (void *)0x0) {
      operator_delete(pvVar17);
      pvVar16 = extraout_x1_04;
      pvVar30 = local_188;
      puVar4 = local_178;
    }
    while (puVar4 != (void *)0x0) {
      pvVar35 = (void *)puVar4[2];
      pvVar17 = (void *)*puVar4;
      puVar4[2] = 0;
      local_188 = pvVar30;
      if (pvVar35 != (void *)0x0) {
        pRVar32 = *(RareData **)((long)pvVar35 + 0x38);
        *(undefined8 *)((long)pvVar35 + 0x38) = 0;
        if (pRVar32 != (RareData *)0x0) {
          CodeEntry::RareData::~RareData(pRVar32);
          operator_delete(pRVar32);
          pvVar16 = extraout_x1_06;
        }
        pMVar33 = *(Malloced **)((long)pvVar35 + 0x28);
        *(undefined8 *)((long)pvVar35 + 0x28) = 0;
        if (pMVar33 != (Malloced *)0x0) {
          pvVar30 = *(void **)pMVar33;
          if (pvVar30 != (void *)0x0) {
            *(void **)(pMVar33 + 8) = pvVar30;
            operator_delete(pvVar30);
            pvVar16 = extraout_x1_07;
          }
          Malloced::operator_delete(pMVar33,pvVar16);
        }
        operator_delete(pvVar35);
      }
      operator_delete(puVar4);
      pvVar16 = extraout_x1_05;
      pvVar30 = local_188;
      puVar4 = pvVar17;
    }
    local_188 = (void *)0x0;
    if (pvVar30 != (void *)0x0) {
      operator_delete(pvVar30);
    }
  }
  CodeEntry::FillFunctionInfo(local_b0,*puVar28);
  uVar22 = *puVar31;
  if (*(short *)((uVar22 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar22 - 1)) == 0x9a) {
    local_160[0] = uVar22;
    if (*(int *)(uVar22 + 0x17) < 0) {
      local_a8 = Code::OffHeapInstructionSize((Code *)local_160);
    }
    else {
      local_a8 = *(int *)(uVar22 + 0x13);
    }
  }
  else {
    local_a8 = *(int *)(uVar22 + 3) >> 1;
  }
  (**(code **)**(undefined8 **)(this + 0x10))(*(undefined8 **)(this + 0x10),local_c0);
  pvVar16 = extraout_x1_08;
  pvVar17 = local_120;
  puVar4 = local_110;
  while (puVar4 != (undefined8 *)0x0) {
    pvVar30 = (void *)puVar4[2];
    puVar34 = (undefined8 *)*puVar4;
    puVar4[2] = 0;
    local_120 = pvVar17;
    if (pvVar30 != (void *)0x0) {
      pRVar32 = *(RareData **)((long)pvVar30 + 0x38);
      *(undefined8 *)((long)pvVar30 + 0x38) = 0;
      if (pRVar32 != (RareData *)0x0) {
        CodeEntry::RareData::~RareData(pRVar32);
        operator_delete(pRVar32);
        pvVar16 = extraout_x1_10;
      }
      pMVar33 = *(Malloced **)((long)pvVar30 + 0x28);
      *(undefined8 *)((long)pvVar30 + 0x28) = 0;
      if (pMVar33 != (Malloced *)0x0) {
        pvVar17 = *(void **)pMVar33;
        if (pvVar17 != (void *)0x0) {
          *(void **)(pMVar33 + 8) = pvVar17;
          operator_delete(pvVar17);
          pvVar16 = extraout_x1_11;
        }
        Malloced::operator_delete(pMVar33,pvVar16);
      }
      operator_delete(pvVar30);
    }
    operator_delete(puVar4);
    pvVar16 = extraout_x1_09;
    pvVar17 = local_120;
    puVar4 = puVar34;
  }
  local_120 = (void *)0x0;
  pvVar16 = local_f0;
  puVar4 = local_e0;
  if (pvVar17 != (void *)0x0) {
    operator_delete(pvVar17);
    pvVar16 = local_f0;
    puVar4 = local_e0;
  }
  while (puVar4 != (void *)0x0) {
    pvVar17 = (void *)puVar4[3];
    pvVar30 = (void *)*puVar4;
    local_f0 = pvVar16;
    if (pvVar17 != (void *)0x0) {
      puVar4[4] = pvVar17;
      operator_delete(pvVar17);
    }
    operator_delete(puVar4);
    pvVar16 = local_f0;
    puVar4 = pvVar30;
  }
  local_f0 = (void *)0x0;
  if (pvVar16 != (void *)0x0) {
    operator_delete(pvVar16);
  }
  if (pIVar21 != (Isolate *)0x0) {
    *(undefined8 *)(pIVar21 + 0x95a0) = uVar27;
    *(int *)(pIVar21 + 0x95b0) = *(int *)(pIVar21 + 0x95b0) + -1;
    if (*(long *)(pIVar21 + 0x95a8) != lVar26) {
      *(long *)(pIVar21 + 0x95a8) = lVar26;
      HandleScope::DeleteExtensions(pIVar21);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

