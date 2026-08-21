
/* v8::internal::compiler::LoadElimination::ReduceCompareMaps(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::LoadElimination::ReduceCompareMaps(LoadElimination *this,Node *param_1)

{
  ulong *puVar1;
  short sVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  long lVar6;
  Node *pNVar7;
  AbstractState *pAVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong *puVar13;
  long *plVar14;
  uint uVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
  *this_00;
  AbstractState *this_01;
  AbstractState *local_38;
  
  puVar4 = (ulong *)CompareMapsParametersOf(*(Operator **)param_1);
  plVar5 = (long *)NodeProperties::GetValueInput(param_1,0);
  lVar6 = NodeProperties::GetEffectInput(param_1,0);
  this_00 = (vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
             *)(this + 0x10);
  lVar9 = *(long *)this_00;
  uVar11 = (ulong)*(uint *)(lVar6 + 0x14) & 0xffffff;
  uVar10 = *(long *)(this + 0x18) - lVar9 >> 3;
  if ((uVar10 <= uVar11) ||
     (this_01 = *(AbstractState **)(lVar9 + uVar11 * 8), this_01 == (AbstractState *)0x0)) {
    return (Node *)0x0;
  }
  if (*(long *)(this_01 + 0x208) != 0) {
    while (((sVar2 = *(short *)(*plVar5 + 0x10), sVar2 == 0x28 || (sVar2 == 0xde)) ||
           (sVar2 == 0x3a))) {
      plVar17 = plVar5 + 4;
      uVar15 = *(uint *)((long)plVar5 + 0x14) >> 0x18 & 0xf;
      plVar12 = plVar17;
      if (uVar15 == 0xf) {
        uVar15 = *(uint *)(*plVar17 + 8);
        plVar12 = (long *)(*plVar17 + 0x10);
      }
      if ((0 < (int)uVar15) && (*plVar12 == 0)) break;
      if ((~*(uint *)((long)plVar5 + 0x14) & 0xf000000) == 0) {
        plVar17 = (long *)(*plVar17 + 0x10);
      }
      plVar5 = (long *)*plVar17;
    }
    plVar12 = (long *)(*(long *)(this_01 + 0x208) + 8);
    plVar14 = (long *)*plVar12;
    plVar17 = plVar12;
    if (plVar14 != (long *)0x0) {
      do {
        if ((long *)plVar14[4] >= plVar5) {
          plVar17 = plVar14;
        }
        plVar14 = (long *)plVar14[(long *)plVar14[4] < plVar5];
      } while (plVar14 != (long *)0x0);
      if ((plVar17 != plVar12) && ((long *)plVar17[4] <= plVar5)) {
        uVar11 = plVar17[5];
        uVar16 = *puVar4;
        if (uVar16 != uVar11) {
          if (uVar16 == 1) goto LAB_01769800;
          if (uVar11 != 1) {
            if ((uVar16 & 3) == 0) goto LAB_01769800;
            if ((uVar11 & 3) == 0) {
              puVar4 = *(ulong **)(uVar16 - 2);
              puVar13 = *(ulong **)(uVar16 + 6);
              if ((puVar4 != puVar13) && (*puVar4 != uVar11)) {
                do {
                  if (puVar13 + -1 == puVar4) goto LAB_01769800;
                  puVar1 = puVar4 + 1;
                  puVar4 = puVar4 + 1;
                } while (*puVar1 != uVar11);
              }
              if (puVar4 == puVar13) goto LAB_01769800;
            }
            else {
              lVar3 = *(long *)(uVar11 + 6) - *(long *)(uVar11 - 2);
              if (lVar3 != 0) {
                plVar5 = *(long **)(uVar16 + 6);
                plVar17 = *(long **)(uVar16 - 2);
                uVar16 = 0;
                do {
                  plVar12 = plVar17;
                  if (plVar17 != plVar5) {
                    lVar18 = *plVar17;
                    while (lVar18 != *(long *)(*(long *)(uVar11 - 2) + uVar16 * 8)) {
                      if (plVar5 + -1 == plVar12) goto LAB_01769800;
                      plVar14 = plVar12 + 1;
                      plVar12 = plVar12 + 1;
                      lVar18 = *plVar14;
                    }
                  }
                  if (plVar12 == plVar5) goto LAB_01769800;
                  uVar16 = uVar16 + 1;
                } while (uVar16 < (ulong)(lVar3 >> 3));
              }
            }
          }
        }
        pNVar7 = (Node *)JSGraph::TrueConstant(*(JSGraph **)(this + 0x30));
        (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,pNVar7,lVar6,0);
        return pNVar7;
      }
    }
  }
LAB_01769800:
  uVar11 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
  if (uVar11 < uVar10) {
    pAVar8 = *(AbstractState **)(lVar9 + uVar11 * 8);
    if (pAVar8 == this_01) {
      return (Node *)0x0;
    }
  }
  else {
    pAVar8 = (AbstractState *)0x0;
    if (this_01 == (AbstractState *)0x0) {
      return (Node *)0x0;
    }
  }
  if (pAVar8 != (AbstractState *)0x0) {
    uVar10 = AbstractState::Equals(this_01,pAVar8);
    if ((uVar10 & 1) != 0) {
      return (Node *)0x0;
    }
    lVar9 = *(long *)(this + 0x10);
    uVar11 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
    uVar10 = *(long *)(this + 0x18) - lVar9 >> 3;
  }
  if (uVar10 <= uVar11) {
    local_38 = (AbstractState *)0x0;
    std::__ndk1::
    vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
    ::__append(this_00,(uVar11 - uVar10) + 1,&local_38);
    lVar9 = *(long *)this_00;
  }
  *(AbstractState **)(lVar9 + uVar11 * 8) = this_01;
  return param_1;
}

