
/* v8::internal::compiler::ExecuteTurbofanWasmCompilation(v8::internal::wasm::WasmEngine*,
   v8::internal::wasm::CompilationEnv*, v8::internal::wasm::FunctionBody const&, int,
   v8::internal::Counters*, v8::internal::wasm::WasmFeatures*) */

void v8::internal::compiler::ExecuteTurbofanWasmCompilation
               (WasmEngine *param_1,CompilationEnv *param_2,FunctionBody *param_3,int param_4,
               Counters *param_5,WasmFeatures *param_6)

{
  undefined4 *puVar1;
  long lVar2;
  AccountingAllocator *this;
  long lVar3;
  bool bVar4;
  byte *pbVar5;
  uint uVar6;
  CompilationEnv **ppCVar7;
  MachineGraph *pMVar8;
  void *pvVar9;
  byte bVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  int iVar13;
  long *plVar14;
  undefined8 uVar15;
  Zone *this_00;
  Signature *pSVar16;
  CompilationEnv *pCVar17;
  Graph *pGVar18;
  Graph *this_01;
  Graph *pGVar19;
  SourcePositionTable *this_02;
  ulong uVar20;
  NodeOriginTable *in_x7;
  undefined8 *in_x8;
  char *pcVar21;
  undefined8 *puVar22;
  long *plVar23;
  long lVar24;
  size_t __n;
  Graph *pGVar25;
  CompilationEnv *pCVar26;
  CompilationEnv *pCVar27;
  CompilationEnv *pCVar28;
  CompilationEnv *pCVar29;
  undefined1 auVar30 [16];
  undefined8 in_stack_fffffffffffffc50;
  undefined4 uVar31;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 local_340;
  char *pcStack_338;
  byte **local_2a0;
  byte *local_298;
  char *local_290;
  undefined8 local_288;
  CompilationEnv **local_280;
  MachineGraph *local_278;
  CompilationEnv *pCStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  char local_220;
  undefined1 local_21f;
  undefined1 local_21e;
  long *local_218;
  undefined8 uStack_210;
  SourcePositionTable *local_208;
  void *local_200;
  undefined2 local_138 [8];
  Graph *local_128;
  long lStack_120;
  undefined8 *local_f8;
  long lStack_f0;
  byte local_e8;
  undefined7 uStack_e7;
  undefined8 *local_e0;
  undefined8 *local_d8;
  long local_d0;
  long local_c0;
  ulong local_b8;
  long local_b0;
  long local_a0;
  long local_78;
  
  uVar31 = (undefined4)((ulong)in_stack_fffffffffffffc50 >> 0x20);
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  if (DAT_01d46090 == (byte *)0x0) {
    plVar14 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d46090 = (byte *)(**(code **)(*plVar14 + 0x10))(plVar14,"disabled-by-default-v8.wasm");
  }
  pbVar5 = DAT_01d46090;
  local_2a0 = (byte **)0x0;
  if ((*DAT_01d46090 & 5) != 0) {
    local_f8 = (undefined8 *)(long)param_4;
    lStack_f0 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10);
    local_340 = "func_index";
    pcStack_338 = "body_size";
    local_138[0] = 0x303;
    local_280 = (CompilationEnv **)0x0;
    local_278 = (MachineGraph *)0x0;
    plVar14 = (long *)tracing::TraceEventHelper::GetTracingController();
    puVar22 = &local_340;
    in_x7 = (NodeOriginTable *)0x2;
    uVar15 = (**(code **)(*plVar14 + 0x18))
                       (plVar14,0x58,pbVar5,"ExecuteTurbofanCompilation",0,0,0,2,puVar22,local_138,
                        &local_f8,&local_280,0);
    pMVar8 = local_278;
    uVar31 = (undefined4)((ulong)puVar22 >> 0x20);
    local_278 = (MachineGraph *)0x0;
    if (pMVar8 != (MachineGraph *)0x0) {
      (**(code **)(*(long *)pMVar8 + 8))();
    }
    ppCVar7 = local_280;
    local_280 = (CompilationEnv **)0x0;
    if (ppCVar7 != (CompilationEnv **)0x0) {
      (**(code **)(*ppCVar7 + 8))();
    }
    local_2a0 = &local_298;
    local_290 = "ExecuteTurbofanCompilation";
    local_298 = pbVar5;
    local_288 = uVar15;
  }
  this = (AccountingAllocator *)(param_1 + 0x58);
  Zone::Zone((Zone *)local_138,this,"../../src/compiler/wasm-compiler.cc:6857");
  if ((ulong)(lStack_120 - (long)local_128) < 0x168) {
    pGVar18 = (Graph *)Zone::NewExpand((Zone *)local_138,0x168);
  }
  else {
    pGVar18 = local_128;
    local_128 = local_128 + 0x168;
  }
  if ((ulong)(lStack_120 - (long)local_128) < 0x40) {
    pGVar25 = (Graph *)Zone::NewExpand((Zone *)local_138,0x40);
  }
  else {
    pGVar25 = local_128;
    local_128 = local_128 + 0x40;
  }
  Graph::Graph(pGVar25,(Zone *)local_138);
  if ((ulong)(lStack_120 - (long)local_128) < 0x10) {
    this_01 = (Graph *)Zone::NewExpand((Zone *)local_138,0x10);
  }
  else {
    this_01 = local_128;
    local_128 = local_128 + 0x10;
  }
  CommonOperatorBuilder::CommonOperatorBuilder((CommonOperatorBuilder *)this_01,(Zone *)local_138);
  if ((ulong)(lStack_120 - (long)local_128) < 0x28) {
    pGVar19 = (Graph *)Zone::NewExpand((Zone *)local_138,0x28);
  }
  else {
    pGVar19 = local_128;
    local_128 = local_128 + 0x28;
  }
  uVar12 = InstructionSelector::SupportedMachineOperatorFlags();
  auVar30 = InstructionSelector::AlignmentRequirements();
  MachineOperatorBuilder::MachineOperatorBuilder
            ((MachineOperatorBuilder *)pGVar19,local_138,5,uVar12,auVar30._0_8_,
             auVar30._8_8_ & 0xffffffff);
  *(Graph **)pGVar18 = pGVar25;
  *(Graph **)(pGVar18 + 8) = this_01;
  *(Graph **)(pGVar18 + 0x10) = pGVar19;
  uVar15 = *(undefined8 *)pGVar25;
  *(undefined8 *)(pGVar18 + 0x20) = 0;
  *(undefined8 *)(pGVar18 + 0x28) = 0x100;
  *(undefined8 *)(pGVar18 + 0x40) = 0;
  *(undefined8 *)(pGVar18 + 0x48) = 0x100;
  *(undefined8 *)(pGVar18 + 0x60) = 0;
  *(undefined8 *)(pGVar18 + 0x68) = 0x100;
  *(undefined8 *)(pGVar18 + 0x80) = 0;
  *(undefined8 *)(pGVar18 + 0x88) = 0x100;
  *(undefined8 *)(pGVar18 + 0xa0) = 0;
  *(undefined8 *)(pGVar18 + 0xa8) = 0x100;
  *(undefined8 *)(pGVar18 + 0xc0) = 0;
  *(undefined8 *)(pGVar18 + 200) = 0x100;
  *(undefined8 *)(pGVar18 + 0xe0) = 0;
  *(undefined8 *)(pGVar18 + 0xe8) = 0x100;
  *(undefined8 *)(pGVar18 + 0x100) = 0;
  *(undefined8 *)(pGVar18 + 0x108) = 0x100;
  *(undefined8 *)(pGVar18 + 0x120) = 0;
  *(undefined8 *)(pGVar18 + 0x128) = 0x100;
  *(undefined8 *)(pGVar18 + 0x140) = 0;
  *(undefined8 *)(pGVar18 + 0x148) = 0x100;
  local_280 = &pCStack_270;
  *(undefined8 *)(pGVar18 + 0x18) = 0;
  *(undefined8 *)(pGVar18 + 0x38) = 0;
  *(undefined8 *)(pGVar18 + 0x58) = 0;
  *(undefined8 *)(pGVar18 + 0x78) = 0;
  *(undefined8 *)(pGVar18 + 0x98) = 0;
  *(undefined8 *)(pGVar18 + 0xb8) = 0;
  *(undefined8 *)(pGVar18 + 0xd8) = 0;
  *(undefined8 *)(pGVar18 + 0xf8) = 0;
  *(undefined8 *)(pGVar18 + 0x118) = 0;
  *(undefined8 *)(pGVar18 + 0x138) = 0;
  *(undefined8 *)(pGVar18 + 0x158) = uVar15;
  *(undefined8 *)(pGVar18 + 0x160) = 0;
  local_278 = (MachineGraph *)0x18;
  iVar13 = SNPrintF(local_280,0x18,"wasm-function#%d",param_4);
  __n = (size_t)iVar13;
  uVar20 = __n + 7 & 0xfffffffffffffff8;
  if ((ulong)(lStack_120 - (long)local_128) < uVar20) {
    pGVar25 = (Graph *)Zone::NewExpand((Zone *)local_138,uVar20);
  }
  else {
    pGVar25 = local_128;
    local_128 = local_128 + uVar20;
  }
  memcpy(pGVar25,local_280,__n);
  OptimizedCompilationInfo::OptimizedCompilationInfo
            ((OptimizedCompilationInfo *)&local_340,pGVar25,__n,local_138,5);
  uVar6 = (uint)local_340;
  if (param_2[9] != (CompilationEnv)0x0) {
    local_340 = (char *)((ulong)local_340 | 0x40000);
  }
  if ((uVar6 >> 0xd & 1) == 0) {
    pGVar25 = (Graph *)0x0;
  }
  else {
    TurboCfgFile::TurboCfgFile((TurboCfgFile *)&local_280,(Isolate *)0x0);
    local_f8 = &local_340;
    operator<<((basic_ostream *)&local_280,(AsC1VCompilation *)&local_f8);
    TurboCfgFile::~TurboCfgFile((TurboCfgFile *)&local_280);
    pGVar25 = (Graph *)0x0;
    if ((local_340._1_1_ >> 5 & 1) != 0) {
      if ((ulong)(lStack_120 - (long)local_128) < 0x58) {
        pGVar25 = (Graph *)Zone::NewExpand((Zone *)local_138,0x58);
      }
      else {
        pGVar25 = local_128;
        local_128 = local_128 + 0x58;
      }
      NodeOriginTable::NodeOriginTable((NodeOriginTable *)pGVar25,*(Graph **)pGVar18);
    }
  }
  this_00 = (Zone *)**(undefined8 **)pGVar18;
  this_02 = *(SourcePositionTable **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_02) < 0x38) {
    this_02 = (SourcePositionTable *)Zone::NewExpand(this_00,0x38);
  }
  else {
    *(SourcePositionTable **)(this_00 + 0x10) = this_02 + 0x38;
  }
  SourcePositionTable::SourcePositionTable(this_02,*(Graph **)pGVar18);
  local_218 = *(long **)param_3;
  local_280 = (CompilationEnv **)**(undefined8 **)pGVar18;
  local_228 = 0;
  uStack_260 = 0;
  local_268 = 0;
  uStack_250 = 0;
  local_258 = 0;
  uStack_240 = 0;
  local_248 = 0;
  uStack_230 = 0;
  local_238 = 0;
  pcVar21 = (char *)local_218[2];
  if (pcVar21 != pcVar21 + local_218[1] + *local_218) {
    lVar24 = *local_218 + local_218[1];
    do {
      if (*pcVar21 == '\x05') {
        local_220 = '\x01';
        goto LAB_01328324;
      }
      lVar24 = lVar24 + -1;
      pcVar21 = pcVar21 + 1;
    } while (lVar24 != 0);
  }
  local_220 = '\0';
