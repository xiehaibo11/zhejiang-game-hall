
/* v8::internal::compiler::LoadElimination::UpdateState(v8::internal::compiler::Node*,
   v8::internal::compiler::LoadElimination::AbstractState const*) */

Node * __thiscall
v8::internal::compiler::LoadElimination::UpdateState
          (LoadElimination *this,Node *param_1,AbstractState *param_2)

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
    if (pAVar1 == param_2) {
      return (Node *)0x0;
    }
  }
  else {
    pAVar1 = (AbstractState *)0x0;
    if (param_2 == (AbstractState *)0x0) {
      return (Node *)0x0;
    }
  }
  if (pAVar1 != (AbstractState *)0x0) {
    uVar3 = AbstractState::Equals(param_2,pAVar1);
    if ((uVar3 & 1) != 0) {
      return (Node *)0x0;
    }
    lVar2 = *(long *)(this + 0x10);
    uVar4 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
    uVar3 = *(long *)(this + 0x18) - lVar2 >> 3;
  }
  if (uVar3 <= uVar4) {
    local_28 = (AbstractState *)0x0;
    std::__ndk1::
    vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
    ::__append(this_00,(uVar4 - uVar3) + 1,&local_28);
    lVar2 = *(long *)this_00;
  }
  *(AbstractState **)(lVar2 + uVar4 * 8) = param_2;
  return param_1;
}

