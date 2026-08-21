
/* v8::internal::DescriptorArray::InitializeOrChangeEnumCache(v8::internal::Handle<v8::internal::DescriptorArray>,
   v8::internal::Isolate*, v8::internal::Handle<v8::internal::FixedArray>,
   v8::internal::Handle<v8::internal::FixedArray>) */

void v8::internal::DescriptorArray::InitializeOrChangeEnumCache
               (ulong *param_1,Factory *param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar2 = *(uint *)(*param_1 + 0xb);
  uVar7 = (ulong)uVar2;
  if (uVar2 == *(uint *)(param_2 + 0x3b0)) {
    puVar4 = (ulong *)Factory::NewEnumCache(param_2,param_3,param_4);
    uVar8 = *puVar4;
    uVar9 = *param_1;
    *(int *)(uVar9 + 0xb) = (int)uVar8;
    if ((uVar8 & 1) == 0) {
      return;
    }
    uVar7 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    lVar1 = uVar9 + 0xb;
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar9,lVar1,uVar8);
      uVar7 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if ((uVar7 & 0x18) == 0) {
      return;
    }
    bVar3 = *(byte *)((uVar9 & 0xfffffffffffc0000) + 8);
  }
  else {
    uVar8 = *param_3;
    uVar5 = *param_1 & 0xffffffff00000000;
    uVar9 = uVar5 | uVar7;
    *(int *)(uVar9 + 3) = (int)uVar8;
    if ((uVar8 & 1) != 0) {
      uVar6 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar6 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar9,uVar9 + 3,uVar8);
        uVar6 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar6 & 0x18) != 0) &&
         ((*(byte *)((uVar5 | uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar9,uVar9 + 3,uVar8);
      }
    }
    uVar8 = *param_4;
    *(int *)(uVar9 + 7) = (int)uVar8;
    if ((uVar8 & 1) == 0) {
      return;
    }
    uVar6 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    lVar1 = uVar9 + 7;
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar9,lVar1,uVar8);
      uVar6 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if ((uVar6 & 0x18) == 0) {
      return;
    }
    bVar3 = *(byte *)((uVar5 | uVar7 & 0xfffffffffffc0000) + 8);
  }
  if ((bVar3 & 0x18) != 0) {
    return;
  }
  Heap_GenerationalBarrierSlow(uVar9,lVar1,uVar8);
  return;
}

