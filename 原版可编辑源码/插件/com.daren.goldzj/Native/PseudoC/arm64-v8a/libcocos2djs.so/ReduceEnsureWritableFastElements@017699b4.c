
/* v8::internal::compiler::LoadElimination::ReduceEnsureWritableFastElements(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::LoadElimination::ReduceEnsureWritableFastElements
          (LoadElimination *this,Node *param_1)

{
  long *plVar1;
  ulong *puVar2;
  short sVar3;
  long lVar4;
  undefined8 uVar5;
  Node *pNVar6;
  long lVar7;
  AbstractState *pAVar8;
  AbstractState *pAVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  Node *pNVar13;
  ulong uVar14;
  ulong *puVar15;
  Node *pNVar16;
  long *plVar17;
  ulong *puVar18;
  long *plVar19;
  uint uVar20;
  Node *pNVar21;
  vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
  *this_00;
  ulong uVar22;
  Zone *this_01;
  Node *local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  AbstractState *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  uVar5 = NodeProperties::GetValueInput(param_1,0);
  pNVar6 = (Node *)NodeProperties::GetValueInput(param_1,1);
  lVar7 = NodeProperties::GetEffectInput(param_1,0);
  this_00 = (vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
             *)(this + 0x10);
  uVar11 = (ulong)*(uint *)(lVar7 + 0x14) & 0xffffff;
  if ((uVar11 < (ulong)(*(long *)(this + 0x18) - *(long *)this_00 >> 3)) &&
     (pAVar8 = *(AbstractState **)(*(long *)this_00 + uVar11 * 8), pAVar8 != (AbstractState *)0x0))
  {
    lVar12 = *(long *)(*(long *)(this + 0x30) + 0x168);
    uVar11 = lVar12 + 0xe0;
    pNVar13 = pNVar6;
    if (*(long *)(pAVar8 + 0x208) != 0) {
      while (((sVar3 = *(short *)(*(long *)pNVar13 + 0x10), sVar3 == 0x28 || (sVar3 == 0xde)) ||
             (sVar3 == 0x3a))) {
        pNVar16 = pNVar13 + 0x20;
        uVar20 = *(uint *)(pNVar13 + 0x14) >> 0x18 & 0xf;
        pNVar21 = pNVar16;
        if (uVar20 == 0xf) {
          uVar20 = *(uint *)(*(ulong *)pNVar16 + 8);
          pNVar21 = (Node *)(*(ulong *)pNVar16 + 0x10);
        }
        if ((0 < (int)uVar20) && (*(ulong *)pNVar21 == 0)) break;
        if ((~*(uint *)(pNVar13 + 0x14) & 0xf000000) == 0) {
          pNVar16 = (Node *)(*(ulong *)pNVar16 + 0x10);
        }
        pNVar13 = *(Node **)pNVar16;
      }
      plVar10 = (long *)(*(long *)(pAVar8 + 0x208) + 8);
      plVar19 = (long *)*plVar10;
      plVar17 = plVar10;
      if (plVar19 != (long *)0x0) {
        do {
          if ((Node *)plVar19[4] >= pNVar13) {
            plVar17 = plVar19;
          }
          plVar19 = (long *)plVar19[(Node *)plVar19[4] < pNVar13];
        } while (plVar19 != (long *)0x0);
        if ((plVar17 != plVar10) && ((Node *)plVar17[4] <= pNVar13)) {
          uVar22 = plVar17[5];
          if (uVar22 == uVar11) goto LAB_01769c60;
          if (uVar11 != 1) {
            if (uVar22 == 1) goto LAB_01769c60;
            if ((uVar11 & 3) != 0) {
              if ((uVar22 & 3) != 0) {
                lVar4 = *(long *)(uVar22 + 6) - *(long *)(uVar22 - 2);
                if (lVar4 != 0) {
                  plVar17 = *(long **)(lVar12 + 0xe6);
                  plVar10 = *(long **)(lVar12 + 0xde);
                  uVar14 = 0;
                  do {
                    plVar19 = plVar10;
                    if (plVar10 != plVar17) {
                      lVar12 = *plVar10;
                      while (lVar12 != *(long *)(*(long *)(uVar22 - 2) + uVar14 * 8)) {
                        if (plVar17 + -1 == plVar19) goto LAB_01769af4;
                        plVar1 = plVar19 + 1;
                        plVar19 = plVar19 + 1;
                        lVar12 = *plVar1;
                      }
                    }
                    if (plVar19 == plVar17) goto LAB_01769af4;
                    uVar14 = uVar14 + 1;
                  } while (uVar14 < (ulong)(lVar4 >> 3));
                }
LAB_01769c60:
                (**(code **)(**(long **)(this + 8) + 0x20))
                          (*(long **)(this + 8),param_1,pNVar6,lVar7,0);
                return pNVar6;
              }
              puVar18 = *(ulong **)(lVar12 + 0xde);
              puVar15 = *(ulong **)(lVar12 + 0xe6);
              if ((puVar18 != puVar15) && (*puVar18 != uVar22)) {
                do {
                  if (puVar15 + -1 == puVar18) goto LAB_01769af4;
                  puVar2 = puVar18 + 1;
                  puVar18 = puVar18 + 1;
                } while (*puVar2 != uVar22);
              }
              if (puVar18 != puVar15) goto LAB_01769c60;
            }
          }
        }
      }
    }
LAB_01769af4:
    pAVar8 = (AbstractState *)
             AbstractState::SetMaps(pAVar8,param_1,uVar11,*(undefined8 *)(this + 0x28));
    this_01 = *(Zone **)(this + 0x28);
    local_58 = 0;
    local_68 = pAVar8;
    uStack_60 = uVar5;
    if ((*(AbstractField **)(pAVar8 + 0x10) == (AbstractField *)0x0) ||
       (lVar7 = AbstractField::Kill(*(AbstractField **)(pAVar8 + 0x10),&local_68,0,this_01),
       *(long *)(pAVar8 + 0x10) == lVar7)) {
      pAVar9 = (AbstractState *)0x0;
    }
    else {
      pAVar9 = *(AbstractState **)(this_01 + 0x10);
      if ((ulong)(*(long *)(this_01 + 0x18) - (long)pAVar9) < 0x210) {
        pAVar9 = (AbstractState *)Zone::NewExpand(this_01,0x210);
      }
      else {
        *(AbstractState **)(this_01 + 0x10) = pAVar9 + 0x210;
      }
      memcpy(pAVar9,pAVar8,0x210);
      *(long *)(pAVar9 + 0x10) = lVar7;
    }
    local_80 = 7;
    local_78 = 0;
    uStack_70 = 0;
    if (pAVar9 != (AbstractState *)0x0) {
      pAVar8 = pAVar9;
    }
    local_88 = param_1;
    pAVar8 = (AbstractState *)
             AbstractState::AddField
                       (pAVar8,uVar5,0x200000001,&local_88,*(undefined8 *)(this + 0x28));
    lVar7 = *(long *)(this + 0x10);
    pAVar9 = (AbstractState *)0x0;
    uVar22 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
    uVar11 = *(long *)(this + 0x18) - lVar7 >> 3;
    if (uVar22 < uVar11) {
      pAVar9 = *(AbstractState **)(lVar7 + uVar22 * 8);
    }
    if (pAVar9 != pAVar8) {
      if (pAVar9 != (AbstractState *)0x0) {
        uVar11 = AbstractState::Equals(pAVar8,pAVar9);
        if ((uVar11 & 1) != 0) {
          return (Node *)0x0;
        }
        lVar7 = *(long *)(this + 0x10);
        uVar22 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
        uVar11 = *(long *)(this + 0x18) - lVar7 >> 3;
      }
      if (uVar11 <= uVar22) {
        local_68 = (AbstractState *)0x0;
        std::__ndk1::
        vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
        ::__append(this_00,(uVar22 - uVar11) + 1,&local_68);
        lVar7 = *(long *)this_00;
      }
      *(AbstractState **)(lVar7 + uVar22 * 8) = pAVar8;
      return param_1;
    }
  }
  return (Node *)0x0;
}

