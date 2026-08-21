
/* v8::Object::IsCallable() */

byte __thiscall v8::Object::IsCallable(Object *this)

{
  return *(byte *)((*(ulong *)this & 0xffffffff00000000 | 9) + (ulong)*(uint *)(*(ulong *)this - 1))
         >> 1 & 1;
}

