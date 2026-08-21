
/* v8::internal::compiler::CompileCWasmEntry(v8::internal::Isolate*,
   v8::internal::Signature<v8::internal::wasm::ValueType>*) */

undefined8 v8::internal::compiler::CompileCWasmEntry(Isolate *param_1,Signature *param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  OptimizedCompilationJob *pOVar4;
  void *pvVar5;
  undefined4 uVar6;
  int iVar7;
  Zone *pZVar8;
  Operator *pOVar9;
  undefined8 uVar10;
  Node *pNVar11;
  Node *pNVar12;
  Node *pNVar13;
  Node *pNVar14;
  CallDescriptor *pCVar15;
  char *pcVar16;
  Graph *this;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  AccountingAllocator *pAVar23;
  long lVar24;
  ulong uVar25;
  undefined8 uVar26;
  Graph *pGVar27;
  ulong uVar28;
  undefined1 auVar29 [16];
  char *local_438;
  Zone *local_430;
  undefined8 local_428;
  undefined8 local_420;
  CommonOperatorBuilder aCStack_418 [16];
  OptimizedCompilationJob *local_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined4 *local_3f0;
  Zone *local_3e8;
  MachineGraph *local_3e0;
  undefined8 local_3d8;
  undefined8 *puStack_3d0;
  undefined8 *local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined1 local_388;
  undefined1 local_387;
  undefined1 local_386;
  Signature *local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  void *local_368;
  undefined4 local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined4 local_348;
  Graph *local_340;
  CommonOperatorBuilder *pCStack_338;
  MachineOperatorBuilder *local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1e8;
  undefined8 local_1e0;
  MachineOperatorBuilder aMStack_1d8 [40];
  Node *local_1b0;
  Node *local_1a8;
  Node *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  long *local_188;
  undefined8 *local_180;
  undefined8 *local_178;
  long local_170;
  long *local_160;
  ulong local_158;
  long local_150;
  long local_140;
  void *local_120;
  undefined4 local_118;
  undefined1 local_114;
  Node *local_110;
  Node *pNStack_108;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 auStack_78 [8];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  pAVar23 = *(AccountingAllocator **)(param_1 + 0x95d0);
  pZVar8 = operator_new(0x40);
  Zone::Zone(pZVar8,pAVar23,"../../src/compiler/wasm-compiler.cc:6737");
  this = *(Graph **)(pZVar8 + 0x10);
  if ((ulong)(*(long *)(pZVar8 + 0x18) - (long)this) < 0x40) {
    this = (Graph *)Zone::NewExpand(pZVar8,0x40);
  }
  else {
    *(Graph **)(pZVar8 + 0x10) = this + 0x40;
  }
  Graph::Graph(this,pZVar8);
  CommonOperatorBuilder::CommonOperatorBuilder(aCStack_418,pZVar8);
  uVar6 = InstructionSelector::SupportedMachineOperatorFlags();
  auVar29 = InstructionSelector::AlignmentRequirements();
  MachineOperatorBuilder::MachineOperatorBuilder
            (aMStack_1d8,pZVar8,5,uVar6,auVar29._0_8_,auVar29._8_8_ & 0xffffffff);
  local_1e8 = *(undefined8 *)this;
  local_328 = 0;
  uStack_320 = 0;
  local_308 = 0;
  uStack_300 = 0;
  local_318 = 0x100;
  local_2f8 = 0x100;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2d8 = 0x100;
  local_2b8 = 0x100;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_298 = 0x100;
  local_278 = 0x100;
  local_260 = 0;
  local_268 = 0;
  local_248 = 0;
  local_258 = 0x100;
  local_238 = 0x100;
  local_240 = 0;
  local_220 = 0;
  local_228 = 0;
  local_208 = 0;
  local_218 = 0x100;
  local_1f8 = 0x100;
  local_200 = 0;
  local_428 = 0;
  local_420 = 0;
  local_1e0 = 0;
  local_340 = this;
  pCStack_338 = aCStack_418;
  local_330 = aMStack_1d8;
  local_348 = wasm::WasmFeatures::FromIsolate(param_1);
  pGVar27 = local_340;
  local_3e0 = (MachineGraph *)&local_340;
  local_3d8 = 0;
  uStack_3b0 = 0;
  local_3b8 = 0;
  uStack_3c0 = 0;
  uStack_390 = 0;
  local_398 = 0;
  uStack_3a0 = 0;
  local_3a8 = 0;
  pcVar16 = *(char **)(param_2 + 0x10);
  if (pcVar16 != pcVar16 + *(long *)(param_2 + 8) + *(long *)param_2) {
    lVar24 = *(long *)param_2 + *(long *)(param_2 + 8);
    do {
      if (*pcVar16 == '\x05') {
        local_388 = 1;
        goto LAB_01327578;
      }
      lVar24 = lVar24 + -1;
      pcVar16 = pcVar16 + 1;
    } while (lVar24 != 0);
  }
  local_388 = 0;
LAB_01327578:
  local_387 = 0;
  local_386 = FLAG_untrusted_code_mitigations;
  puStack_3d0 = &local_420;
  local_360 = 2;
  local_3c8 = &local_428;
  uStack_378 = 0;
  local_370 = 0;
  local_368 = (void *)0x0;
  local_358 = 0;
  uStack_350 = 0;
  local_3e8 = pZVar8;
  local_380 = param_2;
  pOVar9 = (Operator *)CommonOperatorBuilder::Start(pCStack_338,5);
  local_110 = (Node *)0x0;
  uVar10 = Graph::NewNode(pGVar27,pOVar9,0,&local_110,false);
  *(undefined8 *)(*(Graph **)local_3e0 + 8) = uVar10;
  *puStack_3d0 = uVar10;
  *local_3c8 = uVar10;
  pGVar27 = *(Graph **)local_3e0;
  pOVar9 = (Operator *)
           CommonOperatorBuilder::Parameter
                     (*(CommonOperatorBuilder **)(local_3e0 + 8),0,(char *)0x0);
  local_110 = *(Node **)(*(Graph **)local_3e0 + 8);
  pNVar11 = (Node *)Graph::NewNode(pGVar27,pOVar9,1,&local_110,false);
  pGVar27 = *(Graph **)local_3e0;
  pOVar9 = (Operator *)
           CommonOperatorBuilder::Parameter
                     (*(CommonOperatorBuilder **)(local_3e0 + 8),1,(char *)0x0);
  local_110 = *(Node **)(*(Graph **)local_3e0 + 8);
  pNVar12 = (Node *)Graph::NewNode(pGVar27,pOVar9,1,&local_110,false);
  pGVar27 = *(Graph **)local_3e0;
  pOVar9 = (Operator *)
           CommonOperatorBuilder::Parameter
                     (*(CommonOperatorBuilder **)(local_3e0 + 8),2,(char *)0x0);
  local_110 = *(Node **)(*(Graph **)local_3e0 + 8);
  pNVar13 = (Node *)Graph::NewNode(pGVar27,pOVar9,1,&local_110,false);
  pGVar27 = *(Graph **)local_3e0;
  pOVar9 = (Operator *)
           CommonOperatorBuilder::Parameter
                     (*(CommonOperatorBuilder **)(local_3e0 + 8),3,(char *)0x0);
  local_110 = *(Node **)(*(Graph **)local_3e0 + 8);
  uVar10 = Graph::NewNode(pGVar27,pOVar9,1,&local_110,false);
  pGVar27 = *(Graph **)local_3e0;
  pOVar9 = (Operator *)
           MachineOperatorBuilder::LoadFramePointer(*(MachineOperatorBuilder **)(local_3e0 + 0x10));
  local_110 = (Node *)0x0;
  pNVar14 = (Node *)Graph::NewNode(pGVar27,pOVar9,0,&local_110,false);
  pGVar27 = *(Graph **)local_3e0;
  pOVar9 = (Operator *)
           MachineOperatorBuilder::Store(*(MachineOperatorBuilder **)(local_3e0 + 0x10),5);
  pNStack_108 = (Node *)MachineGraph::Int32Constant(local_3e0,-0x10);
  local_f8 = *local_3c8;
  local_f0 = *puStack_3d0;
  local_110 = pNVar14;
  local_100 = (undefined8 *)uVar10;
  uVar10 = Graph::NewNode(pGVar27,pOVar9,5,&local_110,false);
  local_100 = (undefined8 *)auStack_78;
  *local_3c8 = uVar10;
  uVar28 = (ulong)(*(int *)(local_380 + 8) + 4);
  local_110 = (Node *)&local_f8;
  if (0x10 < uVar28) {
    pNStack_108 = (Node *)&local_f8;
    base::SmallVector<v8::internal::compiler::Node*,16ul>::Grow
              ((SmallVector<v8::internal::compiler::Node*,16ul> *)&local_110,uVar28);
  }
  pNStack_108 = local_110 + uVar28 * 8;
  *(Node **)local_110 = pNVar11;
  *(Node **)(local_110 + 8) = pNVar12;
  lVar24 = *(long *)(local_380 + 8);
  if (lVar24 == 0) {
    uVar28 = 2;
  }
  else {
    lVar18 = *(long *)(local_380 + 0x10);
    lVar17 = *(long *)local_380;
    lVar22 = 0;
    iVar7 = 0;
    do {
      bVar1 = *(byte *)(lVar18 + lVar17 + lVar22);
      pGVar27 = *(Graph **)local_3e0;
      pOVar9 = (Operator *)
               WasmGraphBuilder::GetSafeLoadOperator((WasmGraphBuilder *)&local_3e8,iVar7,bVar1);
      local_1a8 = (Node *)MachineGraph::Int32Constant(local_3e0,iVar7);
      local_198 = *puStack_3d0;
      local_1a0 = (Node *)*local_3c8;
      local_1b0 = pNVar13;
      uVar10 = Graph::NewNode(pGVar27,pOVar9,4,&local_1b0,false);
      *local_3c8 = uVar10;
      uVar2 = bVar1 - 1;
      *(undefined8 *)(local_110 + lVar22 * 8 + 0x10) = uVar10;
      if ((8 < uVar2) || ((0x17fU >> (ulong)(uVar2 & 0x1f) & 1) == 0)) goto LAB_01327f24;
      lVar22 = lVar22 + 1;
      iVar7 = *(int *)(&DAT_01a06360 + (long)(char)uVar2 * 4) + iVar7;
    } while (lVar24 != lVar22);
    uVar28 = (ulong)((int)lVar22 + 2);
  }
  *(undefined8 *)(local_110 + uVar28 * 8) = *local_3c8;
  *(undefined8 *)(local_110 + (ulong)((int)uVar28 + 1) * 8) = *puStack_3d0;
  pCVar15 = (CallDescriptor *)GetWasmCallDescriptor(**(undefined8 **)local_3e0,local_380,0,0);
  pGVar27 = *(Graph **)local_3e0;
  pOVar9 = (Operator *)
           CommonOperatorBuilder::Call(*(CommonOperatorBuilder **)(local_3e0 + 8),pCVar15);
  pNVar11 = (Node *)Graph::NewNode(pGVar27,pOVar9,(int)uVar28 + 2,(Node **)local_110,false);
  *local_3c8 = pNVar11;
  pGVar27 = *(Graph **)local_3e0;
  pOVar9 = (Operator *)CommonOperatorBuilder::IfSuccess(*(CommonOperatorBuilder **)(local_3e0 + 8));
  local_1b0 = pNVar11;
  uVar10 = Graph::NewNode(pGVar27,pOVar9,1,&local_1b0,false);
  pGVar27 = *(Graph **)local_3e0;
  pOVar9 = (Operator *)
           CommonOperatorBuilder::IfException(*(CommonOperatorBuilder **)(local_3e0 + 8));
  local_1b0 = pNVar11;
  local_1a8 = pNVar11;
  pNVar12 = (Node *)Graph::NewNode(pGVar27,pOVar9,2,&local_1b0,false);
  *puStack_3d0 = pNVar12;
  local_1b0 = pNVar12;
  WasmGraphBuilder::Return(&local_3e8,&local_1b0,1);
  *puStack_3d0 = uVar10;
  lVar24 = *(long *)local_380;
  if (lVar24 != 0) {
    lVar22 = *(long *)(local_380 + 0x10);
    uVar28 = 0;
    iVar7 = 0;
    uVar25 = lVar24 - 1;
    do {
      bVar1 = *(byte *)(lVar22 + uVar28);
      pNVar12 = pNVar11;
      if (lVar24 != 1) {
        pGVar27 = *(Graph **)local_3e0;
        pOVar9 = (Operator *)
                 CommonOperatorBuilder::Projection
                           (*(CommonOperatorBuilder **)(local_3e0 + 8),uVar28);
        local_1a8 = (Node *)*puStack_3d0;
        local_1b0 = pNVar11;
        pNVar12 = (Node *)Graph::NewNode(pGVar27,pOVar9,2,&local_1b0,false);
      }
      pGVar27 = *(Graph **)local_3e0;
      pOVar9 = (Operator *)
               WasmGraphBuilder::GetSafeStoreOperator((WasmGraphBuilder *)&local_3e8,iVar7,bVar1);
      local_1a8 = (Node *)MachineGraph::Int32Constant(local_3e0,iVar7);
      local_198 = *local_3c8;
      local_190 = *puStack_3d0;
      local_1b0 = pNVar13;
      local_1a0 = pNVar12;
      uVar10 = Graph::NewNode(pGVar27,pOVar9,5,&local_1b0,false);
      uVar2 = bVar1 - 1;
      *local_3c8 = uVar10;
      if ((8 < uVar2) || ((0x17fU >> (ulong)(uVar2 & 0x1f) & 1) == 0)) {
LAB_01327f24:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      if (uVar25 == uVar28) break;
      uVar28 = uVar28 + 1;
      lVar24 = *(long *)local_380;
      iVar7 = *(int *)(&DAT_01a06360 + (long)(char)uVar2 * 4) + iVar7;
    } while( true );
  }
  local_1b0 = (Node *)MachineGraph::IntPtrConstant(local_3e0,0);
  WasmGraphBuilder::Return(&local_3e8,&local_1b0,1);
  if (*(char *)(*(long *)(local_3e0 + 0x10) + 0x10) == '\x04') {
    pcVar16 = *(char **)(local_380 + 0x10);
    if (pcVar16 != pcVar16 + *(long *)(local_380 + 8) + *(long *)local_380) {
      lVar24 = *(long *)local_380 + *(long *)(local_380 + 8);
      do {
        if (*pcVar16 == '\x02') {
          local_3f0 = &local_118;
          local_114 = 5;
          local_118 = 0x5080505;
          uStack_3f8 = 4;
          local_400 = 1;
          local_408 = (OptimizedCompilationJob *)0x0;
          Int64Lowering::Int64Lowering
                    ((Int64Lowering *)&local_1b0,*(undefined8 **)local_3e0,
                     *(undefined8 *)(local_3e0 + 0x10),*(undefined8 *)(local_3e0 + 8),
                     **(undefined8 **)local_3e0,&local_400,&local_408);
          pOVar4 = local_408;
          local_408 = (OptimizedCompilationJob *)0x0;
          if (pOVar4 != (OptimizedCompilationJob *)0x0) {
            operator_delete(pOVar4);
          }
          Int64Lowering::LowerGraph((Int64Lowering *)&local_1b0);
          pvVar5 = local_120;
          local_120 = (void *)0x0;
          if (pvVar5 != (void *)0x0) {
            operator_delete(pvVar5);
          }
          if ((long)local_178 - (long)local_180 != 0) {
            plVar20 = (long *)((long)local_180 + (local_158 >> 5 & 0x7fffffffffffff8));
            lVar24 = *plVar20 + (local_158 & 0xff) * 0x10;
            lVar22 = *(long *)((long)local_180 + (local_150 + local_158 >> 5 & 0x7fffffffffffff8)) +
                     (local_150 + local_158 & 0xff) * 0x10;
            while (lVar22 != lVar24) {
              while (lVar24 = lVar24 + 0x10, lVar24 - *plVar20 == 0x1000) {
                plVar20 = plVar20 + 1;
                lVar24 = *plVar20;
                if (lVar22 == lVar24) goto LAB_01327c3c;
              }
            }
          }
LAB_01327c3c:
          uVar28 = (long)local_178 - (long)local_180 >> 3;
          local_150 = 0;
          if (2 < uVar28) {
            plVar21 = (long *)*local_180;
            plVar20 = (long *)local_140;
            if (local_140 != 0) goto LAB_01327c98;
            do {
              plVar20 = plVar21;
              plVar20[1] = 0x100;
              *plVar20 = local_140;
              local_140 = (long)plVar20;
              do {
                local_180 = local_180 + 1;
                uVar28 = (long)local_178 - (long)local_180 >> 3;
                if (uVar28 < 3) goto LAB_01327ca8;
                plVar21 = (long *)*local_180;
                if (plVar20 == (long *)0x0) break;
LAB_01327c98:
              } while (0x100 < *(ulong *)((long)plVar20 + 8));
            } while( true );
          }
LAB_01327ca8:
          if (uVar28 == 1) {
            local_158 = 0x80;
          }
          else if (uVar28 == 2) {
            local_158 = 0x100;
          }
          if (local_180 != local_178) {
            plVar21 = (long *)*local_180;
            puVar19 = local_180;
            plVar20 = (long *)local_140;
            if (local_140 != 0) goto LAB_01327d08;
            do {
              plVar20 = plVar21;
              plVar20[1] = 0x100;
              *plVar20 = local_140;
              local_140 = (long)plVar20;
              do {
                puVar19 = puVar19 + 1;
                if (local_178 == puVar19) {
                  if ((long)local_178 - (long)local_180 != 0) {
                    local_178 = local_178 +
                                (((long)local_178 - (long)local_180) - 8U >> 3 ^ 0xffffffffffffffff)
                    ;
                  }
                  goto LAB_01327d3c;
                }
                plVar21 = (long *)*puVar19;
                if (plVar20 == (long *)0x0) break;
LAB_01327d08:
              } while (0x100 < *(ulong *)((long)plVar20 + 8));
            } while( true );
          }
LAB_01327d3c:
          if (((local_188 != (long *)0x0) && (0xf < (ulong)(local_170 - (long)local_188))) &&
             ((uVar28 = local_170 - (long)local_188 >> 3, local_160 == (long *)0x0 ||
              ((ulong)local_160[1] <= uVar28)))) {
            local_188[1] = uVar28;
            *local_188 = (long)local_160;
            local_160 = local_188;
          }
          break;
        }
        lVar24 = lVar24 + -1;
        pcVar16 = pcVar16 + 1;
      } while (lVar24 != 0);
    }
  }
  if (local_110 != (Node *)&local_f8) {
    free(local_110);
  }
  local_100 = &local_400;
  uStack_3f8 = CONCAT62(uStack_3f8._2_6_,5);
  pNStack_108 = (Node *)0x4;
  local_110 = (Node *)0x1;
  local_400 = 0x5070800050005;
  uVar10 = Linkage::GetSimplifiedCDescriptor(pZVar8,&local_110,8);
  pcVar16 = operator_new__(0x80);
  builtin_strncpy(pcVar16,"c-wasm-entry:",0xd);
  wasm::PrintSignature((wasm *)(pcVar16 + 0xd),0x73);
  uVar26 = *(undefined8 *)(param_1 + 0xc770);
  local_438 = pcVar16;
  local_430 = pZVar8;
  AssemblerOptions::Default((AssemblerOptions *)param_1,(Isolate *)0x0,SUB81(param_2,0));
  Pipeline::NewWasmHeapStubCompilationJob
            ((Pipeline *)&local_408,param_1,uVar26,uVar10,&local_430,this,0xb,&local_438,&local_1b0,
             0);
  pcVar16 = local_438;
  local_438 = (char *)0x0;
  if (pcVar16 != (char *)0x0) {
    operator_delete__(pcVar16);
  }
  pZVar8 = local_430;
  local_430 = (Zone *)0x0;
  if (pZVar8 != (Zone *)0x0) {
    Zone::~Zone(pZVar8);
    operator_delete(pZVar8);
  }
  iVar7 = OptimizedCompilationJob::ExecuteJob
                    (local_408,(RuntimeCallStats *)(*(long *)(param_1 + 0x9520) + 0x58a0));
  if ((iVar7 == 1) || (iVar7 = OptimizedCompilationJob::FinalizeJob(local_408,param_1), iVar7 == 1))
  {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(*(long *)(local_408 + 0x18) + 0x28);
  }
  pOVar4 = local_408;
  local_408 = (OptimizedCompilationJob *)0x0;
  if (pOVar4 != (OptimizedCompilationJob *)0x0) {
    (**(code **)(*(long *)pOVar4 + 8))();
  }
  pvVar5 = local_368;
  local_368 = (void *)0x0;
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}

