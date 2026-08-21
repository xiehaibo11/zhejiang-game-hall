
/* v8::internal::AccessorPair::Copy(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::AccessorPair>) */

ulong * v8::internal::AccessorPair::Copy(Factory *param_1,ulong *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  puVar2 = (ulong *)Factory::NewAccessorPair(param_1);
  uVar3 = *param_2;
  uVar5 = *puVar2;
  uVar1 = *(uint *)(uVar3 + 3);
  *(uint *)(uVar5 + 3) = uVar1;
  if ((uVar1 & 1) != 0) {
    uVar3 = uVar3 & 0xffffffff00000000;
    uVar6 = uVar3 | uVar1;
    uVar3 = uVar3 | (ulong)uVar1 & 0xfffffffffffc0000;
    uVar4 = *(ulong *)(uVar3 + 8);
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,uVar5 + 3,uVar6);
      uVar4 = *(ulong *)(uVar3 | 8);
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,uVar5 + 3,uVar6);
    }
  }
  uVar3 = *param_2;
  uVar5 = *puVar2;
  uVar1 = *(uint *)(uVar3 + 7);
  *(uint *)(uVar5 + 7) = uVar1;
  if ((uVar1 & 1) != 0) {
    uVar3 = uVar3 & 0xffffffff00000000;
    uVar6 = uVar3 | uVar1;
    uVar3 = uVar3 | (ulong)uVar1 & 0xfffffffffffc0000;
    uVar4 = *(ulong *)(uVar3 + 8);
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,uVar5 + 7,uVar6);
      uVar4 = *(ulong *)(uVar3 | 8);
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,uVar5 + 7,uVar6);
    }
  }
  return puVar2;
}

