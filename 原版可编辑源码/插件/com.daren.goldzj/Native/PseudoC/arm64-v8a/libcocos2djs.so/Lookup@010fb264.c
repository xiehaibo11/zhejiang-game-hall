
/* v8::internal::ObjectHashTableBase<v8::internal::EphemeronHashTable,
   v8::internal::EphemeronHashTableShape>::Lookup(v8::internal::Handle<v8::internal::Object>) */

ulong __thiscall
v8::internal::
ObjectHashTableBase<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>::Lookup
          (ObjectHashTableBase<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>
           *this,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 local_38;
  
  uVar7 = *param_2;
  uVar1 = *(uint *)(this + 4);
  uVar4 = Object::GetSimpleHash(uVar7);
  if ((uVar4 & 1) != 0) {
    local_38 = uVar7;
    uVar4 = JSReceiver::GetIdentityHash((JSReceiver *)&local_38);
  }
  uVar2 = *(uint *)(((ulong)uVar1 << 0x20) + 0xa0);
  if (uVar4 != uVar2) {
    uVar5 = *(ulong *)this;
    uVar3 = (*(int *)(uVar5 + 0xf) >> 1) - 1;
    uVar4 = uVar3 & (int)uVar4 >> 1;
    uVar6 = *(uint *)(uVar5 + (long)(int)(uVar4 * 8 + 0xc) + 7);
    if (uVar6 != uVar2) {
      iVar8 = 1;
      do {
        local_38 = *param_2;
        uVar5 = Object::SameValue((Object *)&local_38,uVar5 & 0xffffffff00000000 | (ulong)uVar6);
        if ((uVar5 & 1) != 0) {
          return *(ulong *)this & 0xffffffff00000000 |
                 (ulong)*(uint *)(*(ulong *)this + ((long)(int)(uVar4 * 8 + 0x10) | 7U));
        }
        uVar5 = *(ulong *)this;
        uVar4 = uVar4 + iVar8 & uVar3;
        uVar6 = *(uint *)(uVar5 + (long)(int)(uVar4 * 8 + 0xc) + 7);
        iVar8 = iVar8 + 1;
      } while (uVar6 != uVar2);
    }
  }
  return *(ulong *)(((ulong)uVar1 << 0x20) + 0xa8);
}

