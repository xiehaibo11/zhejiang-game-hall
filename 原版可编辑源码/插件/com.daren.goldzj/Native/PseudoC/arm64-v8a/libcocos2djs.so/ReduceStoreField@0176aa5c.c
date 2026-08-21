
/* v8::internal::compiler::LoadElimination::ReduceStoreField(v8::internal::compiler::Node*,
   v8::internal::compiler::FieldAccess const&) */

Node * __thiscall
v8::internal::compiler::LoadElimination::ReduceStoreField
          (LoadElimination *this,Node *param_1,FieldAccess *param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  Graph *this_00;
  int iVar4;
  FieldAccess FVar5;
  uint uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  Node *pNVar10;
  long lVar11;
  Node *pNVar12;
  long lVar13;
  undefined8 uVar14;
  AbstractState *pAVar15;
  long *plVar16;
  AbstractField *pAVar17;
  long lVar18;
  Operator *pOVar19;
  undefined8 uVar20;
  ulong uVar21;
  vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
  *this_01;
  AbstractState *pAVar22;
  ulong uVar23;
  Zone *pZVar24;
  AbstractState *local_e0;
  undefined8 local_d8;
  long local_d0;
  FieldAccess local_c8;
  undefined4 local_c7;
  undefined3 uStack_c3;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  FieldAccess local_a8;
  undefined4 local_a7;
  undefined3 uStack_a3;
  undefined8 local_a0;
  undefined8 uStack_98;
  int *local_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  pNVar10 = (Node *)NodeProperties::GetValueInput(param_1,0);
  lVar11 = NodeProperties::GetValueInput(param_1,1);
  pNVar12 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  auVar9._8_8_ = local_88._8_8_;
  auVar9._0_8_ = local_88._0_8_;
  this_01 = (vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
             *)(this + 0x10);
  if (((ulong)(*(long *)(this + 0x18) - *(long *)this_01 >> 3) <=
       ((ulong)*(uint *)(pNVar12 + 0x14) & 0xffffff)) ||
     (pAVar22 = *(AbstractState **)
                 (*(long *)this_01 + ((ulong)*(uint *)(pNVar12 + 0x14) & 0xffffff) * 8),
     local_88 = auVar9, pAVar22 == (AbstractState *)0x0)) goto LAB_0176ad70;
  iVar4 = *(int *)(param_2 + 4);
  if ((iVar4 != 0) || (*param_2 != (FieldAccess)0x1)) {
    FVar5 = param_2[0x20];
    lVar13 = 2;
    switch(FVar5) {
    default:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    case (FieldAccess)0x2:
    case (FieldAccess)0x3:
    case (FieldAccess)0xb:
      goto switchD_0176abd0_caseD_2;
    case (FieldAccess)0x4:
    case (FieldAccess)0x6:
    case (FieldAccess)0x7:
    case (FieldAccess)0x8:
    case (FieldAccess)0x9:
    case (FieldAccess)0xa:
      goto switchD_0176abd0_caseD_4;
    case (FieldAccess)0x5:
    case (FieldAccess)0xc:
      goto switchD_0176abd0_caseD_5;
    }
  }
  pZVar24 = *(Zone **)(this + 0x28);
  local_78 = 0;
  pAVar15 = pAVar22;
  local_88._0_8_ = pAVar22;
  local_88._8_8_ = pNVar10;
  if ((*(AbstractMaps **)(pAVar22 + 0x208) != (AbstractMaps *)0x0) &&
     (lVar13 = AbstractMaps::Kill(*(AbstractMaps **)(pAVar22 + 0x208),(AliasStateInfo *)local_88,
                                  pZVar24), *(long *)(pAVar22 + 0x208) != lVar13)) {
    pAVar15 = *(AbstractState **)(pZVar24 + 0x10);
    if ((ulong)(*(long *)(pZVar24 + 0x18) - (long)pAVar15) < 0x210) {
      pAVar15 = (AbstractState *)Zone::NewExpand(pZVar24,0x210);
    }
    else {
      *(AbstractState **)(pZVar24 + 0x10) = pAVar15 + 0x210;
    }
    memcpy(pAVar15,pAVar22,0x208);
    *(long *)(pAVar15 + 0x208) = lVar13;
  }
  auVar8._8_8_ = local_88._8_8_;
  auVar8._0_8_ = local_88._0_8_;
  local_90 = *(int **)(lVar11 + 8);
  if ((((ulong)local_90 & 1) == 0) && (local_88 = auVar8, *local_90 == 0)) {
    lVar11 = Type::AsHeapConstant((Type *)&local_90);
    local_88 = ObjectRef::AsMap((ObjectRef *)(lVar11 + 8));
    uVar14 = MapRef::object((MapRef *)local_88);
    pAVar15 = (AbstractState *)
              AbstractState::SetMaps(pAVar15,pNVar10,uVar14,*(undefined8 *)(this + 0x28));
  }
  goto LAB_0176ace8;
switchD_0176abd0_caseD_5:
  lVar13 = 3;
switchD_0176abd0_caseD_4:
  if ((3 < 1 << lVar13) && (*param_2 == (FieldAccess)0x1)) {
    iVar3 = iVar4 + 3;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    uVar6 = (iVar3 >> 2) - 1;
    uVar2 = uVar6 + ((uint)(1 << lVar13) >> 2);
    if (0x20 < (int)uVar2) {
      uVar2 = 0xffffffff;
      uVar6 = 0xffffffff;
    }
    if ((uVar6 & uVar2) != 0xffffffff) {
      lVar13 = *(long *)(param_2 + 0x28);
      plVar16 = (long *)AbstractState::LookupField(pAVar22,pNVar10);
      if ((lVar13 == 0) && (plVar16 != (long *)0x0)) {
        if (plVar16[2] != 0) {
          if (((uint)(byte)FVar5 != (uint)*(byte *)(plVar16 + 1)) &&
             ((2 < (byte)FVar5 - 6 || (2 < (*(byte *)(plVar16 + 1) - 6 & 0xff))))) {
            uVar14 = NodeProperties::GetControlInput(param_1,0);
            this_00 = (Graph *)**(undefined8 **)(this + 0x30);
            pOVar19 = (Operator *)
                      CommonOperatorBuilder::Unreachable
                                ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x30))[1]);
            local_88._0_8_ = pNVar12;
            local_88._8_8_ = uVar14;
            pNVar12 = (Node *)Graph::NewNode(this_00,pOVar19,2,(Node **)local_88,false);
            goto LAB_0176ad74;
          }
        }
        if (*plVar16 == lVar11) goto LAB_0176ad74;
      }
      uVar20 = *(undefined8 *)(param_2 + 8);
      uVar14 = *(undefined8 *)(param_2 + 0x28);
      local_d8 = uVar20;
      if ((lVar13 != 0) && (param_2[0x30] != (FieldAccess)0x0)) {
        if (uVar6 == uVar2) {
          local_e0 = (AbstractState *)0x0;
        }
        else {
          local_e0 = (AbstractState *)0x0;
          pZVar24 = *(Zone **)(this + 0x28);
          iVar4 = uVar2 - uVar6;
          lVar1 = (-(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3) + 0x108;
          pAVar17 = *(AbstractField **)(pAVar22 + lVar1);
          while( true ) {
            if ((pAVar17 != (AbstractField *)0x0) &&
               (lVar18 = AbstractField::KillConst(pAVar17,pNVar10,pZVar24),
               *(long *)(pAVar22 + lVar1) != lVar18)) {
              if (local_e0 == (AbstractState *)0x0) {
                local_e0 = *(AbstractState **)(pZVar24 + 0x10);
                if ((ulong)(*(long *)(pZVar24 + 0x18) - (long)local_e0) < 0x210) {
                  local_e0 = (AbstractState *)Zone::NewExpand(pZVar24,0x210);
                }
                else {
                  *(AbstractState **)(pZVar24 + 0x10) = local_e0 + 0x210;
                }
                memcpy(local_e0,pAVar22,0x210);
              }
              *(long *)(local_e0 + lVar1) = lVar18;
            }
            iVar4 = iVar4 + -1;
            lVar1 = lVar1 + 8;
            if (iVar4 == 0) break;
            pAVar17 = *(AbstractField **)(pAVar22 + lVar1);
          }
          local_d8 = *(undefined8 *)(param_2 + 8);
        }
        if (local_e0 != (AbstractState *)0x0) {
          pAVar22 = local_e0;
        }
      }
      pZVar24 = *(Zone **)(this + 0x28);
      local_78 = 0;
      local_88._0_8_ = pAVar22;
      if (uVar6 == uVar2) {
        pAVar15 = (AbstractState *)0x0;
        local_88._8_8_ = pNVar10;
      }
      else {
        iVar4 = uVar2 - uVar6;
        pAVar15 = (AbstractState *)0x0;
        lVar1 = (-(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3) + 8;
        pAVar17 = *(AbstractField **)(pAVar22 + lVar1);
        local_88._8_8_ = pNVar10;
        while( true ) {
          if ((pAVar17 != (AbstractField *)0x0) &&
             (lVar18 = AbstractField::Kill(pAVar17,local_88,local_d8,pZVar24),
             *(long *)(pAVar22 + lVar1) != lVar18)) {
            if (pAVar15 == (AbstractState *)0x0) {
              pAVar15 = *(AbstractState **)(pZVar24 + 0x10);
              if ((ulong)(*(long *)(pZVar24 + 0x18) - (long)pAVar15) < 0x210) {
                pAVar15 = (AbstractState *)Zone::NewExpand(pZVar24,0x210);
              }
              else {
                *(AbstractState **)(pZVar24 + 0x10) = pAVar15 + 0x210;
              }
              memcpy(pAVar15,pAVar22,0x210);
            }
            *(long *)(pAVar15 + lVar1) = lVar18;
          }
          iVar4 = iVar4 + -1;
          lVar1 = lVar1 + 8;
          if (iVar4 == 0) break;
          pAVar17 = *(AbstractField **)(pAVar22 + lVar1);
        }
        pZVar24 = *(Zone **)(this + 0x28);
      }
      if (pAVar15 != (AbstractState *)0x0) {
        pAVar22 = pAVar15;
      }
      uStack_a3 = SUB83(local_88._0_8_,4);
      local_b0 = lVar11;
      local_a8 = FVar5;
      local_a7 = local_88._0_4_;
      local_a0 = uVar20;
      uStack_98 = uVar14;
      pAVar15 = (AbstractState *)
                AbstractState::AddField(pAVar22,pNVar10,CONCAT44(uVar2,uVar6),&local_b0,pZVar24);
      if (lVar13 != 0) {
        uStack_c3 = SUB83(local_88._0_8_,4);
        uStack_b8 = 0;
        local_d0 = lVar11;
        local_c8 = FVar5;
        local_c7 = local_88._0_4_;
        local_c0 = uVar20;
        pAVar15 = (AbstractState *)
                  AbstractState::AddField
                            (pAVar15,pNVar10,CONCAT44(uVar2,uVar6),&local_d0,
                             *(undefined8 *)(this + 0x28));
      }
      goto LAB_0176ace8;
    }
  }
