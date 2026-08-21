
/* v8::internal::compiler::RedundancyElimination::ReduceSpeculativeNumberOperation(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::RedundancyElimination::ReduceSpeculativeNumberOperation
          (RedundancyElimination *this,Node *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  vector<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*,v8::internal::ZoneAllocator<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*>>
  *this_00;
  ulong uVar6;
  long *plVar7;
  Node *pNVar8;
  long *plVar9;
  EffectPathChecks *local_48;
  
  lVar1 = NodeProperties::GetValueInput(param_1,0);
  lVar2 = NodeProperties::GetEffectInput(param_1,0);
  this_00 = (vector<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*,v8::internal::ZoneAllocator<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*>>
             *)(this + 0x10);
  uVar3 = (ulong)*(uint *)(lVar2 + 0x14) & 0xffffff;
  if (((ulong)(*(long *)(this + 0x18) - *(long *)this_00 >> 3) <= uVar3) ||
     (plVar9 = *(long **)(*(long *)this_00 + uVar3 * 8), plVar9 == (long *)0x0)) {
    return (Node *)0x0;
  }
  plVar7 = (long *)*plVar9;
  do {
    if (plVar7 == (long *)0x0) {
LAB_012afad0:
      lVar1 = *(long *)(this + 0x10);
      uVar6 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
      uVar3 = *(long *)(this + 0x18) - lVar1 >> 3;
      if (uVar6 < uVar3) {
        plVar7 = *(long **)(lVar1 + uVar6 * 8);
        if (plVar7 == plVar9) {
          return (Node *)0x0;
        }
      }
      else {
        plVar7 = (long *)0x0;
        if (plVar9 == (long *)0x0) {
          return (Node *)0x0;
        }
      }
      if ((plVar7 != (long *)0x0) && (plVar9[1] == plVar7[1])) {
        plVar7 = (long *)*plVar7;
        plVar5 = (long *)*plVar9;
        if (plVar5 == plVar7) {
          return (Node *)0x0;
        }
        while (*plVar5 == *plVar7) {
          plVar7 = (long *)plVar7[1];
          plVar5 = (long *)plVar5[1];
          if (plVar5 == plVar7) {
            return (Node *)0x0;
          }
        }
      }
      if (uVar3 <= uVar6) {
        local_48 = (EffectPathChecks *)0x0;
        std::__ndk1::
        vector<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*,v8::internal::ZoneAllocator<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*>>
        ::__append(this_00,(uVar6 - uVar3) + 1,&local_48);
        lVar1 = *(long *)this_00;
      }
      *(long **)(lVar1 + uVar6 * 8) = plVar9;
      return param_1;
    }
    plVar5 = (long *)*plVar7;
    if (*(short *)(*plVar5 + 0x10) == 0xd4) {
      plVar4 = plVar5 + 4;
      if ((~*(uint *)((long)plVar5 + 0x14) & 0xf000000) == 0) {
        plVar4 = (long *)(*plVar4 + 0x10);
      }
      if ((*plVar4 == lVar1) &&
         ((((*(EffectPathChecks **)(lVar1 + 8) == (EffectPathChecks *)0x0 ||
            (local_48 = (EffectPathChecks *)plVar5[1], local_48 == (EffectPathChecks *)0x0)) ||
           (local_48 == *(EffectPathChecks **)(lVar1 + 8))) ||
          (uVar3 = Type::SlowIs((Type *)&local_48), (uVar3 & 1) != 0)))) {
        pNVar8 = (Node *)*plVar7;
        if (((pNVar8 != (Node *)0x0) &&
            (local_48 = *(EffectPathChecks **)(lVar1 + 8),
            local_48 != *(EffectPathChecks **)(pNVar8 + 8))) &&
           (uVar3 = Type::SlowIs((Type *)&local_48), (uVar3 & 1) == 0)) {
          NodeProperties::ReplaceValueInput(param_1,pNVar8,0);
        }
        goto LAB_012afad0;
      }
    }
    plVar7 = (long *)plVar7[1];
  } while( true );
}

