
/* v8::internal::compiler::EffectControlLinearizer::IsElementsKindGreaterThan(v8::internal::compiler::Node*,
   v8::internal::ElementsKind) */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::IsElementsKindGreaterThan
          (EffectControlLinearizer *this,Node *param_1,uint param_3)

{
  Node *pNVar1;
  
  pNVar1 = (Node *)GraphAssembler::Int32Constant((GraphAssembler *)(this + 0x38),param_3 & 0xff);
  GraphAssembler::Int32LessThan((GraphAssembler *)(this + 0x38),pNVar1,param_1);
  return;
}

