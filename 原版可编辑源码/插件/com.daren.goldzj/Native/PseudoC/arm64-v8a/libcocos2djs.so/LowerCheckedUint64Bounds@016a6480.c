
/* v8::internal::compiler::EffectControlLinearizer::LowerCheckedUint64Bounds(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerCheckedUint64Bounds
          (EffectControlLinearizer *this,Node *param_1,Node *param_2)

{
  Node *pNVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Node *pNVar4;
  
  uVar2 = CheckParametersOf(*(Operator **)param_1);
  pNVar4 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  pNVar1 = *(Node **)pNVar4;
  uVar3 = GraphAssembler::Uint64LessThan
                    ((GraphAssembler *)(this + 0x38),pNVar1,*(Node **)(pNVar4 + 8));
  GraphAssembler::DeoptimizeIfNot((GraphAssembler *)(this + 0x38),0x1e,uVar2,uVar3,param_2,0);
  return pNVar1;
}

