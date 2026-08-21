
/* v8::internal::compiler::NewJSToWasmCompilationJob(v8::internal::Isolate*,
   v8::internal::wasm::WasmEngine*, v8::internal::Signature<v8::internal::wasm::ValueType>*, bool,
   v8::internal::wasm::WasmFeatures const&) */

void __thiscall
v8::internal::compiler::NewJSToWasmCompilationJob
          (compiler *this,Isolate *param_1,WasmEngine *param_2,Signature *param_3,bool param_4,
          WasmFeatures *param_5)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  undefined4 uVar4;
  Zone *pZVar5;
  Operator *pOVar6;
  long lVar7;
  Node *pNVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  Node *pNVar12;
  char *pcVar13;
  Graph *this_00;
  Pipeline *in_x8;
  MachineOperatorBuilder *this_01;
  int iVar14;
  ulong uVar15;
  Graph *pGVar16;
  Graph *pGVar17;
  long lVar18;
  undefined1 auVar19 [16];
  ulong in_stack_fffffffffffffbe0;
  char *local_3c8;
  Zone *local_3c0;
  long local_3b8 [2];
  CommonOperatorBuilder aCStack_3a8 [16];
  Node *local_398;
  undefined8 local_390;
  Node *local_388;
  Graph *pGStack_380;
  long local_378;
  long lStack_370;
  long local_368;
  Zone *local_360;
  MachineGraph *local_358;
  undefined8 local_350;
  long *plStack_348;
  long *local_340;
  undefined8 uStack_338;
  Node *local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 local_300;
  undefined1 local_2ff;
  undefined1 local_2fe;
  WasmEngine *local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  void *local_2e0;
  undefined4 local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined4 local_2c0 [2];
  Graph *local_2b8;
  CommonOperatorBuilder *pCStack_2b0;
  MachineOperatorBuilder *local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
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
  undefined8 local_190;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 local_158;
  MachineOperatorBuilder aMStack_150 [40];
  undefined8 *local_128;
  undefined8 *local_120;
  Node **local_118;
  undefined8 local_110;
  Node *local_108;
  Node *local_100;
  long *local_f8;
  long local_f0 [16];
  long local_70 [2];
  
  lVar2 = tpidr_el0;
  local_70[0] = *(long *)(lVar2 + 0x28);
  pZVar5 = operator_new(0x40);
  Zone::Zone(pZVar5,(AccountingAllocator *)(param_1 + 0x58),
             "../../src/compiler/wasm-compiler.cc:6275");
  this_00 = *(Graph **)(pZVar5 + 0x10);
  if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)this_00) < 0x40) {
    this_00 = (Graph *)Zone::NewExpand(pZVar5,0x40);
  }
  else {
    *(Graph **)(pZVar5 + 0x10) = this_00 + 0x40;
  }
  Graph::Graph(this_00,pZVar5);
  CommonOperatorBuilder::CommonOperatorBuilder(aCStack_3a8,pZVar5);
  uVar4 = InstructionSelector::SupportedMachineOperatorFlags();
  auVar19 = InstructionSelector::AlignmentRequirements();
  MachineOperatorBuilder::MachineOperatorBuilder
            (aMStack_150,pZVar5,5,uVar4,auVar19._0_8_,auVar19._8_8_ & 0xffffffff);
  local_160 = *(undefined8 *)this_00;
  local_358 = (MachineGraph *)&local_2b8;
  local_2a0 = 0;
  uStack_298 = 0;
  local_280 = 0;
  uStack_278 = 0;
  local_290 = 0x100;
  local_270 = 0x100;
  local_260 = 0;
  uStack_258 = 0;
  local_240 = 0;
  uStack_238 = 0;
  local_250 = 0x100;
  local_230 = 0x100;
  local_218 = 0;
  local_220 = 0;
  local_200 = 0;
  local_210 = 0x100;
  local_1f0 = 0x100;
  local_1f8 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  local_1c0 = 0;
  local_1d0 = 0x100;
  local_1b0 = 0x100;
  local_1b8 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_180 = 0;
  local_190 = 0x100;
  local_170 = 0x100;
  local_178 = 0;
  local_3b8[0] = 0;
  local_3b8[1] = 0;
  local_158 = 0;
  local_2c0[0] = *(undefined4 *)(ulong)param_4;
  local_350 = 0;
  uStack_338 = 0;
  uStack_328 = 0;
  local_330 = (Node *)0x0;
  uStack_318 = 0;
  local_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  uVar15 = *(ulong *)(param_2 + 8);
  pcVar13 = *(char **)(param_2 + 0x10);
  lVar18 = *(long *)param_2;
  if (pcVar13 != pcVar13 + uVar15 + lVar18) {
    lVar7 = lVar18 + uVar15;
    do {
      if (*pcVar13 == '\x05') {
        local_300 = 1;
        goto LAB_013225cc;
      }
      lVar7 = lVar7 + -1;
      pcVar13 = pcVar13 + 1;
    } while (lVar7 != 0);
  }
  local_300 = 0;
