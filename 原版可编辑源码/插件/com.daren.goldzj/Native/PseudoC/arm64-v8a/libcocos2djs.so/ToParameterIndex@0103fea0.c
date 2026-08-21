
/* v8::internal::interpreter::Register::ToParameterIndex(int) const */

int __thiscall v8::internal::interpreter::Register::ToParameterIndex(Register *this,int param_1)

{
  return param_1 + *(int *)this + 6;
}

