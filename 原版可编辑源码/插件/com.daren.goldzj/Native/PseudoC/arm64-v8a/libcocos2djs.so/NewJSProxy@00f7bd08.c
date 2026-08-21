
/* v8::internal::Factory::NewJSProxy(v8::internal::Handle<v8::internal::JSReceiver>,
   v8::internal::Handle<v8::internal::JSReceiver>) */

ulong * __thiscall v8::internal::Factory::NewJSProxy(Factory *this,ulong *param_2,ulong *param_3)

{
  Factory *pFVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  
  uVar5 = *param_2;
  uVar8 = uVar5 & 0xffffffff00000000 | 9;
  pFVar1 = this + 0x95a0;
  if ((*(byte *)(uVar8 + *(uint *)(uVar5 - 1)) >> 1 & 1) == 0) {
    uVar6 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
    puVar10 = (uint *)((uVar6 | *(uint *)((uVar6 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1)) + 0x13)
                       ) + 0x207);
  }
  else {
    uVar6 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
    uVar9 = uVar6 | *(uint *)((uVar6 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1)) + 0x13);
    if ((*(byte *)(uVar8 + *(uint *)(uVar5 - 1)) >> 6 & 1) == 0) {
      puVar10 = (uint *)(uVar9 + 0x1fb);
    }
    else {
      puVar10 = (uint *)(uVar9 + 0x1ff);
    }
  }
  uVar3 = *puVar10;
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)pFVar1;
    if (puVar4 == *(ulong **)(this + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar1 = puVar4 + 1;
    *puVar4 = uVar6 | uVar3;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(this + 0x95b8),uVar6 | uVar3);
  }
  lVar7 = *(long *)(this + 0x8938);
  lVar2 = *(long *)(lVar7 + 0x68);
  uVar5 = (ulong)*(byte *)(*puVar4 + 3) * 4;
  if ((((ulong)(*(long *)(lVar7 + 0x70) - lVar2) < uVar5) || (FLAG_inline_new == '\0')) ||
     (FLAG_gc_interval != 0)) {
    uVar8 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),uVar5,0,1,0);
  }
  else {
    uVar8 = lVar2 + 1;
    *(ulong *)(lVar7 + 0x68) = lVar2 + uVar5;
    Heap::CreateFillerObjectAt((Heap *)(this + 0x8850),lVar2,uVar5,1,1);
  }
  *(int *)(uVar8 - 1) = (int)*puVar4;
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)pFVar1;
    if (puVar4 == *(ulong **)(this + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar1 = puVar4 + 1;
    *puVar4 = uVar8;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar8);
    uVar8 = *puVar4;
  }
  pFVar1 = this + 0x168;
  if ((*(uint *)(((ulong)this | 0xb) + (ulong)*(uint *)(uVar8 - 1)) & 0x200000) != 0) {
    pFVar1 = this + 0x410;
  }
  *(undefined4 *)(uVar8 + 3) = *(undefined4 *)pFVar1;
  uVar8 = *puVar4;
  uVar5 = *param_2;
  *(int *)(uVar8 + 7) = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar6 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,uVar8 + 7,uVar5);
      uVar6 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,uVar8 + 7,uVar5);
    }
  }
  uVar8 = *puVar4;
  uVar5 = *param_3;
  *(int *)(uVar8 + 0xb) = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar6 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,uVar8 + 0xb,uVar5);
      uVar6 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0xb,uVar5);
    }
  }
  return puVar4;
}

