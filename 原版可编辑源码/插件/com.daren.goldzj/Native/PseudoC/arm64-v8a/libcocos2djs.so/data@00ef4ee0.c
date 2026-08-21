
/* v8::internal::PerThreadAssertScope<(v8::internal::PerThreadAssertType)3, true>::data() const */

ulong __thiscall
v8::internal::PerThreadAssertScope<(v8::internal::PerThreadAssertType)3,true>::data
          (PerThreadAssertScope<(v8::internal::PerThreadAssertType)3,true> *this)

{
  return *(ulong *)this & 0xfffffffffffffffe;
}

