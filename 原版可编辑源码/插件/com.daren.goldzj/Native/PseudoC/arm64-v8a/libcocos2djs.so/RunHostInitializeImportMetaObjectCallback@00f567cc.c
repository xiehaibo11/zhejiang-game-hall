
/* v8::internal::Isolate::RunHostInitializeImportMetaObjectCallback(v8::internal::Handle<v8::internal::SourceTextModule>)
    */

ulong * __thiscall
v8::internal::Isolate::RunHostInitializeImportMetaObjectCallback(Isolate *this,ulong *param_2)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  pIVar1 = this + 0x95a0;
  uVar6 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x2b);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)pIVar1;
    if (puVar2 == *(ulong **)(this + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(this);
    }
    *(ulong **)pIVar1 = puVar2 + 1;
    *puVar2 = uVar6;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar6);
    uVar6 = *puVar2;
  }
  if ((int)uVar6 == *(int *)(this + 0xa8)) {
    puVar2 = (ulong *)Factory::NewJSObjectWithNullProto((Factory *)this);
    if (*(long *)(this + 0xb680) != 0) {
      uVar6 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
      uVar6 = uVar6 | *(uint *)((uVar6 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1)) + 0x13);
      if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar3 = *(ulong **)pIVar1;
        if (puVar3 == *(ulong **)(this + 0x95a8)) {
          puVar3 = (ulong *)HandleScope::Extend(this);
        }
        *(ulong **)pIVar1 = puVar3 + 1;
        *puVar3 = uVar6;
      }
      else {
        puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(this + 0x95b8),uVar6);
      }
      (**(code **)(this + 0xb680))(puVar3,param_2,puVar2);
    }
    uVar5 = *param_2;
    uVar6 = *puVar2;
    *(int *)(uVar5 + 0x2b) = (int)uVar6;
    if ((uVar6 & 1) != 0) {
      uVar4 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar4 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar5,uVar5 + 0x2b,uVar6);
        uVar4 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar5,uVar5 + 0x2b,uVar6);
      }
    }
  }
  return puVar2;
}

