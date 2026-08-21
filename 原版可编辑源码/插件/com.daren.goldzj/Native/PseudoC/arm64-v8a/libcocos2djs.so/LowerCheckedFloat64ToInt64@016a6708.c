
/* v8::internal::compiler::EffectControlLinearizer::LowerCheckedFloat64ToInt64(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerCheckedFloat64ToInt64
          (EffectControlLinearizer *this,Node *param_1,Node *param_2)

{
  undefined1 *puVar1;
  Node *pNVar2;
  
  puVar1 = (undefined1 *)CheckMinusZeroParametersOf(*(Operator **)param_1);
  pNVar2 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar2 = (Node *)(*(long *)pNVar2 + 0x10);
  }
  BuildCheckedFloat64ToInt64(this,*puVar1,puVar1 + 8,*(undefined8 *)pNVar2,param_2);
  return;
}

