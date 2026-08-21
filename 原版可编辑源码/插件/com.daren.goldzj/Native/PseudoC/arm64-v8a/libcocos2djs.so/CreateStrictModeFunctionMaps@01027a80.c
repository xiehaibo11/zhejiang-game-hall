
/* v8::internal::Genesis::CreateStrictModeFunctionMaps(v8::internal::Handle<v8::internal::JSFunction>)
    */

void __thiscall
v8::internal::Genesis::CreateStrictModeFunctionMaps(Genesis *this,undefined8 param_2)

{
  undefined4 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  Factory *pFVar5;
  ulong uVar6;
  ulong uVar7;
  
  pFVar5 = *(Factory **)this;
  puVar2 = (ulong *)Factory::CreateStrictFunctionMap(pFVar5,0,param_2);
  uVar6 = *puVar2;
  uVar7 = **(ulong **)(this + 0x10);
  puVar1 = (undefined4 *)(uVar7 + 0x2c7);
  *puVar1 = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar4 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,puVar1,uVar6);
      uVar4 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar7,puVar1,uVar6);
    }
  }
  puVar2 = (ulong *)Factory::CreateStrictFunctionMap(pFVar5,1,param_2);
  uVar6 = *puVar2;
  uVar7 = **(ulong **)(this + 0x10);
  puVar1 = (undefined4 *)(uVar7 + 0x2cb);
  *puVar1 = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar4 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,puVar1,uVar6);
      uVar4 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar7,puVar1,uVar6);
    }
  }
  puVar2 = (ulong *)Factory::CreateStrictFunctionMap(pFVar5,2,param_2);
  uVar6 = *puVar2;
  uVar7 = **(ulong **)(this + 0x10);
  puVar1 = (undefined4 *)(uVar7 + 0x2cf);
  *puVar1 = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar4 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,puVar1,uVar6);
      uVar4 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar7,puVar1,uVar6);
    }
  }
  puVar2 = (ulong *)Factory::CreateStrictFunctionMap(pFVar5,3,param_2);
  uVar6 = *puVar2;
  uVar7 = **(ulong **)(this + 0x10);
  puVar1 = (undefined4 *)(uVar7 + 0x2d3);
  *puVar1 = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar4 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,puVar1,uVar6);
      uVar4 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar7,puVar1,uVar6);
    }
  }
  puVar2 = (ulong *)Factory::CreateStrictFunctionMap(pFVar5,4,param_2);
  uVar6 = *puVar2;
  uVar7 = **(ulong **)(this + 0x10);
  puVar1 = (undefined4 *)(uVar7 + 699);
  *puVar1 = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar4 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,puVar1,uVar6);
      uVar4 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar7,puVar1,uVar6);
    }
  }
  puVar2 = (ulong *)Factory::CreateStrictFunctionMap(pFVar5,5,param_2);
  uVar6 = *puVar2;
  uVar7 = **(ulong **)(this + 0x10);
  puVar1 = (undefined4 *)(uVar7 + 0x2bf);
  *puVar1 = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar4 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,puVar1,uVar6);
      uVar4 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar7,puVar1,uVar6);
    }
  }
  uVar3 = Factory::CreateStrictFunctionMap(pFVar5,6,param_2);
  *(undefined8 *)(this + 0x20) = uVar3;
  uVar3 = Factory::CreateStrictFunctionMap(pFVar5,7,param_2);
  *(undefined8 *)(this + 0x28) = uVar3;
  puVar2 = (ulong *)Factory::CreateStrictFunctionMap(pFVar5,8,param_2);
  uVar6 = *puVar2;
  uVar7 = **(ulong **)(this + 0x10);
  puVar1 = (undefined4 *)(uVar7 + 0x2c3);
  *puVar1 = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar4 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,puVar1,uVar6);
      uVar4 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar7,puVar1,uVar6);
    }
  }
  puVar2 = (ulong *)Factory::CreateClassFunctionMap(pFVar5,param_2);
  uVar6 = *puVar2;
  uVar7 = **(ulong **)(this + 0x10);
  puVar1 = (undefined4 *)(uVar7 + 0x307);
  *puVar1 = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar4 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,puVar1,uVar6);
      uVar4 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar7,puVar1,uVar6);
    }
  }
  AddRestrictedFunctionProperties(this,param_2);
  return;
}

