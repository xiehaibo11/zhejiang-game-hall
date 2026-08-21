
/* v8::internal::compiler::CompileWasmInterpreterEntry(v8::internal::wasm::WasmEngine*,
   v8::internal::wasm::WasmFeatures const&, unsigned int,
   v8::internal::Signature<v8::internal::wasm::ValueType>*) */

void __thiscall
v8::internal::compiler::CompileWasmInterpreterEntry
          (compiler *this,WasmEngine *param_1,WasmFeatures *param_2,uint param_3,Signature *param_4)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  MachineGraph *this_00;
  void *pvVar4;
  undefined4 uVar5;
  int iVar6;
  Operator *pOVar7;
  Node *pNVar8;
  Node *pNVar9;
  Operator *pOVar10;
  undefined8 uVar11;
  ulong *puVar12;
  uint uVar13;
  Pipeline *in_x8;
  char *pcVar14;
  long lVar15;
  byte *pbVar16;
  uint uVar17;
  ulong uVar18;
  byte *pbVar19;
  Graph *pGVar20;
  ulong uVar21;
  ulong uVar22;
  Graph *this_01;
  undefined1 auVar23 [16];
  ulong local_3d0;
  ulong local_3c8;
  CommonOperatorBuilder aCStack_3c0 [16];
  undefined8 local_3b0 [4];
  long local_390;
  long local_388;
  undefined8 local_370;
  Node *pNStack_368;
  Zone *local_360;
  MachineGraph *local_358;
  undefined8 local_350;
  ulong *puStack_348;
  ulong *puStack_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined1 local_300;
  undefined1 local_2ff;
  undefined1 local_2fe;
  ulong *local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  void *local_2e0;
  undefined4 local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined4 local_2c0;
  undefined8 *local_2b8;
  CommonOperatorBuilder *pCStack_2b0;
  MachineOperatorBuilder *local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
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
  MachineOperatorBuilder aMStack_150 [16];
  char local_140;
  Zone aZStack_128 [64];
  Node *local_e8;
  Node *local_e0;
  Node **local_d8;
  ulong local_d0;
  ulong local_c8;
  Node *local_90;
  undefined8 local_88;
  ulong local_80;
  ulong uStack_78;
  long local_70;
  
  puVar12 = (ulong *)(ulong)param_3;
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  Zone::Zone(aZStack_128,(AccountingAllocator *)(this + 0x58),
             "../../src/compiler/wasm-compiler.cc:6645");
  Graph::Graph((Graph *)local_3b0,aZStack_128);
  CommonOperatorBuilder::CommonOperatorBuilder(aCStack_3c0,aZStack_128);
  uVar5 = InstructionSelector::SupportedMachineOperatorFlags();
  auVar23 = InstructionSelector::AlignmentRequirements();
  MachineOperatorBuilder::MachineOperatorBuilder
            (aMStack_150,aZStack_128,5,uVar5,auVar23._0_8_,auVar23._8_8_ & 0xffffffff);
  uStack_2a0 = 0;
  local_260 = 0;
  uStack_258 = 0;
  local_220 = 0;
  uStack_218 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_3d0 = 0;
  local_3c8 = 0;
  local_358 = (MachineGraph *)&local_2b8;
  local_280 = 0;
  uStack_278 = 0;
  local_298 = 0;
  uStack_290 = 0x100;
  local_270 = 0x100;
  local_240 = 0;
  uStack_238 = 0;
  local_250 = 0x100;
  local_230 = 0x100;
  local_200 = 0;
  local_210 = 0x100;
  local_1f0 = 0x100;
  local_1f8 = 0;
  local_1c0 = 0;
  local_1d0 = 0x100;
  local_1b0 = 0x100;
  local_1b8 = 0;
  local_180 = 0;
  local_190 = 0x100;
  local_170 = 0x100;
  local_178 = 0;
  local_158 = 0;
  local_160 = local_3b0[0];
  local_2c0 = *(undefined4 *)param_1;
  local_350 = 0;
  uStack_338 = 0;
  uStack_328 = 0;
  local_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  local_310 = 0;
  uVar22 = puVar12[1];
  pcVar14 = (char *)puVar12[2];
  if (pcVar14 != pcVar14 + uVar22 + *puVar12) {
    lVar15 = *puVar12 + uVar22;
    do {
      if (*pcVar14 == '\x05') {
        local_300 = 1;
        goto LAB_01326404;
      }
      lVar15 = lVar15 + -1;
      pcVar14 = pcVar14 + 1;
    } while (lVar15 != 0);
  }
  local_300 = 0;
