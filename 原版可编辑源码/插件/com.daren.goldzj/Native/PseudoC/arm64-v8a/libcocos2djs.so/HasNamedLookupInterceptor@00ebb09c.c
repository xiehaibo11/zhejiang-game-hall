
/* v8::Object::HasNamedLookupInterceptor() */

byte __thiscall v8::Object::HasNamedLookupInterceptor(Object *this)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)this;
  if (0xa9 < *(ushort *)((uVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar1 - 1))) {
    return *(byte *)((uVar1 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(uVar1 - 1)) >> 2 & 1;
  }
  return 0;
}

