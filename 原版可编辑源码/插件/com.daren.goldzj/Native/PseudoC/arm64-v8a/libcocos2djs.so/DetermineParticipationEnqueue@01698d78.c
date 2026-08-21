
/* v8::internal::compiler::ControlEquivalence::DetermineParticipationEnqueue(v8::internal::ZoneQueue<v8::internal::compiler::Node*>&,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::ControlEquivalence::DetermineParticipationEnqueue
          (ControlEquivalence *this,ZoneQueue *param_1,Node *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  Zone *this_00;
  ulong uVar3;
  vector<v8::internal::compiler::ControlEquivalence::NodeData*,v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>>
  *this_01;
  ulong uVar4;
  
  this_01 = (vector<v8::internal::compiler::ControlEquivalence::NodeData*,v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>>
             *)(this + 0x18);
  lVar2 = *(long *)this_01;
  uVar4 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
  uVar3 = *(long *)(this + 0x20) - lVar2 >> 3;
  if (uVar3 <= uVar4) {
    std::__ndk1::
    vector<v8::internal::compiler::ControlEquivalence::NodeData*,v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>>
    ::__append(this_01,(uVar4 - uVar3) + 1);
    lVar2 = *(long *)this_01;
  }
  if (*(long *)(lVar2 + uVar4 * 8) == 0) {
    uVar4 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
    uVar3 = *(long *)(this + 0x20) - lVar2 >> 3;
    if (uVar3 <= uVar4) {
      std::__ndk1::
      vector<v8::internal::compiler::ControlEquivalence::NodeData*,v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>>
      ::__append(this_01,(uVar4 - uVar3) + 1);
    }
    this_00 = *(Zone **)this;
    puVar1 = *(undefined8 **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar1) < 0x30) {
      puVar1 = (undefined8 *)Zone::NewExpand(this_00,0x30);
    }
    else {
      *(undefined8 **)(this_00 + 0x10) = puVar1 + 6;
    }
    puVar1[4] = *(undefined8 *)this;
    *puVar1 = 0xffffffffffffffff;
    puVar1[1] = puVar1 + 1;
    puVar1[2] = puVar1 + 1;
    puVar1[3] = 0;
    *(byte *)(puVar1 + 5) = *(byte *)(puVar1 + 5) & 0xfc;
    *(undefined8 **)(*(long *)(this + 0x18) + uVar4 * 8) = puVar1;
    lVar2 = *(long *)(param_1 + 8);
    uVar3 = 0;
    if (*(long *)(param_1 + 0x10) - lVar2 != 0) {
      uVar3 = (*(long *)(param_1 + 0x10) - lVar2) * 0x40 - 1;
    }
    uVar4 = *(long *)(param_1 + 0x38) + *(long *)(param_1 + 0x30);
    if (uVar3 == uVar4) {
      std::__ndk1::
      deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
      ::__add_back_capacity
                ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                  *)param_1);
      lVar2 = *(long *)(param_1 + 8);
      uVar4 = *(long *)(param_1 + 0x30) + *(long *)(param_1 + 0x38);
    }
    *(Node **)(*(long *)(lVar2 + (uVar4 >> 6 & 0x3fffffffffffff8)) + (uVar4 & 0x1ff) * 8) = param_2;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 1;
  }
  return;
}

