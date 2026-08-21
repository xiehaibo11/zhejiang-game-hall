
/* v8::internal::compiler::LoadElimination::ReduceLoadField(v8::internal::compiler::Node*,
   v8::internal::compiler::FieldAccess const&) */

Node * __thiscall
v8::internal::compiler::LoadElimination::ReduceLoadField
          (LoadElimination *this,Node *param_1,FieldAccess *param_2)

{
  int iVar1;
  Graph *this_00;
  int iVar2;
  FieldAccess FVar3;
  short sVar4;
  uint uVar5;
  long *plVar6;
  Node *pNVar7;
  undefined8 uVar8;
  long *plVar9;
  Node *pNVar10;
  undefined8 uVar11;
  Operator *pOVar12;
  AbstractState *pAVar13;
  Node *pNVar14;
  long *plVar15;
  ulong *puVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  uint uVar20;
  vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
  *this_01;
  AbstractState *this_02;
  ulong uVar21;
  Node *local_98;
  FieldAccess local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  AbstractState *local_78;
  Node *pNStack_70;
  undefined8 local_68;
  
  plVar6 = (long *)NodeProperties::GetValueInput(param_1,0);
  pNVar7 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  uVar8 = NodeProperties::GetControlInput(param_1,0);
  this_01 = (vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
             *)(this + 0x10);
  if (((ulong)(*(long *)(this + 0x18) - *(long *)this_01 >> 3) <=
       ((ulong)*(uint *)(pNVar7 + 0x14) & 0xffffff)) ||
     (this_02 = *(AbstractState **)
                 (*(long *)this_01 + ((ulong)*(uint *)(pNVar7 + 0x14) & 0xffffff) * 8),
     this_02 == (AbstractState *)0x0)) {
    return (Node *)0x0;
  }
  iVar2 = *(int *)(param_2 + 4);
  if ((iVar2 == 0) && (*param_2 == (FieldAccess)0x1)) {
    if (*(long *)(this_02 + 0x208) != 0) {
      while (((sVar4 = *(short *)(*plVar6 + 0x10), sVar4 == 0x28 || (sVar4 == 0xde)) ||
             (sVar4 == 0x3a))) {
        plVar9 = plVar6 + 4;
        uVar20 = *(uint *)((long)plVar6 + 0x14) >> 0x18 & 0xf;
        plVar15 = plVar9;
        if (uVar20 == 0xf) {
          uVar20 = *(uint *)(*plVar9 + 8);
          plVar15 = (long *)(*plVar9 + 0x10);
        }
        if ((0 < (int)uVar20) && (*plVar15 == 0)) break;
        if ((~*(uint *)((long)plVar6 + 0x14) & 0xf000000) == 0) {
          plVar9 = (long *)(*plVar9 + 0x10);
        }
        plVar6 = (long *)*plVar9;
      }
      plVar15 = (long *)(*(long *)(this_02 + 0x208) + 8);
      plVar19 = (long *)*plVar15;
      plVar9 = plVar15;
      if (plVar19 != (long *)0x0) {
        do {
          if ((long *)plVar19[4] >= plVar6) {
            plVar9 = plVar19;
          }
          plVar19 = (long *)plVar19[(long *)plVar19[4] < plVar6];
        } while (plVar19 != (long *)0x0);
        if ((plVar9 != plVar15) && ((long *)plVar9[4] <= plVar6)) {
          uVar18 = plVar9[5];
          if ((uVar18 & 3) == 0) {
LAB_0176a86c:
            pNVar10 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x30),uVar18);
            *(undefined8 *)(pNVar10 + 8) = 0x1000001;
            (**(code **)(**(long **)(this + 8) + 0x20))
                      (*(long **)(this + 8),param_1,pNVar10,pNVar7,0);
            return pNVar10;
          }
          if ((uVar18 & 3) != 1) {
            puVar16 = *(ulong **)(uVar18 - 2);
            if ((long)*(ulong **)(uVar18 + 6) - (long)puVar16 == 8) {
              if (*(ulong **)(uVar18 + 6) == puVar16) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              uVar18 = *puVar16;
              goto LAB_0176a86c;
            }
          }
        }
      }
    }
  }
  else {
    FVar3 = param_2[0x20];
    lVar17 = 2;
    switch(FVar3) {
    default:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    case (FieldAccess)0x2:
    case (FieldAccess)0x3:
    case (FieldAccess)0xb:
      break;
    case (FieldAccess)0x5:
    case (FieldAccess)0xc:
      lVar17 = 3;
    case (FieldAccess)0x4:
    case (FieldAccess)0x6:
    case (FieldAccess)0x7:
    case (FieldAccess)0x8:
    case (FieldAccess)0x9:
    case (FieldAccess)0xa:
      if ((3 < 1 << lVar17) && (*param_2 == (FieldAccess)0x1)) {
        iVar1 = iVar2 + 3;
        if (-1 < iVar2) {
          iVar1 = iVar2;
        }
        uVar5 = (iVar1 >> 2) - 1;
        uVar20 = uVar5 + ((uint)(1 << lVar17) >> 2);
        if (0x20 < (int)uVar20) {
          uVar20 = 0xffffffff;
          uVar5 = 0xffffffff;
        }
        if ((uVar5 & uVar20) != 0xffffffff) {
          uVar11 = CONCAT44(uVar20,uVar5);
          plVar9 = (long *)AbstractState::LookupField
                                     (this_02,plVar6,uVar11,*(undefined8 *)(param_2 + 0x28));
          if ((plVar9 != (long *)0x0) ||
             ((*(long *)(param_2 + 0x28) != 0 &&
              (plVar9 = (long *)AbstractState::LookupField(this_02,plVar6,uVar11,0),
              plVar9 != (long *)0x0)))) {
            pNVar10 = (Node *)*plVar9;
            if (((uint)(byte)FVar3 == (uint)*(byte *)(plVar9 + 1)) ||
               (((byte)FVar3 - 6 < 3 && ((*(byte *)(plVar9 + 1) - 6 & 0xff) < 3)))) {
              uVar20 = (byte)pNVar10[0x17] & 0xf;
              pNVar14 = pNVar10 + 0x20;
              if (uVar20 == 0xf) {
                uVar20 = *(uint *)(*(long *)pNVar14 + 8);
                pNVar14 = (Node *)(*(long *)pNVar14 + 0x10);
              }
              if (((int)uVar20 < 1) || (*(long *)pNVar14 != 0)) {
                local_78 = *(AbstractState **)(pNVar10 + 8);
                if ((local_78 != (AbstractState *)*(Node **)(param_1 + 8)) &&
                   (uVar18 = Type::SlowIs((Type *)&local_78), (uVar18 & 1) == 0)) {
                  uVar11 = Type::Intersect(*(undefined8 *)(param_1 + 8),*(undefined8 *)(pNVar10 + 8)
                                           ,*(undefined8 *)**(undefined8 **)(this + 0x30));
                  this_00 = (Graph *)**(undefined8 **)(this + 0x30);
                  pOVar12 = (Operator *)
                            CommonOperatorBuilder::TypeGuard
                                      ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x30))[1],
                                       uVar11);
                  local_78 = (AbstractState *)pNVar10;
                  pNStack_70 = pNVar7;
                  local_68 = uVar8;
                  pNVar10 = (Node *)Graph::NewNode(this_00,pOVar12,3,(Node **)&local_78,false);
                  *(undefined8 *)(pNVar10 + 8) = uVar11;
                  pNVar7 = pNVar10;
                }
                (**(code **)(**(long **)(this + 8) + 0x20))
                          (*(long **)(this + 8),param_1,pNVar10,pNVar7,0);
                return pNVar10;
              }
            }
          }
          uStack_80 = *(undefined8 *)(param_2 + 0x28);
          local_88 = *(undefined8 *)(param_2 + 8);
          local_98 = param_1;
          local_90 = FVar3;
          this_02 = (AbstractState *)
                    AbstractState::AddField
                              (this_02,plVar6,uVar11,&local_98,*(undefined8 *)(this + 0x28));
        }
      }
    }
  }
  if (*(long *)(param_2 + 0x10) != 0) {
    this_02 = (AbstractState *)
              AbstractState::SetMaps
                        (this_02,param_1,*(long *)(param_2 + 0x10),*(undefined8 *)(this + 0x28));
  }
  lVar17 = *(long *)(this + 0x10);
  uVar21 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
  uVar18 = *(long *)(this + 0x18) - lVar17 >> 3;
  if (uVar21 < uVar18) {
    pAVar13 = *(AbstractState **)(lVar17 + uVar21 * 8);
    if (pAVar13 == this_02) {
      return (Node *)0x0;
    }
  }
  else {
    pAVar13 = (AbstractState *)0x0;
    if (this_02 == (AbstractState *)0x0) {
      return (Node *)0x0;
    }
  }
  if (pAVar13 != (AbstractState *)0x0) {
    uVar18 = AbstractState::Equals(this_02,pAVar13);
    if ((uVar18 & 1) != 0) {
      return (Node *)0x0;
    }
    lVar17 = *(long *)(this + 0x10);
    uVar21 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
    uVar18 = *(long *)(this + 0x18) - lVar17 >> 3;
  }
  if (uVar18 <= uVar21) {
    local_78 = (AbstractState *)0x0;
    std::__ndk1::
    vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
    ::__append(this_01,(uVar21 - uVar18) + 1,&local_78);
    lVar17 = *(long *)this_01;
  }
  *(AbstractState **)(lVar17 + uVar21 * 8) = this_02;
  return param_1;
}

