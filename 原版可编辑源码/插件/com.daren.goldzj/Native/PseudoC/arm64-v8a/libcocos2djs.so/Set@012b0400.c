
/* v8::internal::compiler::RedundancyElimination::PathChecksForEffectNodes::Set(v8::internal::compiler::Node*,
   v8::internal::compiler::RedundancyElimination::EffectPathChecks const*) */

void __thiscall
v8::internal::compiler::RedundancyElimination::PathChecksForEffectNodes::Set
          (PathChecksForEffectNodes *this,Node *param_1,EffectPathChecks *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  EffectPathChecks *local_18;
  
  lVar1 = *(long *)this;
  uVar3 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
  uVar2 = *(long *)(this + 8) - lVar1 >> 3;
  if (uVar2 <= uVar3) {
    local_18 = (EffectPathChecks *)0x0;
    std::__ndk1::
    vector<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*,v8::internal::ZoneAllocator<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*>>
    ::__append((vector<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*,v8::internal::ZoneAllocator<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*>>
                *)this,(uVar3 - uVar2) + 1,&local_18);
    lVar1 = *(long *)this;
  }
  *(EffectPathChecks **)(lVar1 + uVar3 * 8) = param_2;
  return;
}

