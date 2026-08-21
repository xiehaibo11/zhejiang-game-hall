
/* v8::Object::HasIndexedLookupInterceptor() */

byte __thiscall v8::Object::HasIndexedLookupInterceptor(Object *this)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)this;
  if (0xa9 < *(ushort *)((uVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar1 - 1))) {
    return *(byte *)((uVar1 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(uVar1 - 1)) >> 3 & 1;
  }
  return 0;
}

