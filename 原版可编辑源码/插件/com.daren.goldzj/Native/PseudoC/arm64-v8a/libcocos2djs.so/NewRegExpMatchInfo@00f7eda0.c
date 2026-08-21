
/* v8::internal::Factory::NewRegExpMatchInfo() */

ulong * __thiscall v8::internal::Factory::NewRegExpMatchInfo(Factory *this)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  lVar4 = *(long *)(this + 0x8938);
  uVar7 = *(undefined8 *)(this + 0xa0);
  lVar1 = *(long *)(lVar4 + 0x68);
  if ((((ulong)(*(long *)(lVar4 + 0x70) - lVar1) < 0x1c) || (FLAG_inline_new == '\0')) ||
     (FLAG_gc_interval != 0)) {
    uVar2 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),0x1c,0,1,0);
  }
  else {
    uVar2 = lVar1 + 1;
    *(long *)(lVar4 + 0x68) = lVar1 + 0x1c;
    Heap::CreateFillerObjectAt((Heap *)(this + 0x8850),lVar1,0x1c,1,1);
  }
  *(undefined4 *)(uVar2 - 1) = *(undefined4 *)(this + 0xe0);
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
  *(undefined4 *)(uVar2 + 3) = 10;
  uVar2 = *puVar3;
  uVar6 = (undefined4)uVar7;
  *(ulong *)(uVar2 + 0xf) = CONCAT44(uVar6,uVar6);
  *(ulong *)(uVar2 + 7) = CONCAT44(uVar6,uVar6);
  *(undefined4 *)(uVar2 + 0x17) = uVar6;
  *(undefined4 *)(*puVar3 + 7) = 4;
  uVar8 = *puVar3;
  uVar2 = *(ulong *)(this + 200);
  *(int *)(uVar8 + 0xb) = (int)uVar2;
  if ((uVar2 & 1) != 0) {
    uVar5 = *(ulong *)((uVar2 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,uVar8 + 0xb,uVar2);
      uVar5 = *(ulong *)(uVar2 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0xb,uVar2);
    }
  }
  uVar8 = *puVar3;
  uVar2 = *(ulong *)(this + 0xa0);
  *(int *)(uVar8 + 0xf) = (int)uVar2;
  if ((uVar2 & 1) != 0) {
    uVar5 = *(ulong *)((uVar2 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,uVar8 + 0xf,uVar2);
      uVar5 = *(ulong *)(uVar2 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0xf,uVar2);
    }
  }
  *(undefined4 *)(*puVar3 + 0x13) = 0;
  *(undefined4 *)(*puVar3 + 0x17) = 0;
  return puVar3;
}

