
/* v8::internal::compiler::RedundancyElimination::ReduceSpeculativeNumberComparison(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::RedundancyElimination::ReduceSpeculativeNumberComparison
          (RedundancyElimination *this,Node *param_1)

{
  EffectPathChecks *pEVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  vector<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*,v8::internal::ZoneAllocator<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*>>
  *this_00;
  Node *pNVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  ulong local_68;
  ulong local_60;
  EffectPathChecks *local_58;
  
  cVar2 = NumberOperationHintOf(*(Operator **)param_1);
  lVar4 = NodeProperties::GetValueInput(param_1,0);
  uVar14 = *(ulong *)(lVar4 + 8);
  local_60 = uVar14;
  lVar5 = NodeProperties::GetValueInput(param_1,1);
  local_68 = *(ulong *)(lVar5 + 8);
  lVar6 = NodeProperties::GetEffectInput(param_1,0);
  this_00 = (vector<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*,v8::internal::ZoneAllocator<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*>>
             *)(this + 0x10);
  uVar8 = (ulong)*(uint *)(lVar6 + 0x14) & 0xffffff;
  if (((ulong)(*(long *)(this + 0x18) - *(long *)this_00 >> 3) <= uVar8) ||
     (plVar13 = *(long **)(*(long *)this_00 + uVar8 * 8), plVar13 == (long *)0x0)) {
    return (Node *)0x0;
  }
  if (cVar2 == '\0') {
    uVar3 = BitsetType::UnsignedSmall();
    if ((uVar14 != (uVar3 | 1)) && (uVar8 = Type::SlowIs((Type *)&local_60), (uVar8 & 1) == 0)) {
      pEVar1 = local_58;
      for (plVar12 = (long *)*plVar13; local_58 = pEVar1, plVar12 != (long *)0x0;
          plVar12 = (long *)plVar12[1]) {
        plVar10 = (long *)*plVar12;
        if (*(short *)(*plVar10 + 0x10) == 0xd4) {
          plVar9 = plVar10 + 4;
          if ((~*(uint *)((long)plVar10 + 0x14) & 0xf000000) == 0) {
            plVar9 = (long *)(*plVar9 + 0x10);
          }
          if ((*plVar9 == lVar4) &&
             ((((*(EffectPathChecks **)(lVar4 + 8) == (EffectPathChecks *)0x0 ||
                (local_58 = (EffectPathChecks *)plVar10[1], local_58 == (EffectPathChecks *)0x0)) ||
               (pEVar1 = local_58, local_58 == *(EffectPathChecks **)(lVar4 + 8))) ||
              (uVar8 = Type::SlowIs((Type *)&local_58), pEVar1 = local_58, (uVar8 & 1) != 0)))) {
            local_58 = pEVar1;
            pNVar11 = (Node *)*plVar12;
            if (((pNVar11 != (Node *)0x0) && (local_60 != *(ulong *)(pNVar11 + 8))) &&
               (uVar8 = Type::SlowIs((Type *)&local_60), (uVar8 & 1) == 0)) {
              iVar7 = 0;
              goto LAB_012af9a0;
            }
            break;
          }
        }
        pEVar1 = local_58;
      }
    }
    uVar3 = BitsetType::UnsignedSmall();
    if ((local_68 != (uVar3 | 1)) && (uVar8 = Type::SlowIs((Type *)&local_68), (uVar8 & 1) == 0)) {
      pEVar1 = local_58;
      for (plVar12 = (long *)*plVar13; plVar12 != (long *)0x0; plVar12 = (long *)plVar12[1]) {
        plVar10 = (long *)*plVar12;
        local_58 = pEVar1;
        if (*(short *)(*plVar10 + 0x10) == 0xd4) {
          plVar9 = plVar10 + 4;
          if ((~*(uint *)((long)plVar10 + 0x14) & 0xf000000) == 0) {
            plVar9 = (long *)(*plVar9 + 0x10);
          }
          if ((*plVar9 == lVar5) &&
             ((((*(EffectPathChecks **)(lVar5 + 8) == (EffectPathChecks *)0x0 ||
                (local_58 = (EffectPathChecks *)plVar10[1], local_58 == (EffectPathChecks *)0x0)) ||
               (pEVar1 = local_58, local_58 == *(EffectPathChecks **)(lVar5 + 8))) ||
              (uVar8 = Type::SlowIs((Type *)&local_58), pEVar1 = local_58, (uVar8 & 1) != 0)))) {
            local_58 = pEVar1;
            pNVar11 = (Node *)*plVar12;
            if (((pNVar11 != (Node *)0x0) && (local_68 != *(ulong *)(pNVar11 + 8))) &&
               (uVar8 = Type::SlowIs((Type *)&local_68), (uVar8 & 1) == 0)) {
              iVar7 = 1;
LAB_012af9a0:
              NodeProperties::ReplaceValueInput(param_1,pNVar11,iVar7);
              pNVar11 = (Node *)ReduceSpeculativeNumberComparison(this,param_1);
              if (pNVar11 != (Node *)0x0) {
                return pNVar11;
              }
              return param_1;
            }
            break;
          }
        }
        pEVar1 = local_58;
      }
    }
  }
  lVar4 = *(long *)(this + 0x10);
  uVar14 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
  uVar8 = *(long *)(this + 0x18) - lVar4 >> 3;
  if (uVar14 < uVar8) {
    plVar12 = *(long **)(lVar4 + uVar14 * 8);
    if (plVar12 == plVar13) {
      return (Node *)0x0;
    }
  }
  else {
    plVar12 = (long *)0x0;
    if (plVar13 == (long *)0x0) {
      return (Node *)0x0;
    }
  }
  if ((plVar12 != (long *)0x0) && (plVar13[1] == plVar12[1])) {
    plVar12 = (long *)*plVar12;
    plVar10 = (long *)*plVar13;
    if (plVar10 == plVar12) {
      return (Node *)0x0;
    }
    while (*plVar10 == *plVar12) {
      plVar12 = (long *)plVar12[1];
      plVar10 = (long *)plVar10[1];
      if (plVar10 == plVar12) {
        return (Node *)0x0;
      }
    }
  }
  if (uVar8 <= uVar14) {
    local_58 = (EffectPathChecks *)0x0;
    std::__ndk1::
    vector<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*,v8::internal::ZoneAllocator<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*>>
    ::__append(this_00,(uVar14 - uVar8) + 1,&local_58);
    lVar4 = *(long *)this_00;
  }
  *(long **)(lVar4 + uVar14 * 8) = plVar13;
  return param_1;
}

