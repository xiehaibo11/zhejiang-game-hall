
/* v8::internal::HashTable<v8::internal::ObjectHashTable,
   v8::internal::ObjectHashTableShape>::FindEntry(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>) */

ulong __thiscall
v8::internal::HashTable<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>::FindEntry
          (HashTable<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape> *this,
          long param_1,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 local_48;
  
  uVar6 = *param_3;
  uVar3 = Object::GetSimpleHash(uVar6);
  if ((uVar3 & 1) != 0) {
    local_48 = uVar6;
    uVar3 = JSReceiver::GetIdentityHash((JSReceiver *)&local_48);
  }
  uVar4 = *(ulong *)this;
  uVar1 = *(uint *)(param_1 + 0xa0);
  uVar2 = (*(int *)(uVar4 + 0xf) >> 1) - 1;
  uVar3 = uVar2 & (int)uVar3 >> 1;
  uVar5 = *(uint *)(uVar4 + (long)(int)(uVar3 * 8 + 0xc) + 7);
  if (uVar5 != uVar1) {
    iVar7 = 1;
    do {
      local_48 = *param_3;
      uVar4 = Object::SameValue((Object *)&local_48,uVar4 & 0xffffffff00000000 | (ulong)uVar5);
      if ((uVar4 & 1) != 0) {
        return (ulong)uVar3;
      }
      uVar4 = *(ulong *)this;
      uVar3 = uVar3 + iVar7 & uVar2;
      uVar5 = *(uint *)(uVar4 + (long)(int)(uVar3 * 8 + 0xc) + 7);
      iVar7 = iVar7 + 1;
    } while (uVar5 != uVar1);
  }
  return 0xffffffffffffffff;
}

