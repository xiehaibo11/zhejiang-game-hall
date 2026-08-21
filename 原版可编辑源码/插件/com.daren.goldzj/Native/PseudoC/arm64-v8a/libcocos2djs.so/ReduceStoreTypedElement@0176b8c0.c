
/* v8::internal::compiler::LoadElimination::ReduceStoreTypedElement(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::LoadElimination::ReduceStoreTypedElement
          (LoadElimination *this,Node *param_1)

{
  long lVar1;
  AbstractState *pAVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
  *this_00;
  AbstractState *this_01;
  AbstractState *local_28;
  
  lVar1 = NodeProperties::GetEffectInput(param_1,0);
  this_00 = (vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
             *)(this + 0x10);
  lVar3 = *(long *)this_00;
  uVar5 = (ulong)*(uint *)(lVar1 + 0x14) & 0xffffff;
  uVar4 = *(long *)(this + 0x18) - lVar3 >> 3;
  if ((uVar5 < uVar4) &&
     (this_01 = *(AbstractState **)(lVar3 + uVar5 * 8), this_01 != (AbstractState *)0x0)) {
    uVar5 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
    if (uVar5 < uVar4) {
      pAVar2 = *(AbstractState **)(lVar3 + uVar5 * 8);
      if (pAVar2 == this_01) {
        return (Node *)0x0;
      }
    }
    else {
      pAVar2 = (AbstractState *)0x0;
      if (this_01 == (AbstractState *)0x0) {
        return (Node *)0x0;
      }
    }
    if (pAVar2 != (AbstractState *)0x0) {
      uVar4 = AbstractState::Equals(this_01,pAVar2);
      if ((uVar4 & 1) != 0) {
        return (Node *)0x0;
      }
      lVar3 = *(long *)(this + 0x10);
      uVar5 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
      uVar4 = *(long *)(this + 0x18) - lVar3 >> 3;
    }
    if (uVar4 <= uVar5) {
      local_28 = (AbstractState *)0x0;
      std::__ndk1::
      vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
      ::__append(this_00,(uVar5 - uVar4) + 1,&local_28);
      lVar3 = *(long *)this_00;
    }
    *(AbstractState **)(lVar3 + uVar5 * 8) = this_01;
    return param_1;
  }
  return (Node *)0x0;
}

