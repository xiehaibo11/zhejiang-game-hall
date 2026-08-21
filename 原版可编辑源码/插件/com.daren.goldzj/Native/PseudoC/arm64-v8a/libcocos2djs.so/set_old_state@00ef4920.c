
/* v8::internal::PerThreadAssertScope<(v8::internal::PerThreadAssertType)2,
   false>::set_old_state(bool) */

void __thiscall
v8::internal::PerThreadAssertScope<(v8::internal::PerThreadAssertType)2,false>::set_old_state
          (PerThreadAssertScope<(v8::internal::PerThreadAssertType)2,false> *this,bool param_1)

{
  *(ulong *)this = *(ulong *)this & 0xfffffffffffffffe | (ulong)param_1;
  return;
}

