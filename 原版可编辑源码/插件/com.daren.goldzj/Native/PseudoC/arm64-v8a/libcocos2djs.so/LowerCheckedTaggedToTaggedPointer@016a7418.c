
/* v8::internal::compiler::EffectControlLinearizer::LowerCheckedTaggedToTaggedPointer(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerCheckedTaggedToTaggedPointer
          (EffectControlLinearizer *this,Node *param_1,Node *param_2)

{
  GraphAssembler *this_00;
  undefined8 uVar1;
  Node *pNVar2;
  Node *pNVar3;
  undefined8 uVar4;
  Node *pNVar5;
  
  pNVar5 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  pNVar5 = *(Node **)pNVar5;
  uVar1 = CheckParametersOf(*(Operator **)param_1);
  this_00 = (GraphAssembler *)(this + 0x38);
  pNVar2 = (Node *)GraphAssembler::Int32Constant(this_00,1);
  pNVar2 = (Node *)GraphAssembler::Word32And(this_00,pNVar5,pNVar2);
  pNVar3 = (Node *)GraphAssembler::Int32Constant(this_00,0);
  uVar4 = GraphAssembler::Word32Equal(this_00,pNVar2,pNVar3);
  GraphAssembler::DeoptimizeIf(this_00,0x20,uVar1,uVar4,param_2,1);
  return pNVar5;
}

