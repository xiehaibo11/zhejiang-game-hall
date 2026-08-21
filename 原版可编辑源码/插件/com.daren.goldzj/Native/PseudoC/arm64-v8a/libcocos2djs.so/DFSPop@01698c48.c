
/* v8::internal::compiler::ControlEquivalence::DFSPop(v8::internal::ZoneStack<v8::internal::compiler::ControlEquivalence::DFSStackEntry>&,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::ControlEquivalence::DFSPop
          (ControlEquivalence *this,ZoneStack *param_1,Node *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  vector<v8::internal::compiler::ControlEquivalence::NodeData*,v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>>
  *this_00;
  ulong uVar6;
  
  this_00 = (vector<v8::internal::compiler::ControlEquivalence::NodeData*,v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>>
             *)(this + 0x18);
  lVar2 = *(long *)this_00;
  uVar6 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
  uVar4 = *(long *)(this + 0x20) - lVar2 >> 3;
  if (uVar4 <= uVar6) {
    std::__ndk1::
    vector<v8::internal::compiler::ControlEquivalence::NodeData*,v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>>
    ::__append(this_00,(uVar6 - uVar4) + 1);
    lVar2 = *(long *)this_00;
  }
  lVar2 = *(long *)(lVar2 + uVar6 * 8);
  *(byte *)(lVar2 + 0x28) = *(byte *)(lVar2 + 0x28) & 0xfd;
  lVar2 = *(long *)(this + 0x18);
  uVar6 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
  uVar4 = *(long *)(this + 0x20) - lVar2 >> 3;
  if (uVar4 <= uVar6) {
    std::__ndk1::
    vector<v8::internal::compiler::ControlEquivalence::NodeData*,v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>>
    ::__append(this_00,(uVar6 - uVar4) + 1);
    lVar2 = *(long *)this_00;
  }
  lVar2 = *(long *)(lVar2 + uVar6 * 8);
  *(byte *)(lVar2 + 0x28) = *(byte *)(lVar2 + 0x28) | 1;
  lVar3 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x38);
  lVar2 = 0;
  if (lVar3 - *(long *)(param_1 + 8) != 0) {
    lVar2 = (lVar3 - *(long *)(param_1 + 8) >> 3) * 0x49 + -1;
  }
  *(long *)(param_1 + 0x38) = lVar1 + -1;
  if (0x91 < (lVar2 - (lVar1 + *(long *)(param_1 + 0x30))) + 1U) {
    puVar5 = *(undefined8 **)(lVar3 + -8);
    if ((*(long *)(param_1 + 0x48) == 0) || (*(ulong *)(*(long *)(param_1 + 0x48) + 8) < 0x4a)) {
      puVar5[1] = 0x49;
      *puVar5 = *(undefined8 *)(param_1 + 0x48);
      lVar3 = *(long *)(param_1 + 0x10);
      *(undefined8 **)(param_1 + 0x48) = puVar5;
    }
    *(long *)(param_1 + 0x10) = lVar3 + -8;
  }
  return;
}

