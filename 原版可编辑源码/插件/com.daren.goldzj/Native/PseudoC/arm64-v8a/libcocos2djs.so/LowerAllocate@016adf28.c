
/* v8::internal::compiler::EffectControlLinearizer::LowerAllocate(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerAllocate
          (EffectControlLinearizer *this,Node *param_1)

{
  undefined4 uVar1;
  Node *pNVar2;
  undefined8 uVar3;
  
  pNVar2 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar2 = (Node *)(*(long *)pNVar2 + 0x10);
  }
  uVar3 = *(undefined8 *)pNVar2;
  uVar1 = AllocationTypeOf(*(Operator **)param_1);
  GraphAssembler::Allocate((GraphAssembler *)(this + 0x38),uVar1,uVar3);
  return;
}

