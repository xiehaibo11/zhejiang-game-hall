
/* v8::String::IsExternalOneByte() const */

bool __thiscall v8::String::IsExternalOneByte(String *this)

{
  return (*(ushort *)
           ((*(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this - 1)) + 7) & 0xf)
         == 10;
}

