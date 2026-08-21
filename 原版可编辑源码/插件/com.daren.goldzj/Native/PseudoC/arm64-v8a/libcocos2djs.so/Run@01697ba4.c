
/* v8::internal::compiler::ControlEquivalence::Run(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::ControlEquivalence::Run(ControlEquivalence *this,Node *param_1)

{
  long lVar1;
  ulong uVar2;
  vector<v8::internal::compiler::ControlEquivalence::NodeData*,v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>>
  *this_00;
  ulong uVar3;
  
  this_00 = (vector<v8::internal::compiler::ControlEquivalence::NodeData*,v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>>
             *)(this + 0x18);
  lVar1 = *(long *)this_00;
  uVar3 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
  uVar2 = *(long *)(this + 0x20) - lVar1 >> 3;
  if (uVar2 <= uVar3) {
    std::__ndk1::
    vector<v8::internal::compiler::ControlEquivalence::NodeData*,v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>>
    ::__append(this_00,(uVar3 - uVar2) + 1);
    lVar1 = *(long *)this_00;
  }
  if (*(long *)(lVar1 + uVar3 * 8) != 0) {
    uVar3 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
    uVar2 = *(long *)(this + 0x20) - lVar1 >> 3;
    if (uVar2 <= uVar3) {
      std::__ndk1::
      vector<v8::internal::compiler::ControlEquivalence::NodeData*,v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>>
      ::__append(this_00,(uVar3 - uVar2) + 1);
      lVar1 = *(long *)this_00;
    }
    if (**(long **)(lVar1 + uVar3 * 8) != -1) {
      return;
    }
  }
  DetermineParticipation(this,param_1);
  RunUndirectedDFS(this,param_1);
  return;
}

