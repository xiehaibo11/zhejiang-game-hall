
/* v8::internal::Factory::NewConsString(v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::String>, int, bool) */

ulong * __thiscall
v8::internal::Factory::NewConsString
          (Factory *this,ulong *param_2,ulong *param_3,undefined4 param_4,ulong param_5)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  Factory *pFVar8;
  
  if ((param_5 & 1) == 0) {
    lVar5 = *(long *)(this + 0x2f0);
    pFVar8 = this + 0x2f0;
  }
  else {
    lVar5 = *(long *)(this + 0x2e8);
    pFVar8 = this + 0x2e8;
  }
  lVar6 = *(long *)(this + 0x8938);
  lVar1 = *(long *)(lVar6 + 0x68);
  uVar4 = (ulong)*(byte *)(lVar5 + 3) * 4;
  if ((((ulong)(*(long *)(lVar6 + 0x70) - lVar1) < uVar4) || (FLAG_inline_new == '\0')) ||
     (FLAG_gc_interval != 0)) {
    uVar2 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),uVar4,0,1,0);
  }
  else {
    uVar2 = lVar1 + 1;
    *(ulong *)(lVar6 + 0x68) = lVar1 + uVar4;
    Heap::CreateFillerObjectAt((Heap *)(this + 0x8850),lVar1,uVar4,1,1);
  }
  *(undefined4 *)(uVar2 - 1) = *(undefined4 *)pFVar8;
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(this + 0x95a0);
    if (puVar3 == *(ulong **)(this + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar2;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar2);
    uVar2 = *puVar3;
  }
  uVar4 = *(ulong *)((uVar2 & 0xfffffffffffc0000) + 8);
  *(undefined4 *)(uVar2 + 3) = 7;
  *(undefined4 *)(*puVar3 + 7) = param_4;
  uVar7 = *puVar3;
  uVar2 = *param_2;
  *(int *)(uVar7 + 0xb) = (int)uVar2;
  if ((((uint)uVar4 >> 0x12 & 1) == 0) && ((uVar4 & 0x18) != 0)) {
    *(int *)(*puVar3 + 0xf) = (int)*param_3;
  }
  else {
    if ((uVar2 & 1) != 0) {
      uVar4 = *(ulong *)((uVar2 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar4 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar7,uVar7 + 0xb,uVar2);
        uVar4 = *(ulong *)(uVar2 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar7,uVar7 + 0xb,uVar2);
      }
    }
    uVar2 = *puVar3;
    uVar4 = *param_3;
    *(int *)(uVar2 + 0xf) = (int)uVar4;
    if ((uVar4 & 1) != 0) {
      uVar7 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar7 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar2,uVar2 + 0xf,uVar4);
        uVar7 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar2 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar2,uVar2 + 0xf,uVar4);
      }
    }
  }
  return puVar3;
}

