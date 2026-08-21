
/* v8::internal::Genesis::AddRestrictedFunctionProperties(v8::internal::Handle<v8::internal::JSFunction>)
    */

void __thiscall v8::internal::Genesis::AddRestrictedFunctionProperties(Genesis *this,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  Isolate *pIVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  puVar1 = (ulong *)GetThrowTypeErrorIntrinsic(this);
  puVar2 = (ulong *)Factory::NewAccessorPair(*(Factory **)this);
  uVar6 = *puVar2;
  uVar5 = *puVar1;
  *(int *)(uVar6 + 3) = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar4 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,uVar6 + 3,uVar5);
      uVar4 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,uVar6 + 3,uVar5);
    }
  }
  uVar6 = *puVar2;
  uVar5 = *puVar1;
  *(int *)(uVar6 + 7) = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar4 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,uVar6 + 7,uVar5);
      uVar4 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,uVar6 + 7,uVar5);
    }
  }
  pIVar3 = *(Isolate **)this;
  uVar5 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 - 1);
  if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar1 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar5;
  }
  else {
    puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar5);
  }
  FUN_0102a634(*(long *)this,puVar1,*(long *)this + 0x4c8,puVar2);
  FUN_0102a634(*(long *)this,puVar1,*(long *)this + 0x588,puVar2);
  return;
}

