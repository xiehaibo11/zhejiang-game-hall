
/* v8::internal::compiler::Operator1<v8::internal::Handle<v8::internal::HeapObject>,
   v8::internal::compiler::OpEqualTo<v8::internal::Handle<v8::internal::HeapObject> >,
   v8::internal::compiler::OpHash<v8::internal::Handle<v8::internal::HeapObject> >
   >::Equals(v8::internal::compiler::Operator const*) const */

bool __thiscall
v8::internal::compiler::
Operator1<v8::internal::Handle<v8::internal::HeapObject>,v8::internal::compiler::OpEqualTo<v8::internal::Handle<v8::internal::HeapObject>>,v8::internal::compiler::OpHash<v8::internal::Handle<v8::internal::HeapObject>>>
::Equals(Operator1<v8::internal::Handle<v8::internal::HeapObject>,v8::internal::compiler::OpEqualTo<v8::internal::Handle<v8::internal::HeapObject>>,v8::internal::compiler::OpHash<v8::internal::Handle<v8::internal::HeapObject>>>
         *this,Operator *param_1)

{
  if (*(short *)(this + 0x10) == *(short *)(param_1 + 0x10)) {
    return *(long *)(this + 0x30) == *(long *)(param_1 + 0x30);
  }
  return false;
}

