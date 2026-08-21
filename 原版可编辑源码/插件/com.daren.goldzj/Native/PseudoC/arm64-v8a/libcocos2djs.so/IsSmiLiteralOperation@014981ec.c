
/* v8::internal::BinaryOperation::IsSmiLiteralOperation(v8::internal::Expression**,
   v8::internal::Smi*) */

undefined4 __thiscall
v8::internal::BinaryOperation::IsSmiLiteralOperation
          (BinaryOperation *this,Expression **param_1,Smi *param_2)

{
  Expression *pEVar1;
  Expression *pEVar2;
  
  pEVar2 = *(Expression **)(this + 0x10);
  if ((*(uint *)(pEVar2 + 4) & 0x7bf) == 0x29) {
    *param_1 = *(Expression **)(this + 8);
    if ((*(uint *)(pEVar2 + 4) & 0x3f) != 0x29) {
      pEVar2 = (Expression *)0x0;
    }
  }
  else {
    if (0x28 < (*(uint *)(this + 4) >> 7 & 0x7f)) {
      return 0;
    }
    if ((1L << ((ulong)(*(uint *)(this + 4) >> 7) & 0x3f) & 0x11c00000000U) == 0) {
      return 0;
    }
    pEVar1 = *(Expression **)(this + 8);
    if ((*(uint *)(pEVar1 + 4) & 0x7bf) != 0x29) {
      return 0;
    }
    *param_1 = pEVar2;
    pEVar2 = pEVar1;
    if ((*(uint *)(pEVar1 + 4) & 0x3f) != 0x29) {
      pEVar2 = (Expression *)0x0;
    }
  }
  *(long *)param_2 = (long)*(int *)(pEVar2 + 8) << 1;
  return 1;
}

