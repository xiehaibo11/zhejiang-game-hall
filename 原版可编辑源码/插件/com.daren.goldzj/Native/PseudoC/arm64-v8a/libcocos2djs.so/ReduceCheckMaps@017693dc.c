
/* v8::internal::compiler::LoadElimination::ReduceCheckMaps(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::LoadElimination::ReduceCheckMaps(LoadElimination *this,Node *param_1)

{
  ulong *puVar1;
  short sVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  Node *pNVar6;
  AbstractState *pAVar7;
  AbstractState *pAVar8;
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
  
  lVar4 = CheckMapsParametersOf(*(Operator **)param_1);
  plVar5 = (long *)NodeProperties::GetValueInput(param_1,0);
  pNVar6 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  this_00 = (vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
             *)(this + 0x10);
  if (((ulong)(*(long *)(this + 0x18) - *(long *)this_00 >> 3) <=
       ((ulong)*(uint *)(pNVar6 + 0x14) & 0xffffff)) ||
     (pAVar8 = *(AbstractState **)
                (*(long *)this_00 + ((ulong)*(uint *)(pNVar6 + 0x14) & 0xffffff) * 8),
     pAVar8 == (AbstractState *)0x0)) {
    return (Node *)0x0;
  }
  plVar12 = plVar5;
  if (*(long *)(pAVar8 + 0x208) != 0) {
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
    plVar9 = (long *)(*(long *)(pAVar8 + 0x208) + 8);
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
        uVar15 = *(ulong *)(lVar4 + 8);
        if (uVar15 == uVar10) {
          return pNVar6;
        }
        if (uVar15 != 1) {
          if (uVar10 == 1) {
            return pNVar6;
          }
          if ((uVar15 & 3) != 0) {
            if ((uVar10 & 3) == 0) {
              puVar13 = *(ulong **)(uVar15 - 2);
              puVar11 = *(ulong **)(uVar15 + 6);
              if ((puVar13 != puVar11) && (*puVar13 != uVar10)) {
                do {
                  if (puVar11 + -1 == puVar13) goto LAB_0176951c;
                  puVar1 = puVar13 + 1;
                  puVar13 = puVar13 + 1;
                } while (*puVar1 != uVar10);
              }
              if (puVar13 != puVar11) {
                return pNVar6;
              }
            }
            else {
              lVar3 = *(long *)(uVar10 + 6) - *(long *)(uVar10 - 2);
              if (lVar3 == 0) {
                return pNVar6;
              }
              plVar12 = *(long **)(uVar15 + 6);
              plVar16 = *(long **)(uVar15 - 2);
              uVar15 = 0;
              while( true ) {
                plVar9 = plVar16;
                if (plVar16 != plVar12) {
                  lVar18 = *plVar16;
                  while (lVar18 != *(long *)(*(long *)(uVar10 - 2) + uVar15 * 8)) {
                    if (plVar12 + -1 == plVar9) goto LAB_0176951c;
                    plVar14 = plVar9 + 1;
                    plVar9 = plVar9 + 1;
                    lVar18 = *plVar14;
                  }
                }
                if (plVar9 == plVar12) break;
                uVar15 = uVar15 + 1;
                if ((ulong)(lVar3 >> 3) <= uVar15) {
                  return pNVar6;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0176951c:
  pAVar8 = (AbstractState *)
           AbstractState::SetMaps
                     (pAVar8,plVar5,*(undefined8 *)(lVar4 + 8),*(undefined8 *)(this + 0x28));
  lVar4 = *(long *)(this + 0x10);
  uVar15 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
  uVar10 = *(long *)(this + 0x18) - lVar4 >> 3;
  if (uVar15 < uVar10) {
    pAVar7 = *(AbstractState **)(lVar4 + uVar15 * 8);
    if (pAVar7 == pAVar8) {
      return (Node *)0x0;
    }
  }
  else {
    pAVar7 = (AbstractState *)0x0;
    if (pAVar8 == (AbstractState *)0x0) {
      return (Node *)0x0;
    }
  }
  if (pAVar7 != (AbstractState *)0x0) {
    uVar10 = AbstractState::Equals(pAVar8,pAVar7);
    if ((uVar10 & 1) != 0) {
      return (Node *)0x0;
    }
    lVar4 = *(long *)(this + 0x10);
    uVar15 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
    uVar10 = *(long *)(this + 0x18) - lVar4 >> 3;
  }
  if (uVar10 <= uVar15) {
    local_28 = (AbstractState *)0x0;
    std::__ndk1::
    vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
    ::__append(this_00,(uVar15 - uVar10) + 1,&local_28);
    lVar4 = *(long *)this_00;
  }
  *(AbstractState **)(lVar4 + uVar15 * 8) = pAVar8;
  return param_1;
}

