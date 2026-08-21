
/* v8::internal::compiler::EffectControlLinearizer::LowerCheckedInt64ToInt32(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerCheckedInt64ToInt32
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
  pNVar2 = (Node *)GraphAssembler::TruncateInt64ToInt32(this_00,pNVar5);
  pNVar3 = (Node *)GraphAssembler::ChangeInt32ToInt64(this_00,pNVar2);
  uVar4 = GraphAssembler::Word64Equal(this_00,pNVar3,pNVar5);
  GraphAssembler::DeoptimizeIfNot(this_00,0x10,uVar1,uVar4,param_2,1);
  return pNVar2;
}

