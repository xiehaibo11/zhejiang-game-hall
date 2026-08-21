
/* v8::internal::HashTable<v8::internal::EphemeronHashTable,
   v8::internal::EphemeronHashTableShape>::EntryForProbe(v8::internal::ReadOnlyRoots,
   v8::internal::Object, int, v8::internal::InternalIndex) */

ulong __thiscall
v8::internal::HashTable<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>::
EntryForProbe(HashTable<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>
              *this,undefined8 param_2,undefined8 param_3,int param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  undefined8 local_38;
  
  uVar2 = Object::GetSimpleHash(param_3);
  if ((uVar2 & 1) != 0) {
    local_38 = param_3;
    uVar2 = JSReceiver::GetIdentityHash((JSReceiver *)&local_38);
  }
  uVar1 = (*(int *)(*(long *)this + 0xf) >> 1) - 1;
  uVar3 = (ulong)(uVar1 & (int)uVar2 >> 1);
  if (1 < param_4) {
    iVar4 = 1;
    do {
      if (uVar3 == param_5) {
        return param_5;
      }
      uVar2 = (int)uVar3 + iVar4;
      iVar4 = iVar4 + 1;
      uVar3 = (ulong)(uVar2 & uVar1);
    } while (param_4 != iVar4);
  }
  return uVar3;
}

