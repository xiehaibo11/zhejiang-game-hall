
/* v8::internal::HashTable<v8::internal::EphemeronHashTable,
   v8::internal::EphemeronHashTableShape>::FindEntry(v8::internal::ReadOnlyRoots,
   v8::internal::Handle<v8::internal::Object>, int) */

ulong __thiscall
v8::internal::HashTable<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>::
FindEntry(HashTable<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape> *this,
         long param_2,undefined8 *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  undefined8 local_48;
  
  uVar3 = *(ulong *)this;
  uVar1 = *(uint *)(param_2 + 0x20);
  uVar2 = (*(int *)(uVar3 + 0xf) >> 1) - 1;
  param_4 = uVar2 & param_4;
  uVar4 = *(uint *)(uVar3 + (long)(int)(param_4 * 8 + 0xc) + 7);
  if (uVar4 != uVar1) {
    iVar5 = 1;
    do {
      local_48 = *param_3;
      uVar3 = Object::SameValue((Object *)&local_48,uVar3 & 0xffffffff00000000 | (ulong)uVar4);
      if ((uVar3 & 1) != 0) {
        return (ulong)param_4;
      }
      uVar3 = *(ulong *)this;
      param_4 = param_4 + iVar5 & uVar2;
      uVar4 = *(uint *)(uVar3 + (long)(int)(param_4 * 8 + 0xc) + 7);
      iVar5 = iVar5 + 1;
    } while (uVar4 != uVar1);
  }
  return 0xffffffffffffffff;
}