switchD_0176abd0_caseD_2:
  pAVar15 = (AbstractState *)
            AbstractState::KillFields
                      (pAVar22,pNVar10,*(undefined8 *)(param_2 + 8),*(undefined8 *)(this + 0x28));
LAB_0176ace8:
  lVar11 = *(long *)(this + 0x10);
  uVar23 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
  uVar21 = *(long *)(this + 0x18) - lVar11 >> 3;
  if (uVar23 < uVar21) {
    pAVar22 = *(AbstractState **)(lVar11 + uVar23 * 8);
    if (pAVar22 != pAVar15) {
LAB_0176ad10:
      if (pAVar22 != (AbstractState *)0x0) {
        uVar21 = AbstractState::Equals(pAVar15,pAVar22);
        if ((uVar21 & 1) != 0) goto LAB_0176ad70;
        lVar11 = *(long *)(this + 0x10);
        uVar23 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
        uVar21 = *(long *)(this + 0x18) - lVar11 >> 3;
      }
      if (uVar21 <= uVar23) {
        local_88._0_8_ = (AbstractState *)0x0;
        std::__ndk1::
        vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
        ::__append(this_01,(uVar23 - uVar21) + 1,(AbstractState **)local_88);
        lVar11 = *(long *)this_01;
      }
      *(AbstractState **)(lVar11 + uVar23 * 8) = pAVar15;
      pNVar12 = param_1;
      goto LAB_0176ad74;
    }
  }
  else {
    pAVar22 = (AbstractState *)0x0;
    if (pAVar15 != (AbstractState *)0x0) goto LAB_0176ad10;
  }
LAB_0176ad70:
  pNVar12 = (Node *)0x0;
LAB_0176ad74:
  if (*(long *)(lVar7 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pNVar12;
}

