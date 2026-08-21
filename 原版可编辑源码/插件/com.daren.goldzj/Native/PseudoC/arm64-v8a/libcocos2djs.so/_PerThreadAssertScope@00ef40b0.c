
/* v8::internal::PerThreadAssertScope<(v8::internal::PerThreadAssertType)0,
   true>::~PerThreadAssertScope() */

void __thiscall
v8::internal::PerThreadAssertScope<(v8::internal::PerThreadAssertType)0,true>::~PerThreadAssertScope
          (PerThreadAssertScope<(v8::internal::PerThreadAssertType)0,true> *this)

{
  if (*(ulong *)this < 2) {
    return;
  }
  Release(this);
  return;
}

