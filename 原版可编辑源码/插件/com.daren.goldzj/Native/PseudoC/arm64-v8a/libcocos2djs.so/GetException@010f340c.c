
/* v8::internal::Module::GetException() */

ulong __thiscall v8::internal::Module::GetException(Module *this)

{
  return *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x13);
}

