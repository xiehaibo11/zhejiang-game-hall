
/* v8::internal::compiler::ControlEquivalence::DFSPush(v8::internal::ZoneStack<v8::internal::compiler::ControlEquivalence::DFSStackEntry>&,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*,
   v8::internal::compiler::ControlEquivalence::DFSDirection) */

void __thiscall
v8::internal::compiler::ControlEquivalence::DFSPush
          (ControlEquivalence *this,
          deque<v8::internal::compiler::ControlEquivalence::DFSStackEntry,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::ControlEquivalence::DFSStackEntry>>
          *param_1,long param_2,undefined8 param_3,undefined4 param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  ulong uVar5;
  long lVar6;
  vector<v8::internal::compiler::ControlEquivalence::NodeData*,v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>>
  *this_00;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  this_00 = (vector<v8::internal::compiler::ControlEquivalence::NodeData*,v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>>
             *)(this + 0x18);
  lVar2 = *(long *)this_00;
  uVar7 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
  uVar5 = *(long *)(this + 0x20) - lVar2 >> 3;
  if (uVar5 <= uVar7) {
    std::__ndk1::
    vector<v8::internal::compiler::ControlEquivalence::NodeData*,v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>>
    ::__append(this_00,(uVar7 - uVar5) + 1);
    lVar2 = *(long *)this_00;
  }
  lVar2 = *(long *)(lVar2 + uVar7 * 8);
  plVar1 = (long *)(param_2 + 0x20);
  *(byte *)(lVar2 + 0x28) = *(byte *)(lVar2 + 0x28) | 2;
  if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
    lVar2 = *plVar1;
    plVar1 = (long *)(lVar2 + 0x10);
    puVar8 = *(undefined8 **)(param_2 + 0x18);
  }
  else {
    puVar8 = *(undefined8 **)(param_2 + 0x18);
    lVar2 = param_2;
  }
  if (puVar8 == (undefined8 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar8;
  }
  lVar3 = *(long *)(param_1 + 8);
  lVar6 = *(long *)(param_1 + 0x10);
  uVar5 = 0;
  if (lVar6 - lVar3 != 0) {
    uVar5 = (lVar6 - lVar3 >> 3) * 0x49 - 1;
  }
  uVar7 = *(long *)(param_1 + 0x38) + *(long *)(param_1 + 0x30);
  if (uVar5 == uVar7) {
    std::__ndk1::
    deque<v8::internal::compiler::ControlEquivalence::DFSStackEntry,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::ControlEquivalence::DFSStackEntry>>
    ::__add_back_capacity(param_1);
    lVar3 = *(long *)(param_1 + 8);
    lVar6 = *(long *)(param_1 + 0x10);
    uVar7 = *(long *)(param_1 + 0x30) + *(long *)(param_1 + 0x38);
  }
  if (lVar6 == lVar3) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)(*(long *)(lVar3 + (uVar7 / 0x49) * 8) + (uVar7 % 0x49) * 0x38);
  }
  *puVar4 = param_5;
  *(long *)(puVar4 + 2) = lVar2 + -0x18;
  *(long **)(puVar4 + 4) = plVar1;
  *(undefined8 **)(puVar4 + 6) = puVar8;
  *(undefined8 *)(puVar4 + 8) = uVar9;
  *(undefined8 *)(puVar4 + 10) = param_3;
  *(long *)(puVar4 + 0xc) = param_2;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 1;
  return;
}

