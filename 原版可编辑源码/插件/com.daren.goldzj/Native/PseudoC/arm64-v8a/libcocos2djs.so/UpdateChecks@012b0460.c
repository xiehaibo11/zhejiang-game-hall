
/* v8::internal::compiler::RedundancyElimination::UpdateChecks(v8::internal::compiler::Node*,
   v8::internal::compiler::RedundancyElimination::EffectPathChecks const*) */

Node * __thiscall
v8::internal::compiler::RedundancyElimination::UpdateChecks
          (RedundancyElimination *this,Node *param_1,EffectPathChecks *param_2)

{
  long lVar1;
  ulong uVar2;
  EffectPathChecks *pEVar3;
  long *plVar4;
  long *plVar5;
  vector<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*,v8::internal::ZoneAllocator<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*>>
  *this_00;
  ulong uVar6;
  EffectPathChecks *local_38;
  
  this_00 = (vector<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*,v8::internal::ZoneAllocator<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*>>
             *)(this + 0x10);
  lVar1 = *(long *)this_00;
  uVar6 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
  uVar2 = *(long *)(this + 0x18) - lVar1 >> 3;
  if (uVar6 < uVar2) {
    pEVar3 = *(EffectPathChecks **)(lVar1 + uVar6 * 8);
    if (pEVar3 == param_2) {
      return (Node *)0x0;
    }
  }
  else {
    pEVar3 = (EffectPathChecks *)0x0;
    if (param_2 == (EffectPathChecks *)0x0) {
      return (Node *)0x0;
    }
  }
  if ((pEVar3 != (EffectPathChecks *)0x0) && (*(long *)(param_2 + 8) == *(long *)(pEVar3 + 8))) {
    plVar4 = *(long **)pEVar3;
    plVar5 = *(long **)param_2;
    if (plVar5 != plVar4) {
      do {
        if (*plVar5 != *plVar4) goto LAB_012b0508;
        plVar4 = (long *)plVar4[1];
        plVar5 = (long *)plVar5[1];
      } while (plVar5 != plVar4);
    }
    return (Node *)0x0;
  }
LAB_012b0508:
  if (uVar2 <= uVar6) {
    local_38 = (EffectPathChecks *)0x0;
    std::__ndk1::
    vector<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*,v8::internal::ZoneAllocator<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*>>
    ::__append(this_00,(uVar6 - uVar2) + 1,&local_38);
    lVar1 = *(long *)this_00;
  }
  *(EffectPathChecks **)(lVar1 + uVar6 * 8) = param_2;
  return param_1;
}

