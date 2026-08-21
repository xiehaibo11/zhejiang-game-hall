
/* v8::internal::compiler::Operator1<unsigned int, v8::internal::compiler::OpEqualTo<unsigned int>,
   v8::internal::compiler::OpHash<unsigned int> >::Equals(v8::internal::compiler::Operator const*)
   const */

bool __thiscall
v8::internal::compiler::
Operator1<unsigned_int,v8::internal::compiler::OpEqualTo<unsigned_int>,v8::internal::compiler::OpHash<unsigned_int>>
::Equals(Operator1<unsigned_int,v8::internal::compiler::OpEqualTo<unsigned_int>,v8::internal::compiler::OpHash<unsigned_int>>
         *this,Operator *param_1)

{
  if (*(short *)(this + 0x10) == *(short *)(param_1 + 0x10)) {
    return *(int *)(this + 0x2c) == *(int *)(param_1 + 0x2c);
  }
  return false;
}

