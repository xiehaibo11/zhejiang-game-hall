
/* v8::internal::KeyAccumulator::AddShadowingKey(v8::internal::Object) */

void __thiscall v8::internal::KeyAccumulator::AddShadowingKey(KeyAccumulator *this,ulong param_2)

{
  int iVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (*(int *)(this + 0x20) != 0) {
    pIVar2 = *(Isolate **)this;
    if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar2 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(pIVar2);
      }
      *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
      *puVar3 = param_2;
      iVar1 = *(int *)(this + 0x20);
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),param_2);
      iVar1 = *(int *)(this + 0x20);
    }
    if (iVar1 != 0) {
      lVar5 = *(long *)(this + 0x18);
      if (lVar5 == 0) {
        lVar5 = HashTable<v8::internal::ObjectHashSet,v8::internal::ObjectHashSetShape>::New
                          (*(undefined8 *)this,0x10,0,0);
        *(long *)(this + 0x18) = lVar5;
      }
      uVar4 = ObjectHashSet::Add(*(undefined8 *)this,lVar5,puVar3);
      *(undefined8 *)(this + 0x18) = uVar4;
    }
  }
  return;
}

