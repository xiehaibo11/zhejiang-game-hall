
/* v8::internal::ObjectHashTableBase<v8::internal::ObjectHashTable,
   v8::internal::ObjectHashTableShape>::Lookup(v8::internal::Handle<v8::internal::Object>, int) */

ulong __thiscall
v8::internal::ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>
::Lookup(ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape> *this
        ,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 local_38;
  
  uVar3 = *(ulong *)this;
  uVar5 = uVar3 & 0xffffffff00000000;
  uVar1 = *(uint *)(uVar5 + 0xa0);
  uVar2 = (*(int *)(uVar3 + 0xf) >> 1) - 1;
  param_3 = uVar2 & param_3;
  uVar4 = *(uint *)(uVar3 + (long)(int)(param_3 * 8 + 0xc) + 7);
  if (uVar4 != uVar1) {
    iVar6 = 1;
    do {
      local_38 = *param_2;
      uVar3 = Object::SameValue((Object *)&local_38,uVar3 & 0xffffffff00000000 | (ulong)uVar4);
      if ((uVar3 & 1) != 0) {
        return *(ulong *)this & 0xffffffff00000000 |
               (ulong)*(uint *)(*(ulong *)this + ((long)(int)(param_3 * 8 + 0x10) | 7U));
      }
      uVar3 = *(ulong *)this;
      param_3 = param_3 + iVar6 & uVar2;
      uVar4 = *(uint *)(uVar3 + (long)(int)(param_3 * 8 + 0xc) + 7);
      iVar6 = iVar6 + 1;
    } while (uVar4 != uVar1);
  }
  return *(ulong *)(uVar5 + 0xa8);
}

