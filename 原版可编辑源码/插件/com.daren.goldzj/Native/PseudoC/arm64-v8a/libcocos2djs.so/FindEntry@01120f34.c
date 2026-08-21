
/* v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedHashSet>::FindEntry(v8::internal::Isolate*,
   v8::internal::Object) */

ulong __thiscall
v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedHashSet>::FindEntry
          (SmallOrderedHashTable<v8::internal::SmallOrderedHashSet> *this,long param_1,
          undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_18;
  
  uVar2 = Object::GetSimpleHash(param_3);
  if ((((uVar2 & 1) == 0) ||
      (local_18 = param_3, uVar2 = JSReceiver::GetIdentityHash((JSReceiver *)&local_18),
      (uVar2 & 1) == 0)) || (uVar2 != *(uint *)(param_1 + 0xa0))) {
    uVar3 = *(ulong *)this;
    uVar4 = (ulong)*(byte *)(uVar3 + 5);
    uVar5 = uVar4 - 1 & (long)((ulong)uVar2 << 0x20) >> 0x21;
    while( true ) {
      bVar1 = *(byte *)(uVar5 + uVar4 * 8 + uVar3 + 7);
      if (bVar1 == 0xff) break;
      local_18 = uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + (ulong)bVar1 * 4 + 7);
      uVar5 = Object::SameValueZero((Object *)&local_18,param_3);
      if ((uVar5 & 1) != 0) {
        return (ulong)bVar1;
      }
      uVar3 = *(ulong *)this;
      uVar4 = (ulong)*(byte *)(uVar3 + 5);
      uVar5 = bVar1 + uVar4;
    }
  }
  return 0xff;
}

