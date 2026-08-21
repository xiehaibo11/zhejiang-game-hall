
/* v8::internal::Genesis::CreateSloppyModeFunctionMaps(v8::internal::Handle<v8::internal::JSFunction>)
    */

void __thiscall
v8::internal::Genesis::CreateSloppyModeFunctionMaps(Genesis *this,undefined8 param_2)

{
  undefined4 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  Factory *pFVar4;
  ulong uVar5;
  ulong uVar6;
  
  pFVar4 = *(Factory **)this;
  puVar2 = (ulong *)Factory::CreateSloppyFunctionMap(pFVar4,0,param_2);
  uVar5 = *puVar2;
  uVar6 = **(ulong **)(this + 0x10);
  puVar1 = (undefined4 *)(uVar6 + 0x2b3);
  *puVar1 = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar3 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,puVar1,uVar5);
      uVar3 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,puVar1,uVar5);
    }
  }
  puVar2 = (ulong *)Factory::CreateSloppyFunctionMap(pFVar4,8,param_2);
  uVar5 = *puVar2;
  uVar6 = **(ulong **)(this + 0x10);
  puVar1 = (undefined4 *)(uVar6 + 0x2b7);
  *puVar1 = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar3 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,puVar1,uVar5);
      uVar3 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,puVar1,uVar5);
    }
  }
  puVar2 = (ulong *)Factory::CreateSloppyFunctionMap(pFVar4,4,param_2);
  uVar5 = *puVar2;
  uVar6 = **(ulong **)(this + 0x10);
  puVar1 = (undefined4 *)(uVar6 + 0x2ab);
  *puVar1 = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar3 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,puVar1,uVar5);
      uVar3 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,puVar1,uVar5);
    }
  }
  puVar2 = (ulong *)Factory::CreateSloppyFunctionMap(pFVar4,5,param_2);
  uVar5 = *puVar2;
  uVar6 = **(ulong **)(this + 0x10);
  puVar1 = (undefined4 *)(uVar6 + 0x2af);
  *puVar1 = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar3 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,puVar1,uVar5);
      uVar3 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,puVar1,uVar5);
      return;
    }
  }
  return;
}

