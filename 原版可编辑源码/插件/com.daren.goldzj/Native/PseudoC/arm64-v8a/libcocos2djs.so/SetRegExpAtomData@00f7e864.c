
/* v8::internal::Factory::SetRegExpAtomData(v8::internal::Handle<v8::internal::JSRegExp>,
   v8::internal::JSRegExp::Type, v8::internal::Handle<v8::internal::String>,
   v8::base::Flags<v8::internal::JSRegExp::Flag, int>, v8::internal::Handle<v8::internal::Object>)
    */

void __thiscall
v8::internal::Factory::SetRegExpAtomData
          (Factory *this,ulong *param_2,int param_3,ulong *param_4,int param_5,ulong *param_6)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  lVar4 = *(long *)(this + 0x8938);
  uVar8 = *(undefined8 *)(this + 0xa0);
  lVar1 = *(long *)(lVar4 + 0x68);
  if ((((ulong)(*(long *)(lVar4 + 0x70) - lVar1) < 0x18) || (FLAG_inline_new == '\0')) ||
     (FLAG_gc_interval != 0)) {
    uVar2 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),0x18,0,1,0);
  }
  else {
    uVar2 = lVar1 + 1;
    *(long *)(lVar4 + 0x68) = lVar1 + 0x18;
    Heap::CreateFillerObjectAt((Heap *)(this + 0x8850),lVar1,0x18,1,1);
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
  *(undefined4 *)(uVar2 + 3) = 8;
  uVar2 = *puVar3;
  uVar7 = (undefined4)uVar8;
  *(ulong *)(uVar2 + 0xf) = CONCAT44(uVar7,uVar7);
  *(ulong *)(uVar2 + 7) = CONCAT44(uVar7,uVar7);
  *(int *)(*puVar3 + 7) = param_3 << 1;
  uVar6 = *puVar3;
  uVar2 = *param_4;
  *(int *)(uVar6 + 0xb) = (int)uVar2;
  if ((uVar2 & 1) != 0) {
    uVar5 = *(ulong *)((uVar2 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,uVar6 + 0xb,uVar2);
      uVar5 = *(ulong *)(uVar2 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,uVar6 + 0xb,uVar2);
    }
  }
  *(int *)(*puVar3 + 0xf) = param_5 << 1;
  uVar6 = *puVar3;
  uVar2 = *param_6;
  *(int *)(uVar6 + 0x13) = (int)uVar2;
  if ((uVar2 & 1) != 0) {
    uVar5 = *(ulong *)((uVar2 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,uVar6 + 0x13,uVar2);
      uVar5 = *(ulong *)(uVar2 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,uVar6 + 0x13,uVar2);
    }
  }
  uVar6 = *param_2;
  uVar2 = *puVar3;
  *(int *)(uVar6 + 0xb) = (int)uVar2;
  if ((uVar2 & 1) != 0) {
    uVar5 = *(ulong *)((uVar2 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,uVar6 + 0xb,uVar2);
      uVar5 = *(ulong *)(uVar2 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,uVar6 + 0xb,uVar2);
      return;
    }
  }
  return;
}

