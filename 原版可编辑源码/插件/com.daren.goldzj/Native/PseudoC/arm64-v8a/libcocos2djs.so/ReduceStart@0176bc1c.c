
/* v8::internal::compiler::LoadElimination::ReduceStart(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::LoadElimination::ReduceStart(LoadElimination *this,Node *param_1)

{
  AbstractState *pAVar1;
  long lVar2;
  ulong uVar3;
  vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
  *this_00;
  ulong uVar4;
  AbstractState *local_28;
  
  this_00 = (vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
             *)(this + 0x10);
  lVar2 = *(long *)this_00;
  uVar4 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
  uVar3 = *(long *)(this + 0x18) - lVar2 >> 3;
  if (uVar4 < uVar3) {
    pAVar1 = *(AbstractState **)(lVar2 + uVar4 * 8);
    if (pAVar1 == (AbstractState *)AbstractState::empty_state_) {
      return (Node *)0x0;
    }
    if (pAVar1 != (AbstractState *)0x0) {
      uVar3 = AbstractState::Equals((AbstractState *)AbstractState::empty_state_,pAVar1);
      if ((uVar3 & 1) != 0) {
        return (Node *)0x0;
      }
      lVar2 = *(long *)(this + 0x10);
      uVar4 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
      uVar3 = *(long *)(this + 0x18) - lVar2 >> 3;
    }
  }
  if (uVar3 <= uVar4) {
    local_28 = (AbstractState *)0x0;
    std::__ndk1::
    vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
    ::__append(this_00,(uVar4 - uVar3) + 1,&local_28);
    lVar2 = *(long *)this_00;
  }
  *(undefined1 **)(lVar2 + uVar4 * 8) = AbstractState::empty_state_;
  return param_1;
}

