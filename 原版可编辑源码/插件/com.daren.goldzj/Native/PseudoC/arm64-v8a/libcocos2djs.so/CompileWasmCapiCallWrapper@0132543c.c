
/* v8::internal::compiler::CompileWasmCapiCallWrapper(v8::internal::wasm::WasmEngine*,
   v8::internal::wasm::NativeModule*, v8::internal::Signature<v8::internal::wasm::ValueType>*,
   unsigned long) */

undefined8
v8::internal::compiler::CompileWasmCapiCallWrapper
          (WasmEngine *param_1,NativeModule *param_2,Signature *param_3,ulong param_4)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  WasmCode *this;
  void *pvVar4;
  Zone *pZVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 uVar8;
  Operator *pOVar9;
  Node *pNVar10;
  Node *pNVar11;
  Operator *pOVar12;
  ulong uVar13;
  CallDescriptor *pCVar14;
  Node *pNVar15;
  Node *pNVar16;
  ulong uVar17;
  Graph *pGVar18;
  Graph *pGVar19;
  uint uVar20;
  MachineOperatorBuilder *this_00;
  char *pcVar21;
  int iVar22;
  long lVar23;
  ulong uVar24;
  byte *pbVar25;
  long lVar26;
  uint uVar27;
  byte *pbVar28;
  Graph *pGVar29;
  Graph *pGVar30;
  int iVar31;
  undefined1 auVar32 [16];
  ulong in_stack_fffffffffffffd00;
  WasmCode *local_298;
  void *local_290;
  undefined8 uStack_288;
  void *local_280;
  undefined8 uStack_278;
  ulong local_270;
  ulong local_268;
  byte **local_260;
  byte *local_258;
  char *local_250;
  undefined8 local_248;
  undefined **local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined4 *local_220;
  undefined4 local_218;
  undefined2 local_214;
  undefined8 local_210;
  Node *local_208;
  Node *local_200;
  Node *local_1f8;
  ulong local_1f0;
  ulong local_1e8;
  void *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  void *local_1a8;
  undefined8 uStack_1a0;
  void *local_198;
  undefined8 uStack_190;
  Zone *local_180;
  Graph *local_178;
  undefined8 local_170;
  ulong *puStack_168;
  ulong *local_160;
  undefined8 uStack_158;
  Node *local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  Node *local_130;
  undefined8 uStack_128;
  undefined1 local_120;
  undefined1 local_11f;
  undefined1 local_11e;
  Signature *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  void *local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  Zone aZStack_d8 [16];
  Graph *local_c8;
  long lStack_c0;
  Node *local_98;
  undefined8 local_90;
  ulong local_88;
  ulong uStack_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  if (DAT_01d46088 == (byte *)0x0) {
    plVar7 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d46088 = (byte *)(**(code **)(*plVar7 + 0x10))(plVar7,"disabled-by-default-v8.wasm");
  }
  pbVar25 = DAT_01d46088;
  local_260 = (byte **)0x0;
  if ((*DAT_01d46088 & 5) != 0) {
    local_180 = (Zone *)0x0;
    local_178 = (Graph *)0x0;
    plVar7 = (long *)tracing::TraceEventHelper::GetTracingController();
    in_stack_fffffffffffffd00 = 0;
    uVar8 = (**(code **)(*plVar7 + 0x18))
                      (plVar7,0x58,pbVar25,"CompileWasmCapiFunction",0,0,0,0,0,0,0,&local_180,0);
    pGVar18 = local_178;
    local_178 = (Graph *)0x0;
    if (pGVar18 != (Graph *)0x0) {
      (**(code **)(*(long *)pGVar18 + 8))();
    }
    pZVar5 = local_180;
    local_180 = (Zone *)0x0;
    if (pZVar5 != (Zone *)0x0) {
      (**(code **)(*(long *)pZVar5 + 8))();
    }
    local_260 = &local_258;
    local_250 = "CompileWasmCapiFunction";
    local_258 = pbVar25;
    local_248 = uVar8;
  }
  Zone::Zone(aZStack_d8,(AccountingAllocator *)(param_1 + 0x58),
             "../../src/compiler/wasm-compiler.cc:6591");
  if ((ulong)(lStack_c0 - (long)local_c8) < 0x168) {
    pGVar18 = (Graph *)Zone::NewExpand(aZStack_d8,0x168);
  }
  else {
    pGVar18 = local_c8;
    local_c8 = local_c8 + 0x168;
  }
  if ((ulong)(lStack_c0 - (long)local_c8) < 0x40) {
    pGVar30 = (Graph *)Zone::NewExpand(aZStack_d8,0x40);
  }
  else {
    pGVar30 = local_c8;
    local_c8 = local_c8 + 0x40;
  }
  Graph::Graph(pGVar30,aZStack_d8);
  if ((ulong)(lStack_c0 - (long)local_c8) < 0x10) {
    pGVar29 = (Graph *)Zone::NewExpand(aZStack_d8,0x10);
  }
  else {
    pGVar29 = local_c8;
    local_c8 = local_c8 + 0x10;
  }
  CommonOperatorBuilder::CommonOperatorBuilder((CommonOperatorBuilder *)pGVar29,aZStack_d8);
  if ((ulong)(lStack_c0 - (long)local_c8) < 0x28) {
    pGVar19 = (Graph *)Zone::NewExpand(aZStack_d8,0x28);
  }
  else {
    pGVar19 = local_c8;
    local_c8 = local_c8 + 0x28;
  }
  uVar6 = InstructionSelector::SupportedMachineOperatorFlags();
  auVar32 = InstructionSelector::AlignmentRequirements();
  MachineOperatorBuilder::MachineOperatorBuilder
            ((MachineOperatorBuilder *)pGVar19,aZStack_d8,5,uVar6,auVar32._0_8_,
             auVar32._8_8_ & 0xffffffff);
  *(Graph **)pGVar18 = pGVar30;
  *(Graph **)(pGVar18 + 8) = pGVar29;
  *(Graph **)(pGVar18 + 0x10) = pGVar19;
  lVar23 = *(long *)pGVar30;
  *(long *)(pGVar18 + 0x18) = 0;
  *(long *)(pGVar18 + 0x20) = 0;
  *(long *)(pGVar18 + 0x38) = 0;
  *(long *)(pGVar18 + 0x40) = 0;
  *(long *)(pGVar18 + 0x58) = 0;
  *(long *)(pGVar18 + 0x60) = 0;
  *(long *)(pGVar18 + 0x78) = 0;
  *(long *)(pGVar18 + 0x80) = 0;
  *(long *)(pGVar18 + 0x98) = 0;
  *(long *)(pGVar18 + 0xa0) = 0;
  *(long *)(pGVar18 + 0xb8) = 0;
  *(long *)(pGVar18 + 0xc0) = 0;
  *(long *)(pGVar18 + 0xd8) = 0;
  *(long *)(pGVar18 + 0xe0) = 0;
  *(long *)(pGVar18 + 0xf8) = 0;
  *(long *)(pGVar18 + 0x100) = 0;
  *(long *)(pGVar18 + 0x118) = 0;
  *(long *)(pGVar18 + 0x120) = 0;
  *(long *)(pGVar18 + 0x138) = 0;
  *(long *)(pGVar18 + 0x140) = 0;
  *(long *)(pGVar18 + 0x158) = lVar23;
  *(long *)(pGVar18 + 0x160) = 0;
  *(long *)(pGVar18 + 0x28) = 0x100;
  *(long *)(pGVar18 + 0x48) = 0x100;
  *(long *)(pGVar18 + 0x68) = 0x100;
  *(long *)(pGVar18 + 0x88) = 0x100;
  *(long *)(pGVar18 + 0xa8) = 0x100;
  *(long *)(pGVar18 + 200) = 0x100;
  *(long *)(pGVar18 + 0xe8) = 0x100;
  *(long *)(pGVar18 + 0x108) = 0x100;
  *(long *)(pGVar18 + 0x128) = 0x100;
  *(long *)(pGVar18 + 0x148) = 0x100;
  local_e0 = *(undefined4 *)(param_2 + 0xc0);
  puStack_168 = (ulong *)0x0;
  local_170 = 0;
  uStack_158 = 0;
  local_160 = (ulong *)0x0;
  uStack_148 = 0;
  local_150 = (Node *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  local_130 = (Node *)0x0;
  lVar23 = *(long *)(param_3 + 8);
  pcVar21 = *(char **)(param_3 + 0x10);
  if (pcVar21 != pcVar21 + lVar23 + *(long *)param_3) {
    lVar26 = *(long *)param_3 + lVar23;
    do {
      if (*pcVar21 == '\x05') {
        local_120 = 1;
        goto LAB_013256c4;
      }
      lVar26 = lVar26 + -1;
      pcVar21 = pcVar21 + 1;
    } while (lVar26 != 0);
  }
  local_120 = 0;
LAB_013256c4:
  local_11f = 0;
  uStack_110 = 0;
  local_108 = 0;
  local_100 = (void *)0x0;
  local_11e = FLAG_untrusted_code_mitigations;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 1;
  pGVar30 = *(Graph **)pGVar18;
  local_180 = aZStack_d8;
  local_178 = pGVar18;
  local_118 = param_3;
  pOVar9 = (Operator *)
           CommonOperatorBuilder::Start(*(CommonOperatorBuilder **)(pGVar18 + 8),(int)lVar23 + 3);
  local_208 = (Node *)0x0;
  local_270 = Graph::NewNode(pGVar30,pOVar9,0,&local_208,false);
  local_160 = &local_268;
  puStack_168 = &local_270;
  *(ulong *)(*(long *)local_178 + 8) = local_270;
  pGVar30 = *(Graph **)local_178;
  local_268 = local_270;
  pOVar9 = (Operator *)
           CommonOperatorBuilder::Parameter
                     (*(CommonOperatorBuilder **)(local_178 + 8),0,(char *)0x0);
  local_208 = *(Node **)(*(long *)local_178 + 8);
  local_150 = (Node *)Graph::NewNode(pGVar30,pOVar9,1,&local_208,false);
  lVar23 = *(long *)local_118;
  lVar26 = *(long *)(local_118 + 8);
  pbVar25 = *(byte **)(local_118 + 0x10);
  uVar20 = 0;
  if (lVar26 != 0) {
    pbVar28 = pbVar25 + lVar23;
    do {
      uVar27 = *pbVar28 - 1;
      if ((8 < uVar27) || ((0x17fU >> (ulong)(uVar27 & 0x1f) & 1) == 0)) goto LAB_01326278;
      lVar26 = lVar26 + -1;
      pbVar28 = pbVar28 + 1;
      uVar20 = (1 << (ulong)(*(uint *)(&DAT_01a0633c + (long)(char)uVar27 * 4) & 0x1f)) + uVar20;
    } while (lVar26 != 0);
  }
  uVar27 = 0;
  for (; lVar23 != 0; lVar23 = lVar23 + -1) {
    uVar2 = *pbVar25 - 1;
    if ((8 < uVar2) || ((0x17fU >> (ulong)(uVar2 & 0x1f) & 1) == 0)) goto LAB_01326278;
    pbVar25 = pbVar25 + 1;
    uVar27 = (1 << (ulong)(*(uint *)(&DAT_01a0633c + (long)(char)uVar2 * 4) & 0x1f)) + uVar27;
  }
  if (uVar27 <= uVar20) {
    uVar27 = uVar20;
  }
  if (uVar27 == 0) {
    pNVar10 = (Node *)MachineGraph::IntPtrConstant((MachineGraph *)local_178,0);
  }
  else {
    pGVar30 = *(Graph **)local_178;
    pOVar9 = (Operator *)
             MachineOperatorBuilder::StackSlot
                       (*(MachineOperatorBuilder **)(local_178 + 0x10),uVar27,8);
    local_208 = (Node *)0x0;
    pNVar10 = (Node *)Graph::NewNode(pGVar30,pOVar9,0,&local_208,false);
  }
  uVar24 = *(ulong *)(local_118 + 8);
  iVar22 = (int)uVar24;
  if (0 < iVar22) {
    iVar31 = 0;
    lVar23 = 0;
    while( true ) {
      bVar1 = *(byte *)(*(long *)(local_118 + 0x10) + *(long *)local_118 + lVar23);
      pGVar29 = *(Graph **)local_178;
      pOVar9 = (Operator *)
               WasmGraphBuilder::GetSafeStoreOperator((WasmGraphBuilder *)&local_180,iVar31,bVar1);
      pNVar11 = (Node *)MachineGraph::Int32Constant((MachineGraph *)local_178,iVar31);
      pGVar30 = *(Graph **)local_178;
      pOVar12 = (Operator *)
                CommonOperatorBuilder::Parameter
                          (*(CommonOperatorBuilder **)(local_178 + 8),(int)(lVar23 + 1),(char *)0x0)
      ;
      local_208 = *(Node **)(*(long *)local_178 + 8);
      local_1f8 = (Node *)Graph::NewNode(pGVar30,pOVar12,1,&local_208,false);
      local_1f0 = *local_160;
      local_1e8 = *puStack_168;
      local_208 = pNVar10;
      local_200 = pNVar11;
      uVar13 = Graph::NewNode(pGVar29,pOVar9,5,&local_208,false);
      uVar20 = bVar1 - 1;
      *local_160 = uVar13;
      if ((8 < uVar20) || ((0x17fU >> (ulong)(uVar20 & 0x1f) & 1) == 0)) break;
      if ((uVar24 & 0xffffffff) - 1 == lVar23) goto LAB_01325990;
      iVar31 = *(int *)(&DAT_01a06360 + (long)(char)uVar20 * 4) + iVar31;
      lVar23 = lVar23 + 1;
    }
LAB_01326278:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
LAB_01325990:
  pGVar30 = *(Graph **)local_178;
  pOVar9 = (Operator *)
           CommonOperatorBuilder::Parameter
                     (*(CommonOperatorBuilder **)(local_178 + 8),iVar22 + 1,(char *)0x0);
  local_208 = *(Node **)(*(long *)local_178 + 8);
  pNVar11 = (Node *)Graph::NewNode(pGVar30,pOVar9,1,&local_208,false);
  pGVar30 = *(Graph **)local_178;
  pOVar9 = (Operator *)
           MachineOperatorBuilder::Load(*(MachineOperatorBuilder **)(local_178 + 0x10),0x708);
  local_200 = (Node *)MachineGraph::Int32Constant((MachineGraph *)local_178,0xb);
  local_1f0 = *puStack_168;
  local_1f8 = (Node *)*local_160;
  local_208 = pNVar11;
  pNVar11 = (Node *)Graph::NewNode(pGVar30,pOVar9,4,&local_208,false);
  *local_160 = (ulong)pNVar11;
  pGVar30 = *(Graph **)local_178;
  pOVar9 = (Operator *)
           MachineOperatorBuilder::Load(*(MachineOperatorBuilder **)(local_178 + 0x10),0x708);
  local_200 = (Node *)MachineGraph::Int32Constant((MachineGraph *)local_178,3);
  local_1f0 = *puStack_168;
  local_1f8 = (Node *)*local_160;
  local_208 = pNVar11;
  pNVar11 = (Node *)Graph::NewNode(pGVar30,pOVar9,4,&local_208,false);
  *local_160 = (ulong)pNVar11;
  pGVar30 = *(Graph **)local_178;
  pOVar9 = (Operator *)
           MachineOperatorBuilder::Load(*(MachineOperatorBuilder **)(local_178 + 0x10),0x708);
  local_200 = (Node *)MachineGraph::Int32Constant((MachineGraph *)local_178,0xb);
  local_1f0 = *puStack_168;
  local_1f8 = (Node *)*local_160;
  local_208 = pNVar11;
  uVar24 = Graph::NewNode(pGVar30,pOVar9,4,&local_208,false);
  *local_160 = uVar24;
  FUN_01329edc(&local_180,0);
  pNVar11 = local_130;
  if (local_130 == (Node *)0x0) {
    pGVar30 = *(Graph **)local_178;
    pOVar9 = (Operator *)
             MachineOperatorBuilder::Load(*(MachineOperatorBuilder **)(local_178 + 0x10),5);
    pNVar11 = local_150;
    local_200 = (Node *)MachineGraph::Int32Constant((MachineGraph *)local_178,0x5f);
    local_1f0 = *puStack_168;
    local_1f8 = (Node *)*local_160;
    local_208 = pNVar11;
    pNVar11 = (Node *)Graph::NewNode(pGVar30,pOVar9,4,&local_208,false);
    *local_160 = (ulong)pNVar11;
  }
  pGVar30 = *(Graph **)local_178;
  pOVar9 = (Operator *)
           MachineOperatorBuilder::LoadFramePointer(*(MachineOperatorBuilder **)(local_178 + 0x10));
  local_208 = (Node *)0x0;
  uVar8 = Graph::NewNode(pGVar30,pOVar9,0,&local_208,false);
  pGVar30 = *(Graph **)local_178;
  pOVar9 = (Operator *)
           MachineOperatorBuilder::Store(*(MachineOperatorBuilder **)(local_178 + 0x10),5);
  local_200 = (Node *)MachineGraph::Int32Constant((MachineGraph *)local_178,0x2c28);
  local_1f0 = *local_160;
  local_1e8 = *puStack_168;
  local_208 = pNVar11;
  local_1f8 = (Node *)uVar8;
  uVar13 = Graph::NewNode(pGVar30,pOVar9,5,&local_208,false);
  *local_160 = uVar13;
  local_210 = ExternalReference::Create(param_4);
  pGVar30 = *(Graph **)local_178;
  pOVar9 = (Operator *)
           CommonOperatorBuilder::ExternalConstant
                     (*(CommonOperatorBuilder **)(local_178 + 8),(ExternalReference *)&local_210);
  local_208 = (Node *)0x0;
  local_208 = (Node *)Graph::NewNode(pGVar30,pOVar9,0,&local_208,false);
  local_218 = 0x50005;
  local_220 = &local_218;
  local_214 = 5;
  uStack_228 = 2;
  local_230 = 1;
  local_1f0 = *local_160;
  local_1e8 = *puStack_168;
  local_200 = (Node *)uVar24;
  local_1f8 = pNVar10;
  pCVar14 = (CallDescriptor *)
            Linkage::GetSimplifiedCDescriptor(**(undefined8 **)local_178,&local_230,0);
  pOVar9 = (Operator *)
           CommonOperatorBuilder::Call(*(CommonOperatorBuilder **)(local_178 + 8),pCVar14);
  pNVar11 = (Node *)Graph::NewNode(*(Graph **)local_178,pOVar9,5,&local_208,false);
  *local_160 = (ulong)pNVar11;
  FUN_01329edc(&local_180,1);
  pGVar30 = *(Graph **)local_178;
  pOVar9 = (Operator *)CommonOperatorBuilder::Branch(*(CommonOperatorBuilder **)(local_178 + 8),1,1)
  ;
  this_00 = *(MachineOperatorBuilder **)(local_178 + 0x10);
  pGVar29 = *(Graph **)local_178;
  if (this_00[0x10] == (MachineOperatorBuilder)0x4) {
    pOVar12 = (Operator *)MachineOperatorBuilder::Word32Equal(this_00);
  }
  else {
    pOVar12 = (Operator *)MachineOperatorBuilder::Word64Equal(this_00);
  }
  local_200 = (Node *)MachineGraph::IntPtrConstant((MachineGraph *)local_178,0);
  local_208 = pNVar11;
  local_208 = (Node *)Graph::NewNode(pGVar29,pOVar12,2,&local_208,false);
  local_200 = (Node *)*puStack_168;
  pNVar15 = (Node *)Graph::NewNode(pGVar30,pOVar9,2,&local_208,false);
  pGVar30 = *(Graph **)local_178;
  pOVar9 = (Operator *)CommonOperatorBuilder::IfFalse(*(CommonOperatorBuilder **)(local_178 + 8));
  local_208 = pNVar15;
  uVar24 = Graph::NewNode(pGVar30,pOVar9,1,&local_208,false);
  *puStack_168 = uVar24;
  uStack_238 = 0x1d2cdf0;
  local_240 = &PTR__CallInterfaceDescriptor_01ca1920;
  pCVar14 = (CallDescriptor *)
            Linkage::GetStubCallDescriptor
                      (**(undefined8 **)local_178,&local_240,
                       CallDescriptors::call_descriptor_data_._3008_4_ -
                       CallDescriptors::call_descriptor_data_._3000_4_,0,0,1);
  pNVar16 = (Node *)MachineGraph::RelocatableIntPtrConstant((MachineGraph *)local_178,0x16,5);
  pGVar30 = *(Graph **)local_178;
  pOVar9 = (Operator *)
           CommonOperatorBuilder::Call(*(CommonOperatorBuilder **)(local_178 + 8),pCVar14);
  local_1f0 = *puStack_168;
  local_1f8 = (Node *)*local_160;
  local_208 = pNVar16;
  local_200 = pNVar11;
  pNVar11 = (Node *)Graph::NewNode(pGVar30,pOVar9,4,&local_208,false);
  WasmGraphBuilder::TerminateThrow((WasmGraphBuilder *)&local_180,pNVar11,(Node *)*puStack_168);
  pGVar30 = *(Graph **)local_178;
  pOVar9 = (Operator *)CommonOperatorBuilder::IfTrue(*(CommonOperatorBuilder **)(local_178 + 8));
  local_208 = pNVar15;
  uVar24 = Graph::NewNode(pGVar30,pOVar9,1,&local_208,false);
  *puStack_168 = uVar24;
  uVar24 = *(ulong *)local_118;
  if (uVar24 == 0) {
    local_208 = (Node *)MachineGraph::Int32Constant((MachineGraph *)local_178,0);
    WasmGraphBuilder::Return(&local_180,&local_208,1);
  }
  else {
    local_1f8 = (Node *)&local_1b0;
    local_208 = (Node *)&local_1f0;
    if (8 < uVar24) {
      local_200 = (Node *)&local_1f0;
      base::SmallVector<v8::internal::compiler::Node*,8ul>::Grow
                ((SmallVector<v8::internal::compiler::Node*,8ul> *)&local_208,uVar24);
    }
    iVar22 = 0;
    uVar13 = 0;
    local_200 = local_208 + uVar24 * 8;
    do {
      pGVar30 = *(Graph **)local_178;
      bVar1 = *(byte *)(*(long *)(local_118 + 0x10) + uVar13);
      pOVar9 = (Operator *)
               WasmGraphBuilder::GetSafeLoadOperator((WasmGraphBuilder *)&local_180,iVar22,bVar1);
      local_90 = MachineGraph::Int32Constant((MachineGraph *)local_178,iVar22);
      uStack_80 = *puStack_168;
      local_88 = *local_160;
      local_98 = pNVar10;
      uVar17 = Graph::NewNode(pGVar30,pOVar9,4,&local_98,false);
      *local_160 = uVar17;
      uVar20 = bVar1 - 1;
      *(ulong *)(local_208 + uVar13 * 8) = uVar17;
      if ((8 < uVar20) || ((0x17fU >> (ulong)(uVar20 & 0x1f) & 1) == 0)) goto LAB_01326278;
      uVar13 = uVar13 + 1;
      iVar22 = *(int *)(&DAT_01a06360 + (long)(char)uVar20 * 4) + iVar22;
    } while (uVar24 != uVar13);
    WasmGraphBuilder::Return(&local_180,local_208,(long)local_200 - (long)local_208 >> 3);
    if (local_208 != (Node *)&local_1f0) {
      free(local_208);
    }
  }
  pcVar21 = *(char **)(local_118 + 0x10);
  if (pcVar21 != pcVar21 + *(long *)(local_118 + 8) + *(long *)local_118) {
    lVar23 = *(long *)local_118 + *(long *)(local_118 + 8);
    do {
      if (*pcVar21 == '\x02') {
        WasmGraphBuilder::LowerInt64((WasmGraphBuilder *)&local_180,0);
        break;
      }
      lVar23 = lVar23 + -1;
      pcVar21 = pcVar21 + 1;
    } while (lVar23 != 0);
  }
  uVar8 = GetWasmCallDescriptor(aZStack_d8,param_3,0,2);
  if (*(char *)(*(long *)(pGVar18 + 0x10) + 0x10) == '\x04') {
    uVar8 = FUN_01328d00(aZStack_d8,uVar8,2,0x405);
  }
  local_98 = (Node *)CONCAT26(local_98._6_2_,0x10000000000);
  local_90 = 0;
  local_88 = local_88 & 0xffffffffffff0000;
  Pipeline::GenerateCodeForWasmNativeStub
            ((Pipeline *)&local_208,param_1,uVar8,pGVar18,6,1,"WasmCapiCall",&local_98,0);
  local_280 = local_198;
  uStack_288 = uStack_1a0;
  local_290 = local_1a8;
  uStack_1a0 = 0;
  local_198 = (void *)0x0;
  local_1a8 = (void *)0x0;
  uStack_278 = uStack_190;
  wasm::NativeModule::AddCode
            (&local_98,param_2,0xffffffff,&local_208,local_1b0,local_1ac,&local_280,&local_290,1,
             in_stack_fffffffffffffd00 & 0xffffffffffffff00);
  pvVar4 = local_290;
  local_290 = (void *)0x0;
  if (pvVar4 != (void *)0x0) {
    operator_delete__(pvVar4);
  }
  pvVar4 = local_280;
  local_280 = (void *)0x0;
  if (pvVar4 != (void *)0x0) {
    operator_delete__(pvVar4);
  }
  local_298 = (WasmCode *)local_98;
  local_98 = (Node *)0x0;
  uVar8 = wasm::NativeModule::PublishCode(param_2,&local_298);
  this = local_298;
  local_298 = (WasmCode *)0x0;
  if (this != (WasmCode *)0x0) {
    wasm::WasmCode::~WasmCode(this);
    operator_delete(this);
  }
  pNVar10 = local_98;
  local_98 = (Node *)0x0;
  if (pNVar10 != (Node *)0x0) {
    wasm::WasmCode::~WasmCode((WasmCode *)pNVar10);
    operator_delete(pNVar10);
  }
  pvVar4 = local_198;
  local_198 = (void *)0x0;
  if (pvVar4 != (void *)0x0) {
    operator_delete__(pvVar4);
  }
  pvVar4 = local_1a8;
  local_1a8 = (void *)0x0;
  if (pvVar4 != (void *)0x0) {
    operator_delete__(pvVar4);
  }
  pvVar4 = local_1b8;
  local_1b8 = (void *)0x0;
  if (pvVar4 != (void *)0x0) {
    operator_delete__(pvVar4);
  }
  pvVar4 = local_100;
  local_100 = (void *)0x0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  Zone::~Zone(aZStack_d8);
  if ((local_260 != (byte **)0x0) && (*local_258 != 0)) {
    plVar7 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar7 + 0x28))(plVar7,local_258,local_250,local_248);
  }
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

