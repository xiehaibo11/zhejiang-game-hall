
/* v8::Object::IsConstructor() */

byte __thiscall v8::Object::IsConstructor(Object *this)

{
  return *(byte *)((*(ulong *)this & 0xffffffff00000000 | 9) + (ulong)*(uint *)(*(ulong *)this - 1))
         >> 6 & 1;
}

