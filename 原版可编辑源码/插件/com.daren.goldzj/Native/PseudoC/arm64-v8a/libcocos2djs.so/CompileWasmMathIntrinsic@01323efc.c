
/* v8::internal::compiler::CompileWasmMathIntrinsic(v8::internal::wasm::WasmEngine*,
   v8::internal::compiler::WasmImportCallKind,
   v8::internal::Signature<v8::internal::wasm::ValueType>*) */

void __thiscall
v8::internal::compiler::CompileWasmMathIntrinsic
          (Pipeline *param_1,compiler *this,char param_3,long *param_4)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  void *pvVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 uVar7;
  Operator *pOVar8;
  undefined8 uVar9;
  Graph *pGVar10;
  Graph *pGVar11;
  Graph *pGVar12;
  Graph *pGVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  undefined1 auVar18 [16];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  long *local_198;
  Graph *local_190;
  undefined8 *puStack_188;
  undefined8 *local_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined1 local_138;
  undefined1 local_137;
  undefined1 local_136;
  long *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  void *local_118;
  byte **local_110;
  byte *local_108;
  char *local_100;
  undefined8 local_f8;
  Node *local_f0;
  undefined8 local_e8;
  undefined2 local_e0;
  undefined8 local_d8;
  undefined2 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  Zone aZStack_b0 [16];
  Graph *local_a0;
  long lStack_98;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  if (DAT_01d46078 == (byte *)0x0) {
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d46078 = (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,"disabled-by-default-v8.wasm");
  }
  pbVar3 = DAT_01d46078;
  local_110 = (byte **)0x0;
  if ((*DAT_01d46078 & 5) != 0) {
    local_198 = (long *)0x0;
    local_190 = (Graph *)0x0;
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar7 = (**(code **)(*plVar6 + 0x18))
                      (plVar6,0x58,pbVar3,"CompileWasmMathIntrinsic",0,0,0,0,0,0,0,&local_198,0);
    pGVar10 = local_190;
    local_190 = (Graph *)0x0;
    if (pGVar10 != (Graph *)0x0) {
      (**(code **)(*(long *)pGVar10 + 8))();
    }
    plVar6 = local_198;
    local_198 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    local_110 = &local_108;
    local_100 = "CompileWasmMathIntrinsic";
    local_108 = pbVar3;
    local_f8 = uVar7;
  }
  Zone::Zone(aZStack_b0,(AccountingAllocator *)(this + 0x58),
             "../../src/compiler/wasm-compiler.cc:6470");
  if ((ulong)(lStack_98 - (long)local_a0) < 0x168) {
    pGVar10 = (Graph *)Zone::NewExpand(aZStack_b0,0x168);
  }
  else {
    pGVar10 = local_a0;
    local_a0 = local_a0 + 0x168;
  }
  if ((ulong)(lStack_98 - (long)local_a0) < 0x40) {
    pGVar11 = (Graph *)Zone::NewExpand(aZStack_b0,0x40);
  }
  else {
    pGVar11 = local_a0;
    local_a0 = local_a0 + 0x40;
  }
  Graph::Graph(pGVar11,aZStack_b0);
  if ((ulong)(lStack_98 - (long)local_a0) < 0x10) {
    pGVar12 = (Graph *)Zone::NewExpand(aZStack_b0,0x10);
  }
  else {
    pGVar12 = local_a0;
    local_a0 = local_a0 + 0x10;
  }
  CommonOperatorBuilder::CommonOperatorBuilder((CommonOperatorBuilder *)pGVar12,aZStack_b0);
  if ((ulong)(lStack_98 - (long)local_a0) < 0x28) {
    pGVar13 = (Graph *)Zone::NewExpand(aZStack_b0,0x28);
  }
  else {
    pGVar13 = local_a0;
    local_a0 = local_a0 + 0x28;
  }
  uVar5 = InstructionSelector::SupportedMachineOperatorFlags();
  auVar18 = InstructionSelector::AlignmentRequirements();
  MachineOperatorBuilder::MachineOperatorBuilder
            ((MachineOperatorBuilder *)pGVar13,aZStack_b0,5,uVar5,auVar18._0_8_,
             auVar18._8_8_ & 0xffffffff);
  *(Graph **)pGVar10 = pGVar11;
  *(Graph **)(pGVar10 + 8) = pGVar12;
  *(Graph **)(pGVar10 + 0x10) = pGVar13;
  lVar16 = *(long *)pGVar11;
  *(long *)(pGVar10 + 0x18) = 0;
  *(long *)(pGVar10 + 0x20) = 0;
  *(long *)(pGVar10 + 0x28) = 0x100;
  *(long *)(pGVar10 + 0x38) = 0;
  *(long *)(pGVar10 + 0x40) = 0;
  *(long *)(pGVar10 + 0x48) = 0x100;
  *(long *)(pGVar10 + 0x58) = 0;
  *(long *)(pGVar10 + 0x60) = 0;
  *(long *)(pGVar10 + 0x68) = 0x100;
  *(long *)(pGVar10 + 0x78) = 0;
  *(long *)(pGVar10 + 0x80) = 0;
  *(long *)(pGVar10 + 0x88) = 0x100;
  *(long *)(pGVar10 + 0x98) = 0;
  *(long *)(pGVar10 + 0xa0) = 0;
  *(long *)(pGVar10 + 0xa8) = 0x100;
  *(long *)(pGVar10 + 0xb8) = 0;
  *(long *)(pGVar10 + 0xc0) = 0;
  *(long *)(pGVar10 + 200) = 0x100;
  *(long *)(pGVar10 + 0xd8) = 0;
  *(long *)(pGVar10 + 0xe0) = 0;
  *(long *)(pGVar10 + 0xe8) = 0x100;
  *(long *)(pGVar10 + 0xf8) = 0;
  *(long *)(pGVar10 + 0x100) = 0;
  *(long *)(pGVar10 + 0x108) = 0x100;
  *(long *)(pGVar10 + 0x118) = 0;
  *(long *)(pGVar10 + 0x120) = 0;
  *(long *)(pGVar10 + 0x128) = 0x100;
  *(long *)(pGVar10 + 0x138) = 0;
  *(long *)(pGVar10 + 0x140) = 0;
  *(long *)(pGVar10 + 0x148) = 0x100;
  *(long *)(pGVar10 + 0x158) = lVar16;
  *(long *)(pGVar10 + 0x160) = 0;
  local_d8 = 0;
  local_d0 = 0;
  uStack_c0 = 0x7fff0000;
  local_c8 = 0;
  local_b8 = 0xfff;
  local_b4 = 0;
  puStack_188 = &local_d8;
  local_198 = (long *)**(undefined8 **)pGVar10;
  puStack_178 = (undefined8 *)0x0;
  local_180 = (undefined8 *)0x0;
  local_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  local_140 = 0;
  lVar16 = param_4[1];
  pcVar14 = (char *)param_4[2];
  if (pcVar14 != pcVar14 + lVar16 + *param_4) {
    lVar15 = *param_4 + lVar16;
    do {
      if (*pcVar14 == '\x05') {
        local_138 = 1;
        goto LAB_01324198;
      }
      lVar15 = lVar15 + -1;
      pcVar14 = pcVar14 + 1;
    } while (lVar15 != 0);
  }
  local_138 = 0;
