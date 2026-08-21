
/* v8::internal::ScopeIterator::SetScriptVariableValue(v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::Object>) */

undefined8 __thiscall
v8::internal::ScopeIterator::SetScriptVariableValue
          (ScopeIterator *this,undefined8 *param_2,ulong *param_3)

{
  long lVar1;
  ulong uVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 local_50;
  
  local_50 = **(undefined8 **)(this + 0x28);
  uVar2 = Context::global_object((Context *)&local_50);
  pIVar3 = *(Isolate **)this;
  uVar2 = uVar2 & 0xffffffff00000000 |
          (ulong)*(uint *)((uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 0xb)) + 0x273);
  if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar2;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar2);
  }
  uVar2 = ScriptContextTable::Lookup(*(undefined8 *)this,*puVar4,*param_2,&local_50);
  if ((uVar2 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    pIVar3 = *(Isolate **)this;
    uVar2 = *puVar4 & 0xffffffff00000000 |
            (ulong)*(uint *)(*puVar4 + (long)((int)local_50 * 4 + 4) + 7);
    if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar3 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(pIVar3);
      }
      *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar2;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar2);
      uVar2 = *puVar4;
    }
    uVar7 = *param_3;
    lVar1 = uVar2 + (long)(local_50._4_4_ << 2);
    *(int *)(lVar1 + 7) = (int)uVar7;
    if ((uVar7 & 1) != 0) {
      uVar6 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
      lVar1 = lVar1 + 7;
      if (((uint)uVar6 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar2,lVar1,uVar7);
        uVar6 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar2 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar2,lVar1,uVar7);
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}

