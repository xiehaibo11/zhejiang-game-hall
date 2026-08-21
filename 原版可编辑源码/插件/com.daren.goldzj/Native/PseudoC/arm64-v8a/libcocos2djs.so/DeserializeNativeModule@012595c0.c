
/* v8::internal::wasm::DeserializeNativeModule(v8::internal::Isolate*, v8::internal::Vector<unsigned
   char const>, v8::internal::Vector<unsigned char const>) */

ulong * v8::internal::wasm::DeserializeNativeModule
                  (Isolate *param_1,long *param_2,ulong param_3,void *param_4,ulong param_5)

{
  __shared_weak_count *p_Var1;
  __shared_weak_count *p_Var2;
  Instruction *pIVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  __shared_weak_count *this;
  byte bVar7;
  char cVar8;
  uint uVar10;
  int iVar14;
  char cVar9;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ulong *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  void *pvVar18;
  ulong *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulong uVar24;
  ulong uVar25;
  long *plVar26;
  void *pvVar27;
  void *pvVar28;
  WasmCode *this_00;
  uint *puVar29;
  undefined8 *puVar30;
  ulong uVar31;
  ulong uVar32;
  long lVar33;
  Instruction *pIVar34;
  NativeModule *pNVar35;
  undefined1 auVar36 [16];
  uint *local_258;
  uint *local_250;
  uint *local_248;
  NativeModule *local_240;
  __shared_weak_count *p_Stack_238;
  undefined8 local_228;
  void *local_220;
  ulong uStack_218;
  WasmModule *local_210;
  __shared_weak_count *local_208;
  NativeModule *local_200;
  __shared_weak_count *p_Stack_1f8;
  undefined4 local_1f0 [2];
  void *local_1e8;
  ulong uStack_1e0;
  undefined1 local_1d8 [16];
  void *local_1c8;
  ulong uStack_1c0;
  void *local_1b8;
  ulong uStack_1b0;
  void *local_1a8;
  ulong uStack_1a0;
  Instruction *local_198;
  __shared_weak_count *local_190;
  Instruction *local_188;
  byte local_180;
  ulong uStack_178;
  void *local_170;
  undefined8 uStack_168;
  char local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined **local_138 [17];
  undefined8 local_b0;
  undefined4 local_a8;
  long local_a0;
  long lStack_98;
  __shared_weak_count local_90 [32];
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  uVar31 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar31 = uVar31 | *(uint *)((uVar31 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar15 = *(ulong **)(param_1 + 0x95a0);
    if (puVar15 == *(ulong **)(param_1 + 0x95a8)) {
      puVar15 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar15 + 1;
    *puVar15 = uVar31;
  }
  else {
    puVar15 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar31);
  }
  uVar31 = IsWasmCodegenAllowed(param_1,puVar15);
  auVar36._8_8_ = local_1d8._8_8_;
  auVar36._0_8_ = local_1d8._0_8_;
  puVar15 = (ulong *)0x0;
  if ((0xf < param_3) && (local_1d8 = auVar36, (uVar31 & 1) != 0)) {
    local_198 = (Instruction *)&local_a0;
    local_190 = local_90;
    local_188 = local_198;
    FUN_01259414(&local_198);
    if (*param_2 == local_a0 && param_2[1] == lStack_98) {
      local_1e8 = param_4;
      uStack_1e0 = param_5;
      local_1f0[0] = WasmFeatures::FromIsolate(param_1);
      DecodeWasmModule((wasm *)&local_198,local_1f0,local_1e8,(long)local_1e8 + uStack_1e0,0,0,
                       *(undefined8 *)(param_1 + 0x9520),*(long *)(param_1 + 0xc770) + 0x58);
      bVar7 = local_180;
      this = local_190;
      pIVar34 = local_198;
      uVar31 = (ulong)(local_180 >> 1);
      if ((local_180 & 1) != 0) {
        uVar31 = uStack_178;
      }
      if (uVar31 == 0) {
        if (local_190 != (__shared_weak_count *)0x0) {
          p_Var1 = local_190 + 8;
          do {
            cVar8 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
            if (bVar5) {
              *(long *)p_Var1 = *(long *)p_Var1 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
        if (pIVar34 == (Instruction *)0x0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","(module) != nullptr");
        }
        uVar16 = CreateWasmScript(param_1,&local_1e8,(WasmModule *)(pIVar34 + 0x188),
                                  *(undefined8 *)(pIVar34 + 0x50));
        uVar17 = WasmCodeManager::EstimateNativeModuleCodeSize((WasmModule *)pIVar34,false);
        local_210 = (WasmModule *)pIVar34;
        local_208 = this;
        WasmEngine::NewNativeModule
                  (&local_200,*(undefined8 *)(param_1 + 0xc770),param_1,local_1f0,&local_210,uVar17)
        ;
        p_Var1 = local_208;
        if (local_208 != (__shared_weak_count *)0x0) {
          p_Var2 = local_208 + 8;
          do {
            lVar33 = *(long *)p_Var2;
            cVar8 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
            if (bVar5) {
              *(long *)p_Var2 = lVar33 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (lVar33 == 0) {
            (**(code **)(*(long *)p_Var1 + 0x10))(p_Var1);
            std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
          }
        }
        pNVar35 = local_200;
        if (param_5 == 0) {
          pvVar18 = (void *)0x0;
        }
        else {
          pvVar18 = operator_new__(param_5);
          memmove(pvVar18,param_4,param_5);
        }
        local_220 = pvVar18;
        uStack_218 = param_5;
        NativeModule::SetWireBytes(pNVar35,&local_220);
        pvVar18 = local_220;
        local_220 = (void *)0x0;
        if (pvVar18 != (void *)0x0) {
          operator_delete__(pvVar18);
        }
        local_228 = 0;
        CompileJsToWasmWrappers(param_1,*(WasmModule **)(local_200 + 200),(Handle *)&local_228);
        p_Stack_238 = p_Stack_1f8;
        local_240 = local_200;
        local_200 = (NativeModule *)0x0;
        p_Stack_1f8 = (__shared_weak_count *)0x0;
        puVar19 = (ulong *)WasmModuleObject::New(param_1,&local_240,uVar16,local_228);
        p_Var1 = p_Stack_238;
        if (p_Stack_238 != (__shared_weak_count *)0x0) {
          p_Var2 = p_Stack_238 + 8;
          do {
            lVar33 = *(long *)p_Var2;
            cVar8 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
            if (bVar5) {
              *(long *)p_Var2 = lVar33 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (lVar33 == 0) {
            (**(code **)(*(long *)p_Stack_238 + 0x10))(p_Stack_238);
            std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
          }
        }
        pNVar35 = (NativeModule *)
                  **(undefined8 **)
                    (*(long *)((*puVar19 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar19 + 0xb)) +
                              3) + 0x18);
        WasmCodeRefScope::WasmCodeRefScope((WasmCodeRefScope *)&local_a0);
        local_258 = (uint *)(param_2 + 2);
        local_250 = (uint *)((long)param_2 + param_3);
        local_248 = local_258;
        uVar10 = FUN_0125cb70(&local_258);
        uVar11 = FUN_0125cb70(&local_258);
        uVar4 = *(uint *)(*(long *)(pNVar35 + 200) + 0x3c);
        puVar15 = (ulong *)0x0;
        if ((uVar11 == uVar4) &&
           (iVar14 = *(int *)(*(long *)(pNVar35 + 200) + 0x44), uVar10 == uVar4 + iVar14)) {
          if (uVar11 < uVar10) {
            uVar4 = iVar14 + uVar11;
            do {
              lVar33 = FUN_0125cd00(&local_258);
              if (lVar33 == 0) {
                NativeModule::UseLazyStub(pNVar35,uVar11);
              }
              else {
                uVar17 = FUN_0125cd00(&local_258);
                uVar20 = FUN_0125cd00(&local_258);
                uVar21 = FUN_0125cd00(&local_258);
                uVar22 = FUN_0125cd00(&local_258);
                uVar23 = FUN_0125cd00(&local_258);
                uVar12 = FUN_0125cb70(&local_258);
                uVar13 = FUN_0125cb70(&local_258);
                lVar33 = FUN_0125cd00(&local_258);
                uVar31 = FUN_0125cd00(&local_258);
                uVar24 = FUN_0125cd00(&local_258);
                uVar25 = FUN_0125cd00(&local_258);
                uVar10 = *local_248;
                if (FLAG_trace_wasm_serialization == '\0') {
                  cVar8 = (char)local_248[1];
                  puVar29 = (uint *)((long)local_248 + 5);
                }
                else {
                  local_248 = local_248 + 1;
                  local_198 = (Instruction *)0x1ca1178;
                  local_138[0] = (undefined **)0x1ca11a0;
                  std::__ndk1::ios_base::init((ios_base *)local_138,(AndroidLogStream *)&local_190);
                  local_a8 = 0xffffffff;
                  local_b0 = 0;
                  local_190 = (__shared_weak_count *)&PTR__basic_streambuf_01c671a8;
                  local_198 = (Instruction *)&PTR__StdoutStream_01ca1128;
                  local_138[0] = &PTR__StdoutStream_01ca1150;
                  std::__ndk1::locale::locale((locale *)&local_188);
                  uStack_168 = 0;
                  uStack_158 = 0;
                  local_160 = '\0';
                  local_180 = 0;
                  local_190 = (__shared_weak_count *)&PTR__AndroidLogStream_01cbc008;
                  local_150 = 0;
                  uStack_148 = 0;
                  local_140 = 0;
                  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            ((basic_ostream *)&local_198,"read: ",6);
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_198,
                             (ulong)uVar10);
                  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            ((basic_ostream *)&local_198," sized: ",8);
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_198,4);
                  std::__ndk1::ios_base::getloc();
                  plVar26 = (long *)std::__ndk1::locale::use_facet
                                              ((locale *)&local_1a8,
                                               (id *)&std::__ndk1::ctype<char>::id);
                  cVar8 = (**(code **)(*plVar26 + 0x38))(plVar26,10);
                  std::__ndk1::locale::~locale((locale *)&local_1a8);
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_198,cVar8)
                  ;
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_198);
                  local_198 = (Instruction *)&PTR__StdoutStream_01ca1128;
                  local_138[0] = &PTR__StdoutStream_01ca1150;
                  AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_190);
                  std::__ndk1::ios_base::~ios_base((ios_base *)local_138);
                  cVar8 = (char)*local_248;
                  puVar29 = (uint *)((long)local_248 + 1);
                  if (FLAG_trace_wasm_serialization != '\0') {
                    local_248 = (uint *)((long)local_248 + 1);
                    local_198 = (Instruction *)0x1ca1178;
                    local_138[0] = (undefined **)0x1ca11a0;
                    std::__ndk1::ios_base::init
                              ((ios_base *)local_138,(AndroidLogStream *)&local_190);
                    local_a8 = 0xffffffff;
                    local_b0 = 0;
                    local_190 = (__shared_weak_count *)&PTR__basic_streambuf_01c671a8;
                    local_198 = (Instruction *)&PTR__StdoutStream_01ca1128;
                    local_138[0] = &PTR__StdoutStream_01ca1150;
                    std::__ndk1::locale::locale((locale *)&local_188);
                    uStack_168 = 0;
                    uStack_158 = 0;
                    local_160 = '\0';
                    local_180 = 0;
                    local_190 = (__shared_weak_count *)&PTR__AndroidLogStream_01cbc008;
                    local_150 = 0;
                    uStack_148 = 0;
                    local_140 = 0;
                    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              ((basic_ostream *)&local_198,"read: ",6);
                    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_198,
                               (long)cVar8);
                    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              ((basic_ostream *)&local_198," sized: ",8);
                    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_198,1);
                    std::__ndk1::ios_base::getloc();
                    plVar26 = (long *)std::__ndk1::locale::use_facet
                                                ((locale *)&local_1a8,
                                                 (id *)&std::__ndk1::ctype<char>::id);
                    cVar9 = (**(code **)(*plVar26 + 0x38))(plVar26,10);
                    std::__ndk1::locale::~locale((locale *)&local_1a8);
                    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_198,
                               cVar9);
                    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_198);
                    local_198 = (Instruction *)&PTR__StdoutStream_01ca1128;
                    local_138[0] = &PTR__StdoutStream_01ca1150;
                    AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_190);
                    std::__ndk1::ios_base::~ios_base((ios_base *)local_138);
                    puVar29 = local_248;
                  }
                }
                local_248 = (uint *)((long)puVar29 + lVar33);
                if (uVar31 == 0) {
                  pvVar18 = (void *)0x0;
                }
                else {
                  pvVar18 = operator_new__(uVar31);
                }
                FUN_0125ce90(&local_258,pvVar18,uVar31);
                if (uVar24 == 0) {
                  pvVar27 = (void *)0x0;
                }
                else {
                  pvVar27 = operator_new__(uVar24);
                }
                FUN_0125ce90(&local_258,pvVar27,uVar24);
                if (uVar25 == 0) {
                  pvVar28 = (void *)0x0;
                }
                else {
                  uVar32 = uVar25 << 3;
                  if (uVar25 >> 0x3d != 0) {
                    uVar32 = 0xffffffffffffffff;
                  }
                  pvVar28 = operator_new__(uVar32);
                }
                FUN_0125ce90(&local_258,pvVar28,
                             -(uVar25 >> 0x1f & 1) & 0xfffffff800000000 | (uVar25 & 0xffffffff) << 3
                            );
                local_1c8 = pvVar27;
                uStack_1c0 = uVar24;
                local_1b8 = pvVar18;
                uStack_1b0 = uVar31;
                local_1a8 = pvVar28;
                uStack_1a0 = uVar25;
                this_00 = (WasmCode *)
                          NativeModule::AddDeserializedCode
                                    (pNVar35,uVar11,puVar29,lVar33,uVar12,uVar13,uVar20,uVar21,
                                     uVar17,uVar22,uVar23,&local_1a8,&local_1b8,&local_1c8,uVar10,
                                     cVar8);
                pvVar18 = local_1c8;
                local_1c8 = (void *)0x0;
                if (pvVar18 != (void *)0x0) {
                  operator_delete__(pvVar18);
                }
                pvVar18 = local_1b8;
                local_1b8 = (void *)0x0;
                if (pvVar18 != (void *)0x0) {
                  operator_delete__(pvVar18);
                }
                pvVar18 = local_1a8;
                local_1a8 = (void *)0x0;
                if (pvVar18 != (void *)0x0) {
                  operator_delete__(pvVar18);
                }
                auVar36 = NativeModule::FindJumpTablesForCode(pNVar35,*(ulong *)this_00);
                uVar17 = *(undefined8 *)this_00;
                uVar21 = *(undefined8 *)(this_00 + 8);
                uVar20 = *(undefined8 *)(this_00 + 0x10);
                uVar22 = *(undefined8 *)(this_00 + 0x18);
                local_1d8 = auVar36;
                uVar23 = WasmCode::constant_pool();
                RelocIterator::RelocIterator
                          ((RelocIterator *)&local_198,uVar17,uVar21,uVar20,uVar22,uVar23,0x3b0);
                while (local_160 == '\0') {
                  switch(local_180) {
                  case 4:
                    if (local_188[3] == (Instruction)0x58) {
                      puVar29 = (uint *)Instruction::ImmPCOffsetTarget(local_188);
                      uVar10 = *puVar29;
                    }
                    else {
                      uVar24 = Instruction::ImmPCOffset(local_188);
                      uVar31 = uVar24 + 3;
                      if (-1 < (long)uVar24) {
                        uVar31 = uVar24;
                      }
                      uVar10 = (uint)(uVar31 >> 2);
                    }
                    uVar17 = NativeModule::GetNearCallTargetForFunction
                                       (pNVar35,uVar10,(JumpTablesRef *)local_1d8);
                    RelocInfo::set_wasm_call_address((RelocInfo *)&local_188,uVar17,1);
                    break;
                  case 5:
                    if (local_188[3] == (Instruction)0x58) {
                      puVar29 = (uint *)Instruction::ImmPCOffsetTarget(local_188);
                      uVar31 = (ulong)*puVar29;
                    }
                    else {
                      uVar24 = Instruction::ImmPCOffset(local_188);
                      uVar31 = uVar24 + 3;
                      if (-1 < (long)uVar24) {
                        uVar31 = uVar24;
                      }
                      uVar31 = uVar31 >> 2;
                    }
                    uVar17 = NativeModule::GetNearRuntimeStubEntry(pNVar35,uVar31,local_1d8);
                    RelocInfo::set_wasm_stub_call_address((RelocInfo *)&local_188,uVar17,1);
                    break;
                  default:
                    /* WARNING: Subroutine does not return */
                    V8_Fatal("unreachable code");
                  case 7:
                    if (local_188[3] == (Instruction)0x58) {
                      puVar29 = (uint *)Instruction::ImmPCOffsetTarget(local_188);
                      uVar31 = (ulong)*puVar29;
                    }
                    else {
                      uVar24 = Instruction::ImmPCOffset(local_188);
                      uVar31 = uVar24 + 3;
                      if (-1 < (long)uVar24) {
                        uVar31 = uVar24;
                      }
                      uVar31 = uVar31 >> 2;
                    }
                    if ((DAT_01d418a8 & 1) == 0) {
                      iVar14 = __cxa_guard_acquire(&DAT_01d418a8);
                      if (iVar14 != 0) {
                        FUN_0125a60c();
                        __cxa_guard_release(&DAT_01d418a8);
                      }
                    }
                    pIVar34 = (Instruction *)(&DAT_01d3fcf0)[uVar31 & 0xffffffff];
                    if (local_188[3] == (Instruction)0x58) {
                      puVar30 = (undefined8 *)Instruction::ImmPCOffsetTarget(local_188);
                      *puVar30 = pIVar34;
                    }
                    else {
                      pIVar3 = local_188;
                      if (pIVar34 != (Instruction *)0x0) {
                        pIVar3 = pIVar34;
                      }
                      Instruction::SetBranchImmTarget(local_188,pIVar3);
                    }
                    break;
                  case 8:
                  case 9:
                    *(long *)local_188 = *(long *)this_00 + *(long *)local_188;
                  }
                  RelocIterator::next((RelocIterator *)&local_198);
                }
                WasmCode::MaybePrint(this_00,(char *)0x0);
                WasmCode::Validate();
                FlushInstructionCache(*(void **)this_00,*(ulong *)(this_00 + 8));
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 != uVar4);
          }
          if (local_250 == local_248) {
            NativeModule::LogWasmCodes(pNVar35,param_1);
            Debug::OnAfterCompile(*(Debug **)(param_1 + 0xb6c8),uVar16);
            puVar15 = puVar19;
          }
          else {
            puVar15 = (ulong *)0x0;
          }
        }
        WasmCodeRefScope::~WasmCodeRefScope((WasmCodeRefScope *)&local_a0);
        p_Var1 = p_Stack_1f8;
        if (p_Stack_1f8 != (__shared_weak_count *)0x0) {
          p_Var2 = p_Stack_1f8 + 8;
          do {
            lVar33 = *(long *)p_Var2;
            cVar8 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
            if (bVar5) {
              *(long *)p_Var2 = lVar33 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (lVar33 == 0) {
            (**(code **)(*(long *)p_Stack_1f8 + 0x10))(p_Stack_1f8);
            std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
          }
        }
      }
      else {
        puVar15 = (ulong *)0x0;
      }
      if ((bVar7 & 1) != 0) {
        operator_delete(local_170);
      }
      if (this != (__shared_weak_count *)0x0) {
        p_Var1 = this + 8;
        do {
          lVar33 = *(long *)p_Var1;
          cVar8 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar5) {
            *(long *)p_Var1 = lVar33 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar33 == 0) {
          (**(code **)(*(long *)this + 0x10))(this);
          std::__ndk1::__shared_weak_count::__release_weak(this);
        }
      }
    }
    else {
      puVar15 = (ulong *)0x0;
    }
  }
  if (*(long *)(lVar6 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar15;
}