LAB_01326404:
  local_2ff = 0;
  local_2fe = FLAG_untrusted_code_mitigations;
  puStack_348 = &local_3c8;
  local_2d8 = 1;
  puStack_340 = &local_3d0;
  uStack_2f0 = 0;
  local_2e8 = 0;
  local_2e0 = (void *)0x0;
  local_2d0 = 0;
  uStack_2c8 = 0;
  local_360 = aZStack_128;
  local_2f8 = puVar12;
  local_2b8 = local_3b0;
  pCStack_2b0 = aCStack_3c0;
  local_2a8 = aMStack_150;
  pOVar7 = (Operator *)CommonOperatorBuilder::Start(aCStack_3c0,(int)uVar22 + 3);
  local_e8 = (Node *)0x0;
  local_3d0 = Graph::NewNode((Graph *)local_3b0,pOVar7,0,&local_e8,false);
  this_00 = local_358;
  *(ulong *)(*(long *)local_358 + 8) = local_3d0;
  pGVar20 = *(Graph **)local_358;
  local_3c8 = local_3d0;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::Parameter
                     (*(CommonOperatorBuilder **)(local_358 + 8),0,(char *)0x0);
  local_e8 = *(Node **)(*(long *)this_00 + 8);
  local_330 = Graph::NewNode(pGVar20,pOVar7,1,&local_e8,false);
  uVar21 = *puVar12;
  uVar18 = puVar12[1];
  pbVar16 = (byte *)puVar12[2];
  uVar13 = 0;
  if (uVar18 != 0) {
    pbVar19 = pbVar16 + uVar21;
    do {
      uVar17 = *pbVar19 - 1;
      if ((8 < uVar17) || ((0x17fU >> (ulong)(uVar17 & 0x1f) & 1) == 0)) goto LAB_01326958;
      uVar18 = uVar18 - 1;
      pbVar19 = pbVar19 + 1;
      uVar13 = *(int *)(&DAT_01a06360 + (long)(char)uVar17 * 4) + uVar13;
    } while (uVar18 != 0);
  }
  uVar17 = 0;
  for (; uVar21 != 0; uVar21 = uVar21 - 1) {
    uVar2 = *pbVar16 - 1;
    if ((8 < uVar2) || ((0x17fU >> (ulong)(uVar2 & 0x1f) & 1) == 0)) goto LAB_01326958;
    pbVar16 = pbVar16 + 1;
    uVar17 = *(int *)(&DAT_01a06360 + (long)(char)uVar2 * 4) + uVar17;
  }
  if (uVar17 == 0 && uVar13 == 0) {
    pNVar8 = (Node *)MachineGraph::IntPtrConstant(this_00,0);
  }
  else {
    pGVar20 = *(Graph **)this_00;
    if (uVar17 <= uVar13) {
      uVar17 = uVar13;
    }
    pOVar7 = (Operator *)
             MachineOperatorBuilder::StackSlot
                       (*(MachineOperatorBuilder **)(this_00 + 0x10),uVar17,8);
    local_e8 = (Node *)0x0;
    pNVar8 = (Node *)Graph::NewNode(pGVar20,pOVar7,0,&local_e8,false);
  }
  if (0 < (int)uVar22) {
    uVar21 = 0;
    iVar6 = 0;
    do {
      this_01 = *(Graph **)this_00;
      bVar1 = *(byte *)(puVar12[2] + *puVar12 + uVar21);
      pOVar7 = (Operator *)
               WasmGraphBuilder::GetSafeStoreOperator((WasmGraphBuilder *)&local_360,iVar6,bVar1);
      pNVar9 = (Node *)MachineGraph::Int32Constant(this_00,iVar6);
      pGVar20 = *(Graph **)this_00;
      uVar21 = uVar21 + 1;
      pOVar10 = (Operator *)
                CommonOperatorBuilder::Parameter
                          (*(CommonOperatorBuilder **)(this_00 + 8),(int)uVar21,(char *)0x0);
      local_e8 = *(Node **)(*(long *)this_00 + 8);
      local_d8 = (Node **)Graph::NewNode(pGVar20,pOVar10,1,&local_e8,false);
      local_d0 = local_3d0;
      local_c8 = local_3c8;
      local_e8 = pNVar8;
      local_e0 = pNVar9;
      local_3d0 = Graph::NewNode(this_01,pOVar7,5,&local_e8,false);
      uVar13 = bVar1 - 1;
      if ((8 < uVar13) || ((0x17fU >> (ulong)(uVar13 & 0x1f) & 1) == 0)) goto LAB_01326958;
      iVar6 = *(int *)(&DAT_01a06360 + (long)(char)uVar13 * 4) + iVar6;
    } while ((uVar22 & 0xffffffff) != uVar21);
  }
  pGVar20 = *(Graph **)this_00;
  pOVar7 = (Operator *)
           CommonOperatorBuilder::NumberConstant
                     (*(CommonOperatorBuilder **)(this_00 + 8),(double)(int)param_2);
  local_e8 = (Node *)0x0;
  local_370 = Graph::NewNode(pGVar20,pOVar7,0,&local_e8,false);
  pNStack_368 = pNVar8;
  uVar11 = MachineGraph::IntPtrConstant(this_00,0);
  WasmGraphBuilder::BuildCallToRuntimeWithContext
            ((WasmGraphBuilder *)&local_360,0x1cc,uVar11,&local_370,2,&local_3d0,local_3c8);
  uVar22 = *puVar12;
  if (uVar22 == 0) {
    local_e8 = (Node *)MachineGraph::Int32Constant(this_00,0);
    WasmGraphBuilder::Return(&local_360,&local_e8,1);
  }
  else {
    local_d8 = &local_90;
    local_e8 = (Node *)&local_d0;
    if (8 < uVar22) {
      local_e0 = (Node *)&local_d0;
      base::SmallVector<v8::internal::compiler::Node*,8ul>::Grow
                ((SmallVector<v8::internal::compiler::Node*,8ul> *)&local_e8,uVar22);
    }
    iVar6 = 0;
    uVar21 = 0;
    local_e0 = local_e8 + uVar22 * 8;
    do {
      pGVar20 = *(Graph **)this_00;
      bVar1 = *(byte *)(puVar12[2] + uVar21);
      pOVar7 = (Operator *)
               WasmGraphBuilder::GetSafeLoadOperator((WasmGraphBuilder *)&local_360,iVar6,bVar1);
      local_88 = MachineGraph::Int32Constant(this_00,iVar6);
      local_80 = local_3d0;
      uStack_78 = local_3c8;
      local_90 = pNVar8;
      local_3d0 = Graph::NewNode(pGVar20,pOVar7,4,&local_90,false);
      uVar13 = bVar1 - 1;
      *(ulong *)(local_e8 + uVar21 * 8) = local_3d0;
      if ((8 < uVar13) || ((0x17fU >> (ulong)(uVar13 & 0x1f) & 1) == 0)) {
LAB_01326958:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      uVar21 = uVar21 + 1;
      iVar6 = *(int *)(&DAT_01a06360 + (long)(char)uVar13 * 4) + iVar6;
    } while (uVar22 != uVar21);
    WasmGraphBuilder::Return(&local_360,local_e8,(long)local_e0 - (long)local_e8 >> 3);
    if (local_e8 != (Node *)&local_d0) {
      free(local_e8);
    }
  }
  pcVar14 = (char *)puVar12[2];
  if (pcVar14 != pcVar14 + puVar12[1] + *puVar12) {
    lVar15 = *puVar12 + puVar12[1];
    do {
      if (*pcVar14 == '\x02') {
        WasmGraphBuilder::LowerInt64((WasmGraphBuilder *)&local_360,0);
        break;
      }
      lVar15 = lVar15 + -1;
      pcVar14 = pcVar14 + 1;
    } while (lVar15 != 0);
  }
  uVar11 = GetWasmCallDescriptor(aZStack_128,puVar12,0,0);
  if (local_140 == '\x04') {
    uVar11 = FUN_01328d00(aZStack_128,uVar11,2,0x405);
  }
  local_e8 = (Node *)&local_d8;
  local_e0 = (Node *)0x20;
  iVar6 = SNPrintF(local_e8,0x20,"wasm-interpreter-entry#%d",(int)param_2);
  local_e0 = (Node *)(long)iVar6;
  local_90 = (Node *)CONCAT26(local_90._6_2_,0x10000000000);
  local_88 = 0;
  local_80 = local_80 & 0xffffffffffff0000;
  Pipeline::GenerateCodeForWasmNativeStub(in_x8,this,uVar11,&local_2b8,10,3,local_e8,&local_90,0);
  pvVar4 = local_2e0;
  *(undefined2 *)(in_x8 + 0x85) = 0x201;
  local_2e0 = (void *)0x0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  if (local_390 != 0) {
    local_388 = local_390;
  }
  Zone::~Zone(aZStack_128);
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

