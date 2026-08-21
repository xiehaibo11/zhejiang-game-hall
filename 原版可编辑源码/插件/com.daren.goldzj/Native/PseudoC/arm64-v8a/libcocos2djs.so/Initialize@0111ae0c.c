
/* v8::internal::JSSet::Initialize(v8::internal::Handle<v8::internal::JSSet>,
   v8::internal::Isolate*) */

void v8::internal::JSSet::Initialize(ulong *param_1,Factory *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar1 = (ulong *)Factory::NewOrderedHashSet(param_2);
  uVar4 = *param_1;
  uVar3 = *puVar1;
  *(int *)(uVar4 + 0xb) = (int)uVar3;
  if ((uVar3 & 1) != 0) {
    uVar2 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar2 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar4,uVar4 + 0xb,uVar3);
      uVar2 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar2 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar4,uVar4 + 0xb,uVar3);
      return;
    }
  }
  return;
}

