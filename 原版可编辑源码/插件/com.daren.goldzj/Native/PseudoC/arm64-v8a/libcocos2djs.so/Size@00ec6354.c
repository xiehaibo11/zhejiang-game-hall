
/* v8::Set::Size() const */

long __thiscall v8::Set::Size(Set *this)

{
  return (long)((ulong)*(uint *)((*(ulong *)this & 0xffffffff00000000 |
                                 (ulong)*(uint *)(*(ulong *)this + 0xb)) + 7) << 0x20) >> 0x21;
}

