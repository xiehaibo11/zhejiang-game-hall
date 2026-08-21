
/* v8::internal::Factory::NewCell(v8::internal::Handle<v8::internal::Object>) */

ulong * __thiscall v8::internal::Factory::NewCell(Factory *this,ulong *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = *(undefined4 *)(this + 0x128);
  uVar2 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),8,1,1,0);
  *(undefined4 *)(uVar2 - 1) = uVar1;
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
  uVar5 = *param_2;
  *(int *)(uVar2 + 3) = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar4 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar2,uVar2 + 3,uVar5);
      uVar4 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar2 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar2,uVar2 + 3,uVar5);
    }
  }
  return puVar3;
}

