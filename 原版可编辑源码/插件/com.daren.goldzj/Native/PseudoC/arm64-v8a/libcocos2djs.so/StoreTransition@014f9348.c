
/* v8::internal::StoreHandler::StoreTransition(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Map>) */

undefined1  [16] v8::internal::StoreHandler::StoreTransition(Factory *param_1,ulong *param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  uVar3 = *param_2;
  if ((*(uint *)(uVar3 + 0xb) >> 0x15 & 1) == 0) {
    uVar4 = uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 0x1f);
    if ((*(uint *)(uVar3 + 0x1f) & 1) != 0) {
      uVar4 = (ulong)*(uint *)(uVar4 + 3);
    }
    if ((int)uVar4 != 0) {
      puVar1 = (ulong *)Map::GetOrCreatePrototypeChainValidityCell(param_2,param_1);
      uVar2 = 0;
      if (puVar1 == (ulong *)0x0) goto LAB_014f9494;
      uVar4 = *param_2;
      uVar3 = *puVar1;
      *(int *)(uVar4 + 0x1f) = (int)uVar3;
      if ((uVar3 & 1) != 0) {
        uVar5 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar5 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar4,uVar4 + 0x1f,uVar3);
          uVar5 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar4,uVar4 + 0x1f,uVar3);
        }
      }
    }
    uVar2 = 0;
  }
  else {
    puVar1 = (ulong *)Map::GetOrCreatePrototypeChainValidityCell(param_2,param_1);
    param_2 = (ulong *)Factory::NewStoreHandler(param_1,0);
    *(undefined4 *)(*param_2 + 3) = 0x50;
    uVar4 = *param_2;
    uVar3 = *puVar1;
    *(int *)(uVar4 + 7) = (int)uVar3;
    if ((uVar3 & 1) != 0) {
      uVar5 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar5 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar4,uVar4 + 7,uVar3);
        uVar5 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar4,uVar4 + 7,uVar3);
      }
    }
    uVar2 = 1;
  }
LAB_014f9494:
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = uVar2;
  return auVar6;
}

