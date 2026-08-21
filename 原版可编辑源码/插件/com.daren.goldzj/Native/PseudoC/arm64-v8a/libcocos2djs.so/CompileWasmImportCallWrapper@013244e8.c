
/* v8::internal::compiler::CompileWasmImportCallWrapper(v8::internal::wasm::WasmEngine*,
   v8::internal::wasm::CompilationEnv*, v8::internal::compiler::WasmImportCallKind,
   v8::internal::Signature<v8::internal::wasm::ValueType>*, bool) */

void __thiscall
v8::internal::compiler::CompileWasmImportCallWrapper
          (compiler *param_1_00,compiler *this,long param_1,uint param_4,ulong *param_5,
          ulong param_6)

{
  ulong uVar1;
  long lVar2;
  byte *pbVar3;
  ulong *puVar4;
  void *pvVar5;
  CommonOperatorBuilder *pCVar6;
  undefined4 uVar7;
  long *plVar8;
  undefined8 uVar9;
  Operator *pOVar10;
  ulong uVar11;
  Node *pNVar12;
  Node *pNVar13;
  Node *pNVar14;
  CallDescriptor *pCVar15;
  char *pcVar16;
  long lVar17;
  SourcePositionTable *this_00;
  ulong uVar18;
  ulong uVar19;
  Graph *pGVar20;
  int iVar21;
  CallDescriptor *pCVar22;
  CallDescriptor *pCVar23;
  ulong uVar24;
  undefined1 auVar25 [16];
  ulong local_420 [2];
  CommonOperatorBuilder aCStack_410 [16];
  undefined8 local_400 [4];
  long local_3e0;
  long local_3d8;
  byte **local_3c0;
  byte *local_3b8;
  char *local_3b0;
  undefined8 local_3a8;
  Zone *local_3a0;
  MachineGraph *local_398;
  undefined8 local_390;
  ulong *puStack_388;
  ulong *local_380;
  undefined8 uStack_378;
  Node *local_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined1 local_340;
  undefined1 local_33f;
  undefined1 local_33e;
  ulong *local_338;
  undefined8 uStack_330;
  SourcePositionTable *local_328;
  void *local_320;
  undefined4 local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined4 local_300;
  Graph *local_2f8;
  CommonOperatorBuilder *local_2f0;
  MachineOperatorBuilder *local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a0;
  undefined8 local_198;
  MachineOperatorBuilder aMStack_190 [16];
  char local_180;
  Zone aZStack_168 [16];
  SourcePositionTable *local_158;
  long local_150;
  Node *local_128;
  Node *pNStack_120;
  Node **local_118;
  ulong local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  Node *pNStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined2 uStack_a4;
  undefined1 uStack_a2;
  Node *local_90;
  undefined8 local_88;
  ulong local_80;
  ulong uStack_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  if (((param_4 - 6 & 0xff) < 0x17) && (FLAG_wasm_math_intrinsics != '\0')) {
    CompileWasmMathIntrinsic(param_1_00,this,param_4,param_5);
  }
  else {
    if (DAT_01d46080 == (byte *)0x0) {
      plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
      DAT_01d46080 = (byte *)(**(code **)(*plVar8 + 0x10))(plVar8,"disabled-by-default-v8.wasm");
    }
    pbVar3 = DAT_01d46080;
    local_3c0 = (byte **)0x0;
    if ((*DAT_01d46080 & 5) != 0) {
      local_2f8 = (Graph *)0x0;
      local_2f0 = (CommonOperatorBuilder *)0x0;
      plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
      uVar9 = (**(code **)(*plVar8 + 0x18))
                        (plVar8,0x58,pbVar3,"CompileWasmImportCallWrapper",0,0,0,0,0,0,0,&local_2f8,
                         0);
      pCVar6 = local_2f0;
      local_2f0 = (CommonOperatorBuilder *)0x0;
      if (pCVar6 != (CommonOperatorBuilder *)0x0) {
        (**(code **)(*(long *)pCVar6 + 8))();
      }
      pGVar20 = local_2f8;
      local_2f8 = (Graph *)0x0;
      if (pGVar20 != (Graph *)0x0) {
        (**(code **)(*(long *)pGVar20 + 8))();
      }
      local_3b0 = "CompileWasmImportCallWrapper";
      local_3c0 = &local_3b8;
      local_3b8 = pbVar3;
      local_3a8 = uVar9;
    }
    Zone::Zone(aZStack_168,(AccountingAllocator *)(this + 0x58),
               "../../src/compiler/wasm-compiler.cc:6546");
    Graph::Graph((Graph *)local_400,aZStack_168);
    CommonOperatorBuilder::CommonOperatorBuilder(aCStack_410,aZStack_168);
    uVar7 = InstructionSelector::SupportedMachineOperatorFlags();
    auVar25 = InstructionSelector::AlignmentRequirements();
    MachineOperatorBuilder::MachineOperatorBuilder
              (aMStack_190,aZStack_168,5,uVar7,auVar25._0_8_,auVar25._8_8_ & 0xffffffff);
    this_00 = (SourcePositionTable *)0x0;
    uStack_2e0 = 0;
    local_2a0 = 0;
    uStack_298 = 0;
    local_258 = 0;
    local_260 = 0;
    local_218 = 0;
    local_220 = 0;
    local_1d8 = 0;
    local_1e0 = 0;
    local_420[1] = 0;
    local_2c0 = 0;
    uStack_2b8 = 0;
    local_2d8 = 0;
    uStack_2d0 = 0x100;
    local_2b0 = 0x100;
    local_280 = 0;
    local_290 = 0x100;
    local_270 = 0x100;
    local_278 = 0;
    local_240 = 0;
    local_250 = 0x100;
    local_230 = 0x100;
    local_238 = 0;
    local_200 = 0;
    local_210 = 0x100;
    local_1f0 = 0x100;
    local_1f8 = 0;
    local_1c0 = 0;
    local_1d0 = 0x100;
    local_1b0 = 0x100;
    local_1b8 = 0;
    local_198 = 0;
    local_1a0 = local_400[0];
    local_420[0] = 0;
    local_2f8 = (Graph *)local_400;
    local_2f0 = aCStack_410;
    local_2e8 = aMStack_190;
    if ((param_6 & 1) != 0) {
      if ((ulong)(local_150 - (long)local_158) < 0x38) {
        this_00 = (SourcePositionTable *)Zone::NewExpand(aZStack_168,0x38);
      }
      else {
        this_00 = local_158;
        local_158 = local_158 + 0x38;
      }
      SourcePositionTable::SourcePositionTable(this_00,(Graph *)local_400);
    }
    pGVar20 = local_2f8;
    local_398 = (MachineGraph *)&local_2f8;
    local_300 = *(undefined4 *)(param_1 + 0x20);
    local_390 = 0;
    uStack_378 = 0;
    uStack_368 = 0;
    local_370 = (Node *)0x0;
    uStack_358 = 0;
    uStack_360 = 0;
    uStack_348 = 0;
    local_350 = 0;
    uVar19 = param_5[1];
    pcVar16 = (char *)param_5[2];
    if (pcVar16 != pcVar16 + uVar19 + *param_5) {
      lVar17 = *param_5 + uVar19;
      do {
        if (*pcVar16 == '\x05') {
          local_340 = 1;
          goto LAB_013247b4;
        }
        lVar17 = lVar17 + -1;
        pcVar16 = pcVar16 + 1;
      } while (lVar17 != 0);
    }
    local_340 = 0;
LAB_013247b4:
    local_33f = 0;
    local_33e = FLAG_untrusted_code_mitigations;
    puStack_388 = local_420 + 1;
    local_318 = 1;
    local_380 = local_420;
    iVar21 = (int)uVar19;
    uStack_330 = 0;
    local_320 = (void *)0x0;
    local_310 = 0;
    uStack_308 = 0;
    local_3a0 = aZStack_168;
    local_338 = param_5;
    local_328 = this_00;
    pOVar10 = (Operator *)CommonOperatorBuilder::Start(local_2f0,iVar21 + 4);
    local_128 = (Node *)0x0;
    uVar11 = Graph::NewNode(pGVar20,pOVar10,0,&local_128,false);
    *(ulong *)(*(Graph **)local_398 + 8) = uVar11;
    *puStack_388 = uVar11;
    *local_380 = uVar11;
    pGVar20 = *(Graph **)local_398;
    pOVar10 = (Operator *)
              CommonOperatorBuilder::Parameter
                        (*(CommonOperatorBuilder **)(local_398 + 8),0,(char *)0x0);
    local_128 = *(Node **)(*(Graph **)local_398 + 8);
    local_370 = (Node *)Graph::NewNode(pGVar20,pOVar10,1,&local_128,false);
    pGVar20 = *(Graph **)local_398;
    pOVar10 = (Operator *)
              MachineOperatorBuilder::Load(*(MachineOperatorBuilder **)(local_398 + 0x10),0x707);
    pNVar12 = local_370;
    pNStack_120 = (Node *)MachineGraph::Int32Constant(local_398,0x77);
    local_110 = *puStack_388;
    local_118 = (Node **)*local_380;
    local_128 = pNVar12;
    uVar11 = Graph::NewNode(pGVar20,pOVar10,4,&local_128,false);
    param_4 = param_4 & 0xff;
    *local_380 = uVar11;
    if (param_4 == 1) {
      WasmGraphBuilder::BuildCallToRuntimeWithContext
                ((WasmGraphBuilder *)&local_3a0,0x1cf,uVar11,0,0,local_380,*puStack_388);
      WasmGraphBuilder::TerminateThrow
                ((WasmGraphBuilder *)&local_3a0,(Node *)*local_380,(Node *)*puStack_388);
    }
    else {
      pCVar22 = (CallDescriptor *)(ulong)(iVar21 + 1U);
      pGVar20 = *(Graph **)local_398;
      pOVar10 = (Operator *)
                CommonOperatorBuilder::Parameter
                          (*(CommonOperatorBuilder **)(local_398 + 8),iVar21 + 1U,(char *)0x0);
      local_128 = *(Node **)(*(long *)local_398 + 8);
      pNVar12 = (Node *)Graph::NewNode(pGVar20,pOVar10,1,&local_128,false);
      pNVar13 = (Node *)FUN_0132a264(&local_3a0);
      FUN_01329edc(&local_3a0,0);
      if (param_4 == 0x1d) {
        uVar24 = (ulong)(iVar21 + 7);
        local_118 = &local_90;
        local_128 = (Node *)&local_110;
        if (0x10 < uVar24) {
          pNStack_120 = (Node *)&local_110;
          base::SmallVector<v8::internal::compiler::Node*,16ul>::Grow
                    ((SmallVector<v8::internal::compiler::Node*,16ul> *)&local_128,uVar24);
        }
        pNStack_120 = local_128 + uVar24 * 8;
        pGVar20 = *(Graph **)local_398;
        pOVar10 = (Operator *)
                  CommonOperatorBuilder::NumberConstant
                            (*(CommonOperatorBuilder **)(local_398 + 8),10.0);
        local_90 = (Node *)0x0;
        pNVar14 = (Node *)Graph::NewNode(pGVar20,pOVar10,0,&local_90,false);
        *(Node **)local_128 = pNVar14;
        *(Node **)(local_128 + 8) = pNVar12;
        pNVar12 = (Node *)MachineGraph::Int32Constant(local_398,iVar21);
        *(Node **)(local_128 + 0x10) = pNVar12;
        *(Node **)(local_128 + 0x18) = pNVar13;
        local_88 = 0x1d2c508;
        local_90 = (Node *)&PTR__CallInterfaceDescriptor_01cbd0c0;
        pCVar15 = (CallDescriptor *)
                  Linkage::GetStubCallDescriptor(**(undefined8 **)local_398,&local_90,pCVar22,0,0,2)
        ;
        pNVar12 = local_128;
        puVar4 = local_338;
        if (iVar21 < 1) {
          uVar19 = 4;
        }
        else {
          pCVar23 = (CallDescriptor *)0x0;
          do {
            pCVar22 = pCVar23 + 1;
            pGVar20 = *(Graph **)local_398;
            pOVar10 = (Operator *)
                      CommonOperatorBuilder::Parameter
                                (*(CommonOperatorBuilder **)(local_398 + 8),(int)pCVar22,(char *)0x0
                                );
            local_90 = *(Node **)(*(long *)local_398 + 8);
            uVar9 = Graph::NewNode(pGVar20,pOVar10,1,&local_90,false);
            uVar9 = FUN_0132a350(&local_3a0,uVar9,pCVar23[puVar4[2] + *puVar4]);
            *(undefined8 *)(pNVar12 + (long)pCVar23 * 8 + 0x20) = uVar9;
            pCVar23 = pCVar22;
          } while ((CallDescriptor *)(uVar19 & 0xffffffff) != pCVar22);
          uVar19 = (ulong)((int)pCVar22 + 4);
        }
        uVar24 = -(uVar19 >> 0x1f) & 0xfffffff800000000 | uVar19 << 3;
        *(ulong *)(local_128 + uVar24) = uVar11;
        *(ulong *)(local_128 + uVar24 + 8) = *local_380;
        *(ulong *)(local_128 + uVar24 + 0x10) = *puStack_388;
        pGVar20 = *(Graph **)local_398;
        pOVar10 = (Operator *)
                  CommonOperatorBuilder::Call(*(CommonOperatorBuilder **)(local_398 + 8),pCVar15);
        uVar19 = Graph::NewNode(pGVar20,pOVar10,(int)uVar19 + 3,(Node **)local_128,false);
        if (local_128 != (Node *)&local_110) {
          free(local_128);
        }
      }
      else {
        local_90 = pNVar12;
        if (param_4 == 5) {
          uVar24 = (ulong)(iVar21 + 9);
          local_118 = &local_90;
          local_128 = (Node *)&local_110;
          if (0x10 < uVar24) {
            pNStack_120 = (Node *)&local_110;
            base::SmallVector<v8::internal::compiler::Node*,16ul>::Grow
                      ((SmallVector<v8::internal::compiler::Node*,16ul> *)&local_128,uVar24);
          }
          pNStack_120 = local_128 + uVar24 * 8;
          pGVar20 = *(Graph **)local_398;
          pOVar10 = (Operator *)
                    MachineOperatorBuilder::Load
                              (*(MachineOperatorBuilder **)(local_398 + 0x10),0x707);
          local_88 = MachineGraph::Int32Constant(local_398,0xf);
          uStack_78 = *puStack_388;
          local_80 = *local_380;
          uVar24 = Graph::NewNode(pGVar20,pOVar10,4,&local_90,false);
          *local_380 = uVar24;
          pNVar14 = (Node *)MachineGraph::RelocatableIntPtrConstant(local_398,0x19,5);
          *(Node **)local_128 = pNVar14;
          *(Node **)(local_128 + 8) = pNVar12;
          *(Node **)(local_128 + 0x10) = pNVar13;
          pNVar14 = (Node *)MachineGraph::Int32Constant(local_398,iVar21);
          *(Node **)(local_128 + 0x18) = pNVar14;
          pGVar20 = *(Graph **)local_398;
          pOVar10 = (Operator *)
                    MachineOperatorBuilder::Load
                              (*(MachineOperatorBuilder **)(local_398 + 0x10),0x707);
          local_88 = MachineGraph::Int32Constant(local_398,0xb);
          uStack_78 = *puStack_388;
          local_80 = *local_380;
          local_90 = pNVar12;
          pNVar14 = (Node *)Graph::NewNode(pGVar20,pOVar10,4,&local_90,false);
          *local_380 = (ulong)pNVar14;
          pGVar20 = *(Graph **)local_398;
          pOVar10 = (Operator *)
                    MachineOperatorBuilder::Load
                              (*(MachineOperatorBuilder **)(local_398 + 0x10),0x303);
          local_88 = MachineGraph::Int32Constant(local_398,0x15);
          uStack_78 = *puStack_388;
          local_80 = *local_380;
          local_90 = pNVar14;
          pNVar14 = (Node *)Graph::NewNode(pGVar20,pOVar10,4,&local_90,false);
          *local_380 = (ulong)pNVar14;
          *(Node **)(local_128 + 0x20) = pNVar14;
          pNVar12 = (Node *)FUN_0132b15c(&local_3a0,pNVar12,uVar11,pNVar13);
          *(Node **)(local_128 + 0x28) = pNVar12;
          local_88 = 0x1d2c300;
          local_90 = (Node *)&PTR__CallInterfaceDescriptor_01cbd390;
          pCVar15 = (CallDescriptor *)
                    Linkage::GetStubCallDescriptor
                              (**(undefined8 **)local_398,&local_90,pCVar22,0,0,1);
          pNVar12 = local_128;
          puVar4 = local_338;
          if (iVar21 < 1) {
            uVar19 = 6;
          }
          else {
            pCVar23 = (CallDescriptor *)0x0;
            do {
              pCVar22 = pCVar23 + 1;
              pGVar20 = *(Graph **)local_398;
              pOVar10 = (Operator *)
                        CommonOperatorBuilder::Parameter
                                  (*(CommonOperatorBuilder **)(local_398 + 8),(int)pCVar22,
                                   (char *)0x0);
              local_90 = *(Node **)(*(long *)local_398 + 8);
              uVar9 = Graph::NewNode(pGVar20,pOVar10,1,&local_90,false);
              uVar9 = FUN_0132a350(&local_3a0,uVar9,pCVar23[puVar4[2] + *puVar4]);
              *(undefined8 *)(pNVar12 + (long)pCVar23 * 8 + 0x30) = uVar9;
              pCVar23 = pCVar22;
            } while ((CallDescriptor *)(uVar19 & 0xffffffff) != pCVar22);
            uVar19 = (ulong)((int)pCVar22 + 6);
          }
          uVar18 = -(uVar19 >> 0x1f) & 0xfffffff800000000 | uVar19 << 3;
          *(ulong *)(local_128 + uVar18) = uVar24;
          *(ulong *)(local_128 + uVar18 + 8) = *local_380;
          *(ulong *)(local_128 + uVar18 + 0x10) = *puStack_388;
          pGVar20 = *(Graph **)local_398;
          pOVar10 = (Operator *)
                    CommonOperatorBuilder::Call(*(CommonOperatorBuilder **)(local_398 + 8),pCVar15);
          uVar19 = Graph::NewNode(pGVar20,pOVar10,(int)uVar19 + 3,(Node **)local_128,false);
          if (local_128 != (Node *)&local_110) {
            free(local_128);
          }
        }
        else {
          if (param_4 != 4) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
          uVar24 = (ulong)(iVar21 + 7);
          local_118 = &local_90;
          local_128 = (Node *)&local_110;
          if (0x10 < uVar24) {
            pNStack_120 = (Node *)&local_110;
            base::SmallVector<v8::internal::compiler::Node*,16ul>::Grow
                      ((SmallVector<v8::internal::compiler::Node*,16ul> *)&local_128,uVar24);
          }
          pNStack_120 = local_128 + uVar24 * 8;
          pGVar20 = *(Graph **)local_398;
          pOVar10 = (Operator *)
                    MachineOperatorBuilder::Load
                              (*(MachineOperatorBuilder **)(local_398 + 0x10),0x707);
          local_88 = MachineGraph::Int32Constant(local_398,0xf);
          uStack_78 = *puStack_388;
          local_80 = *local_380;
          uVar24 = Graph::NewNode(pGVar20,pOVar10,4,&local_90,false);
          *local_380 = uVar24;
          *(Node **)local_128 = pNVar12;
          pNVar12 = (Node *)FUN_0132b15c(&local_3a0,pNVar12,uVar11,pNVar13);
          *(Node **)(local_128 + 8) = pNVar12;
          pCVar22 = (CallDescriptor *)
                    Linkage::GetJSCallDescriptor(**(undefined8 **)local_398,0,pCVar22,0);
          pNVar12 = local_128;
          puVar4 = local_338;
          if (iVar21 < 1) {
            uVar19 = 2;
          }
          else {
            uVar18 = 0;
            do {
              uVar1 = uVar18 + 1;
              pGVar20 = *(Graph **)local_398;
              pOVar10 = (Operator *)
                        CommonOperatorBuilder::Parameter
                                  (*(CommonOperatorBuilder **)(local_398 + 8),(int)uVar1,(char *)0x0
                                  );
              local_90 = *(Node **)(*(long *)local_398 + 8);
              uVar9 = Graph::NewNode(pGVar20,pOVar10,1,&local_90,false);
              uVar9 = FUN_0132a350(&local_3a0,uVar9,*(undefined1 *)(puVar4[2] + *puVar4 + uVar18));
              *(undefined8 *)(pNVar12 + uVar18 * 8 + 0x10) = uVar9;
              uVar18 = uVar1;
            } while ((uVar19 & 0xffffffff) != uVar1);
            uVar19 = (ulong)((int)uVar1 + 2);
          }
          uVar18 = -(uVar19 >> 0x1f) & 0xfffffff800000000 | uVar19 << 3;
          *(Node **)(local_128 + uVar18) = pNVar13;
          uVar9 = MachineGraph::Int32Constant(local_398,iVar21);
          *(undefined8 *)(local_128 + uVar18 + 8) = uVar9;
          *(ulong *)(local_128 + uVar18 + 0x10) = uVar24;
          *(ulong *)(local_128 + uVar18 + 0x18) = *local_380;
          *(ulong *)(local_128 + uVar18 + 0x20) = *puStack_388;
          pGVar20 = *(Graph **)local_398;
          pOVar10 = (Operator *)
                    CommonOperatorBuilder::Call(*(CommonOperatorBuilder **)(local_398 + 8),pCVar22);
          uVar19 = Graph::NewNode(pGVar20,pOVar10,(int)uVar19 + 5,(Node **)local_128,false);
          if (local_128 != (Node *)&local_110) {
            free(local_128);
          }
        }
      }
      *local_380 = uVar19;
      if (local_328 != (SourcePositionTable *)0x0) {
        SourcePositionTable::SetSourcePosition(local_328,uVar19,2);
      }
      if (*local_338 < 2) {
        if (*local_338 == 0) {
          pNVar12 = (Node *)MachineGraph::Int32Constant(local_398,0);
        }
        else {
          pNVar12 = (Node *)FUN_013295e8(&local_3a0,uVar19,uVar11,*(undefined1 *)local_338[2]);
        }
        FUN_01329edc(&local_3a0,1);
        local_128 = pNVar12;
        WasmGraphBuilder::Return(&local_3a0,&local_128,1);
      }
      else {
        pNVar12 = (Node *)FUN_0132b39c(&local_3a0,local_338,uVar19,uVar11);
        uVar19 = *local_338;
        local_118 = &pNStack_d0;
        local_128 = (Node *)&local_110;
        if (8 < uVar19) {
          pNStack_120 = (Node *)&local_110;
          base::SmallVector<v8::internal::compiler::Node*,8ul>::Grow
                    ((SmallVector<v8::internal::compiler::Node*,8ul> *)&local_128,uVar19);
        }
        pNStack_120 = local_128 + uVar19 * 8;
        if (*local_338 != 0) {
          iVar21 = 7;
          uVar19 = 1;
          uVar24 = 0;
          do {
            uVar18 = uVar19;
            pCVar22 = (CallDescriptor *)((ulong)pCVar22 & 0xffffffffffff0000 | 0x708);
            pGVar20 = *(Graph **)local_398;
            pOVar10 = (Operator *)
                      MachineOperatorBuilder::Load
                                (*(MachineOperatorBuilder **)(local_398 + 0x10),pCVar22);
            local_88 = MachineGraph::Int32Constant(local_398,iVar21);
            uStack_78 = *puStack_388;
            local_80 = *local_380;
            local_90 = pNVar12;
            uVar19 = Graph::NewNode(pGVar20,pOVar10,4,&local_90,false);
            *local_380 = uVar19;
            uVar9 = FUN_013295e8(&local_3a0,uVar19,uVar11,*(undefined1 *)(local_338[2] + uVar24));
            iVar21 = iVar21 + 4;
            *(undefined8 *)(local_128 + uVar24 * 8) = uVar9;
            uVar19 = (ulong)((int)uVar18 + 1);
            uVar24 = uVar18;
          } while (uVar18 < *local_338);
        }
        FUN_01329edc(&local_3a0,1);
        WasmGraphBuilder::Return(&local_3a0,local_128,(long)pNStack_120 - (long)local_128 >> 3);
        if (local_128 != (Node *)&local_110) {
          free(local_128);
        }
      }
      pcVar16 = (char *)local_338[2];
      if (pcVar16 != pcVar16 + local_338[1] + *local_338) {
        lVar17 = *local_338 + local_338[1];
        do {
          if (*pcVar16 == '\x02') {
            WasmGraphBuilder::LowerInt64((WasmGraphBuilder *)&local_3a0,0);
            break;
          }
          lVar17 = lVar17 + -1;
          pcVar16 = pcVar16 + 1;
        } while (lVar17 != 0);
      }
    }
    uVar9 = GetWasmCallDescriptor(aZStack_168,param_5,0,1);
    if (local_180 == '\x04') {
      uVar9 = FUN_01328d00(aZStack_168,uVar9,2,0x405);
    }
    local_90 = (Node *)CONCAT26(local_90._6_2_,0x10000000000);
    local_88 = 0;
    local_80 = local_80 & 0xffffffffffff0000;
    Pipeline::GenerateCodeForWasmNativeStub
              ((Pipeline *)&local_128,this,uVar9,&local_2f8,7,2,"wasm-to-js",&local_90,this_00);
    pvVar5 = local_320;
    uStack_a2 = 1;
    *(Node **)(param_1_00 + 8) = pNStack_120;
    *(Node **)param_1_00 = local_128;
    *(ulong *)(param_1_00 + 0x18) = local_110;
    *(Node ***)(param_1_00 + 0x10) = local_118;
    *(undefined8 *)(param_1_00 + 0x38) = uStack_f0;
    *(undefined8 *)(param_1_00 + 0x30) = local_f8;
    *(undefined8 *)(param_1_00 + 0x48) = local_e0;
    *(undefined8 *)(param_1_00 + 0x40) = local_e8;
    *(undefined8 *)(param_1_00 + 0x28) = uStack_100;
    *(undefined8 *)(param_1_00 + 0x20) = local_108;
    *(uint *)(param_1_00 + 0x83) = CONCAT13(1,CONCAT21(uStack_a4,uStack_a8._3_1_));
    *(Node **)(param_1_00 + 0x58) = pNStack_d0;
    *(undefined8 *)(param_1_00 + 0x50) = local_d8;
    *(undefined8 *)(param_1_00 + 0x68) = uStack_c0;
    *(undefined8 *)(param_1_00 + 0x60) = uStack_c8;
    *(undefined8 *)(param_1_00 + 0x78) = uStack_b0;
    *(undefined8 *)(param_1_00 + 0x70) = local_b8;
    *(undefined4 *)(param_1_00 + 0x80) = uStack_a8;
    local_320 = (void *)0x0;
    if (pvVar5 != (void *)0x0) {
      operator_delete(pvVar5);
    }
    if (local_3e0 != 0) {
      local_3d8 = local_3e0;
    }
    Zone::~Zone(aZStack_168);
    if ((local_3c0 != (byte **)0x0) && (*local_3b8 != 0)) {
      plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar8 + 0x28))(plVar8,local_3b8,local_3b0,local_3a8);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

