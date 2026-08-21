
/* v8::internal::LoadHandler::LoadFromPrototype(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Map>, v8::internal::Handle<v8::internal::JSReceiver>,
   v8::internal::Handle<v8::internal::Smi>, v8::internal::MaybeObjectHandle,
   v8::internal::MaybeObjectHandle) */

ulong * v8::internal::LoadHandler::LoadFromPrototype
                  (undefined8 param_1,undefined8 param_2,long param_3,ulong *param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *local_68;
  
  lVar1 = param_3;
  if (param_6 != 0) {
    lVar1 = param_6;
  }
  uVar2 = 0;
  if (param_6 != 0) {
    uVar2 = param_5;
  }
  local_68 = param_4;
  uVar3 = FUN_014f8c00(param_1,&local_68,param_2,param_3,uVar2,lVar1);
  puVar4 = (ulong *)Map::GetOrCreatePrototypeChainValidityCell(param_2,param_1);
  puVar5 = (ulong *)Factory::NewLoadHandler(param_1,uVar3,1);
  uVar7 = *puVar5;
  uVar8 = *local_68;
  *(int *)(uVar7 + 3) = (int)uVar8;
  if ((uVar8 & 1) != 0) {
    uVar6 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,uVar7 + 3,uVar8);
      uVar6 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar7,uVar7 + 3,uVar8);
    }
  }
  uVar8 = *puVar5;
  uVar7 = *puVar4;
  *(int *)(uVar8 + 7) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar6 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,uVar8 + 7,uVar7);
      uVar6 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,uVar8 + 7,uVar7);
    }
  }
  FUN_014f8d18(param_1,puVar5,param_2,param_3,uVar2,lVar1,param_7,param_8);
  return puVar5;
}