LAB_01328324:
  local_21f = 0;
  uStack_210 = 0;
  local_200 = (void *)0x0;
  local_21e = FLAG_untrusted_code_mitigations;
  local_278 = (MachineGraph *)pGVar18;
  pCStack_270 = param_2;
  local_208 = this_02;
  wasm::BuildTFGraph((wasm *)this,(AccountingAllocator *)(param_2 + 0x20),*(WasmFeatures **)param_2,
                     (WasmModule *)&local_280,(WasmGraphBuilder *)param_6,(WasmFeatures *)param_3,
                     pGVar25,in_x7);
  puVar11 = local_d8;
  bVar10 = local_e8;
  bVar4 = false;
  puVar22 = (undefined8 *)(ulong)(local_e8 >> 1);
  if ((local_e8 & 1) != 0) {
    puVar22 = local_e0;
  }
  if (puVar22 == (undefined8 *)0x0) {
    WasmGraphBuilder::LowerInt64((WasmGraphBuilder *)&local_280,0);
    if ((local_220 != '\0') && (param_2[0x24] != (CompilationEnv)0x0)) {
      pSVar16 = (Signature *)FUN_0131eb2c(**(undefined8 **)pGVar18,*(undefined8 *)param_3,0);
      SimdScalarLowering::SimdScalarLowering
                ((SimdScalarLowering *)&local_f8,(MachineGraph *)pGVar18,pSVar16);
      SimdScalarLowering::LowerGraph((SimdScalarLowering *)&local_f8);
      if ((long)local_d8 - (long)local_e0 != 0) {
        plVar14 = (long *)((long)local_e0 + (local_b8 >> 5 & 0x7fffffffffffff8));
        lVar24 = *plVar14 + (local_b8 & 0xff) * 0x10;
        lVar2 = *(long *)((long)local_e0 + (local_b0 + local_b8 >> 5 & 0x7fffffffffffff8)) +
                (local_b0 + local_b8 & 0xff) * 0x10;
        while (lVar2 != lVar24) {
          while (lVar24 = lVar24 + 0x10, lVar24 - *plVar14 == 0x1000) {
            plVar14 = plVar14 + 1;
            lVar24 = *plVar14;
            if (lVar2 == lVar24) goto LAB_01328430;
          }
        }
      }
LAB_01328430:
      uVar20 = (long)local_d8 - (long)local_e0 >> 3;
      local_b0 = 0;
      if (2 < uVar20) {
        plVar23 = (long *)*local_e0;
        plVar14 = (long *)local_a0;
        if (local_a0 != 0) goto LAB_01328488;
        do {
          plVar14 = plVar23;
          plVar14[1] = 0x100;
          *plVar14 = local_a0;
          local_a0 = (long)plVar14;
          do {
            local_e0 = local_e0 + 1;
            uVar20 = (long)local_d8 - (long)local_e0 >> 3;
            if (uVar20 < 3) goto LAB_01328498;
            plVar23 = (long *)*local_e0;
            if (plVar14 == (long *)0x0) break;
LAB_01328488:
          } while (0x100 < *(ulong *)((long)plVar14 + 8));
        } while( true );
      }
LAB_01328498:
      if (uVar20 == 1) {
        local_b8 = 0x80;
      }
      else if (uVar20 == 2) {
        local_b8 = 0x100;
      }
      if (local_e0 != local_d8) {
        plVar23 = (long *)*local_e0;
        puVar22 = local_e0;
        plVar14 = (long *)local_a0;
        if (local_a0 != 0) goto LAB_013284f8;
        do {
          plVar14 = plVar23;
          plVar14[1] = 0x100;
          *plVar14 = local_a0;
          local_a0 = (long)plVar14;
          do {
            puVar22 = puVar22 + 1;
            if (local_d8 == puVar22) {
              if ((long)local_d8 - (long)local_e0 != 0) {
                local_d8 = local_d8 +
                           (((long)local_d8 - (long)local_e0) - 8U >> 3 ^ 0xffffffffffffffff);
              }
              goto LAB_01328528;
            }
            plVar23 = (long *)*puVar22;
            if (plVar14 == (long *)0x0) break;
LAB_013284f8:
          } while (0x100 < *(ulong *)((long)plVar14 + 8));
        } while( true );
      }
LAB_01328528:
      plVar14 = (long *)CONCAT71(uStack_e7,local_e8);
      if (((plVar14 != (long *)0x0) && (0xf < (ulong)(local_d0 - (long)plVar14))) &&
         ((uVar20 = local_d0 - (long)plVar14 >> 3, local_c0 == 0 ||
          (*(ulong *)(local_c0 + 8) <= uVar20)))) {
        plVar14[1] = uVar20;
        *plVar14 = local_c0;
      }
    }
    bVar4 = true;
    if ((FLAG_trace_wasm_ast_start <= param_4) && (param_4 < FLAG_trace_wasm_ast_end)) {
      wasm::PrintRawWasmCode(this,param_3,*(undefined8 *)param_2,0);
      bVar4 = true;
    }
  }
  if ((bVar10 & 1) != 0) {
    operator_delete(puVar11);
  }
  pvVar9 = local_200;
  local_200 = (void *)0x0;
  if (pvVar9 != (void *)0x0) {
    operator_delete(pvVar9);
  }
  if (bVar4) {
    if (pGVar25 != (Graph *)0x0) {
      NodeOriginTable::AddDecorator((NodeOriginTable *)pGVar25);
    }
    uVar15 = GetWasmCallDescriptor(local_138,*(undefined8 *)param_3,0,0);
    if (*(char *)(*(long *)(pGVar18 + 0x10) + 0x10) == '\x04') {
      uVar15 = FUN_01328d00(local_138,uVar15,2,0x405);
    }
    uStack_358 = *(undefined8 *)(param_3 + 8);
    local_360 = *(undefined8 *)param_3;
    uStack_348 = *(undefined8 *)(param_3 + 0x18);
    uStack_350 = *(undefined8 *)(param_3 + 0x10);
    Pipeline::GenerateCodeForWasmFunction
              (&local_340,param_1,pGVar18,uVar15,this_02,pGVar25,&local_360,*(undefined8 *)param_2,
               CONCAT44(uVar31,param_4));
    Histogram::AddSample((int)param_5 + 0x620);
    OptimizedCompilationInfo::ReleaseWasmCompilationResult();
    ppCVar7 = local_280;
    if (local_280 == (CompilationEnv **)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(result) != nullptr");
    }
    pCVar17 = *local_280;
    pCVar27 = local_280[3];
    pCVar26 = local_280[2];
    in_x8[1] = local_280[1];
    *in_x8 = pCVar17;
    in_x8[3] = pCVar27;
    in_x8[2] = pCVar26;
    pCVar17 = local_280[6];
    pCVar27 = local_280[9];
    pCVar26 = local_280[8];
    pCVar29 = local_280[5];
    pCVar28 = local_280[4];
    in_x8[7] = local_280[7];
    in_x8[6] = pCVar17;
    in_x8[9] = pCVar27;
    in_x8[8] = pCVar26;
    in_x8[5] = pCVar29;
    in_x8[4] = pCVar28;
    pCVar17 = local_280[10];
    local_280[10] = (CompilationEnv *)0x0;
    in_x8[0xb] = local_280[0xb];
    in_x8[10] = pCVar17;
    pCVar17 = local_280[0xc];
    local_280[0xc] = (CompilationEnv *)0x0;
    in_x8[0xd] = local_280[0xd];
    in_x8[0xc] = pCVar17;
    pCVar17 = local_280[0xe];
    local_280[0xe] = (CompilationEnv *)0x0;
    in_x8[0xf] = local_280[0xf];
    in_x8[0xe] = pCVar17;
    puVar1 = (undefined4 *)((long)local_280 + 0x83);
    uVar31 = *(undefined4 *)(local_280 + 0x10);
    local_280 = (CompilationEnv **)0x0;
    *(undefined4 *)((long)in_x8 + 0x83) = *puVar1;
    *(undefined4 *)(in_x8 + 0x10) = uVar31;
    pCVar17 = ppCVar7[0xe];
    ppCVar7[0xe] = (CompilationEnv *)0x0;
    if (pCVar17 != (CompilationEnv *)0x0) {
      operator_delete__(pCVar17);
    }
    pCVar17 = ppCVar7[0xc];
    ppCVar7[0xc] = (CompilationEnv *)0x0;
    if (pCVar17 != (CompilationEnv *)0x0) {
      operator_delete__(pCVar17);
    }
    pCVar17 = ppCVar7[10];
    ppCVar7[10] = (CompilationEnv *)0x0;
    if (pCVar17 != (CompilationEnv *)0x0) {
      operator_delete__(pCVar17);
    }
    operator_delete(ppCVar7);
  }
  else {
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
  }
  OptimizedCompilationInfo::~OptimizedCompilationInfo((OptimizedCompilationInfo *)&local_340);
  Zone::~Zone((Zone *)local_138);
  if ((local_2a0 != (byte **)0x0) && (*local_298 != 0)) {
    plVar14 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar14 + 0x28))(plVar14,local_298,local_290,local_288);
  }
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

