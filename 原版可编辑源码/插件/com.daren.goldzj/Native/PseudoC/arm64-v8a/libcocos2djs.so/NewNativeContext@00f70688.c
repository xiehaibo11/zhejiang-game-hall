
/* v8::internal::Factory::NewNativeContext() */

ulong * __thiscall v8::internal::Factory::NewNativeContext(Factory *this)

{
  undefined4 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_38;
  
  lVar2 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),0x28,3,1,0);
  *(undefined4 *)(lVar2 + -1) = *(undefined4 *)(this + 0xd0);
  uVar3 = InitializeMap(this,lVar2,0x8f,0,3,0);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(this + 0x95a0);
    if (puVar4 == *(ulong **)(this + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar3;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar3);
  }
  puVar5 = (ulong *)NewContext(this,puVar4,0x42c,0x107,1);
  uVar7 = *puVar5;
  uVar3 = *puVar4;
  puVar1 = (undefined4 *)(uVar7 + 0x1a3);
  *puVar1 = (int)uVar3;
  if ((uVar3 & 1) != 0) {
    uVar6 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,puVar1,uVar3);
      uVar6 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar7,puVar1,uVar3);
    }
  }
  uVar7 = *puVar4;
  uVar3 = *puVar5;
  *(int *)(uVar7 + 0x13) = (int)uVar3;
  if ((uVar3 & 1) != 0) {
    uVar6 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,uVar7 + 0x13,uVar3);
      uVar6 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar7,uVar7 + 0x13,uVar3);
    }
  }
  uVar7 = *puVar5;
  uVar3 = *(ulong *)(this + 0x488);
  *(int *)(uVar7 + 7) = (int)uVar3;
  if ((uVar3 & 1) != 0) {
    uVar6 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,uVar7 + 7,uVar3);
      uVar6 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar7,uVar7 + 7,uVar3);
    }
  }
  *(undefined4 *)(*puVar5 + 0xb) = 0;
  uVar7 = *puVar5;
  uVar3 = *(ulong *)(this + 0xa0);
  *(int *)(uVar7 + 0xf) = (int)uVar3;
  if ((uVar3 & 1) != 0) {
    uVar6 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,uVar7 + 0xf,uVar3);
      uVar6 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar7,uVar7 + 0xf,uVar3);
    }
  }
  local_38 = *puVar5;
  NativeContext::SetDetachedWindowReason((NativeContext *)&local_38,0);
  *(undefined4 *)(*puVar5 + 0xb7) = 0;
  *(undefined4 *)(*puVar5 + 0x1db) = 0;
  uVar7 = *puVar5;
  uVar3 = *(ulong *)(this + 0x168);
  puVar1 = (undefined4 *)(uVar7 + 0x27f);
  *puVar1 = (int)uVar3;
  if ((uVar3 & 1) != 0) {
    uVar6 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,puVar1,uVar3);
      uVar6 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar7,puVar1,uVar3);
    }
  }
  *(undefined8 *)(*puVar5 + 0x423) = 0;
  uVar7 = *puVar5;
  uVar3 = *(ulong *)(this + 0x420);
  puVar1 = (undefined4 *)(uVar7 + 0x3cf);
  *puVar1 = (int)uVar3;
  if ((uVar3 & 1) != 0) {
    uVar6 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,puVar1,uVar3);
      uVar6 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar7,puVar1,uVar3);
    }
  }
  return puVar5;
}

