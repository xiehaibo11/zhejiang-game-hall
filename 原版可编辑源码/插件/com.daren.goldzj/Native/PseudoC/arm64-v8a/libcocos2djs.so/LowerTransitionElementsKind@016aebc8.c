
/* v8::internal::compiler::EffectControlLinearizer::LowerTransitionElementsKind(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerTransitionElementsKind
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  char cVar1;
  long lVar2;
  char *pcVar3;
  Node *pNVar4;
  AccessBuilder *this_01;
  Node *pNVar5;
  AccessBuilder *this_02;
  CallDescriptor *pCVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  Operator *pOVar10;
  Node *pNVar11;
  GraphAssemblerLabel local_120 [4];
  undefined4 local_11c;
  BasicBlock *local_118;
  undefined8 uStack_110;
  GraphAssemblerLabel local_e8 [4];
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  Node *local_b0;
  Node *pNStack_a8;
  AccessBuilder *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  pcVar3 = (char *)ElementsTransitionOf(*(Operator **)param_1);
  cVar1 = *pcVar3;
  uVar7 = *(undefined8 *)(pcVar3 + 8);
  uVar8 = *(undefined8 *)(pcVar3 + 0x10);
  pNVar11 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar11 = (Node *)(*(long *)pNVar11 + 0x10);
  }
  pNVar11 = *(Node **)pNVar11;
  this_00 = (GraphAssembler *)(this + 0x38);
  local_e0 = GraphAssembler::NewBasicBlock(this_00,true);
  uStack_d8 = 0;
  local_e8[0] = (GraphAssemblerLabel)0x0;
  local_e4 = 0;
  local_118 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
  uStack_110 = 0;
  local_120[0] = (GraphAssemblerLabel)0x0;
  local_11c = 1;
  pNVar4 = (Node *)GraphAssembler::HeapConstant(this_00,uVar7);
  this_01 = (AccessBuilder *)GraphAssembler::HeapConstant(this_00,uVar8);
  AccessBuilder::ForMap(this_01);
  pNVar5 = (Node *)GraphAssembler::LoadField(this_00,(FieldAccess *)&local_b0,pNVar11);
  pNVar4 = (Node *)GraphAssembler::TaggedEqual(this_00,pNVar5,pNVar4);
  GraphAssembler::GotoIf<>(this_00,pNVar4,local_e8);
  GraphAssembler::MergeState<>(this_00,local_120);
  GraphAssembler::GotoBasicBlock(this_00,local_118);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_e8);
  if (cVar1 == '\x01') {
    pCVar6 = (CallDescriptor *)
             Linkage::GetRuntimeCallDescriptor(*(undefined8 *)**(undefined8 **)this,10,2,0x60,0);
    pNVar4 = (Node *)GraphAssembler::CEntryStubConstant(this_00,1);
    uVar7 = ExternalReference::Create(10);
    uVar7 = GraphAssembler::ExternalConstant(this_00,uVar7);
    uVar8 = GraphAssembler::Int32Constant(this_00,2);
    uVar9 = GraphAssembler::NoContextConstant(this_00);
    pOVar10 = (Operator *)
              CommonOperatorBuilder::Call
                        (*(CommonOperatorBuilder **)(*(long *)(this + 0x50) + 8),pCVar6);
    uStack_78 = *(undefined8 *)(this + 0x60);
    local_80 = *(undefined8 *)(this + 0x58);
    local_b0 = pNVar4;
    pNStack_a8 = pNVar11;
    local_a0 = this_01;
    uStack_98 = uVar7;
    local_90 = uVar8;
    uStack_88 = uVar9;
    pNVar11 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 0x50),pOVar10,
                                     *(int *)(pOVar10 + 0x18) + *(int *)(pOVar10 + 0x1c) + 6,
                                     &local_b0,false);
    *(Node **)(this + 0x58) = pNVar11;
    GraphAssembler::AddNode(this_00,pNVar11);
  }
  else if (cVar1 == '\0') {
    AccessBuilder::ForMap(this_02);
    GraphAssembler::StoreField(this_00,(FieldAccess *)&local_b0,pNVar11,(Node *)this_01);
  }
  GraphAssembler::MergeState<>(this_00,local_120);
  GraphAssembler::GotoBasicBlock(this_00,local_118);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_120);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

