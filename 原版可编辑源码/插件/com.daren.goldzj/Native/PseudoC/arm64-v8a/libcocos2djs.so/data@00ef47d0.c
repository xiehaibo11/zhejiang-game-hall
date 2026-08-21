
/* v8::internal::PerThreadAssertScope<(v8::internal::PerThreadAssertType)2, false>::data() const */

ulong __thiscall
v8::internal::PerThreadAssertScope<(v8::internal::PerThreadAssertType)2,false>::data
          (PerThreadAssertScope<(v8::internal::PerThreadAssertType)2,false> *this)

{
  return *(ulong *)this & 0xfffffffffffffffe;
}

