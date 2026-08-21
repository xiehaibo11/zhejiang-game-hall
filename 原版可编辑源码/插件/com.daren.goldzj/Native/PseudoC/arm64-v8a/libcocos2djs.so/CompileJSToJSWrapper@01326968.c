
/* v8::internal::compiler::CompileJSToJSWrapper(v8::internal::Isolate*,
   v8::internal::Signature<v8::internal::wasm::ValueType>*) */

undefined8 v8::internal::compiler::CompileJSToJSWrapper(Isolate *param_1,Signature *param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined1 uVar3;
  long lVar4;
  void *pvVar5;
  undefined4 uVar6;
  int iVar7;
  Zone *pZVar8;
  Operator *pOVar9;
  undefined8 uVar10;
  Node *pNVar11;
  ulong uVar12;
  Node *pNVar13;
  CallDescriptor *pCVar14;
  undefined8 uVar15;
  char *pcVar16;
  Graph *this;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  Graph *pGVar20;
  AccountingAllocator *pAVar21;
  Graph *pGVar22;
  Isolate *pIVar23;
  undefined1 auVar24 [16];
  char *local_3a8;
  Zone *local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  CommonOperatorBuilder aCStack_388 [16];
  Node *local_378;
  undefined8 local_370;
  Node *local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  Zone *local_340;
  MachineGraph *local_338;
  undefined8 local_330;
  undefined8 *puStack_328;
  undefined8 *local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined1 local_2e0;
  undefined1 local_2df;
  undefined1 local_2de;
  Signature *local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  void *local_2c0;
  undefined4 local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined4 local_2a0 [2];
  Graph *local_298;
  CommonOperatorBuilder *pCStack_290;
  MachineOperatorBuilder *local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 local_138;
  MachineOperatorBuilder aMStack_130 [40];
  Node *local_108;
  Node *local_100;
  long *local_f8;
  undefined8 local_f0 [16];
  long local_70 [2];
  
  lVar4 = tpidr_el0;
  local_70[0] = *(long *)(lVar4 + 0x28);
  pAVar21 = *(AccountingAllocator **)(param_1 + 0x95d0);
  pZVar8 = operator_new(0x40);
  Zone::Zone(pZVar8,pAVar21,"../../src/compiler/wasm-compiler.cc:6687");
  this = *(Graph **)(pZVar8 + 0x10);
  if ((ulong)(*(long *)(pZVar8 + 0x18) - (long)this) < 0x40) {
    this = (Graph *)Zone::NewExpand(pZVar8,0x40);
  }
  else {
    *(Graph **)(pZVar8 + 0x10) = this + 0x40;
  }
  Graph::Graph(this,pZVar8);
  CommonOperatorBuilder::CommonOperatorBuilder(aCStack_388,pZVar8);
  uVar6 = InstructionSelector::SupportedMachineOperatorFlags();
  auVar24 = InstructionSelector::AlignmentRequirements();
  MachineOperatorBuilder::MachineOperatorBuilder
            (aMStack_130,pZVar8,5,uVar6,auVar24._0_8_,auVar24._8_8_ & 0xffffffff);
  local_140 = *(undefined8 *)this;
  local_280 = 0;
  uStack_278 = 0;
  local_260 = 0;
  uStack_258 = 0;
  local_270 = 0x100;
  local_250 = 0x100;
  local_240 = 0;
  uStack_238 = 0;
  local_220 = 0;
  uStack_218 = 0;
  local_230 = 0x100;
  local_210 = 0x100;
  local_200 = 0;
  uStack_1f8 = 0;
  local_1e0 = 0;
  local_1f0 = 0x100;
  local_1d0 = 0x100;
  local_1d8 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_1a0 = 0;
  local_1b0 = 0x100;
  local_190 = 0x100;
  local_198 = 0;
  local_178 = 0;
  local_180 = 0;
  local_160 = 0;
  local_170 = 0x100;
  local_150 = 0x100;
  local_158 = 0;
  local_398 = 0;
  local_390 = 0;
  local_138 = 0;
  local_298 = this;
  pCStack_290 = aCStack_388;
  local_288 = aMStack_130;
  local_2a0[0] = wasm::WasmFeatures::FromIsolate(param_1);
  pGVar22 = local_298;
  local_338 = (MachineGraph *)&local_298;
  local_330 = 0;
  uStack_318 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  local_300 = 0;
  uStack_2e8 = 0;
  local_2f0 = 0;
  uVar19 = *(ulong *)(param_2 + 8);
  pcVar16 = *(char **)(param_2 + 0x10);
  if (pcVar16 != pcVar16 + uVar19 + *(long *)param_2) {
    lVar18 = *(long *)param_2 + uVar19;
    do {
      if (*pcVar16 == '\x05') {
        local_2e0 = 1;
        goto LAB_01326b14;
      }
      lVar18 = lVar18 + -1;
      pcVar16 = pcVar16 + 1;
    } while (lVar18 != 0);
  }
  local_2e0 = 0;
LAB_01326b14:
  local_2df = 0;
  local_2de = FLAG_untrusted_code_mitigations;
  puStack_328 = &local_390;
  local_2b8 = 2;
  local_320 = &local_398;
  iVar7 = (int)uVar19;
  uStack_2d0 = 0;
  local_2c8 = 0;
  local_2c0 = (void *)0x0;
  local_2b0 = 0;
  uStack_2a8 = 0;
  local_340 = pZVar8;
  local_2d8 = param_2;
  pOVar9 = (Operator *)CommonOperatorBuilder::Start(pCStack_290,iVar7 + 5);
  local_108 = (Node *)0x0;
  uVar10 = Graph::NewNode(pGVar22,pOVar9,0,&local_108,false);
  *(undefined8 *)(*(Graph **)local_338 + 8) = uVar10;
  *puStack_328 = uVar10;
  *local_320 = uVar10;
  pGVar22 = *(Graph **)local_338;
  pOVar9 = (Operator *)
           CommonOperatorBuilder::Parameter
                     (*(CommonOperatorBuilder **)(local_338 + 8),-1,(char *)0x0);
  local_108 = *(Node **)(*(Graph **)local_338 + 8);
  pNVar11 = (Node *)Graph::NewNode(pGVar22,pOVar9,1,&local_108,false);
  pGVar22 = *(Graph **)local_338;
  pOVar9 = (Operator *)
           CommonOperatorBuilder::Parameter
                     (*(CommonOperatorBuilder **)(local_338 + 8),iVar7 + 3,(char *)0x0);
  local_108 = *(Node **)(*(Graph **)local_338 + 8);
  uVar10 = Graph::NewNode(pGVar22,pOVar9,1,&local_108,false);
  local_2f0 = MachineGraph::IntPtrConstant(local_338,(long)param_1);
  pGVar22 = *(Graph **)local_338;
  local_368 = (Node *)(param_1 + 0xa0);
  pOVar9 = (Operator *)
           CommonOperatorBuilder::HeapConstant
                     (*(CommonOperatorBuilder **)(local_338 + 8),(Handle *)&local_368);
  local_108 = (Node *)0x0;
  local_2b0 = Graph::NewNode(pGVar22,pOVar9,0,&local_108,false);
  uVar12 = wasm::IsJSCompatibleSignature(local_2d8,(WasmFeatures *)local_2a0);
  if ((uVar12 & 1) == 0) {
    WasmGraphBuilder::BuildCallToRuntimeWithContext
              ((WasmGraphBuilder *)&local_340,0x1cf,uVar10,0,0,local_320,*puStack_328);
    WasmGraphBuilder::TerminateThrow
              ((WasmGraphBuilder *)&local_340,(Node *)*local_320,(Node *)*puStack_328);
  }
  else {
    pGVar22 = *(Graph **)local_338;
    pOVar9 = (Operator *)
             MachineOperatorBuilder::Load(*(MachineOperatorBuilder **)(local_338 + 0x10),0x708);
    local_100 = (Node *)MachineGraph::Int32Constant(local_338,0xb);
    local_f0[0] = *puStack_328;
    local_f8 = (long *)*local_320;
    local_108 = pNVar11;
    pNVar11 = (Node *)Graph::NewNode(pGVar22,pOVar9,4,&local_108,false);
    *local_320 = pNVar11;
    pGVar22 = *(Graph **)local_338;
    pOVar9 = (Operator *)
             MachineOperatorBuilder::Load(*(MachineOperatorBuilder **)(local_338 + 0x10),0x708);
    local_100 = (Node *)MachineGraph::Int32Constant(local_338,3);
    local_f0[0] = *puStack_328;
    local_f8 = (long *)*local_320;
    local_108 = pNVar11;
    pNVar11 = (Node *)Graph::NewNode(pGVar22,pOVar9,4,&local_108,false);
    *local_320 = pNVar11;
    pGVar22 = *(Graph **)local_338;
    pOVar9 = (Operator *)
             MachineOperatorBuilder::Load(*(MachineOperatorBuilder **)(local_338 + 0x10),0x708);
    local_100 = (Node *)MachineGraph::Int32Constant(local_338,3);
    local_f0[0] = *puStack_328;
    local_f8 = (long *)*local_320;
    local_108 = pNVar11;
    pNVar11 = (Node *)Graph::NewNode(pGVar22,pOVar9,4,&local_108,false);
    uVar12 = (ulong)(iVar7 + 7);
    local_f8 = local_70;
    *local_320 = pNVar11;
    local_108 = (Node *)local_f0;
    if (0x10 < uVar12) {
      local_100 = (Node *)local_f0;
      base::SmallVector<v8::internal::compiler::Node*,16ul>::Grow
                ((SmallVector<v8::internal::compiler::Node*,16ul> *)&local_108,uVar12);
    }
    local_100 = local_108 + uVar12 * 8;
    pGVar22 = *(Graph **)local_338;
    pOVar9 = (Operator *)
             CommonOperatorBuilder::NumberConstant(*(CommonOperatorBuilder **)(local_338 + 8),10.0);
    local_368 = (Node *)0x0;
    pNVar13 = (Node *)Graph::NewNode(pGVar22,pOVar9,0,&local_368,false);
    *(Node **)local_108 = pNVar13;
    *(Node **)(local_108 + 8) = pNVar11;
    pNVar11 = (Node *)MachineGraph::Int32Constant(local_338,iVar7);
    *(Node **)(local_108 + 0x10) = pNVar11;
    pNVar11 = (Node *)FUN_0132a264(&local_340);
    *(Node **)(local_108 + 0x18) = pNVar11;
    uStack_360 = 0x1d2c508;
    local_368 = (Node *)&PTR__CallInterfaceDescriptor_01cbd0c0;
    pCVar14 = (CallDescriptor *)
              Linkage::GetStubCallDescriptor(**(undefined8 **)local_338,&local_368,iVar7 + 1,0,0,2);
    if (iVar7 < 1) {
      uVar17 = 4;
    }
    else {
      uVar12 = 0;
      do {
        uVar2 = uVar12 + 1;
        pGVar20 = *(Graph **)local_338;
        pOVar9 = (Operator *)
                 CommonOperatorBuilder::Parameter
                           (*(CommonOperatorBuilder **)(local_338 + 8),(int)uVar2,(char *)0x0);
        local_368 = *(Node **)(*(long *)local_338 + 8);
        uVar15 = Graph::NewNode(pGVar20,pOVar9,1,&local_368,false);
        uVar15 = FUN_013295e8(&local_340,uVar15,uVar10,
                              *(undefined1 *)
                               (*(ulong *)(local_2d8 + 0x10) + *(ulong *)local_2d8 + uVar12));
        uVar15 = FUN_0132a350(&local_340,uVar15,
                              *(undefined1 *)
                               (*(ulong *)(local_2d8 + 0x10) + *(ulong *)local_2d8 + uVar12));
        *(undefined8 *)(local_108 + uVar12 * 8 + 0x20) = uVar15;
        uVar12 = uVar2;
      } while ((uVar19 & 0xffffffff) != uVar2);
      uVar17 = (int)uVar2 + 4;
    }
    *(undefined8 *)(local_108 + (ulong)uVar17 * 8) = uVar10;
    *(undefined8 *)(local_108 + (ulong)(uVar17 + 1) * 8) = *local_320;
    *(undefined8 *)(local_108 + (ulong)(uVar17 + 2) * 8) = *puStack_328;
    pGVar20 = *(Graph **)local_338;
    pOVar9 = (Operator *)
             CommonOperatorBuilder::Call(*(CommonOperatorBuilder **)(local_338 + 8),pCVar14);
    uVar15 = Graph::NewNode(pGVar20,pOVar9,uVar17 + 3,(Node **)local_108,false);
    *local_320 = uVar15;
    if (*(ulong *)local_2d8 == 0) {
      local_368 = (Node *)FUN_0132a264(&local_340);
    }
    else if (*(ulong *)local_2d8 == 1) {
      uVar10 = FUN_013295e8(&local_340,uVar15,uVar10,**(undefined1 **)(local_2d8 + 0x10));
      local_368 = (Node *)FUN_0132a350(&local_340,uVar10,**(undefined1 **)(local_2d8 + 0x10));
    }
    else {
      pNVar11 = (Node *)FUN_0132b39c(&local_340,local_2d8,uVar15,uVar10);
      pGVar20 = *(Graph **)local_338;
      pOVar9 = (Operator *)
               CommonOperatorBuilder::NumberConstant
                         (*(CommonOperatorBuilder **)(local_338 + 8),(double)(long)*(int *)local_2d8
                         );
      local_368 = (Node *)0x0;
      local_370 = Graph::NewNode(pGVar20,pOVar9,0,&local_368,false);
      uVar15 = MachineGraph::IntPtrConstant(local_338,0);
      pNVar13 = (Node *)WasmGraphBuilder::BuildCallToRuntimeWithContext
                                  ((WasmGraphBuilder *)&local_340,0x1d9,uVar15,&local_370,1,
                                   local_320,*puStack_328);
      local_378 = pNVar13;
      if (*(ulong *)local_2d8 != 0) {
        iVar7 = 7;
        uVar19 = 0;
        uVar12 = 1;
        pIVar23 = param_1;
        do {
          pGVar20 = *(Graph **)local_338;
          uVar3 = *(undefined1 *)(*(ulong *)(local_2d8 + 0x10) + uVar19);
          pIVar23 = (Isolate *)((ulong)pIVar23 & 0xffffffffffff0000 | 0x708);
          pOVar9 = (Operator *)
                   MachineOperatorBuilder::Load
                             (*(MachineOperatorBuilder **)(local_338 + 0x10),pIVar23);
          uStack_360 = MachineGraph::Int32Constant(local_338,iVar7);
          uStack_350 = *puStack_328;
          local_358 = *local_320;
          local_368 = pNVar11;
          uVar15 = Graph::NewNode(pGVar20,pOVar9,4,&local_368,false);
          *local_320 = uVar15;
          uVar15 = FUN_013295e8(&local_340,uVar15,uVar10,uVar3);
          uVar15 = FUN_0132a350(&local_340,uVar15,uVar3);
          pGVar20 = *(Graph **)local_338;
          pGVar22 = (Graph *)((ulong)pGVar22 & 0xffffffffffff0000 | 0x508);
          pOVar9 = (Operator *)
                   MachineOperatorBuilder::Store
                             (*(MachineOperatorBuilder **)(local_338 + 0x10),pGVar22);
          uStack_360 = MachineGraph::Int32Constant(local_338,iVar7);
          uStack_350 = *local_320;
          local_348 = *puStack_328;
          local_368 = pNVar13;
          local_358 = uVar15;
          uVar15 = Graph::NewNode(pGVar20,pOVar9,5,&local_368,false);
          iVar7 = iVar7 + 4;
          *local_320 = uVar15;
          bVar1 = uVar12 < *(ulong *)local_2d8;
          uVar19 = uVar12;
          uVar12 = (ulong)((int)uVar12 + 1);
        } while (bVar1);
      }
      local_368 = (Node *)WasmGraphBuilder::BuildCallToRuntimeWithContext
                                    ((WasmGraphBuilder *)&local_340,0x1da,uVar10,&local_378,1,
                                     local_320,*puStack_328);
    }
    WasmGraphBuilder::Return(&local_340,&local_368,1);
    if (local_108 != (Node *)local_f0) {
      free(local_108);
    }
  }
  uVar10 = Linkage::GetJSCallDescriptor(pZVar8,0,*(int *)(param_2 + 8) + 1,0);
  pcVar16 = operator_new__(0x80);
  builtin_strncpy(pcVar16,"js-to-js:",9);
  wasm::PrintSignature((wasm *)(pcVar16 + 9),0x77);
  uVar15 = *(undefined8 *)(param_1 + 0xc770);
  local_3a8 = pcVar16;
  local_3a0 = pZVar8;
  AssemblerOptions::Default((AssemblerOptions *)param_1,(Isolate *)0x0,SUB81(param_2,0));
  Pipeline::NewWasmHeapStubCompilationJob
            ((Pipeline *)&local_368,param_1,uVar15,uVar10,&local_3a0,this,9,&local_3a8,&local_108,0)
  ;
  pcVar16 = local_3a8;
  local_3a8 = (char *)0x0;
  if (pcVar16 != (char *)0x0) {
    operator_delete__(pcVar16);
  }
  pZVar8 = local_3a0;
  local_3a0 = (Zone *)0x0;
  if (pZVar8 != (Zone *)0x0) {
    Zone::~Zone(pZVar8);
    operator_delete(pZVar8);
  }
  iVar7 = OptimizedCompilationJob::ExecuteJob
                    ((OptimizedCompilationJob *)local_368,
                     (RuntimeCallStats *)(*(long *)(param_1 + 0x9520) + 0x58a0));
  if ((iVar7 == 1) ||
     (iVar7 = OptimizedCompilationJob::FinalizeJob((OptimizedCompilationJob *)local_368,param_1),
     iVar7 == 1)) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(*(long *)(local_368 + 0x18) + 0x28);
  }
  pNVar11 = local_368;
  local_368 = (Node *)0x0;
  if (pNVar11 != (Node *)0x0) {
    (**(code **)(*(long *)pNVar11 + 8))();
  }
  pvVar5 = local_2c0;
  local_2c0 = (void *)0x0;
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
  if (*(long *)(lVar4 + 0x28) != local_70[0]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}

