
/* v8::internal::compiler::EffectControlLinearizer::LowerCheckMaps(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerCheckMaps
          (EffectControlLinearizer *this,Node *param_1,Node *param_2)

{
  GraphAssembler *this_00;
  byte *pbVar1;
  long lVar2;
  byte *pbVar3;
  Node *pNVar4;
  GraphAssemblerLabel *pGVar5;
  Node *pNVar6;
  AccessBuilder *this_01;
  undefined8 uVar7;
  CallDescriptor *pCVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  Operator *pOVar11;
  AccessBuilder *this_02;
  FieldAccess *pFVar12;
  ulong uVar13;
  EffectControlLinearizer *pEVar14;
  Node *pNVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  GraphAssemblerLabel local_118 [4];
  undefined4 local_114;
  AccessBuilder *local_110;
  undefined8 uStack_108;
  FieldAccess local_e0 [4];
  undefined4 local_dc;
  BasicBlock *local_d8;
  undefined8 uStack_d0;
  undefined8 local_a8;
  AccessBuilder *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  pbVar3 = (byte *)CheckMapsParametersOf(*(Operator **)param_1);
  pNVar15 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar15 = (Node *)(*(long *)pNVar15 + 0x10);
  }
  uVar13 = *(ulong *)(pbVar3 + 8);
  pNVar15 = *(Node **)pNVar15;
  if ((uVar13 & 3) == 1) {
    lVar16 = 0;
  }
  else if ((uVar13 & 3) == 0) {
    lVar16 = 1;
  }
  else {
    lVar16 = *(long *)(uVar13 + 6) - *(long *)(uVar13 - 2) >> 3;
  }
  this_00 = (GraphAssembler *)(this + 0x38);
  if ((*pbVar3 & 1) == 0) {
    local_a0 = (AccessBuilder *)GraphAssembler::NewBasicBlock(this_00,false);
    local_a8._0_4_ = (uint)local_a8 & 0xffffff00;
    local_a8 = (Node *)CONCAT44(1,(uint)local_a8);
    local_98 = 0;
    AccessBuilder::ForMap(local_a0);
    pNVar15 = (Node *)GraphAssembler::LoadField(this_00,local_e0,pNVar15);
    if (lVar16 != 0) {
      lVar17 = 0;
      do {
        uVar13 = *(ulong *)(pbVar3 + 8);
        if ((uVar13 & 3) != 0) {
          if ((ulong)(*(long *)(uVar13 + 6) - *(long *)(uVar13 - 2) >> 3) <= (ulong)(lVar17 >> 0x20)
             ) {
LAB_016a476c:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar13 = *(ulong *)(*(long *)(uVar13 - 2) + (lVar17 >> 0x20) * 8);
        }
        pNVar4 = (Node *)GraphAssembler::HeapConstant(this_00,uVar13);
        pGVar5 = (GraphAssemblerLabel *)GraphAssembler::TaggedEqual(this_00,pNVar15,pNVar4);
        if (lVar16 == 1) {
          GraphAssembler::DeoptimizeIfNot(this_00,0x26,pbVar3 + 0x10,pGVar5,param_2,0);
        }
        else {
          local_d8 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
          uStack_d0 = 0;
          local_e0[0] = (FieldAccess)0x0;
          local_dc = 1;
          GraphAssembler::BranchWithCriticalSafetyCheck
                    ((Node *)this_00,pGVar5,(GraphAssemblerLabel *)&local_a8);
          GraphAssembler::Bind<0ul>(this_00,(GraphAssemblerLabel *)local_e0);
        }
        lVar16 = lVar16 + -1;
        lVar17 = lVar17 + 0x100000000;
      } while (lVar16 != 0);
    }
    GraphAssembler::MergeState<>(this_00,(GraphAssemblerLabel *)&local_a8);
    GraphAssembler::GotoBasicBlock(this_00,(BasicBlock *)local_a0);
    pFVar12 = (FieldAccess *)&local_a8;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
  }
  else {
    local_d8 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
    uStack_d0 = 0;
    local_e0[0] = (FieldAccess)0x0;
    local_dc = 1;
    local_110 = (AccessBuilder *)GraphAssembler::NewBasicBlock(this_00,true);
    local_118[0] = (GraphAssemblerLabel)0x0;
    local_114 = 0;
    uStack_108 = 0;
    AccessBuilder::ForMap(local_110);
    pNVar4 = (Node *)GraphAssembler::LoadField(this_00,(FieldAccess *)&local_a8,pNVar15);
    if (lVar16 != 0) {
      lVar17 = 0;
      lVar18 = lVar16;
      do {
        uVar13 = *(ulong *)(pbVar3 + 8);
        if ((uVar13 & 3) != 0) {
          if ((ulong)(*(long *)(uVar13 + 6) - *(long *)(uVar13 - 2) >> 3) <= (ulong)(lVar17 >> 0x20)
             ) goto LAB_016a476c;
          uVar13 = *(ulong *)(*(long *)(uVar13 - 2) + (lVar17 >> 0x20) * 8);
        }
        pNVar6 = (Node *)GraphAssembler::HeapConstant(this_00,uVar13);
        pGVar5 = (GraphAssemblerLabel *)GraphAssembler::TaggedEqual(this_00,pNVar4,pNVar6);
        if (lVar18 == 1) {
          GraphAssembler::BranchWithCriticalSafetyCheck
                    ((Node *)this_00,pGVar5,(GraphAssemblerLabel *)local_e0);
        }
        else {
          local_a0 = (AccessBuilder *)GraphAssembler::NewBasicBlock(this_00,false);
          local_98 = 0;
          local_a8._0_4_ = (uint)local_a8 & 0xffffff00;
          local_a8 = (Node *)CONCAT44(1,(uint)local_a8);
          GraphAssembler::BranchWithCriticalSafetyCheck
                    ((Node *)this_00,pGVar5,(GraphAssemblerLabel *)local_e0);
          GraphAssembler::Bind<0ul>(this_00,(GraphAssemblerLabel *)&local_a8);
        }
        lVar18 = lVar18 + -1;
        lVar17 = lVar17 + 0x100000000;
      } while (lVar18 != 0);
    }
    GraphAssembler::Bind<0ul>(this_00,local_118);
    AccessBuilder::ForMapBitField3(this_01);
    pNVar4 = (Node *)GraphAssembler::LoadField(this_00,(FieldAccess *)&local_a8,pNVar4);
    pNVar6 = (Node *)GraphAssembler::Int32Constant(this_00,0x1000000);
    pNVar4 = (Node *)GraphAssembler::Word32And(this_00,pNVar4,pNVar6);
    pNVar6 = (Node *)GraphAssembler::Int32Constant(this_00,0);
    uVar7 = GraphAssembler::Word32Equal(this_00,pNVar4,pNVar6);
    pbVar1 = pbVar3 + 0x10;
    GraphAssembler::DeoptimizeIf(this_00,0x26,pbVar1,uVar7,param_2,0);
    pCVar8 = (CallDescriptor *)
             Linkage::GetRuntimeCallDescriptor(*(undefined8 *)**(undefined8 **)this,0x107,1,0x60,0);
    pNVar4 = (Node *)GraphAssembler::CEntryStubConstant(this_00,1);
    uVar7 = ExternalReference::Create(0x107);
    uVar7 = GraphAssembler::ExternalConstant(this_00,uVar7);
    uVar9 = GraphAssembler::Int32Constant(this_00,1);
    uVar10 = GraphAssembler::NoContextConstant(this_00);
    pOVar11 = (Operator *)
              CommonOperatorBuilder::Call
                        (*(CommonOperatorBuilder **)(*(long *)(this + 0x50) + 8),pCVar8);
    pEVar14 = this + 0x58;
    uStack_78 = *(undefined8 *)(this + 0x60);
    local_80 = *(undefined8 *)pEVar14;
    local_a8 = pNVar4;
    local_a0 = (AccessBuilder *)pNVar15;
    local_98 = uVar7;
    uStack_90 = uVar9;
    local_88 = uVar10;
    pNVar4 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 0x50),pOVar11,
                                    *(int *)(pOVar11 + 0x18) + *(int *)(pOVar11 + 0x1c) + 5,
                                    (Node **)&local_a8,false);
    *(Node **)pEVar14 = pNVar4;
    pNVar4 = (Node *)GraphAssembler::AddNode(this_00,pNVar4);
    pNVar6 = (Node *)GraphAssembler::Int32Constant(this_00,1);
    pNVar4 = (Node *)GraphAssembler::Word32And(this_00,pNVar4,pNVar6);
    pNVar6 = (Node *)GraphAssembler::Int32Constant(this_00,0);
    uVar7 = GraphAssembler::Word32Equal(this_00,pNVar4,pNVar6);
    this_02 = (AccessBuilder *)GraphAssembler::DeoptimizeIf(this_00,7,pbVar1,uVar7,param_2,0);
    AccessBuilder::ForMap(this_02);
    pNVar15 = (Node *)GraphAssembler::LoadField(this_00,(FieldAccess *)&local_a8,pNVar15);
    if (lVar16 != 0) {
      lVar17 = 0;
      do {
        uVar13 = *(ulong *)(pbVar3 + 8);
        if ((uVar13 & 3) != 0) {
          if ((ulong)(*(long *)(uVar13 + 6) - *(long *)(uVar13 - 2) >> 3) <= (ulong)(lVar17 >> 0x20)
             ) goto LAB_016a476c;
          uVar13 = *(ulong *)(*(long *)(uVar13 - 2) + (lVar17 >> 0x20) * 8);
        }
        pNVar4 = (Node *)GraphAssembler::HeapConstant(this_00,uVar13);
        pGVar5 = (GraphAssemblerLabel *)GraphAssembler::TaggedEqual(this_00,pNVar15,pNVar4);
        if (lVar16 == 1) {
          GraphAssembler::DeoptimizeIfNot(this_00,0x26,pbVar1,pGVar5,param_2,0);
        }
        else {
          local_a0 = (AccessBuilder *)GraphAssembler::NewBasicBlock(this_00,false);
          local_98 = 0;
          local_a8._0_4_ = (uint)local_a8 & 0xffffff00;
          local_a8 = (Node *)CONCAT44(1,(uint)local_a8);
          GraphAssembler::BranchWithCriticalSafetyCheck
                    ((Node *)this_00,pGVar5,(GraphAssemblerLabel *)local_e0);
          GraphAssembler::Bind<0ul>(this_00,(GraphAssemblerLabel *)&local_a8);
        }
        lVar16 = lVar16 + -1;
        lVar17 = lVar17 + 0x100000000;
      } while (lVar16 != 0);
    }
    GraphAssembler::MergeState<>(this_00,(GraphAssemblerLabel *)local_e0);
    GraphAssembler::GotoBasicBlock(this_00,local_d8);
    pFVar12 = local_e0;
    *(undefined8 *)pEVar14 = 0;
    *(undefined8 *)(this + 0x60) = 0;
  }
  GraphAssembler::Bind<0ul>(this_00,(GraphAssemblerLabel *)pFVar12);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

