
/* v8::internal::Factory::NewDebugEvaluateContext(v8::internal::Handle<v8::internal::Context>,
   v8::internal::Handle<v8::internal::ScopeInfo>, v8::internal::Handle<v8::internal::JSReceiver>,
   v8::internal::Handle<v8::internal::Context>, v8::internal::Handle<v8::internal::StringSet>) */

ulong * __thiscall
v8::internal::Factory::NewDebugEvaluateContext
          (Factory *this,ulong *param_2,ulong *param_3,Factory *param_4,ulong *param_5,
          ulong *param_6)

{
  Factory *pFVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
  pFVar1 = this + 0xa0;
  if (param_4 != (Factory *)0x0) {
    pFVar1 = param_4;
  }
  uVar3 = uVar3 | *(uint *)((uVar3 | *(uint *)((uVar3 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1)) +
                                              0x13)) + 0x1c7);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(this + 0x95a0);
    if (puVar2 == *(ulong **)(this + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar3;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar3);
  }
  puVar2 = (ulong *)NewContext(this,puVar2,0x1c,5,0);
  uVar5 = *puVar2;
  uVar3 = *param_3;
  *(int *)(uVar5 + 7) = (int)uVar3;
  if ((uVar3 & 1) != 0) {
    uVar4 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,uVar5 + 7,uVar3);
      uVar4 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,uVar5 + 7,uVar3);
    }
  }
  uVar5 = *puVar2;
  uVar3 = *param_2;
  *(int *)(uVar5 + 0xb) = (int)uVar3;
  if ((uVar3 & 1) != 0) {
    uVar4 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,uVar5 + 0xb,uVar3);
      uVar4 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,uVar5 + 0xb,uVar3);
    }
  }
  uVar5 = *puVar2;
  uVar3 = *(ulong *)pFVar1;
  *(int *)(uVar5 + 0xf) = (int)uVar3;
  if ((uVar3 & 1) != 0) {
    uVar4 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,uVar5 + 0xf,uVar3);
      uVar4 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,uVar5 + 0xf,uVar3);
    }
  }
  if (param_5 != (ulong *)0x0) {
    uVar5 = *puVar2;
    uVar3 = *param_5;
    *(int *)(uVar5 + 0x13) = (int)uVar3;
    if ((uVar3 & 1) != 0) {
      uVar4 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar4 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar5,uVar5 + 0x13,uVar3);
        uVar4 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar5,uVar5 + 0x13,uVar3);
      }
    }
  }
  if (param_6 != (ulong *)0x0) {
    uVar5 = *puVar2;
    uVar3 = *param_6;
    *(int *)(uVar5 + 0x17) = (int)uVar3;
    if ((uVar3 & 1) != 0) {
      uVar4 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar4 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar5,uVar5 + 0x17,uVar3);
        uVar4 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar5,uVar5 + 0x17,uVar3);
      }
    }
  }
  return puVar2;
}

