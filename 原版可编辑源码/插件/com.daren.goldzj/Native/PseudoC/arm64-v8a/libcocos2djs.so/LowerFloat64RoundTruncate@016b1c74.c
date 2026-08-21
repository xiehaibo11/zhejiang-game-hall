
/* v8::internal::compiler::EffectControlLinearizer::LowerFloat64RoundTruncate(v8::internal::compiler::Node*)
    */

undefined8 __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerFloat64RoundTruncate
          (EffectControlLinearizer *this,Node *param_1)

{
  char cVar1;
  undefined8 uVar2;
  Node *pNVar3;
  
  cVar1 = MachineOperatorBuilder::Float64RoundTruncate
                    (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
  if (cVar1 == '\0') {
    pNVar3 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar3 = (Node *)(*(long *)pNVar3 + 0x10);
    }
    BuildFloat64RoundTruncate(this,*(Node **)pNVar3);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

