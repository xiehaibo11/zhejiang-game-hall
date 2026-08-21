
/* v8::internal::compiler::Operator1<unsigned long, v8::internal::compiler::OpEqualTo<unsigned
   long>, v8::internal::compiler::OpHash<unsigned long> >::Equals(v8::internal::compiler::Operator
   const*) const */

bool __thiscall
v8::internal::compiler::
Operator1<unsigned_long,v8::internal::compiler::OpEqualTo<unsigned_long>,v8::internal::compiler::OpHash<unsigned_long>>
::Equals(Operator1<unsigned_long,v8::internal::compiler::OpEqualTo<unsigned_long>,v8::internal::compiler::OpHash<unsigned_long>>
         *this,Operator *param_1)

{
  if (*(short *)(this + 0x10) == *(short *)(param_1 + 0x10)) {
    return *(long *)(this + 0x30) == *(long *)(param_1 + 0x30);
  }
  return false;
}

