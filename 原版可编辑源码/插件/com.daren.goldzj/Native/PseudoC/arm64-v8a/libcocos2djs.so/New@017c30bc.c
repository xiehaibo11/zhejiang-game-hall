
/* v8::internal::CachedTemplateObject::New(v8::internal::Isolate*, int,
   v8::internal::Handle<v8::internal::JSArray>, v8::internal::Handle<v8::internal::HeapObject>) */

ulong * v8::internal::CachedTemplateObject::New
                  (Factory *param_1,int param_2,ulong *param_3,ulong *param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar1 = (ulong *)Factory::NewStruct(param_1,0x6f,1);
  *(int *)(*puVar1 + 3) = param_2 << 1;
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
  return puVar1;
}

