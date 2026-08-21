
/* v8::internal::PropertyDescriptor::ToPropertyDescriptorObject(v8::internal::Isolate*) */

ulong * __thiscall
v8::internal::PropertyDescriptor::ToPropertyDescriptorObject
          (PropertyDescriptor *this,Isolate *param_1)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar2 = (ulong *)Factory::NewFixedArray((Factory *)param_1,4,0);
  *(uint *)(*puVar2 + 7) =
       ((byte)*this & 0x3f | (uint)(*(long *)(this + 8) != 0) << 6 |
        (uint)(*(long *)(this + 0x10) != 0) << 7 | (uint)(*(long *)(this + 0x18) != 0) << 8) << 1;
  uVar4 = *puVar2;
  pIVar1 = param_1 + 0xa8;
  if (*(Isolate **)(this + 8) != (Isolate *)0x0) {
    pIVar1 = *(Isolate **)(this + 8);
  }
  uVar5 = *(ulong *)pIVar1;
  *(int *)(uVar4 + 0xb) = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar3 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar4,uVar4 + 0xb,uVar5);
      uVar3 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar4,uVar4 + 0xb,uVar5);
    }
  }
  uVar4 = *puVar2;
  pIVar1 = param_1 + 0xa8;
  if (*(Isolate **)(this + 0x10) != (Isolate *)0x0) {
    pIVar1 = *(Isolate **)(this + 0x10);
  }
  uVar5 = *(ulong *)pIVar1;
  *(int *)(uVar4 + 0xf) = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar3 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar4,uVar4 + 0xf,uVar5);
      uVar3 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar4,uVar4 + 0xf,uVar5);
    }
  }
  uVar4 = *puVar2;
  pIVar1 = param_1 + 0xa8;
  if (*(Isolate **)(this + 0x18) != (Isolate *)0x0) {
    pIVar1 = *(Isolate **)(this + 0x18);
  }
  uVar5 = *(ulong *)pIVar1;
  *(int *)(uVar4 + 0x13) = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar3 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar4,uVar4 + 0x13,uVar5);
      uVar3 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar4,uVar4 + 0x13,uVar5);
    }
  }
  return puVar2;
}

