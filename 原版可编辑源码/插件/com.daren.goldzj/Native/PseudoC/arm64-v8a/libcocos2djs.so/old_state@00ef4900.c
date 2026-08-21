
/* v8::internal::PerThreadAssertScope<(v8::internal::PerThreadAssertType)2, false>::old_state()
   const */

uint __thiscall
v8::internal::PerThreadAssertScope<(v8::internal::PerThreadAssertType)2,false>::old_state
          (PerThreadAssertScope<(v8::internal::PerThreadAssertType)2,false> *this)

{
  return *(uint *)this & 1;
}