LAB_013225cc:
  local_2ff = 0;
  plStack_348 = local_3b8 + 1;
  local_2fe = FLAG_untrusted_code_mitigations;
  local_2d8 = 2;
  local_340 = local_3b8;
  iVar14 = (int)uVar15;
  uStack_2f0 = 0;
  local_2e8 = 0;
  local_2e0 = (void *)0x0;
  local_2d0 = 0;
  uStack_2c8 = 0;
  local_360 = pZVar5;
  local_2f8 = param_2;
  local_2b8 = this_00;
  pCStack_2b0 = aCStack_3a8;
  local_2a8 = aMStack_150;
  pOVar6 = (Operator *)CommonOperatorBuilder::Start(aCStack_3a8,iVar14 + 5);
  local_108 = (Node *)0x0;
  lVar7 = Graph::NewNode(this_00,pOVar6,0,&local_108,false);
  *(long *)(*(Graph **)local_358 + 8) = lVar7;
  *plStack_348 = lVar7;
  *local_340 = lVar7;
  pGVar16 = *(Graph **)local_358;
  pOVar6 = (Operator *)
           CommonOperatorBuilder::Parameter
                     (*(CommonOperatorBuilder **)(local_358 + 8),-1,"%closure");
  local_108 = *(Node **)(*(Graph **)local_358 + 8);
  pNVar8 = (Node *)Graph::NewNode(pGVar16,pOVar6,1,&local_108,false);
  pGVar16 = *(Graph **)local_358;
  pOVar6 = (Operator *)
           CommonOperatorBuilder::Parameter
                     (*(CommonOperatorBuilder **)(local_358 + 8),iVar14 + 3,"%context");
  local_108 = *(Node **)(*(Graph **)local_358 + 8);
  uVar9 = Graph::NewNode(pGVar16,pOVar6,1,&local_108,false);
  pGVar16 = *(Graph **)local_358;
  pOVar6 = (Operator *)
           MachineOperatorBuilder::Load(*(MachineOperatorBuilder **)(local_358 + 0x10),0x708);
  local_100 = (Node *)MachineGraph::Int32Constant(local_358,0xb);
  local_f0[0] = *plStack_348;
  local_f8 = (long *)*local_340;
  local_108 = pNVar8;
  pNVar8 = (Node *)Graph::NewNode(pGVar16,pOVar6,4,&local_108,false);
  *local_340 = (long)pNVar8;
  pGVar16 = *(Graph **)local_358;
  pOVar6 = (Operator *)
           MachineOperatorBuilder::Load(*(MachineOperatorBuilder **)(local_358 + 0x10),0x708);
  local_100 = (Node *)MachineGraph::Int32Constant(local_358,3);
  local_f0[0] = *plStack_348;
  local_f8 = (long *)*local_340;
  local_108 = pNVar8;
  pNVar8 = (Node *)Graph::NewNode(pGVar16,pOVar6,4,&local_108,false);
  *local_340 = (long)pNVar8;
  pGVar16 = *(Graph **)local_358;
  pOVar6 = (Operator *)
           MachineOperatorBuilder::Load(*(MachineOperatorBuilder **)(local_358 + 0x10),0x708);
  local_100 = (Node *)MachineGraph::Int32Constant(local_358,7);
  local_f0[0] = *plStack_348;
  local_f8 = (long *)*local_340;
  local_108 = pNVar8;
  local_330 = (Node *)Graph::NewNode(pGVar16,pOVar6,4,&local_108,false);
  *local_340 = (long)local_330;
  uVar10 = wasm::IsJSCompatibleSignature((Signature *)local_2f8,(WasmFeatures *)local_2c0);
  if ((uVar10 & 1) == 0) {
    WasmGraphBuilder::BuildCallToRuntimeWithContext
              ((WasmGraphBuilder *)&local_360,0x1cf,uVar9,0,0,local_340,*plStack_348);
    WasmGraphBuilder::TerminateThrow
              ((WasmGraphBuilder *)&local_360,(Node *)*local_340,(Node *)*plStack_348);
  }
  else {
    uVar10 = (ulong)(iVar14 + 1);
    local_f8 = local_70;
    local_108 = (Node *)local_f0;
    if (0x10 < uVar10) {
      local_100 = (Node *)local_f0;
      base::SmallVector<v8::internal::compiler::Node*,16ul>::Grow
                ((SmallVector<v8::internal::compiler::Node*,16ul> *)&local_108,uVar10);
    }
    local_100 = local_108 + uVar10 * 8;
    uVar10 = (ulong)(int)lVar18;
    local_118 = &local_108;
    local_128 = &local_110;
    if (1 < uVar10) {
      local_120 = &local_110;
      base::SmallVector<v8::internal::compiler::Node*,1ul>::Grow
                ((SmallVector<v8::internal::compiler::Node*,1ul> *)&local_128,uVar10);
    }
    local_120 = local_128 + uVar10;
    if (0 < iVar14) {
      uVar10 = 0;
      do {
        uVar1 = uVar10 + 1;
        pGVar16 = *(Graph **)local_358;
        pOVar6 = (Operator *)
                 CommonOperatorBuilder::Parameter
                           (*(CommonOperatorBuilder **)(local_358 + 8),(int)uVar1,(char *)0x0);
        local_388 = *(Node **)(*(long *)local_358 + 8);
        uVar11 = Graph::NewNode(pGVar16,pOVar6,1,&local_388,false);
        uVar11 = FUN_013295e8(&local_360,uVar11,uVar9,
                              *(undefined1 *)
                               (*(ulong *)(local_2f8 + 0x10) + *(ulong *)local_2f8 + uVar10));
        *(undefined8 *)(local_108 + uVar10 * 8 + 8) = uVar11;
        uVar10 = uVar1;
      } while ((uVar15 & 0xffffffff) != uVar1);
    }
    FUN_01329edc(&local_360,1);
    pGVar16 = *(Graph **)local_358;
    if (((ulong)param_3 & 1) == 0) {
      pOVar6 = (Operator *)
               MachineOperatorBuilder::Load(*(MachineOperatorBuilder **)(local_358 + 0x10),5);
      pNVar12 = local_330;
      pGStack_380 = (Graph *)MachineGraph::Int32Constant(local_358,0x67);
      lStack_370 = *plStack_348;
      local_378 = *local_340;
      local_388 = pNVar12;
      pNVar12 = (Node *)Graph::NewNode(pGVar16,pOVar6,4,&local_388,false);
      *local_340 = (long)pNVar12;
      pGVar16 = *(Graph **)local_358;
      pOVar6 = (Operator *)
               MachineOperatorBuilder::Load(*(MachineOperatorBuilder **)(local_358 + 0x10),0x206);
      pGStack_380 = (Graph *)MachineGraph::Int32Constant(local_358,0xb);
      lStack_370 = *plStack_348;
      local_378 = *local_340;
      local_388 = pNVar8;
      pNVar8 = (Node *)Graph::NewNode(pGVar16,pOVar6,4,&local_388,false);
      *local_340 = (long)pNVar8;
      pGVar16 = (Graph *)WasmGraphBuilder::BuildChangeSmiToIntPtr
                                   ((WasmGraphBuilder *)&local_360,pNVar8);
      this_01 = *(MachineOperatorBuilder **)(local_358 + 0x10);
      pGVar17 = *(Graph **)local_358;
      if (this_01[0x10] == (MachineOperatorBuilder)0x4) {
        pOVar6 = (Operator *)MachineOperatorBuilder::Int32Add(this_01);
      }
      else {
        pOVar6 = (Operator *)MachineOperatorBuilder::Int64Add(this_01);
      }
      local_388 = pNVar12;
      pGStack_380 = pGVar16;
      lVar18 = Graph::NewNode(pGVar17,pOVar6,2,&local_388,false);
      *(long *)local_108 = lVar18;
      WasmGraphBuilder::BuildWasmCall
                (&local_360,local_2f8,local_108,(long)local_100 - (long)local_108 >> 3,local_128,
                 (long)local_120 - (long)local_128 >> 3,0xffffffff,0,
                 in_stack_fffffffffffffbe0 & 0xffffffffffffff00);
    }
    else {
      pOVar6 = (Operator *)
               MachineOperatorBuilder::Load(*(MachineOperatorBuilder **)(local_358 + 0x10),0x206);
      pGStack_380 = (Graph *)MachineGraph::Int32Constant(local_358,0xf);
      lStack_370 = *plStack_348;
      local_378 = *local_340;
      local_388 = pNVar8;
      pNVar8 = (Node *)Graph::NewNode(pGVar16,pOVar6,4,&local_388,false);
      *local_340 = (long)pNVar8;
      pGVar17 = *(Graph **)local_358;
      pOVar6 = (Operator *)
               MachineOperatorBuilder::TruncateInt64ToInt32
                         (*(MachineOperatorBuilder **)(local_358 + 0x10));
      local_388 = pNVar8;
      pNVar8 = (Node *)Graph::NewNode(pGVar17,pOVar6,1,&local_388,false);
      pGVar17 = *(Graph **)local_358;
      pOVar6 = (Operator *)
               MachineOperatorBuilder::Word32Sar(*(MachineOperatorBuilder **)(local_358 + 0x10));
      pGStack_380 = (Graph *)MachineGraph::Int32Constant(local_358,1);
      local_388 = pNVar8;
      uVar11 = Graph::NewNode(pGVar17,pOVar6,2,&local_388,false);
      WasmGraphBuilder::BuildImportCall
                (&local_360,local_2f8,local_108,(long)local_100 - (long)local_108 >> 3,local_128,
                 (long)local_120 - (long)local_128 >> 3,0xffffffff,uVar11,
                 in_stack_fffffffffffffbe0 & 0xffffffffffffff00);
    }
    FUN_01329edc(&local_360,0);
    uVar15 = *(ulong *)local_2f8;
    if (uVar15 == 1) {
      local_388 = (Node *)FUN_0132a350(&local_360,*local_128,**(undefined1 **)(local_2f8 + 0x10));
    }
    else if (uVar15 == 0) {
      local_388 = (Node *)FUN_0132a264(&local_360);
    }
    else {
      pGVar17 = *(Graph **)local_358;
      pOVar6 = (Operator *)
               CommonOperatorBuilder::NumberConstant
                         (*(CommonOperatorBuilder **)(local_358 + 8),(double)(int)uVar15);
      local_388 = (Node *)0x0;
      local_390 = Graph::NewNode(pGVar17,pOVar6,0,&local_388,false);
      uVar11 = MachineGraph::IntPtrConstant(local_358,0);
      pNVar8 = (Node *)WasmGraphBuilder::BuildCallToRuntimeWithContext
                                 ((WasmGraphBuilder *)&local_360,0x1d9,uVar11,&local_390,1,local_340
                                  ,*plStack_348);
      local_398 = pNVar8;
      if (0 < (int)uVar15) {
        uVar10 = 0;
        iVar14 = 7;
        do {
          lVar18 = FUN_0132a350(&local_360,local_128[uVar10],
                                *(undefined1 *)(*(ulong *)(local_2f8 + 0x10) + uVar10));
          pGVar16 = (Graph *)((ulong)pGVar16 & 0xffffffffffff0000 | 0x508);
          pGVar17 = *(Graph **)local_358;
          pOVar6 = (Operator *)
                   MachineOperatorBuilder::Store
                             (*(MachineOperatorBuilder **)(local_358 + 0x10),pGVar16);
          pGStack_380 = (Graph *)MachineGraph::Int32Constant(local_358,iVar14);
          lStack_370 = *local_340;
          local_368 = *plStack_348;
          local_388 = pNVar8;
          local_378 = lVar18;
          lVar18 = Graph::NewNode(pGVar17,pOVar6,5,&local_388,false);
          uVar10 = uVar10 + 1;
          iVar14 = iVar14 + 4;
          *local_340 = lVar18;
        } while ((uVar15 & 0xffffffff) != uVar10);
      }
      local_388 = (Node *)WasmGraphBuilder::BuildCallToRuntimeWithContext
                                    ((WasmGraphBuilder *)&local_360,0x1da,uVar9,&local_398,1,
                                     local_340,*plStack_348);
    }
    WasmGraphBuilder::Return(&local_360,&local_388,1);
    pcVar13 = *(char **)(local_2f8 + 0x10);
    if (pcVar13 != pcVar13 + *(ulong *)(local_2f8 + 8) + *(ulong *)local_2f8) {
      lVar18 = *(ulong *)local_2f8 + *(ulong *)(local_2f8 + 8);
      do {
        if (*pcVar13 == '\x02') {
          WasmGraphBuilder::LowerInt64((WasmGraphBuilder *)&local_360,1);
          break;
        }
        lVar18 = lVar18 + -1;
        pcVar13 = pcVar13 + 1;
      } while (lVar18 != 0);
    }
    if (local_128 != &local_110) {
      free(local_128);
    }
    if (local_108 != (Node *)local_f0) {
      free(local_108);
    }
  }
  pcVar13 = operator_new__(0x80);
  builtin_strncpy(pcVar13,"js-to-wasm:",0xb);
  wasm::PrintSignature((wasm *)(pcVar13 + 0xb),0x75,param_2);
  uVar9 = Linkage::GetJSCallDescriptor(pZVar5,0,*(int *)(param_2 + 8) + 1,0);
  local_108 = (Node *)CONCAT26(local_108._6_2_,0x10000000000);
  local_108 = (Node *)CONCAT35(local_108._5_3_,1);
  local_100 = (Node *)0x0;
  local_f8 = (long *)((ulong)local_f8 & 0xffffffffffff0000);
  local_3c8 = pcVar13;
  local_3c0 = pZVar5;
  Pipeline::NewWasmHeapStubCompilationJob
            (in_x8,this,param_1,uVar9,&local_3c0,this_00,8,&local_3c8,&local_108,0);
  pcVar13 = local_3c8;
  local_3c8 = (char *)0x0;
  if (pcVar13 != (char *)0x0) {
    operator_delete__(pcVar13);
  }
  pZVar5 = local_3c0;
  local_3c0 = (Zone *)0x0;
  if (pZVar5 != (Zone *)0x0) {
    Zone::~Zone(pZVar5);
    operator_delete(pZVar5);
  }
  pvVar3 = local_2e0;
  local_2e0 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  if (*(long *)(lVar2 + 0x28) != local_70[0]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

