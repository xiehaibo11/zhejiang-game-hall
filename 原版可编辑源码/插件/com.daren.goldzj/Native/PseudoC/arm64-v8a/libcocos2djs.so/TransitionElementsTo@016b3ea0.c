
/* v8::internal::compiler::EffectControlLinearizer::TransitionElementsTo(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::ElementsKind, v8::internal::ElementsKind) */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::TransitionElementsTo
          (EffectControlLinearizer *this,undefined8 *param_1,Node *param_2,ulong param_4,
          uint param_5)

{
  GraphAssembler *this_00;
  long lVar1;
  undefined8 uVar2;
  AccessBuilder *this_01;
  CallDescriptor *pCVar3;
  Node *pNVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  Operator *pOVar7;
  uint uVar8;
  uint uVar9;
  Node *local_a8;
  Node *pNStack_a0;
  AccessBuilder *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((param_5 & 0xff) == 3) {
    uVar2 = FastMapParameterOf((Operator *)*param_1);
  }
  else {
    uVar2 = DoubleMapParameterOf((Operator *)*param_1);
  }
  this_00 = (GraphAssembler *)(this + 0x38);
  this_01 = (AccessBuilder *)GraphAssembler::HeapConstant(this_00,uVar2);
  uVar9 = (uint)param_4;
  uVar8 = uVar9;
  if (((uVar9 & 0xff) < 7) && ((0x55U >> (ulong)(uVar9 & 0x1f) & 1) != 0)) {
    uVar8 = (uint)(0x7010501030101 >> ((param_4 & 7) << 3));
  }
  if (((uVar8 & 0xff) == (param_5 & 0xff)) || (((uVar9 & 0xff) < 2 && ((param_5 & 0xfe) == 2)))) {
    AccessBuilder::ForMap(this_01);
    GraphAssembler::StoreField(this_00,(FieldAccess *)&local_a8,param_2,(Node *)this_01);
  }
  else {
    pCVar3 = (CallDescriptor *)
             Linkage::GetRuntimeCallDescriptor(*(undefined8 *)**(undefined8 **)this,10,2,0x60,0);
    pNVar4 = (Node *)GraphAssembler::CEntryStubConstant(this_00,1);
    uVar2 = ExternalReference::Create(10);
    uVar2 = GraphAssembler::ExternalConstant(this_00,uVar2);
    uVar5 = GraphAssembler::Int32Constant(this_00,2);
    uVar6 = GraphAssembler::NoContextConstant(this_00);
    pOVar7 = (Operator *)
             CommonOperatorBuilder::Call
                       (*(CommonOperatorBuilder **)(*(long *)(this + 0x50) + 8),pCVar3);
    uStack_70 = *(undefined8 *)(this + 0x60);
    local_78 = *(undefined8 *)(this + 0x58);
    local_a8 = pNVar4;
    pNStack_a0 = param_2;
    local_98 = this_01;
    uStack_90 = uVar2;
    local_88 = uVar5;
    uStack_80 = uVar6;
    pNVar4 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 0x50),pOVar7,
                                    *(int *)(pOVar7 + 0x18) + *(int *)(pOVar7 + 0x1c) + 6,&local_a8,
                                    false);
    *(Node **)(this + 0x58) = pNVar4;
    GraphAssembler::AddNode(this_00,pNVar4);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

