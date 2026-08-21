
/* v8::internal::compiler::EffectControlLinearizer::LowerCompareMaps(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerCompareMaps
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  long lVar1;
  ulong *puVar2;
  Node *pNVar3;
  GraphAssemblerLabel *pGVar4;
  ulong uVar5;
  Node *pNVar6;
  long lVar7;
  long lVar8;
  GraphAssemblerLabel local_120 [4];
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  FieldAccess local_e8 [4];
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  GraphAssemblerLabel local_b0 [4];
  undefined4 local_ac;
  AccessBuilder *local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined1 local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  puVar2 = (ulong *)CompareMapsParametersOf(*(Operator **)param_1);
  uVar5 = *puVar2;
  if ((uVar5 & 3) == 1) {
    lVar7 = 0;
  }
  else if ((uVar5 & 3) == 0) {
    lVar7 = 1;
  }
  else {
    lVar7 = *(long *)(uVar5 + 6) - *(long *)(uVar5 - 2) >> 3;
  }
  pNVar6 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar6 = (Node *)(*(long *)pNVar6 + 0x10);
  }
  pNVar6 = *(Node **)pNVar6;
  this_00 = (GraphAssembler *)(this + 0x38);
  local_a8 = (AccessBuilder *)GraphAssembler::NewBasicBlock(this_00,false);
  local_b0[0] = (GraphAssemblerLabel)0x0;
  uStack_a0 = 0;
  local_ac = 1;
  local_78 = 1;
  AccessBuilder::ForMap(local_a8);
  pNVar6 = (Node *)GraphAssembler::LoadField(this_00,local_e8,pNVar6);
  if (lVar7 != 0) {
    lVar8 = 0;
    do {
      uVar5 = *puVar2;
      if ((uVar5 & 3) != 0) {
        if ((ulong)(*(long *)(uVar5 + 6) - *(long *)(uVar5 - 2) >> 3) <= (ulong)(lVar8 >> 0x20)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar5 = *(ulong *)(*(long *)(uVar5 - 2) + (lVar8 >> 0x20) * 8);
      }
      pNVar3 = (Node *)GraphAssembler::HeapConstant(this_00,uVar5);
      pGVar4 = (GraphAssemblerLabel *)GraphAssembler::TaggedEqual(this_00,pNVar6,pNVar3);
      local_e0 = GraphAssembler::NewBasicBlock(this_00,false);
      uStack_d8 = 0;
      local_e8[0] = (FieldAccess)0x0;
      local_e4 = 1;
      local_118 = GraphAssembler::NewBasicBlock(this_00,false);
      uStack_110 = 0;
      local_120[0] = (GraphAssemblerLabel)0x0;
      local_11c = 1;
      GraphAssembler::BranchWithCriticalSafetyCheck((Node *)this_00,pGVar4,local_120);
      GraphAssembler::Bind<0ul>(this_00,local_120);
      pNVar3 = (Node *)GraphAssembler::Int32Constant(this_00,1);
      GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_b0,pNVar3);
      GraphAssembler::GotoBasicBlock(this_00,(BasicBlock *)local_a8);
      *(undefined8 *)(this + 0x58) = 0;
      *(undefined8 *)(this + 0x60) = 0;
      GraphAssembler::Bind<0ul>(this_00,(GraphAssemblerLabel *)local_e8);
      lVar7 = lVar7 + -1;
      lVar8 = lVar8 + 0x100000000;
    } while (lVar7 != 0);
  }
  pNVar6 = (Node *)GraphAssembler::Int32Constant(this_00,0);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_b0,pNVar6);
  GraphAssembler::GotoBasicBlock(this_00,(BasicBlock *)local_a8);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<1ul>(this_00,local_b0);
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_88);
}

