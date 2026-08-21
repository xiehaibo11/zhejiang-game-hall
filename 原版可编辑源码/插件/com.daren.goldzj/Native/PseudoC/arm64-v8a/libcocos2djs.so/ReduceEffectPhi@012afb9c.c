
/* v8::internal::compiler::RedundancyElimination::ReduceEffectPhi(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::RedundancyElimination::ReduceEffectPhi
          (RedundancyElimination *this,Node *param_1)

{
  int iVar1;
  long *plVar2;
  Node *pNVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  int iVar10;
  vector<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*,v8::internal::ZoneAllocator<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*>>
  *this_00;
  Zone *this_01;
  EffectPathChecks *local_38;
  
  plVar2 = (long *)NodeProperties::GetControlInput(param_1,0);
  if (*(short *)(*plVar2 + 0x10) == 1) {
    pNVar3 = (Node *)TakeChecksFromFirstEffect(this,param_1);
    return pNVar3;
  }
  iVar1 = *(int *)(*(long *)param_1 + 0x18);
  if (0 < iVar1) {
    iVar10 = 0;
    do {
      lVar4 = NodeProperties::GetEffectInput(param_1,iVar10);
      uVar6 = (ulong)*(uint *)(lVar4 + 0x14) & 0xffffff;
      if ((ulong)(*(long *)(this + 0x18) - *(long *)(this + 0x10) >> 3) <= uVar6) {
        return (Node *)0x0;
      }
      if (*(long *)(*(long *)(this + 0x10) + uVar6 * 8) == 0) {
        return (Node *)0x0;
      }
      iVar10 = iVar10 + 1;
    } while (iVar1 != iVar10);
  }
  this_01 = *(Zone **)(this + 0x30);
  lVar4 = NodeProperties::GetEffectInput(param_1,0);
  this_00 = (vector<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*,v8::internal::ZoneAllocator<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*>>
             *)(this + 0x10);
  uVar6 = (ulong)*(uint *)(lVar4 + 0x14) & 0xffffff;
  if (uVar6 < (ulong)(*(long *)(this + 0x18) - *(long *)this_00 >> 3)) {
    plVar2 = *(long **)(*(long *)this_00 + uVar6 * 8);
  }
  else {
    plVar2 = (long *)0x0;
  }
  plVar5 = *(long **)(this_01 + 0x10);
  if ((ulong)(*(long *)(this_01 + 0x18) - (long)plVar5) < 0x10) {
    plVar5 = (long *)Zone::NewExpand(this_01,0x10);
  }
  else {
    *(long **)(this_01 + 0x10) = plVar5 + 2;
  }
  lVar4 = *plVar2;
  plVar5[1] = plVar2[1];
  *plVar5 = lVar4;
  if (1 < iVar1) {
    iVar10 = 1;
    do {
      lVar4 = NodeProperties::GetEffectInput(param_1,iVar10);
      uVar8 = plVar5[1];
      plVar2 = *(long **)(*(long *)this_00 + ((ulong)*(uint *)(lVar4 + 0x14) & 0xffffff) * 8);
      lVar4 = *plVar2;
      uVar6 = plVar2[1];
      if (uVar8 < uVar6) {
        do {
          lVar4 = *(long *)(lVar4 + 8);
          uVar6 = uVar6 - 1;
        } while (uVar8 < uVar6);
        lVar7 = *plVar5;
        if (lVar7 != lVar4) {
LAB_012afd24:
          do {
            uVar8 = uVar8 - 1;
            plVar5[1] = uVar8;
            lVar7 = *(long *)(lVar7 + 8);
            *plVar5 = lVar7;
            lVar4 = *(long *)(lVar4 + 8);
          } while (lVar4 != lVar7);
        }
      }
      else {
        lVar7 = *plVar5;
        while (uVar6 < uVar8) {
          lVar7 = *(long *)(lVar7 + 8);
          uVar8 = uVar8 - 1;
          *plVar5 = lVar7;
          plVar5[1] = uVar8;
        }
        if (lVar7 != lVar4) goto LAB_012afd24;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != iVar1);
  }
  lVar4 = *(long *)(this + 0x10);
  uVar8 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
  uVar6 = *(long *)(this + 0x18) - lVar4 >> 3;
  if (uVar8 < uVar6) {
    plVar2 = *(long **)(lVar4 + uVar8 * 8);
    if (plVar2 == plVar5) {
      return (Node *)0x0;
    }
  }
  else {
    plVar2 = (long *)0x0;
    if (plVar5 == (long *)0x0) {
      return (Node *)0x0;
    }
  }
  if ((plVar2 != (long *)0x0) && (plVar5[1] == plVar2[1])) {
    plVar2 = (long *)*plVar2;
    plVar9 = (long *)*plVar5;
    if (plVar9 == plVar2) {
      return (Node *)0x0;
    }
    while (*plVar9 == *plVar2) {
      plVar2 = (long *)plVar2[1];
      plVar9 = (long *)plVar9[1];
      if (plVar9 == plVar2) {
        return (Node *)0x0;
      }
    }
  }
  if (uVar6 <= uVar8) {
    local_38 = (EffectPathChecks *)0x0;
    std::__ndk1::
    vector<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*,v8::internal::ZoneAllocator<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*>>
    ::__append(this_00,(uVar8 - uVar6) + 1,&local_38);
    lVar4 = *(long *)this_00;
  }
  *(long **)(lVar4 + uVar8 * 8) = plVar5;
  return param_1;
}

