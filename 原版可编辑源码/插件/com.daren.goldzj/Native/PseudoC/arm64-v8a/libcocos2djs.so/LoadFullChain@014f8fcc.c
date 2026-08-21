
/* v8::internal::LoadHandler::LoadFullChain(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Map>, v8::internal::MaybeObjectHandle const&,
   v8::internal::Handle<v8::internal::Smi>) */

ulong * v8::internal::LoadHandler::LoadFullChain
                  (undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulong *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined4 uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *local_68;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  local_68 = param_4;
  uVar4 = FUN_014f8c00(param_1,&local_68,param_2,0,uVar1,uVar2,1,0);
  puVar5 = (ulong *)Map::GetOrCreatePrototypeChainValidityCell(param_2,param_1);
  puVar3 = local_68;
  if (((*puVar5 & 1) != 0) || (((byte)*local_68 >> 6 & 1) != 0)) {
    puVar6 = (ulong *)Factory::NewLoadHandler(param_1,uVar4,1);
    uVar9 = *puVar6;
    uVar8 = *puVar3;
    *(int *)(uVar9 + 3) = (int)uVar8;
    if ((uVar8 & 1) != 0) {
      uVar7 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar7 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar9,uVar9 + 3,uVar8);
        uVar7 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar9,uVar9 + 3,uVar8);
      }
    }
    uVar9 = *puVar6;
    uVar8 = *puVar5;
    *(int *)(uVar9 + 7) = (int)uVar8;
    if ((uVar8 & 1) != 0) {
      uVar7 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar7 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar9,uVar9 + 7,uVar8);
        uVar7 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar9,uVar9 + 7,uVar8);
      }
    }
    FUN_014f8d18(param_1,puVar6,param_2,0,uVar1,uVar2,1,0);
    local_68 = puVar6;
  }
  return local_68;
}