LAB_01324198:
  local_137 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_118 = (void *)0x0;
  local_136 = FLAG_untrusted_code_mitigations;
  pGVar11 = *(Graph **)pGVar10;
  local_190 = pGVar10;
  local_130 = param_4;
  pOVar8 = (Operator *)
           CommonOperatorBuilder::Start(*(CommonOperatorBuilder **)(pGVar10 + 8),(int)lVar16 + 2);
  local_f0 = (Node *)0x0;
  local_1a8 = Graph::NewNode(pGVar11,pOVar8,0,&local_f0,false);
  pGVar12 = local_190;
  puStack_178 = &uStack_1a0;
  local_180 = &local_1a8;
  *(undefined8 *)(*(long *)pGVar10 + 8) = local_1a8;
  pGVar11 = *(Graph **)local_190;
  uStack_1a0 = local_1a8;
  pOVar8 = (Operator *)
           CommonOperatorBuilder::Parameter
                     (*(CommonOperatorBuilder **)(local_190 + 8),0,(char *)0x0);
  local_f0 = *(Node **)(*(long *)pGVar12 + 8);
  local_168 = Graph::NewNode(pGVar11,pOVar8,1,&local_f0,false);
  bVar1 = param_3 - 6;
  if (bVar1 < 0x17) {
    uVar5 = *(undefined4 *)(&DAT_01a062e0 + (long)(char)bVar1 * 4);
    if (param_4[1] == 2) {
      pGVar11 = *(Graph **)pGVar12;
      pOVar8 = (Operator *)
               CommonOperatorBuilder::Parameter
                         (*(CommonOperatorBuilder **)(pGVar12 + 8),1,(char *)0x0);
      local_f0 = *(Node **)(*(long *)local_190 + 8);
      uVar7 = Graph::NewNode(pGVar11,pOVar8,1,&local_f0,false);
      pGVar11 = *(Graph **)local_190;
      pOVar8 = (Operator *)
               CommonOperatorBuilder::Parameter
                         (*(CommonOperatorBuilder **)(local_190 + 8),2,(char *)0x0);
      local_f0 = *(Node **)(*(long *)local_190 + 8);
      uVar9 = Graph::NewNode(pGVar11,pOVar8,1,&local_f0,false);
      local_f0 = (Node *)WasmGraphBuilder::Binop
                                   ((WasmGraphBuilder *)&local_198,uVar5,uVar7,uVar9,0xffffffff);
    }
    else {
      if (param_4[1] != 1) goto LAB_013244b0;
      pGVar11 = *(Graph **)pGVar12;
      pOVar8 = (Operator *)
               CommonOperatorBuilder::Parameter
                         (*(CommonOperatorBuilder **)(pGVar12 + 8),1,(char *)0x0);
      local_f0 = *(Node **)(*(long *)local_190 + 8);
      uVar7 = Graph::NewNode(pGVar11,pOVar8,1,&local_f0,false);
      local_f0 = (Node *)WasmGraphBuilder::Unop
                                   ((WasmGraphBuilder *)&local_198,uVar5,uVar7,0xffffffff);
    }
    puVar17 = (&PTR_s_WasmMathIntrinsic_F64Acos_01cc3c00)[(char)bVar1];
    WasmGraphBuilder::Return(&local_198,&local_f0,1);
    uVar7 = GetWasmCallDescriptor(aZStack_b0,param_4,0,0);
    if (*(char *)(*(long *)(pGVar10 + 0x10) + 0x10) == '\x04') {
      uVar7 = FUN_01328d00(aZStack_b0,uVar7,2,0x405);
    }
    local_f0 = (Node *)CONCAT26(local_f0._6_2_,0x10000000000);
    local_e8 = 0;
    local_e0 = 0;
    Pipeline::GenerateCodeForWasmNativeStub(param_1,this,uVar7,pGVar10,5,0,puVar17,&local_f0,0);
    pvVar4 = local_118;
    local_118 = (void *)0x0;
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
    Zone::~Zone(aZStack_b0);
    if ((local_110 != (byte **)0x0) && (*local_108 != 0)) {
      plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar6 + 0x28))(plVar6,local_108,local_100,local_f8);
    }
    if (*(long *)(lVar2 + 0x28) == local_70) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_013244b0:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

