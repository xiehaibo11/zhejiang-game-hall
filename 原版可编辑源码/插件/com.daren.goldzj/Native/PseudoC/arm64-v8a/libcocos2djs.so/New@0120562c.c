
/* v8::internal::WasmDebugInfo::New(v8::internal::Handle<v8::internal::WasmInstanceObject>) */

ulong * v8::internal::WasmDebugInfo::New(ulong *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  Factory *pFVar4;
  ulong uVar5;
  ulong uVar6;
  
  pFVar4 = (Factory *)((ulong)*(uint *)((long)param_1 + 4) << 0x20);
  puVar1 = (ulong *)Factory::NewCell(pFVar4,(ulong)*(uint *)((long)param_1 + 4) << 0x20 | 0x168);
  puVar2 = (ulong *)Factory::NewStruct(pFVar4,0x71,1);
  uVar6 = *puVar2;
  uVar5 = *param_1;
  *(int *)(uVar6 + 3) = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar3 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,uVar6 + 3,uVar5);
      uVar3 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,uVar6 + 3,uVar5);
    }
  }
  uVar6 = *puVar2;
  uVar5 = *puVar1;
  *(int *)(uVar6 + 0xb) = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar3 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,uVar6 + 0xb,uVar5);
      uVar3 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,uVar6 + 0xb,uVar5);
    }
  }
  uVar6 = *param_1;
  uVar5 = *puVar2;
  *(int *)(uVar6 + 0x8b) = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar3 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,uVar6 + 0x8b,uVar5);
      uVar3 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,uVar6 + 0x8b,uVar5);
    }
  }
  return puVar2;
}

