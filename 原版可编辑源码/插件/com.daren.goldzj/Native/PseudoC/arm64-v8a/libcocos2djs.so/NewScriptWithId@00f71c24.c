
/* v8::internal::Factory::NewScriptWithId(v8::internal::Handle<v8::internal::String>, int) */

ulong * __thiscall v8::internal::Factory::NewScriptWithId(Factory *this,ulong *param_2,int param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  Logger *this_00;
  ulong uVar4;
  ulong uVar5;
  undefined8 local_60;
  ulong *puStack_58;
  
  puVar1 = (ulong *)NewStruct(this,0x65,1);
  uVar5 = *puVar1;
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
  uVar5 = *puVar1;
  uVar4 = *(ulong *)(this + 0xa0);
  *(int *)(uVar5 + 7) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar3 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,uVar5 + 7,uVar4);
      uVar3 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,uVar5 + 7,uVar4);
    }
  }
  *(int *)(*puVar1 + 0x1f) = param_3 << 1;
  *(undefined4 *)(*puVar1 + 0xb) = 0;
  *(undefined4 *)(*puVar1 + 0xf) = 0;
  uVar5 = *puVar1;
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
  *(undefined4 *)(*puVar1 + 0x17) = 4;
  uVar5 = *puVar1;
  uVar4 = *(ulong *)(this + 0xa0);
  *(int *)(uVar5 + 0x1b) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar3 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,uVar5 + 0x1b,uVar4);
      uVar3 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,uVar5 + 0x1b,uVar4);
    }
  }
  uVar5 = *puVar1;
  uVar4 = *(ulong *)(this + 0xa0);
  *(int *)(uVar5 + 0x23) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar3 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,uVar5 + 0x23,uVar4);
      uVar3 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,uVar5 + 0x23,uVar4);
    }
  }
  *(undefined4 *)(*puVar1 + 0x27) = 0;
  *(undefined4 *)(*puVar1 + 0x2b) = *(undefined4 *)(this + 0x420);
  *(undefined4 *)(*puVar1 + 0x2f) = 0;
  uVar5 = *puVar1;
  uVar4 = *(ulong *)(this + 0x168);
  *(int *)(uVar5 + 0x3b) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar3 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,uVar5 + 0x3b,uVar4);
      uVar3 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,uVar5 + 0x3b,uVar4);
    }
  }
  local_60 = 0;
  puStack_58 = puVar1;
  puVar2 = (undefined8 *)WeakArrayList::AddToEnd(this,this + 0xf58,&local_60);
  *(undefined8 *)(this + 0xf58) = *puVar2;
  this_00 = *(Logger **)(this + 0x9558);
  uVar4 = Logger::is_logging(this_00);
  if ((uVar4 & 1) != 0) {
    Logger::ScriptEvent(this_00,1,param_3);
  }
  return puVar1;
}

