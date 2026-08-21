
/* v8::internal::compiler::EffectControlLinearizer::LowerRuntimeAbort(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerRuntimeAbort
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  uint uVar1;
  CallDescriptor *pCVar2;
  Node *pNVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  Operator *pOVar8;
  Node *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar1 = AbortReasonOf(*(Operator **)param_1);
  pCVar2 = (CallDescriptor *)
           Linkage::GetRuntimeCallDescriptor(*(undefined8 *)**(undefined8 **)this,0x15f,1,0x60,0);
  this_00 = (GraphAssembler *)(this + 0x38);
  pNVar3 = (Node *)GraphAssembler::CEntryStubConstant(this_00,1);
  uVar4 = GraphAssembler::SmiConstant(this_00,uVar1 & 0xff);
  uVar5 = ExternalReference::Create(0x15f);
  uVar5 = GraphAssembler::ExternalConstant(this_00,uVar5);
  uVar6 = GraphAssembler::Int32Constant(this_00,1);
  uVar7 = GraphAssembler::NoContextConstant(this_00);
  pOVar8 = (Operator *)
           CommonOperatorBuilder::Call
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x50) + 8),pCVar2);
  uStack_58 = *(undefined8 *)(this + 0x60);
  local_60 = *(undefined8 *)(this + 0x58);
  local_88 = pNVar3;
  uStack_80 = uVar4;
  local_78 = uVar5;
  uStack_70 = uVar6;
  local_68 = uVar7;
  pNVar3 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 0x50),pOVar8,
                                  *(int *)(pOVar8 + 0x18) + *(int *)(pOVar8 + 0x1c) + 5,&local_88,
                                  false);
  *(Node **)(this + 0x58) = pNVar3;
  GraphAssembler::AddNode(this_00,pNVar3);
  return;
}

