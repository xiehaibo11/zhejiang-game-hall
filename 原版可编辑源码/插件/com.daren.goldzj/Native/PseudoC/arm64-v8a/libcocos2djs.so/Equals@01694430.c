
/* v8::internal::compiler::Operator1<long, v8::internal::compiler::OpEqualTo<long>,
   v8::internal::compiler::OpHash<long> >::Equals(v8::internal::compiler::Operator const*) const */

bool __thiscall
v8::internal::compiler::
Operator1<long,v8::internal::compiler::OpEqualTo<long>,v8::internal::compiler::OpHash<long>>::Equals
          (Operator1<long,v8::internal::compiler::OpEqualTo<long>,v8::internal::compiler::OpHash<long>>
           *this,Operator *param_1)

{
  if (*(short *)(this + 0x10) == *(short *)(param_1 + 0x10)) {
    return *(long *)(this + 0x30) == *(long *)(param_1 + 0x30);
  }
  return false;
}

