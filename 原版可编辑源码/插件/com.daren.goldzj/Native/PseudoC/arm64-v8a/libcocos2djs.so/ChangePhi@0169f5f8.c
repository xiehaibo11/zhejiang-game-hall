
/* v8::internal::compiler::DecompressionOptimizer::ChangePhi(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::DecompressionOptimizer::ChangePhi
          (DecompressionOptimizer *this,Node *param_1)

{
  char cVar1;
  Operator *pOVar2;
  undefined4 uVar3;
  
  cVar1 = PhiRepresentationOf(*(Operator **)param_1);
  uVar3 = 9;
  if (cVar1 == '\b') {
    uVar3 = 10;
  }
  pOVar2 = (Operator *)
           CommonOperatorBuilder::Phi
                     (*(CommonOperatorBuilder **)(this + 8),uVar3,
                      *(undefined4 *)(*(long *)param_1 + 0x14));
  NodeProperties::ChangeOp(param_1,pOVar2);
  return;
}

