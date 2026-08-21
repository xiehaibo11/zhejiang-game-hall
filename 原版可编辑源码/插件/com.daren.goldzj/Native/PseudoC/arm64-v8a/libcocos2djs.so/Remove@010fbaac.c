
/* v8::internal::ObjectHashTableBase<v8::internal::EphemeronHashTable,
   v8::internal::EphemeronHashTableShape>::Remove(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::EphemeronHashTable>,
   v8::internal::Handle<v8::internal::Object>, bool*, int) */

ulong * v8::internal::
        ObjectHashTableBase<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>
        ::Remove(undefined8 param_1,ulong *param_2,undefined8 *param_3,undefined1 *param_4,
                uint param_5)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 local_68;
  
  uVar6 = *param_2;
  uVar1 = *(uint *)((uVar6 & 0xffffffff00000000) + 0xa0);
  uVar2 = (*(int *)(uVar6 + 0xf) >> 1) - 1;
  param_5 = uVar2 & param_5;
  uVar5 = *(uint *)(uVar6 + 7 + (long)(int)(param_5 * 8 + 0xc));
  if (uVar5 != uVar1) {
    iVar7 = 1;
    do {
      local_68 = *param_3;
      uVar3 = Object::SameValue((Object *)&local_68,uVar6 & 0xffffffff00000000 | (ulong)uVar5);
      if ((uVar3 & 1) != 0) {
        *param_4 = 1;
        uVar6 = *param_2;
        *(undefined4 *)(uVar6 + 7 + (long)(int)(param_5 * 8 + 0xc)) =
             *(undefined4 *)((uVar6 & 0xffffffff00000000) + 0xa8);
        *(undefined4 *)(uVar6 + ((long)(int)(param_5 * 8 + 0x10) | 7U)) =
             *(undefined4 *)((uVar6 & 0xffffffff00000000) + 0xa8);
        *(uint *)(uVar6 + 7) = *(int *)(uVar6 + 7) - 2U & 0xfffffffe;
        *(uint *)(uVar6 + 0xb) = *(uint *)(uVar6 + 0xb) + 2 & 0xfffffffe;
        puVar4 = (ulong *)HashTable<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>
                          ::Shrink(param_1,param_2,0);
        return puVar4;
      }
      param_5 = param_5 + iVar7 & uVar2;
      uVar5 = *(uint *)(uVar6 + 7 + (long)(int)(param_5 * 8 + 0xc));
      iVar7 = iVar7 + 1;
    } while (uVar5 != uVar1);
  }
  *param_4 = 0;
  return param_2;
}

