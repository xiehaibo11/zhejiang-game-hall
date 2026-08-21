
/* v8::internal::compiler::Constant::Constant(int) */

void __thiscall v8::internal::compiler::Constant::Constant(Constant *this,int param_1)

{
  *(undefined4 *)this = 0;
  this[4] = (Constant)0x13;
  *(long *)(this + 8) = (long)param_1;
  return;
}

