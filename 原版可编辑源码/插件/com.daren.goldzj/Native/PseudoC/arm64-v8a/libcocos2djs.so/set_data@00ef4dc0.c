
/* v8::internal::PerThreadAssertScope<(v8::internal::PerThreadAssertType)3,
   false>::set_data(v8::internal::PerThreadAssertData*) */

void __thiscall
v8::internal::PerThreadAssertScope<(v8::internal::PerThreadAssertType)3,false>::set_data
          (PerThreadAssertScope<(v8::internal::PerThreadAssertType)3,false> *this,
          PerThreadAssertData *param_1)

{
  *(ulong *)this = *(ulong *)this & 1 | (ulong)param_1;
  return;
}

