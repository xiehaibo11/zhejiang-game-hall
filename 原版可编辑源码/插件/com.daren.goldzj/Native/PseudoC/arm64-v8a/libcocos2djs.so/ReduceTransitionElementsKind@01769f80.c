
/* v8::internal::compiler::LoadElimination::ReduceTransitionElementsKind(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::LoadElimination::ReduceTransitionElementsKind
          (LoadElimination *this,Node *param_1)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  short sVar4;
  char *pcVar5;
  long *plVar6;
  Node *pNVar7;
  long lVar8;
  AbstractMaps *this_00;
  AbstractState *pAVar9;
  AbstractState *pAVar10;
  AbstractState *pAVar11;
  AbstractState *pAVar12;
  AbstractMaps *pAVar13;
  ulong uVar14;
  ulong *puVar15;
  AbstractMaps *pAVar16;
  ulong *puVar17;
  uint uVar18;
  AbstractMaps *pAVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  long *plVar23;
  vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
  *this_01;
  AbstractState *this_02;
  ulong uVar24;
  undefined8 uVar25;
  Zone *pZVar26;
  AbstractState *local_80;
  AbstractState *local_78;
  long *plStack_70;
  AbstractState *local_68;
  
  pcVar5 = (char *)ElementsTransitionOf(*(Operator **)param_1);
  cVar3 = *pcVar5;
  pAVar10 = *(AbstractState **)(pcVar5 + 8);
  pAVar9 = *(AbstractState **)(pcVar5 + 0x10);
  plVar6 = (long *)NodeProperties::GetValueInput(param_1,0);
  pNVar7 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  this_01 = (vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
             *)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - *(long *)this_01 >> 3) <=
      ((ulong)*(uint *)(pNVar7 + 0x14) & 0xffffff)) {
    return (Node *)0x0;
  }
  this_02 = *(AbstractState **)(*(long *)this_01 + ((ulong)*(uint *)(pNVar7 + 0x14) & 0xffffff) * 8)
  ;
  if (this_02 == (AbstractState *)0x0) {
    return (Node *)0x0;
  }
  if (cVar3 == '\x01') {
    local_78 = this_02;
    if (*(AbstractField **)(this_02 + 0x10) == (AbstractField *)0x0) {
      pAVar12 = (AbstractState *)0x0;
      plStack_70 = plVar6;
      local_68 = pAVar10;
    }
    else {
      pZVar26 = *(Zone **)(this + 0x28);
      plStack_70 = plVar6;
      local_68 = pAVar10;
      lVar8 = AbstractField::Kill(*(AbstractField **)(this_02 + 0x10),&local_78,0,pZVar26);
      if (*(long *)(this_02 + 0x10) == lVar8) {
        pAVar12 = (AbstractState *)0x0;
      }
      else {
        pAVar12 = *(AbstractState **)(pZVar26 + 0x10);
        if ((ulong)(*(long *)(pZVar26 + 0x18) - (long)pAVar12) < 0x210) {
          pAVar12 = (AbstractState *)Zone::NewExpand(pZVar26,0x210);
        }
        else {
          *(AbstractState **)(pZVar26 + 0x10) = pAVar12 + 0x210;
        }
        memcpy(pAVar12,this_02,0x210);
        *(long *)(pAVar12 + 0x10) = lVar8;
      }
    }
    if (pAVar12 != (AbstractState *)0x0) {
      this_02 = pAVar12;
    }
  }
  local_80 = (AbstractState *)0x1;
  this_00 = *(AbstractMaps **)(this_02 + 0x208);
  plVar20 = plVar6;
  if (this_00 != (AbstractMaps *)0x0) {
    while (((sVar4 = *(short *)(*plVar20 + 0x10), sVar4 == 0x28 || (sVar4 == 0xde)) ||
           (sVar4 == 0x3a))) {
      puVar17 = (ulong *)(plVar20 + 4);
      uVar18 = *(uint *)((long)plVar20 + 0x14) >> 0x18 & 0xf;
      puVar15 = puVar17;
      if (uVar18 == 0xf) {
        uVar18 = *(uint *)(*puVar17 + 8);
        puVar15 = (ulong *)(*puVar17 + 0x10);
      }
      if ((0 < (int)uVar18) && (*puVar15 == 0)) break;
      if ((~*(uint *)((long)plVar20 + 0x14) & 0xf000000) == 0) {
        puVar17 = (ulong *)(*puVar17 + 0x10);
      }
      plVar20 = (long *)*puVar17;
    }
    pAVar16 = this_00 + 8;
    pAVar19 = *(AbstractMaps **)pAVar16;
    pAVar13 = pAVar16;
    if (pAVar19 != (AbstractMaps *)0x0) {
      do {
        if (*(long **)(pAVar19 + 0x20) >= plVar20) {
          pAVar13 = pAVar19;
        }
        pAVar19 = *(AbstractMaps **)(pAVar19 + (ulong)(*(long **)(pAVar19 + 0x20) < plVar20) * 8);
      } while (pAVar19 != (AbstractMaps *)0x0);
      if ((pAVar13 != pAVar16) && (*(long **)(pAVar13 + 0x20) <= plVar20)) {
        pAVar12 = *(AbstractState **)(pAVar13 + 0x28);
        if (pAVar9 == pAVar12) {
          return pNVar7;
        }
        if (pAVar9 != (AbstractState *)0x1) {
          if (pAVar12 == (AbstractState *)0x1) {
            return pNVar7;
          }
          if (((ulong)pAVar9 & 3) != 0) {
            if (((ulong)pAVar12 & 3) == 0) {
              puVar17 = *(ulong **)(pAVar9 + -2);
              puVar15 = *(ulong **)(pAVar9 + 6);
              if ((puVar17 != puVar15) && ((AbstractState *)*puVar17 != pAVar12)) {
                do {
                  if (puVar15 + -1 == puVar17) goto LAB_0176a274;
                  puVar2 = puVar17 + 1;
                  puVar17 = puVar17 + 1;
                } while ((AbstractState *)*puVar2 != pAVar12);
              }
              if (puVar17 != puVar15) {
                return pNVar7;
              }
            }
            else {
              lVar8 = *(long *)(pAVar12 + 6) - *(long *)(pAVar12 + -2);
              if (lVar8 == 0) {
                return pNVar7;
              }
              plVar20 = *(long **)(pAVar9 + 6);
              plVar21 = *(long **)(pAVar9 + -2);
              uVar14 = 0;
              while( true ) {
                plVar23 = plVar21;
                if (plVar21 != plVar20) {
                  lVar22 = *plVar21;
                  while (lVar22 != *(long *)(*(long *)(pAVar12 + -2) + uVar14 * 8)) {
                    if (plVar20 + -1 == plVar23) goto LAB_0176a274;
                    plVar1 = plVar23 + 1;
                    plVar23 = plVar23 + 1;
                    lVar22 = *plVar1;
                  }
                }
                if (plVar23 == plVar20) break;
                uVar14 = uVar14 + 1;
                if ((ulong)(lVar8 >> 3) <= uVar14) {
                  return pNVar7;
                }
              }
            }
          }
        }
LAB_0176a274:
        local_80 = pAVar12;
        if (pAVar12 != pAVar10) {
          if (pAVar12 == (AbstractState *)0x1) goto LAB_0176a1ac;
          if (pAVar10 != (AbstractState *)0x1) {
            if (((ulong)pAVar12 & 3) == 0) goto LAB_0176a1ac;
            if (((ulong)pAVar10 & 3) == 0) {
              puVar17 = *(ulong **)(pAVar12 + -2);
              puVar15 = *(ulong **)(pAVar12 + 6);
              if ((puVar17 != puVar15) && ((AbstractState *)*puVar17 != pAVar10)) {
                do {
                  if (puVar15 + -1 == puVar17) goto LAB_0176a1ac;
                  puVar2 = puVar17 + 1;
                  puVar17 = puVar17 + 1;
                } while ((AbstractState *)*puVar2 != pAVar10);
              }
              if (puVar17 == puVar15) goto LAB_0176a1ac;
            }
            else {
              lVar8 = *(long *)(pAVar10 + 6) - *(long *)(pAVar10 + -2);
              if (lVar8 != 0) {
                plVar20 = *(long **)(pAVar12 + 6);
                plVar21 = *(long **)(pAVar12 + -2);
                uVar14 = 0;
                do {
                  plVar23 = plVar21;
                  if (plVar21 != plVar20) {
                    lVar22 = *plVar21;
                    while (lVar22 != *(long *)(*(long *)(pAVar10 + -2) + uVar14 * 8)) {
                      if (plVar20 + -1 == plVar23) goto LAB_0176a1ac;
                      plVar1 = plVar23 + 1;
                      plVar23 = plVar23 + 1;
                      lVar22 = *plVar1;
                    }
                  }
                  if (plVar23 == plVar20) goto LAB_0176a1ac;
                  uVar14 = uVar14 + 1;
                } while (uVar14 < (ulong)(lVar8 >> 3));
              }
            }
          }
        }
        uVar25 = *(undefined8 *)(this + 0x28);
        lVar8 = 0;
        uVar14 = 0;
        local_78 = (AbstractState *)0x1;
        while (uVar24 = (ulong)pAVar12 & 3, uVar24 != 1) {
          if (uVar24 == 0) {
            if (uVar14 != 0) break;
          }
          else if ((ulong)(*(long *)(pAVar12 + 6) - *(long *)(pAVar12 + -2) >> 3) <= uVar14) break;
          pAVar11 = pAVar12;
          if (uVar24 != 0) {
            if ((ulong)(*(long *)(pAVar12 + 6) - *(long *)(pAVar12 + -2) >> 3) <=
                (ulong)(lVar8 >> 0x20)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            pAVar11 = *(AbstractState **)(*(long *)(pAVar12 + -2) + (lVar8 >> 0x20) * 8);
          }
          if (pAVar11 != pAVar10) {
            ZoneHandleSet<v8::internal::Map>::insert
                      ((ZoneHandleSet<v8::internal::Map> *)&local_78,pAVar11,uVar25);
            pAVar12 = local_80;
          }
          uVar14 = uVar14 + 1;
          lVar8 = lVar8 + 0x100000000;
        }
        local_80 = local_78;
        ZoneHandleSet<v8::internal::Map>::insert
                  ((ZoneHandleSet<v8::internal::Map> *)&local_80,pAVar9,*(undefined8 *)(this + 0x28)
                  );
        pAVar9 = this_02;
        local_78 = this_02;
        plStack_70 = plVar6;
        local_68 = pAVar10;
        if (*(AbstractMaps **)(this_02 + 0x208) != (AbstractMaps *)0x0) {
          pZVar26 = *(Zone **)(this + 0x28);
          lVar8 = AbstractMaps::Kill(*(AbstractMaps **)(this_02 + 0x208),(AliasStateInfo *)&local_78
                                     ,pZVar26);
          if (*(long *)(this_02 + 0x208) != lVar8) {
            pAVar9 = *(AbstractState **)(pZVar26 + 0x10);
            if ((ulong)(*(long *)(pZVar26 + 0x18) - (long)pAVar9) < 0x210) {
              pAVar9 = (AbstractState *)Zone::NewExpand(pZVar26,0x210);
            }
            else {
              *(AbstractState **)(pZVar26 + 0x10) = pAVar9 + 0x210;
            }
            memcpy(pAVar9,this_02,0x208);
            *(long *)(pAVar9 + 0x208) = lVar8;
          }
        }
        this_02 = (AbstractState *)
                  AbstractState::SetMaps(pAVar9,plVar6,local_80,*(undefined8 *)(this + 0x28));
        goto LAB_0176a1ac;
      }
    }
  }
  local_78 = this_02;
  plStack_70 = plVar6;
  local_68 = pAVar10;
  if (this_00 != (AbstractMaps *)0x0) {
    pZVar26 = *(Zone **)(this + 0x28);
    lVar8 = AbstractMaps::Kill(this_00,(AliasStateInfo *)&local_78,pZVar26);
    if (*(long *)(this_02 + 0x208) != lVar8) {
      pAVar10 = *(AbstractState **)(pZVar26 + 0x10);
      if ((ulong)(*(long *)(pZVar26 + 0x18) - (long)pAVar10) < 0x210) {
        pAVar10 = (AbstractState *)Zone::NewExpand(pZVar26,0x210);
      }
      else {
        *(AbstractState **)(pZVar26 + 0x10) = pAVar10 + 0x210;
      }
      memcpy(pAVar10,this_02,0x208);
      *(long *)(pAVar10 + 0x208) = lVar8;
      this_02 = pAVar10;
    }
  }
LAB_0176a1ac:
  lVar8 = *(long *)(this + 0x10);
  uVar24 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
  uVar14 = *(long *)(this + 0x18) - lVar8 >> 3;
  if (uVar24 < uVar14) {
    pAVar10 = *(AbstractState **)(lVar8 + uVar24 * 8);
    if (pAVar10 == this_02) {
      return (Node *)0x0;
    }
  }
  else {
    pAVar10 = (AbstractState *)0x0;
    if (this_02 == (AbstractState *)0x0) {
      return (Node *)0x0;
    }
  }
  if (pAVar10 != (AbstractState *)0x0) {
    uVar14 = AbstractState::Equals(this_02,pAVar10);
    if ((uVar14 & 1) != 0) {
      return (Node *)0x0;
    }
    lVar8 = *(long *)(this + 0x10);
    uVar24 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
    uVar14 = *(long *)(this + 0x18) - lVar8 >> 3;
  }
  if (uVar14 <= uVar24) {
    local_78 = (AbstractState *)0x0;
    std::__ndk1::
    vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
    ::__append(this_01,(uVar24 - uVar14) + 1,&local_78);
    lVar8 = *(long *)this_01;
  }
  *(AbstractState **)(lVar8 + uVar24 * 8) = this_02;
  return param_1;
}

