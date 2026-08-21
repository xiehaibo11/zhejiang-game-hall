
/* v8::internal::Factory::NewSyntheticModule(v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::FixedArray>, v8::MaybeLocal<v8::Value>
   (*)(v8::Local<v8::Context>, v8::Local<v8::Module>)) */

ulong * __thiscall
v8::internal::Factory::NewSyntheticModule(Factory *this,ulong *param_2,ulong *param_3,ulong param_4)

{
  int iVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar2 = (ulong *)HashTable<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>::New
                              (this,*(int *)(*param_3 + 3) >> 1,0,0);
  puVar3 = (ulong *)NewForeign(this,param_4);
  uVar4 = Heap::AllocateRawWithRetryOrFailSlowPath
                    ((Heap *)(this + 0x8850),(ulong)*(byte *)(*(long *)(this + 0x2a0) + 3) << 2,1,1,
                     0);
  uVar6 = *(ulong *)(this + 0x2a0);
  *(int *)(uVar4 - 1) = (int)uVar6;
  if (((uVar6 & 1) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
    Heap_MarkingBarrierSlow(uVar4,0);
  }
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(this + 0x95a0);
    if (puVar5 == *(ulong **)(this + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar4;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar4);
    uVar4 = *puVar5;
  }
  iVar1 = Isolate::GenerateIdentityHash((Isolate *)this,0x3fffffff);
  *(int *)(uVar4 + 7) = iVar1 << 1;
  uVar6 = *puVar5;
  uVar4 = *(ulong *)(this + 0xa0);
  *(int *)(uVar6 + 0xf) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar7 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,uVar6 + 0xf,uVar4);
      uVar7 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,uVar6 + 0xf,uVar4);
    }
  }
  *(undefined4 *)(*puVar5 + 0xb) = 0;
  uVar6 = *puVar5;
  uVar4 = *(ulong *)(this + 0xa8);
  *(int *)(uVar6 + 0x13) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar7 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,uVar6 + 0x13,uVar4);
      uVar7 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,uVar6 + 0x13,uVar4);
    }
  }
  uVar6 = *puVar5;
  uVar4 = *param_2;
  *(int *)(uVar6 + 0x17) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar7 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,uVar6 + 0x17,uVar4);
      uVar7 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,uVar6 + 0x17,uVar4);
    }
  }
  uVar6 = *puVar5;
  uVar4 = *param_3;
  *(int *)(uVar6 + 0x1b) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar7 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,uVar6 + 0x1b,uVar4);
      uVar7 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,uVar6 + 0x1b,uVar4);
    }
  }
  uVar6 = *puVar5;
  uVar4 = *puVar2;
  *(int *)(uVar6 + 3) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar7 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,uVar6 + 3,uVar4);
      uVar7 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,uVar6 + 3,uVar4);
    }
  }
  uVar6 = *puVar5;
  uVar4 = *puVar3;
  *(int *)(uVar6 + 0x1f) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar7 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,uVar6 + 0x1f,uVar4);
      uVar7 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,uVar6 + 0x1f,uVar4);
    }
  }
  return puVar5;
}

