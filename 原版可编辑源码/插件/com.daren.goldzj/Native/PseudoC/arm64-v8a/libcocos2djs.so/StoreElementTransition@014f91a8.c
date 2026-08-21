
/* v8::internal::StoreHandler::StoreElementTransition(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Map>, v8::internal::Handle<v8::internal::Map>,
   v8::internal::KeyedAccessStoreMode) */

ulong * v8::internal::StoreHandler::StoreElementTransition
                  (Factory *param_1,undefined8 param_2,ulong *param_3,undefined4 param_4)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *local_68 [3];
  
  CodeFactory::ElementsTransitionAndStore(local_68,param_1,param_4);
  puVar2 = (ulong *)Map::GetOrCreatePrototypeChainValidityCell(param_2,param_1);
  puVar3 = (ulong *)Factory::NewStoreHandler(param_1,1);
  uVar6 = *puVar3;
  uVar5 = *local_68[0];
  *(int *)(uVar6 + 3) = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar4 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,uVar6 + 3,uVar5);
      uVar4 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,uVar6 + 3,uVar5);
    }
  }
  uVar6 = *puVar3;
  uVar5 = *puVar2;
  *(int *)(uVar6 + 7) = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar4 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,uVar6 + 7,uVar5);
      uVar4 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,uVar6 + 7,uVar5);
    }
  }
  uVar6 = *param_3;
  uVar5 = *puVar3;
  uVar1 = (uint)uVar6 | 2;
  *(uint *)(uVar5 + 0xb) = uVar1;
  if (((uVar6 & 1) != 0) && (uVar1 != 3)) {
    if ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,uVar5 + 0xb,uVar6 & 0xfffffffffffffffd);
    }
    if (((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) != 0) &&
       ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,uVar5 + 0xb,uVar6 & 0xfffffffffffffffd);
    }
  }
  return puVar3;
}

