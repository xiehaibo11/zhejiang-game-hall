
/* v8::internal::Heap::GCCallbackTuple::TEMPNAMEPLACEHOLDERVALUE(v8::internal::Heap::GCCallbackTuple
   const&) const */

bool __thiscall
v8::internal::Heap::GCCallbackTuple::operator==(GCCallbackTuple *this,GCCallbackTuple *param_1)

{
  if (*(long *)param_1 != *(long *)this) {
    return false;
  }
  return *(long *)(param_1 + 0x10) == *(long *)(this + 0x10);
}

