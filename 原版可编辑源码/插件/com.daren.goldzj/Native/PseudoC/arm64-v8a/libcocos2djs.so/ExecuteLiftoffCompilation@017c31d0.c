
/* WARNING: Removing unreachable block (ram,0x017c3ab0) */
/* WARNING: Removing unreachable block (ram,0x017c34e0) */
/* WARNING: Removing unreachable block (ram,0x017c3af0) */
/* v8::internal::wasm::ExecuteLiftoffCompilation(v8::internal::AccountingAllocator*,
   v8::internal::wasm::CompilationEnv*, v8::internal::wasm::FunctionBody const&, int,
   v8::internal::Counters*, v8::internal::wasm::WasmFeatures*) */

void __thiscall
v8::internal::wasm::ExecuteLiftoffCompilation
          (wasm *this,AccountingAllocator *param_1,CompilationEnv *param_2,FunctionBody *param_3,
          int param_4,Counters *param_5,WasmFeatures *param_6)

{
  undefined8 *****pppppuVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  uint uVar6;
  ulong *puVar7;
  byte *pbVar8;
  void *pvVar9;
  undefined **ppuVar10;
  ulong *puVar11;
  undefined4 uVar12;
  long *plVar13;
  undefined8 uVar14;
  CallDescriptor *this_00;
  ulong *puVar15;
  char *pcVar16;
  ulong *in_x8;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong *puVar20;
  ulong uVar21;
  ulong *puVar22;
  long lVar23;
  int iVar24;
  ushort uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  undefined1 auVar29 [16];
  long *local_698;
  ulong local_690;
  WasmInstructionBuffer *local_688;
  ushort local_680 [4];
  undefined8 local_678;
  TimedHistogram *local_670;
  Isolate *local_668;
  byte **local_660;
  byte *local_658;
  char *local_650;
  undefined8 local_648;
  undefined8 local_640;
  char *pcStack_638;
  ulong local_630;
  ulong uStack_628;
  ulong local_620;
  ulong local_618;
  ulong local_610;
  ulong uStack_608;
  undefined4 local_600;
  undefined4 uStack_5fc;
  ulong local_5f8;
  void *pvStack_5f0;
  undefined8 local_5e8;
  void *pvStack_5e0;
  ulong local_5d8;
  ulong *puStack_5d0;
  ulong local_5c8;
  undefined4 local_5c0;
  undefined1 uStack_5bc;
  undefined1 local_5bb;
  undefined1 local_5ba;
  undefined **local_5b0;
  long *local_5a8;
  ulong local_5a0;
  ulong uStack_598;
  int local_590;
  undefined4 local_588;
  ulong local_580;
  ulong local_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined4 local_560 [2];
  Counters *local_558;
  Signature *local_550;
  ZoneVector *local_548;
  long *plStack_540;
  long local_538 [2];
  int local_528;
  int local_518;
  ConstantPool aCStack_400 [128];
  uint local_380;
  undefined8 ****local_378 [48];
  uint local_1f8;
  char local_1f4;
  undefined8 local_1f0;
  undefined4 local_1e8;
  CallDescriptor *local_1e0;
  AccountingAllocator *local_1d8;
  undefined8 local_1d0;
  char local_1c8;
  long local_1c0;
  long local_1b8;
  undefined8 uStack_1b0;
  SourcePositionTableBuilder aSStack_1a8 [56];
  ulong *local_170;
  ulong *puStack_168;
  ulong *local_160;
  long *local_158;
  long *local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 local_12c;
  long *local_128;
  int local_120;
  long local_118;
  long local_110;
  undefined8 uStack_108;
  long *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  long *local_e0;
  long local_d8;
  long lStack_d0;
  undefined8 local_c8;
  long *local_c0;
  long local_b8;
  long lStack_b0;
  long local_78;
  
  uVar21 = (ulong)(uint)param_4;
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  if (DAT_01d524b8 == (byte *)0x0) {
    plVar13 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d524b8 = (byte *)(**(code **)(*plVar13 + 0x10))(plVar13,"disabled-by-default-v8.wasm");
  }
  pbVar8 = DAT_01d524b8;
  local_660 = (byte **)0x0;
  iVar24 = (int)uVar2 - (int)uVar14;
  if ((*DAT_01d524b8 & 5) != 0) {
    local_b8 = (long)(int)param_3;
    lStack_b0 = (long)iVar24;
    local_640 = "func_index";
    pcStack_638 = "body_size";
    local_680[0] = 0x303;
    local_5b0 = (undefined **)0x0;
    local_5a8 = (long *)0x0;
    plVar13 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar14 = (**(code **)(*plVar13 + 0x18))
                       (plVar13,0x58,pbVar8,"ExecuteLiftoffCompilation",0,0,0,2,&local_640,local_680
                        ,&local_b8,&local_5b0,0);
    plVar13 = local_5a8;
    local_5a8 = (long *)0x0;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    ppuVar10 = local_5b0;
    local_5b0 = (undefined **)0x0;
    if (ppuVar10 != (undefined **)0x0) {
      (**(code **)(*ppuVar10 + 8))();
    }
    local_660 = &local_658;
    local_650 = "ExecuteLiftoffCompilation";
    local_658 = pbVar8;
    local_648 = uVar14;
  }
  Zone::Zone((Zone *)&local_b8,(AccountingAllocator *)this,"LiftoffCompilationZone");
  if (param_1 == (AccountingAllocator *)0x0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(undefined8 *)param_1;
  }
  this_00 = (CallDescriptor *)compiler::GetWasmCallDescriptor(&local_b8,*(undefined8 *)param_2,0,0);
  local_670 = (TimedHistogram *)(uVar21 + 0x12d0);
  local_680[0] = CONCAT11(local_680[0]._1_1_,1);
  local_668 = (Isolate *)0x0;
  local_678 = 0;
  TimedHistogram::Start(local_670,(ElapsedTimer *)&local_678,(Isolate *)0x0);
  auVar29 = WasmCodeManager::EstimateLiftoffCodeSize(iVar24);
  WasmInstructionBuffer::New
            ((WasmInstructionBuffer *)((ulong)(auVar29._0_8_ << 2) / 3 + 0x80),auVar29._8_8_);
  WasmInstructionBuffer::CreateView();
  uStack_598 = *(ulong *)(param_2 + 0x18);
  local_5a8 = *(long **)(param_2 + 0x10);
  local_590 = *(int *)(param_2 + 8);
  local_550 = *(Signature **)param_2;
  local_588 = 0;
  local_580 = 0;
  local_578 = 0;
  local_570 = 0;
  local_560[0] = *(undefined4 *)(param_1 + 0x20);
  local_548 = (ZoneVector *)0x0;
  local_5b0 = &PTR_FUN_01cdafc8;
  local_640 = (char *)local_698;
  local_5a0 = (ulong)local_5a8;
  uStack_568 = uVar14;
  local_558 = param_5;
  plStack_540 = &local_b8;
  LiftoffAssembler::LiftoffAssembler((LiftoffAssembler *)local_538,&local_640);
  plVar13 = (long *)local_640;
  local_640 = (char *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  local_1e8 = 0;
  local_1d0 = 0;
  local_1c8 = '\0';
  local_1c0 = 0;
  uStack_1b0 = 0;
  local_1b8 = 0;
  local_1e0 = this_00;
  local_1d8 = param_1;
  SourcePositionTableBuilder::SourcePositionTableBuilder(aSStack_1a8,2);
  local_158 = &local_b8;
  local_548 = (ZoneVector *)&local_118;
  local_c8 = 0;
  lStack_d0 = 0;
  local_d8 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  uStack_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  local_12c = 0;
  uStack_138 = 0;
  local_140 = 0;
  local_148 = 0;
  local_160 = (ulong *)0x0;
  puStack_168 = (ulong *)0x0;
  local_170 = (ulong *)0x0;
  local_150 = local_158;
  local_128 = local_158;
  local_100 = local_158;
  local_e0 = local_158;
  local_c0 = local_158;
  if (uStack_598 < local_5a0) {
    pcVar16 = "function body end < start";
LAB_017c3500:
    Decoder::error((Decoder *)&local_5b0,pcVar16);
  }
  else {
    WasmDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1>::DecodeLocals
              ((WasmFeatures *)local_560,(Decoder *)&local_5b0,local_550,local_548);
    uVar18 = local_110 - local_118;
    uVar6 = (uint)uVar18;
    LiftoffAssembler::set_num_locals((LiftoffAssembler *)local_538,uVar6);
    if (0 < (int)uVar6) {
      uVar17 = 0;
      do {
        pppppuVar1 = local_378;
        if (8 < local_380) {
          pppppuVar1 = (undefined8 *****)local_378[0];
        }
        *(undefined1 *)((long)pppppuVar1 + uVar17) = *(undefined1 *)(local_118 + uVar17);
        uVar17 = uVar17 + 1;
      } while ((uVar18 & 0xffffffff) != uVar17);
    }
    FUN_017c3ef8(&local_5b0);
    lVar3 = local_1b8;
    uVar18 = local_580 >> 1 & 0x7f;
    if ((local_580 & 1) != 0) {
      uVar18 = local_578;
    }
    if (uVar18 == 0) {
      if (local_1f4 == '\0') {
        if (local_1c0 != local_1b8) {
          lVar23 = local_1c0;
          do {
            Assembler::bind((Label *)local_538);
            iVar24 = *(int *)(lVar23 + 0x10);
            if ((iVar24 == 1) && (local_1d8[8] != (AccountingAllocator)0x0)) {
              local_640 = (char *)CONCAT44(local_518 - local_528,*(undefined4 *)(lVar23 + 0x20));
              if (puStack_168 < local_160) {
                *puStack_168 = (ulong)local_640;
                puStack_168 = puStack_168 + 1;
              }
              else {
                std::__ndk1::
                vector<v8::internal::trap_handler::ProtectedInstructionData,std::__ndk1::allocator<v8::internal::trap_handler::ProtectedInstructionData>>
                ::__emplace_back_slow_path<v8::internal::trap_handler::ProtectedInstructionData>
                          ((vector<v8::internal::trap_handler::ProtectedInstructionData,std::__ndk1::allocator<v8::internal::trap_handler::ProtectedInstructionData>>
                            *)&local_170,(ProtectedInstructionData *)&local_640);
              }
            }
            if (local_1d8[9] == (AccountingAllocator)0x0) {
              uVar14 = ExternalReference::wasm_call_trap_callback_for_testing();
              TurboAssembler::CallCFunction((LiftoffAssembler *)local_538,uVar14,0);
              TurboAssembler::LeaveFrame((LiftoffAssembler *)local_538,5);
              uVar18 = (*(ulong *)(local_1e0 + 0x18) & 0xffffffff) * 8 + 8 & 0xffffffff0;
              if (uVar18 != 0) {
                local_640 = (char *)((ulong)local_640 & 0xffffffffffffff00);
                pcStack_638 = (char *)((ulong)pcStack_638 & 0xffffffffffffff00);
                local_618 = CONCAT71(local_618._1_7_,0x13);
                uStack_608 = CONCAT44(uStack_608._4_4_,2);
                local_610 = 0xffffffff;
                local_620 = uVar18;
                TurboAssembler::AddSubMacro
                          ((TurboAssembler *)local_538,&DAT_01a63d04,&DAT_01a63d04,&local_640,0,0);
              }
              Assembler::ret((Assembler *)local_538,(Register *)&DAT_01a63d50);
              Assembler::CheckVeneerPool((Assembler *)local_538,false,false,0x400);
            }
            else {
              uVar18 = *(ulong *)(lVar23 + 0x18);
              if (uVar18 != 0) {
                uVar17 = uVar18 & 0x13f8ffff;
                uVar25 = NEON_uaddlv((ulong)CONCAT13(POPCOUNT((char)(uVar17 >> 0x18)),
                                                     CONCAT12(POPCOUNT((char)(uVar17 >> 0x10)),
                                                              CONCAT11(POPCOUNT((char)(uVar17 >> 8))
                                                                       ,POPCOUNT((char)uVar17)))),1)
                ;
                TurboAssembler::PushCPURegList
                          ((LiftoffAssembler *)local_538,(uint)uVar25 << 0x1f | uVar17,0x40);
                uVar18 = uVar18 >> 0x1d & 0x3fff7fff;
                uVar25 = NEON_uaddlv((ulong)CONCAT13(POPCOUNT((char)(uVar18 >> 0x18)),
                                                     CONCAT12(POPCOUNT((char)(uVar18 >> 0x10)),
                                                              CONCAT11(POPCOUNT((char)(uVar18 >> 8))
                                                                       ,POPCOUNT((char)uVar18)))),1)
                ;
                TurboAssembler::PushCPURegList
                          ((LiftoffAssembler *)local_538,
                           (ulong)((uint)uVar25 << 0x1e) & 0x40000000 | uVar18,0x100000040);
              }
              SourcePositionTableBuilder::AddPosition
                        (aSStack_1a8,(long)(local_518 - local_528),
                         (long)*(int *)(lVar23 + 0x14) * 2 + 2U & 0xffff80007fffffff,0);
              TurboAssembler::Call((TurboAssembler *)local_538,*(undefined4 *)(lVar23 + 0x10),5);
              FUN_017e2778((LiftoffAssembler *)local_538);
              SafepointTableBuilder::DefineSafepoint(&local_150,(LiftoffAssembler *)local_538,0);
              uVar18 = *(ulong *)(lVar23 + 0x18);
              if (uVar18 != 0) {
                uVar17 = uVar18 >> 0x1d & 0x3fff7fff;
                uVar25 = NEON_uaddlv((ulong)CONCAT13(POPCOUNT((char)(uVar17 >> 0x18)),
                                                     CONCAT12(POPCOUNT((char)(uVar17 >> 0x10)),
                                                              CONCAT11(POPCOUNT((char)(uVar17 >> 8))
                                                                       ,POPCOUNT((char)uVar17)))),1)
                ;
                TurboAssembler::PopCPURegList
                          ((LiftoffAssembler *)local_538,
                           (ulong)((uint)uVar25 << 0x1e) & 0x40000000 | uVar17,0x100000040);
                uVar18 = uVar18 & 0x13f8ffff;
                uVar25 = NEON_uaddlv((ulong)CONCAT13(POPCOUNT((char)(uVar18 >> 0x18)),
                                                     CONCAT12(POPCOUNT((char)(uVar18 >> 0x10)),
                                                              CONCAT11(POPCOUNT((char)(uVar18 >> 8))
                                                                       ,POPCOUNT((char)uVar18)))),1)
                ;
                TurboAssembler::PopCPURegList
                          ((LiftoffAssembler *)local_538,(uint)uVar25 << 0x1f | uVar18,0x40);
              }
              if (iVar24 == 0x13) {
                Assembler::b((Assembler *)local_538,*(Label **)(lVar23 + 8));
                Assembler::CheckVeneerPool((Assembler *)local_538,false,false,0x400);
              }
              else {
                TurboAssembler::AssertUnreachable((LiftoffAssembler *)local_538,0x2d);
              }
            }
            lVar23 = lVar23 + 0x28;
          } while (lVar3 != lVar23);
        }
        LiftoffAssembler::PatchPrepareStackFrame((LiftoffAssembler *)local_538,local_120,local_1f8);
        ConstantPool::Check(aCStack_400,1,0,0);
        SafepointTableBuilder::Emit
                  ((SafepointTableBuilder *)&local_150,(Assembler *)local_538,local_1f8 + 7 >> 3);
        uVar18 = local_580 >> 1 & 0x7f;
        if ((local_580 & 1) != 0) {
          uVar18 = local_578;
        }
        if ((uVar18 != 0) || (local_1f4 == '\0')) goto LAB_017c3920;
      }
      if (local_1c8 == '\0') {
        local_1c8 = local_1f4;
        if (FLAG_trace_liftoff != '\0') {
          PrintF("[liftoff] unsupported: %s\n",local_1f0);
        }
        Decoder::errorf((uint)&local_5b0,
                        (char *)(ulong)(uint)(local_590 + ((int)local_5a0 - (int)local_5a8)),
                        "unsupported liftoff operation: %s",local_1f0);
      }
    }
LAB_017c3920:
    if ((ulong)((lStack_d0 - local_d8 >> 5) * -0x1111111111111111) < 2) {
      if (lStack_d0 - local_d8 == 0x1e0) {
        pcVar16 = "function body must end with \"end\" opcode";
        goto LAB_017c3500;
      }
    }
    else {
      Decoder::error((Decoder *)&local_5b0,*(uchar **)(lStack_d0 + -0x1d8),
                     "unterminated control structure");
    }
  }
  if ((char)local_680[0] != '\0') {
    TimedHistogram::Stop(local_670,(ElapsedTimer *)&local_678,local_668);
    local_680[0] = local_680[0] & 0xff00;
  }
  uVar18 = local_580 >> 1 & 0x7f;
  if ((local_580 & 1) != 0) {
    uVar18 = local_578;
  }
  if (uVar18 != 0) {
    if (local_1c8 == '\0') {
      local_1c8 = '\x01';
    }
    (**(code **)(local_538[0] + 0x10))((Assembler *)local_538);
  }
  Histogram::AddSample(param_4 + 0x850);
  if (local_1c8 != '\0') {
    StatsCounterThreadSafe::Increment((StatsCounterThreadSafe *)(uVar21 + 0x2120));
    *(undefined4 *)(in_x8 + 8) = 0;
    in_x8[0xf] = 0;
    *(undefined2 *)((long)in_x8 + 0x84) = 0;
    in_x8[5] = 0;
    in_x8[4] = 0;
    in_x8[7] = 0;
    in_x8[6] = 0;
    in_x8[1] = 0;
    *in_x8 = 0;
    in_x8[3] = 0;
    in_x8[2] = 0;
    in_x8[10] = 0;
    in_x8[9] = 0;
    in_x8[0xc] = 0;
    in_x8[0xb] = 0;
    in_x8[0xe] = 0;
    in_x8[0xd] = 0;
    *(undefined4 *)(in_x8 + 0x10) = 0xffffffff;
    *(undefined1 *)((long)in_x8 + 0x86) = 0;
    goto LAB_017c3c4c;
  }
  StatsCounterThreadSafe::Increment((StatsCounterThreadSafe *)(uVar21 + 0x20e0));
  local_600 = 0;
  uStack_608 = 0;
  local_610 = 0;
  uStack_628 = 0;
  local_630 = 0;
  local_618 = 0;
  local_620 = 0;
  pcStack_638 = (char *)0x0;
  local_640 = (char *)0x0;
  pvStack_5f0 = (void *)0x0;
  local_5f8 = 0;
  pvStack_5e0 = (void *)0x0;
  local_5e8 = 0;
  puStack_5d0 = (void *)0x0;
  local_5d8 = 0;
  local_5c0 = 0xffffffff;
  local_5c8 = 0;
  local_5ba = 0;
  Assembler::GetCode((Assembler *)local_538,(Isolate *)0x0,(CodeDesc *)&local_640,
                     (SafepointTableBuilder *)&local_150,0);
  WasmInstructionBuffer::ReleaseBuffer();
  pvVar9 = pvStack_5f0;
  pvStack_5f0 = (void *)0x0;
  if (pvVar9 != (void *)0x0) {
    operator_delete__(pvVar9);
  }
  SourcePositionTableBuilder::ToSourcePositionTableVector();
  pvVar9 = pvStack_5e0;
  pvStack_5e0 = (void *)0x0;
  if (pvVar9 != (void *)0x0) {
    operator_delete__(pvVar9);
  }
  puVar11 = puStack_168;
  puVar22 = local_170;
  local_5d8 = local_690;
  lVar3 = (long)puStack_168 - (long)local_170;
  uVar21 = lVar3 >> 3;
  if (lVar3 == 0) {
    puVar15 = (ulong *)0x0;
    puVar7 = puStack_5d0;
  }
  else {
    uVar18 = uVar21 << 3;
    if (uVar21 >> 0x3d != 0) {
      uVar18 = 0xffffffffffffffff;
    }
    puVar15 = operator_new__(uVar18);
    puVar7 = puStack_5d0;
  }
  puStack_5d0 = puVar15;
  if (puVar22 != puVar11) {
    uVar18 = (lVar3 - 8U >> 3) + 1;
    puVar15 = puStack_5d0;
    if ((3 < uVar18) &&
       ((lVar3 = (lVar3 - 8U & 0xfffffffffffffff8) + 8,
        (ulong *)((long)puVar22 + lVar3) <= puStack_5d0 ||
        ((ulong *)((long)puStack_5d0 + lVar3) <= puVar22)))) {
      uVar19 = uVar18 & 0x3ffffffffffffffc;
      puVar15 = puVar22 + 2;
      puVar22 = puVar22 + uVar19;
      puVar20 = puStack_5d0 + 2;
      uVar17 = uVar19;
      do {
        puVar5 = puVar15 + -1;
        uVar26 = puVar15[-2];
        uVar28 = puVar15[1];
        uVar27 = *puVar15;
        puVar15 = puVar15 + 4;
        uVar17 = uVar17 - 4;
        puVar20[-1] = *puVar5;
        puVar20[-2] = uVar26;
        puVar20[1] = uVar28;
        *puVar20 = uVar27;
        puVar20 = puVar20 + 4;
      } while (uVar17 != 0);
      puVar15 = puStack_5d0 + uVar19;
      if (uVar18 == uVar19) goto LAB_017c3bd0;
    }
    do {
      puVar20 = puVar22 + 1;
      *puVar15 = *puVar22;
      puVar15 = puVar15 + 1;
      puVar22 = puVar20;
    } while (puVar11 != puVar20);
  }
LAB_017c3bd0:
  if (puVar7 != (void *)0x0) {
    operator_delete__(puVar7);
  }
  local_5e8 = CONCAT44(local_5e8._4_4_,local_1f8 + 7 >> 3);
  local_5c8 = uVar21;
  uVar12 = compiler::CallDescriptor::GetTaggedParameterSlots(this_00);
  local_5e8 = CONCAT44(uVar12,(undefined4)local_5e8);
  local_5bb = 2;
  in_x8[1] = (ulong)pcStack_638;
  *in_x8 = (ulong)local_640;
  in_x8[3] = uStack_628;
  in_x8[2] = local_630;
  in_x8[5] = local_618;
  in_x8[4] = local_620;
  in_x8[7] = uStack_608;
  in_x8[6] = local_610;
  in_x8[0xc] = (ulong)pvStack_5e0;
  in_x8[0xd] = local_5d8;
  in_x8[9] = local_5f8;
  in_x8[8] = CONCAT44(uStack_5fc,local_600);
  in_x8[0xb] = local_5e8;
  in_x8[10] = (ulong)pvStack_5f0;
  in_x8[0xf] = local_5c8;
  in_x8[0xe] = (ulong)puStack_5d0;
  *(uint *)((long)in_x8 + 0x83) =
       CONCAT13(local_5ba,CONCAT12(2,CONCAT11(uStack_5bc,local_5c0._3_1_)));
  *(undefined4 *)(in_x8 + 0x10) = local_5c0;
LAB_017c3c4c:
  FUN_017c3d04(&local_5b0);
  if (local_688 != (WasmInstructionBuffer *)0x0) {
    WasmInstructionBuffer::~WasmInstructionBuffer(local_688);
    operator_delete(local_688);
  }
  if ((char)local_680[0] != '\0') {
    TimedHistogram::Stop(local_670,(ElapsedTimer *)&local_678,local_668);
  }
  Zone::~Zone((Zone *)&local_b8);
  if ((local_660 != (byte **)0x0) && (*local_658 != 0)) {
    plVar13 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar13 + 0x28))(plVar13,local_658,local_650,local_648);
  }
  if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

