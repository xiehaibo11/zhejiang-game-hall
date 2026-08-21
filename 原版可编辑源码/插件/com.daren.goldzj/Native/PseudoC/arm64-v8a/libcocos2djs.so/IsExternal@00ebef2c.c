
/* v8::String::IsExternal() const */

bool __thiscall v8::String::IsExternal(String *this)

{
  return (*(ushort *)
           ((*(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this - 1)) + 7) & 0xf)
         == 2;
}

