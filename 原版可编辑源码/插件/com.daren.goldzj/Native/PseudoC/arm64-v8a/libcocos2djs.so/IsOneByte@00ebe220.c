
/* v8::String::IsOneByte() const */

byte __thiscall v8::String::IsOneByte(String *this)

{
  return *(byte *)((*(ulong *)this & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*(ulong *)this - 1))
         >> 3 & 1;
}

