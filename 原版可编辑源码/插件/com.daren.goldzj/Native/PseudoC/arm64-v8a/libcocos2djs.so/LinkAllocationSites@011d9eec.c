
/* v8::internal::ObjectDeserializer::LinkAllocationSites() */

void __thiscall v8::internal::ObjectDeserializer::LinkAllocationSites(ObjectDeserializer *this)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  
  puVar6 = *(ulong **)(this + 0xa0);
  puVar2 = *(ulong **)(this + 0xa8);
  if (puVar6 != puVar2) {
    lVar7 = *(long *)(this + 0x50);
    puVar1 = (ulong *)(lVar7 + 0x8e40);
    do {
      uVar4 = *puVar6;
      if (*(int *)(uVar4 - 1) == *(int *)((uVar4 & 0xffffffff00000000) + 0xdd0)) {
        uVar5 = *puVar1;
        if ((int)uVar5 == 0) {
          uVar5 = *(ulong *)(lVar7 + 0xa0);
          *(int *)(uVar4 + 0x17) = (int)uVar5;
        }
        else {
          *(int *)(uVar4 + 0x17) = (int)uVar5;
        }
        if ((uVar5 & 1) != 0) {
          uVar3 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar3 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar4,uVar4 + 0x17,uVar5);
            uVar3 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            Heap_GenerationalBarrierSlow(uVar4,uVar4 + 0x17,uVar5);
          }
        }
        *puVar1 = uVar4;
      }
      puVar6 = puVar6 + 1;
    } while (puVar2 != puVar6);
  }
  return;
}

