
/* v8::internal::PerThreadAssertScope<(v8::internal::PerThreadAssertType)0,
   false>::~PerThreadAssertScope() */

void __thiscall
v8::internal::PerThreadAssertScope<(v8::internal::PerThreadAssertType)0,false>::
~PerThreadAssertScope(PerThreadAssertScope<(v8::internal::PerThreadAssertType)0,false> *this)

{
  if (*(ulong *)this < 2) {
    return;
  }
  Release(this);
  return;
}

