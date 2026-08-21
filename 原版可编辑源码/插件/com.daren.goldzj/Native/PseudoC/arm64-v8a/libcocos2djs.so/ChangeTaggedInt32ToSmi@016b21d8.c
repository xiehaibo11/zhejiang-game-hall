
/* v8::internal::compiler::EffectControlLinearizer::ChangeTaggedInt32ToSmi(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::ChangeTaggedInt32ToSmi
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler::BitcastWord32ToWord64((GraphAssembler *)(this + 0x38),param_1);
  return;
}

