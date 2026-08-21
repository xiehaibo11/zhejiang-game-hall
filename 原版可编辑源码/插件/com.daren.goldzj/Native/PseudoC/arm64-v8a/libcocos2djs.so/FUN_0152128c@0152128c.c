
void FUN_0152128c(undefined8 *param_1,undefined4 param_2)

{
  Scope *pSVar1;
  BytecodeGenerator *this;
  Statement *pSVar2;
  BytecodeArrayBuilder *this_00;
  long lVar3;
  
  this = (BytecodeGenerator *)param_1[1];
  lVar3 = *(long *)*param_1;
  if (*(Scope **)(lVar3 + 0x10) != (Scope *)0x0) {
    v8::internal::interpreter::BytecodeGenerator::BuildNewLocalCatchContext
              (this,*(Scope **)(lVar3 + 0x10));
    v8::internal::interpreter::BytecodeArrayBuilder::StoreAccumulatorInRegister
              ((BytecodeArrayBuilder *)(this + 0x18),param_2);
    lVar3 = *(long *)*param_1;
  }
  if (*(int *)(lVar3 + 0x20) != 0 || *(int *)param_1[2] != 0) {
    this_00 = (BytecodeArrayBuilder *)
              v8::internal::interpreter::BytecodeArrayBuilder::LoadTheHole
                        ((BytecodeArrayBuilder *)(this + 0x18));
    v8::internal::interpreter::BytecodeArrayBuilder::SetPendingMessage(this_00);
  }
  v8::internal::interpreter::BytecodeArrayBuilder::LoadAccumulatorWithRegister
            ((BytecodeArrayBuilder *)(this + 0x18),param_2);
  pSVar1 = *(Scope **)(*(long *)*param_1 + 0x10);
  pSVar2 = *(Statement **)(*(long *)*param_1 + 0x18);
  if (pSVar1 != (Scope *)0x0) {
    v8::internal::interpreter::BytecodeGenerator::VisitInScope(this,pSVar2,pSVar1);
    return;
  }
  v8::internal::interpreter::BytecodeGenerator::VisitBlock(this,(Block *)pSVar2);
  return;
}

