
/* v8::internal::compiler::EffectControlLinearizer::LowerDeadValue(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerDeadValue
          (EffectControlLinearizer *this,Node *param_1)

{
  long *plVar1;
  Node *pNVar2;
  
  plVar1 = (long *)NodeProperties::GetValueInput(param_1,0);
  if (*(short *)(*plVar1 + 0x10) != 0x3b) {
    pNVar2 = (Node *)GraphAssembler::Unreachable((GraphAssembler *)(this + 0x38));
    NodeProperties::ReplaceValueInput(param_1,pNVar2,0);
  }
  return param_1;
}

