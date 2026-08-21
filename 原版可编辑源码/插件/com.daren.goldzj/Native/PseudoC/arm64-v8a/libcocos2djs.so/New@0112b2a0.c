
/* v8::internal::SourceTextModuleInfoEntry::New(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::PrimitiveHeapObject>,
   v8::internal::Handle<v8::internal::PrimitiveHeapObject>,
   v8::internal::Handle<v8::internal::PrimitiveHeapObject>, int, int, int, int) */

ulong * v8::internal::SourceTextModuleInfoEntry::New
                  (Factory *param_1,ulong *param_2,ulong *param_3,ulong *param_4,int param_5,
                  int param_6,int param_7,int param_8)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar1 = (ulong *)Factory::NewStruct(param_1,0x6a,1);
  uVar4 = *puVar1;
  uVar3 = *param_2;
  *(int *)(uVar4 + 3) = (int)uVar3;
  if ((uVar3 & 1) != 0) {
    uVar2 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar2 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar4,uVar4 + 3,uVar3);
      uVar2 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar2 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar4,uVar4 + 3,uVar3);
    }
  }
  uVar4 = *puVar1;
  uVar3 = *param_3;
  *(int *)(uVar4 + 7) = (int)uVar3;
  if ((uVar3 & 1) != 0) {
    uVar2 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar2 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar4,uVar4 + 7,uVar3);
      uVar2 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar2 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar4,uVar4 + 7,uVar3);
    }
  }
  uVar4 = *puVar1;
  uVar3 = *param_4;
  *(int *)(uVar4 + 0xb) = (int)uVar3;
  if ((uVar3 & 1) != 0) {
    uVar2 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar2 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar4,uVar4 + 0xb,uVar3);
      uVar2 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar2 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar4,uVar4 + 0xb,uVar3);
    }
  }
  *(int *)(*puVar1 + 0xf) = param_5 << 1;
  *(int *)(*puVar1 + 0x13) = param_6 << 1;
  *(int *)(*puVar1 + 0x17) = param_7 << 1;
  *(int *)(*puVar1 + 0x1b) = param_8 << 1;
  return puVar1;
}

