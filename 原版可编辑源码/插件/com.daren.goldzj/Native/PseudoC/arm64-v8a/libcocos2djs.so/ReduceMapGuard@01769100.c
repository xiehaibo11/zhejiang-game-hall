
/* v8::internal::compiler::LoadElimination::ReduceMapGuard(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::LoadElimination::ReduceMapGuard(LoadElimination *this,Node *param_1)

{
  ulong *puVar1;
  short sVar2;
  ulong *puVar3;
  long *plVar4;
  Node *pNVar5;
  AbstractState *pAVar6;
  AbstractState *pAVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong *puVar11;
  long *plVar12;
  ulong *puVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  uint uVar17;
  long lVar18;
  vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
  *this_00;
  AbstractState *local_28;
  
  puVar3 = (ulong *)MapGuardMapsOf(*(Operator **)param_1);
  plVar4 = (long *)NodeProperties::GetValueInput(param_1,0);
  pNVar5 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  this_00 = (vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
             *)(this + 0x10);
  if (((ulong)(*(long *)(this + 0x18) - *(long *)this_00 >> 3) <=
       ((ulong)*(uint *)(pNVar5 + 0x14) & 0xffffff)) ||
     (pAVar7 = *(AbstractState **)
                (*(long *)this_00 + ((ulong)*(uint *)(pNVar5 + 0x14) & 0xffffff) * 8),
     pAVar7 == (AbstractState *)0x0)) {
    return (Node *)0x0;
  }
  plVar12 = plVar4;
  if (*(long *)(pAVar7 + 0x208) != 0) {
    while (((sVar2 = *(short *)(*plVar12 + 0x10), sVar2 == 0x28 || (sVar2 == 0xde)) ||
           (sVar2 == 0x3a))) {
      puVar13 = (ulong *)(plVar12 + 4);
      uVar17 = *(uint *)((long)plVar12 + 0x14) >> 0x18 & 0xf;
      puVar11 = puVar13;
      if (uVar17 == 0xf) {
        uVar17 = *(uint *)(*puVar13 + 8);
        puVar11 = (ulong *)(*puVar13 + 0x10);
      }
      if ((0 < (int)uVar17) && (*puVar11 == 0)) break;
      if ((~*(uint *)((long)plVar12 + 0x14) & 0xf000000) == 0) {
        puVar13 = (ulong *)(*puVar13 + 0x10);
      }
      plVar12 = (long *)*puVar13;
    }
    plVar9 = (long *)(*(long *)(pAVar7 + 0x208) + 8);
    plVar14 = (long *)*plVar9;
    plVar16 = plVar9;
    if (plVar14 != (long *)0x0) {
      do {
        if ((long *)plVar14[4] >= plVar12) {
          plVar16 = plVar14;
        }
        plVar14 = (long *)plVar14[(long *)plVar14[4] < plVar12];
      } while (plVar14 != (long *)0x0);
      if ((plVar16 != plVar9) && ((long *)plVar16[4] <= plVar12)) {
        uVar10 = plVar16[5];
        uVar15 = *puVar3;
        if (uVar15 == uVar10) {
          return pNVar5;
        }
        if (uVar15 != 1) {
          if (uVar10 == 1) {
            return pNVar5;
          }
          if ((uVar15 & 3) != 0) {
            if ((uVar10 & 3) == 0) {
              puVar13 = *(ulong **)(uVar15 - 2);
              puVar11 = *(ulong **)(uVar15 + 6);
              if ((puVar13 != puVar11) && (*puVar13 != uVar10)) {
                do {
                  if (puVar11 + -1 == puVar13) goto LAB_01769240;
                  puVar1 = puVar13 + 1;
                  puVar13 = puVar13 + 1;
                } while (*puVar1 != uVar10);
              }
              if (puVar13 != puVar11) {
                return pNVar5;
              }
            }
            else {
              lVar8 = *(long *)(uVar10 + 6) - *(long *)(uVar10 - 2);
              if (lVar8 == 0) {
                return pNVar5;
              }
              plVar12 = *(long **)(uVar15 + 6);
              plVar16 = *(long **)(uVar15 - 2);
              uVar15 = 0;
              while( true ) {
                plVar9 = plVar16;
                if (plVar16 != plVar12) {
                  lVar18 = *plVar16;
                  while (lVar18 != *(long *)(*(long *)(uVar10 - 2) + uVar15 * 8)) {
                    if (plVar12 + -1 == plVar9) goto LAB_01769240;
                    plVar14 = plVar9 + 1;
                    plVar9 = plVar9 + 1;
                    lVar18 = *plVar14;
                  }
                }
                if (plVar9 == plVar12) break;
                uVar15 = uVar15 + 1;
                if ((ulong)(lVar8 >> 3) <= uVar15) {
                  return pNVar5;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_01769240:
  pAVar7 = (AbstractState *)
           AbstractState::SetMaps(pAVar7,plVar4,*puVar3,*(undefined8 *)(this + 0x28));
  lVar8 = *(long *)(this + 0x10);
  uVar15 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
  uVar10 = *(long *)(this + 0x18) - lVar8 >> 3;
  if (uVar15 < uVar10) {
    pAVar6 = *(AbstractState **)(lVar8 + uVar15 * 8);
    if (pAVar6 == pAVar7) {
      return (Node *)0x0;
    }
  }
  else {
    pAVar6 = (AbstractState *)0x0;
    if (pAVar7 == (AbstractState *)0x0) {
      return (Node *)0x0;
    }
  }
  if (pAVar6 != (AbstractState *)0x0) {
    uVar10 = AbstractState::Equals(pAVar7,pAVar6);
    if ((uVar10 & 1) != 0) {
      return (Node *)0x0;
    }
    lVar8 = *(long *)(this + 0x10);
    uVar15 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
    uVar10 = *(long *)(this + 0x18) - lVar8 >> 3;
  }
  if (uVar10 <= uVar15) {
    local_28 = (AbstractState *)0x0;
    std::__ndk1::
    vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
    ::__append(this_00,(uVar15 - uVar10) + 1,&local_28);
    lVar8 = *(long *)this_00;
  }
  *(AbstractState **)(lVar8 + uVar15 * 8) = pAVar7;
  return param_1;
}

