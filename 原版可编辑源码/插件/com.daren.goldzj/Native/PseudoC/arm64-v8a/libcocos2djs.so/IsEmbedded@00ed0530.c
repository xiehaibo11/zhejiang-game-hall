
/* v8::debug::Script::IsEmbedded() const */

bool __thiscall v8::debug::Script::IsEmbedded(Script *this)

{
  return *(int *)(*(ulong *)this + 0x13) == *(int *)((*(ulong *)this & 0xffffffff00000000) + 0xc08);
}

