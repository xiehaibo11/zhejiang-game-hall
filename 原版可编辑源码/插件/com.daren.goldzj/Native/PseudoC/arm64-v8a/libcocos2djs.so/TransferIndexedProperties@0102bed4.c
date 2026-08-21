
/* v8::internal::Genesis::TransferIndexedProperties(v8::internal::Handle<v8::internal::JSObject>,
   v8::internal::Handle<v8::internal::JSObject>) */

void __thiscall
v8::internal::Genesis::TransferIndexedProperties(Genesis *this,ulong *param_2,ulong *param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  pIVar1 = *(Isolate **)this;
  uVar5 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 7);
  if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar1 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar1);
    }
    *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar5;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar5);
  }
  puVar2 = (ulong *)Factory::CopyFixedArray(*(Factory **)this,puVar2);
  uVar4 = *param_3;
  uVar5 = *puVar2;
  *(int *)(uVar4 + 7) = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar3 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar4,uVar4 + 7,uVar5);
      uVar3 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar4,uVar4 + 7,uVar5);
      return;
    }
  }
  return;
}

