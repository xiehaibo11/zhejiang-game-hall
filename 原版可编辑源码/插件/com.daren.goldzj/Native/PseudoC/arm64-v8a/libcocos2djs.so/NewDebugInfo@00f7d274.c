
/* v8::internal::Factory::NewDebugInfo(v8::internal::Handle<v8::internal::SharedFunctionInfo>) */

ulong * __thiscall v8::internal::Factory::NewDebugInfo(Factory *this,ulong *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  puVar2 = (ulong *)NewStruct(this,0x5b,1);
  *(undefined4 *)(*puVar2 + 0x1b) = 0;
  uVar5 = *puVar2;
  uVar4 = *param_2;
  *(int *)(uVar5 + 3) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar3 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,uVar5 + 3,uVar4);
      uVar3 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,uVar5 + 3,uVar4);
    }
  }
  *(undefined4 *)(*puVar2 + 7) = 0;
  uVar4 = *param_2;
  uVar5 = *puVar2;
  uVar1 = *(uint *)(uVar4 + 0xf);
  *(uint *)(uVar5 + 0xb) = uVar1;
  if ((uVar1 & 1) != 0) {
    uVar4 = uVar4 & 0xffffffff00000000;
    uVar6 = uVar4 | uVar1;
    uVar4 = uVar4 | (ulong)uVar1 & 0xfffffffffffc0000;
    uVar3 = *(ulong *)(uVar4 + 8);
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,uVar5 + 0xb,uVar6);
      uVar3 = *(ulong *)(uVar4 | 8);
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,uVar5 + 0xb,uVar6);
    }
  }
  uVar4 = *puVar2;
  uVar5 = *(ulong *)(this + 0xa0);
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
  uVar5 = *puVar2;
  uVar4 = *(ulong *)(this + 0xa0);
  *(int *)(uVar5 + 0x13) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar3 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,uVar5 + 0x13,uVar4);
      uVar3 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,uVar5 + 0x13,uVar4);
    }
  }
  uVar5 = *puVar2;
  uVar4 = *(ulong *)(this + 0x168);
  *(int *)(uVar5 + 0x17) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar3 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,uVar5 + 0x17,uVar4);
      uVar3 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,uVar5 + 0x17,uVar4);
    }
  }
  uVar5 = *param_2;
  uVar4 = *puVar2;
  *(int *)(uVar5 + 0xf) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar3 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,uVar5 + 0xf,uVar4);
      uVar3 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,uVar5 + 0xf,uVar4);
    }
  }
  return puVar2;
}

