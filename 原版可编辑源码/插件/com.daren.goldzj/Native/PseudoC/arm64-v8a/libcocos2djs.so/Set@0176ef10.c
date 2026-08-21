
/* v8::internal::compiler::LoadElimination::AbstractStateForEffectNodes::Set(v8::internal::compiler::Node*,
   v8::internal::compiler::LoadElimination::AbstractState const*) */

void __thiscall
v8::internal::compiler::LoadElimination::AbstractStateForEffectNodes::Set
          (AbstractStateForEffectNodes *this,Node *param_1,AbstractState *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  AbstractState *local_18;
  
  lVar1 = *(long *)this;
  uVar3 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
  uVar2 = *(long *)(this + 8) - lVar1 >> 3;
  if (uVar2 <= uVar3) {
    local_18 = (AbstractState *)0x0;
    std::__ndk1::
    vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
    ::__append((vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
                *)this,(uVar3 - uVar2) + 1,&local_18);
    lVar1 = *(long *)this;
  }
  *(AbstractState **)(lVar1 + uVar3 * 8) = param_2;
  return;
}

