
/* v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo::MarkTemporariesAsUnmaterialized(v8::internal::interpreter::Register)
    */

void __thiscall
v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo::MarkTemporariesAsUnmaterialized
          (RegisterInfo *this,int param_2)

{
  RegisterInfo *pRVar1;
  
  for (pRVar1 = *(RegisterInfo **)(this + 0x10); pRVar1 != this;
      pRVar1 = *(RegisterInfo **)(pRVar1 + 0x10)) {
    if (param_2 <= *(int *)pRVar1) {
      pRVar1[8] = (RegisterInfo)0x0;
    }
  }
  return;
}

