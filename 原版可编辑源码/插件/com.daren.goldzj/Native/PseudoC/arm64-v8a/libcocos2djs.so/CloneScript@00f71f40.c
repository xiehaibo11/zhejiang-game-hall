
/* v8::internal::Factory::CloneScript(v8::internal::Handle<v8::internal::Script>) */

ulong * __thiscall v8::internal::Factory::CloneScript(Factory *this,ulong *param_2)

{
  uint uVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  Logger *this_00;
  ulong uVar7;
  ulong uVar8;
  undefined8 local_60;
  ulong *puStack_58;
  
  uVar6 = 1;
  if (*(int *)(this + 0xfd8) >> 1 != 0x3fffffff) {
    uVar6 = (*(int *)(this + 0xfd8) >> 1) + 1;
  }
  *(ulong *)(this + 0xfd8) = -(ulong)(uVar6 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar6 << 1;
  puVar2 = (ulong *)NewStruct(this,0x65,1);
  uVar4 = *param_2;
  uVar7 = *puVar2;
  uVar1 = *(uint *)(uVar4 + 3);
  *(uint *)(uVar7 + 3) = uVar1;
  if ((uVar1 & 1) != 0) {
    uVar4 = uVar4 & 0xffffffff00000000;
    uVar8 = uVar4 | uVar1;
    uVar4 = uVar4 | (ulong)uVar1 & 0xfffffffffffc0000;
    uVar5 = *(ulong *)(uVar4 + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,uVar7 + 3,uVar8);
      uVar5 = *(ulong *)(uVar4 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar7,uVar7 + 3,uVar8);
    }
  }
  uVar4 = *param_2;
  uVar7 = *puVar2;
  uVar1 = *(uint *)(uVar4 + 7);
  *(uint *)(uVar7 + 7) = uVar1;
  if ((uVar1 & 1) != 0) {
    uVar4 = uVar4 & 0xffffffff00000000;
    uVar8 = uVar4 | uVar1;
    uVar4 = uVar4 | (ulong)uVar1 & 0xfffffffffffc0000;
    uVar5 = *(ulong *)(uVar4 + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,uVar7 + 7,uVar8);
      uVar5 = *(ulong *)(uVar4 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar7,uVar7 + 7,uVar8);
    }
  }
  *(uint *)(*puVar2 + 0x1f) = uVar6 << 1;
  *(uint *)(*puVar2 + 0xb) = *(uint *)(*param_2 + 0xb) & 0xfffffffe;
  *(uint *)(*puVar2 + 0xf) = *(uint *)(*param_2 + 0xf) & 0xfffffffe;
  uVar4 = *param_2;
  uVar7 = *puVar2;
  uVar1 = *(uint *)(uVar4 + 0x13);
  *(uint *)(uVar7 + 0x13) = uVar1;
  if ((uVar1 & 1) != 0) {
    uVar4 = uVar4 & 0xffffffff00000000;
    uVar8 = uVar4 | uVar1;
    uVar4 = uVar4 | (ulong)uVar1 & 0xfffffffffffc0000;
    uVar5 = *(ulong *)(uVar4 + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,uVar7 + 0x13,uVar8);
      uVar5 = *(ulong *)(uVar4 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar7,uVar7 + 0x13,uVar8);
    }
  }
  *(uint *)(*puVar2 + 0x17) = *(uint *)(*param_2 + 0x17) & 0xfffffffe;
  uVar7 = *puVar2;
  uVar4 = *(ulong *)(this + 0xa0);
  *(int *)(uVar7 + 0x1b) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar5 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,uVar7 + 0x1b,uVar4);
      uVar5 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar7,uVar7 + 0x1b,uVar4);
    }
  }
  uVar4 = *param_2;
  uVar7 = *puVar2;
  uVar1 = *(uint *)(uVar4 + 0x23);
  *(uint *)(uVar7 + 0x23) = uVar1;
  if ((uVar1 & 1) != 0) {
    uVar4 = uVar4 & 0xffffffff00000000;
    uVar8 = uVar4 | uVar1;
    uVar4 = uVar4 | (ulong)uVar1 & 0xfffffffffffc0000;
    uVar5 = *(ulong *)(uVar4 + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,uVar7 + 0x23,uVar8);
      uVar5 = *(ulong *)(uVar4 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar7,uVar7 + 0x23,uVar8);
    }
  }
  *(undefined4 *)(*puVar2 + 0x2b) = *(undefined4 *)(this + 0x420);
  *(uint *)(*puVar2 + 0x27) = *(uint *)(*param_2 + 0x27) & 0xfffffffe;
  *(uint *)(*puVar2 + 0x2f) = *(uint *)(*param_2 + 0x2f) & 0xfffffffe;
  uVar4 = *param_2;
  uVar7 = *puVar2;
  uVar1 = *(uint *)(uVar4 + 0x3b);
  *(uint *)(uVar7 + 0x3b) = uVar1;
  if ((uVar1 & 1) != 0) {
    uVar4 = uVar4 & 0xffffffff00000000;
    uVar8 = uVar4 | uVar1;
    uVar4 = uVar4 | (ulong)uVar1 & 0xfffffffffffc0000;
    uVar5 = *(ulong *)(uVar4 + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,uVar7 + 0x3b,uVar8);
      uVar5 = *(ulong *)(uVar4 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar7,uVar7 + 0x3b,uVar8);
    }
  }
  local_60 = 0;
  puStack_58 = puVar2;
  puVar3 = (undefined8 *)WeakArrayList::AddToEnd(this,this + 0xf58,&local_60);
  *(undefined8 *)(this + 0xf58) = *puVar3;
  this_00 = *(Logger **)(this + 0x9558);
  uVar4 = Logger::is_logging(this_00);
  if ((uVar4 & 1) != 0) {
    Logger::ScriptEvent(this_00,1,uVar6);
  }
  return puVar2;
}

