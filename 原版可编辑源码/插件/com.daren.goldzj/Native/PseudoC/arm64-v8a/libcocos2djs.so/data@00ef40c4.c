
/* v8::internal::PerThreadAssertScope<(v8::internal::PerThreadAssertType)0, true>::data() const */

ulong __thiscall
v8::internal::PerThreadAssertScope<(v8::internal::PerThreadAssertType)0,true>::data
          (PerThreadAssertScope<(v8::internal::PerThreadAssertType)0,true> *this)

{
  return *(ulong *)this & 0xfffffffffffffffe;
}

