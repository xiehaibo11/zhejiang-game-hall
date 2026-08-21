
/* v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedHashMap>::FindEntry(v8::internal::Isolate*,
   v8::internal::Object) */

ulong __thiscall
v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedHashMap>::FindEntry
          (SmallOrderedHashTable<v8::internal::SmallOrderedHashMap> *this,long param_1,
          undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong local_18;
  
  uVar2 = Object::GetSimpleHash(param_3);
  if ((((uVar2 & 1) == 0) ||
      (local_18 = param_3, uVar2 = JSReceiver::GetIdentityHash((JSReceiver *)&local_18),
      (uVar2 & 1) == 0)) || (uVar2 != *(uint *)(param_1 + 0xa0))) {
    uVar3 = *(ulong *)this;
    lVar4 = ((ulong)*(byte *)(uVar3 + 5) << 4 | 8) +
            ((ulong)*(byte *)(uVar3 + 5) - 1 & (long)((ulong)uVar2 << 0x20) >> 0x21);
    while( true ) {
      bVar1 = *(byte *)(uVar3 + lVar4 + -1);
      uVar2 = (uint)bVar1;
      if (uVar2 == 0xff) break;
      local_18 = uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + ((ulong)bVar1 << 3 | 7));
      uVar3 = Object::SameValueZero((Object *)&local_18,param_3);
      if ((uVar3 & 1) != 0) {
        return (ulong)uVar2;
      }
      uVar3 = *(ulong *)this;
      lVar4 = (ulong)*(byte *)(uVar3 + 5) + (ulong)uVar2 + ((ulong)*(byte *)(uVar3 + 5) << 4 | 8);
    }
  }
  return 0xff;
}

