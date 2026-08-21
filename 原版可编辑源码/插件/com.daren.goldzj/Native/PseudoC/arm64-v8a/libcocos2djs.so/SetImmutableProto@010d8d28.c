
/* v8::internal::JSObject::SetImmutableProto(v8::internal::Handle<v8::internal::JSObject>) */

void v8::internal::JSObject::SetImmutableProto(ulong *param_1)

{
  byte bVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  pIVar2 = (Isolate *)(*param_1 & 0xffffffff00000000);
  uVar4 = (ulong)pIVar2 | (ulong)*(uint *)(*param_1 - 1);
  if (*(CanonicalHandleScope **)((ulong)pIVar2 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar2 + 0x95a0);
    if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(pIVar2);
    }
    *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar4;
    bVar1 = *(byte *)(uVar4 + 10);
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)((ulong)pIVar2 | 0x95b8),uVar4);
    bVar1 = *(byte *)(*puVar3 + 10);
  }
  if ((bVar1 >> 1 & 1) == 0) {
    puVar3 = (ulong *)Map::TransitionToImmutableProto
                                ((ulong)*(uint *)((long)param_1 + 4) << 0x20,puVar3);
    uVar5 = *puVar3;
    uVar4 = *param_1;
    if ((int)uVar5 == 0) {
      *(undefined4 *)(uVar4 - 1) = 0;
    }
    else {
      Heap::VerifyObjectLayoutChange((Heap *)(uVar4 & 0xffffffff00000000 | 0x8850),uVar4,uVar5);
      *(int *)(uVar4 - 1) = (int)uVar5;
      if (((uVar5 & 1) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
        Heap_MarkingBarrierSlow(uVar4,0,uVar5);
        return;
      }
    }
  }
  return;
}

