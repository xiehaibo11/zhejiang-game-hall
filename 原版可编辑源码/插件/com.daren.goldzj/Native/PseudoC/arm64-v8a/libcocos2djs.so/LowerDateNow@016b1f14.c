
/* v8::internal::compiler::EffectControlLinearizer::LowerDateNow(v8::internal::compiler::Node*) */

void v8::internal::compiler::EffectControlLinearizer::LowerDateNow(Node *param_1)

{
  GraphAssembler *this;
  CallDescriptor *pCVar1;
  Node *pNVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Operator *pOVar6;
  Node *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  pCVar1 = (CallDescriptor *)
           Linkage::GetRuntimeCallDescriptor(*(undefined8 *)**(undefined8 **)param_1,0x3e,0,0x60,0);
  this = (GraphAssembler *)(param_1 + 0x38);
  pNVar2 = (Node *)GraphAssembler::CEntryStubConstant(this,1);
  uVar3 = ExternalReference::Create(0x3e);
  uVar3 = GraphAssembler::ExternalConstant(this,uVar3);
  uVar4 = GraphAssembler::Int32Constant(this,0);
  uVar5 = GraphAssembler::NoContextConstant(this);
  pOVar6 = (Operator *)
           CommonOperatorBuilder::Call
                     (*(CommonOperatorBuilder **)(*(long *)(param_1 + 0x50) + 8),pCVar1);
  uStack_58 = *(undefined8 *)(param_1 + 0x60);
  local_60 = *(undefined8 *)(param_1 + 0x58);
  local_80 = pNVar2;
  uStack_78 = uVar3;
  local_70 = uVar4;
  uStack_68 = uVar5;
  pNVar2 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(param_1 + 0x50),pOVar6,
                                  *(int *)(pOVar6 + 0x18) + *(int *)(pOVar6 + 0x1c) + 4,&local_80,
                                  false);
  *(Node **)(param_1 + 0x58) = pNVar2;
  GraphAssembler::AddNode(this,pNVar2);
  return;
}

