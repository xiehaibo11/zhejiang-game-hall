
/* v8::internal::FuncNameInferrer::InferFunctionsNames() */

void __thiscall v8::internal::FuncNameInferrer::InferFunctionsNames(FuncNameInferrer *this)

{
  AstConsString *pAVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  pAVar1 = (AstConsString *)MakeNameFromStack(this);
  puVar3 = *(undefined8 **)(this + 0x20);
  puVar4 = *(undefined8 **)(this + 0x28);
  if (puVar3 != puVar4) {
    do {
      puVar2 = puVar3 + 1;
      FunctionLiteral::set_raw_inferred_name((FunctionLiteral *)*puVar3,pAVar1);
      puVar3 = puVar2;
    } while (puVar4 != puVar2);
    puVar3 = *(undefined8 **)(this + 0x20);
    puVar4 = *(undefined8 **)(this + 0x28);
  }
  if (puVar4 != puVar3) {
    *(undefined8 **)(this + 0x28) = puVar3;
  }
  return;
}

