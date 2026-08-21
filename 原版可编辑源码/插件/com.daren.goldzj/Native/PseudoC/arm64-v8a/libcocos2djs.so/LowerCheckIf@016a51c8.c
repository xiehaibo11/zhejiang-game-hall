
/* v8::internal::compiler::EffectControlLinearizer::LowerCheckIf(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerCheckIf
          (EffectControlLinearizer *this,Node *param_1,Node *param_2)

{
  undefined1 *puVar1;
  Node *pNVar2;
  undefined8 uVar3;
  
  pNVar2 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar2 = (Node *)(*(long *)pNVar2 + 0x10);
  }
  uVar3 = *(undefined8 *)pNVar2;
  puVar1 = (undefined1 *)CheckIfParametersOf(*(Operator **)param_1);
  GraphAssembler::DeoptimizeIfNot
            ((GraphAssembler *)(this + 0x38),*puVar1,puVar1 + 8,uVar3,param_2,1);
  return;
}

