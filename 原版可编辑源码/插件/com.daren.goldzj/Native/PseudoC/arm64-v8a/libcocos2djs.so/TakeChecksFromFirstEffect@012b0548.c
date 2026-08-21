
/* v8::internal::compiler::RedundancyElimination::TakeChecksFromFirstEffect(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::RedundancyElimination::TakeChecksFromFirstEffect
          (RedundancyElimination *this,Node *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  vector<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*,v8::internal::ZoneAllocator<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*>>
  *this_00;
  long *plVar7;
  EffectPathChecks *local_38;
  
  lVar1 = NodeProperties::GetEffectInput(param_1,0);
  this_00 = (vector<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*,v8::internal::ZoneAllocator<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*>>
             *)(this + 0x10);
  lVar2 = *(long *)this_00;
  uVar4 = (ulong)*(uint *)(lVar1 + 0x14) & 0xffffff;
  uVar3 = *(long *)(this + 0x18) - lVar2 >> 3;
  if ((uVar4 < uVar3) && (plVar7 = *(long **)(lVar2 + uVar4 * 8), plVar7 != (long *)0x0)) {
    uVar4 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
    if (uVar4 < uVar3) {
      plVar5 = *(long **)(lVar2 + uVar4 * 8);
      if (plVar5 == plVar7) {
        return (Node *)0x0;
      }
    }
    else {
      plVar5 = (long *)0x0;
      if (plVar7 == (long *)0x0) {
        return (Node *)0x0;
      }
    }
    if ((plVar5 != (long *)0x0) && (plVar7[1] == plVar5[1])) {
      plVar5 = (long *)*plVar5;
      plVar6 = (long *)*plVar7;
      if (plVar6 == plVar5) {
        return (Node *)0x0;
      }
      while (*plVar6 == *plVar5) {
        plVar5 = (long *)plVar5[1];
        plVar6 = (long *)plVar6[1];
        if (plVar6 == plVar5) {
          return (Node *)0x0;
        }
      }
    }
    if (uVar3 <= uVar4) {
      local_38 = (EffectPathChecks *)0x0;
      std::__ndk1::
      vector<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*,v8::internal::ZoneAllocator<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*>>
      ::__append(this_00,(uVar4 - uVar3) + 1,&local_38);
      lVar2 = *(long *)this_00;
    }
    *(long **)(lVar2 + uVar4 * 8) = plVar7;
    return param_1;
  }
  return (Node *)0x0;
}

