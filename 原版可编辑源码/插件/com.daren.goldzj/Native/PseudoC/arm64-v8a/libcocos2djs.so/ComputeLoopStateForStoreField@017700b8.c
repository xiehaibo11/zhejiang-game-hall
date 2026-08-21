
/* v8::internal::compiler::LoadElimination::ComputeLoopStateForStoreField(v8::internal::compiler::Node*,
   v8::internal::compiler::LoadElimination::AbstractState const*,
   v8::internal::compiler::FieldAccess const&) const */

AbstractState * __thiscall
v8::internal::compiler::LoadElimination::ComputeLoopStateForStoreField
          (LoadElimination *this,Node *param_1,AbstractState *param_2,FieldAccess *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  AbstractField *pAVar5;
  long lVar6;
  AbstractState *pAVar7;
  long lVar8;
  undefined8 uVar9;
  Zone *pZVar10;
  AbstractState *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  uStack_60 = NodeProperties::GetValueInput(param_1,0);
  iVar3 = *(int *)(param_3 + 4);
  local_68 = param_2;
  if (iVar3 == 0) {
    pZVar10 = *(Zone **)(this + 0x28);
    local_58 = 0;
    pAVar7 = param_2;
    if ((*(AbstractMaps **)(param_2 + 0x208) != (AbstractMaps *)0x0) &&
       (lVar8 = AbstractMaps::Kill(*(AbstractMaps **)(param_2 + 0x208),(AliasStateInfo *)&local_68,
                                   pZVar10), *(long *)(param_2 + 0x208) != lVar8)) {
      pAVar7 = *(AbstractState **)(pZVar10 + 0x10);
      if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)pAVar7) < 0x210) {
        pAVar7 = (AbstractState *)Zone::NewExpand(pZVar10,0x210);
      }
      else {
        *(AbstractState **)(pZVar10 + 0x10) = pAVar7 + 0x210;
      }
      memcpy(pAVar7,param_2,0x208);
      *(long *)(pAVar7 + 0x208) = lVar8;
    }
    return pAVar7;
  }
  lVar8 = 2;
  switch(param_3[0x20]) {
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case (FieldAccess)0x5:
  case (FieldAccess)0xc:
    lVar8 = 3;
  case (FieldAccess)0x4:
  case (FieldAccess)0x6:
  case (FieldAccess)0x7:
  case (FieldAccess)0x8:
  case (FieldAccess)0x9:
  case (FieldAccess)0xa:
    if ((3 < 1 << lVar8) && (*param_3 == (FieldAccess)0x1)) {
      iVar2 = iVar3 + 3;
      if (-1 < iVar3) {
        iVar2 = iVar3;
      }
      uVar4 = (iVar2 >> 2) - 1;
      uVar1 = uVar4 + ((uint)(1 << lVar8) >> 2);
      if (0x20 < (int)uVar1) {
        uVar1 = 0xffffffff;
        uVar4 = 0xffffffff;
      }
      if ((uVar4 & uVar1) != 0xffffffff) {
        uVar9 = *(undefined8 *)(param_3 + 8);
        pZVar10 = *(Zone **)(this + 0x28);
        pAVar7 = (AbstractState *)0x0;
        local_58 = 0;
        if (uVar4 != uVar1) {
          iVar3 = uVar1 - uVar4;
          pAVar7 = (AbstractState *)0x0;
          lVar8 = (-(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3) + 8;
          pAVar5 = *(AbstractField **)(param_2 + lVar8);
          while( true ) {
            if ((pAVar5 != (AbstractField *)0x0) &&
               (lVar6 = AbstractField::Kill(pAVar5,&local_68,uVar9,pZVar10),
               *(long *)(param_2 + lVar8) != lVar6)) {
              if (pAVar7 == (AbstractState *)0x0) {
                pAVar7 = *(AbstractState **)(pZVar10 + 0x10);
                if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)pAVar7) < 0x210) {
                  pAVar7 = (AbstractState *)Zone::NewExpand(pZVar10,0x210);
                }
                else {
                  *(AbstractState **)(pZVar10 + 0x10) = pAVar7 + 0x210;
                }
                memcpy(pAVar7,param_2,0x210);
              }
              *(long *)(pAVar7 + lVar8) = lVar6;
            }
            iVar3 = iVar3 + -1;
            lVar8 = lVar8 + 8;
            if (iVar3 == 0) break;
            pAVar5 = *(AbstractField **)(param_2 + lVar8);
          }
        }
        if (pAVar7 == (AbstractState *)0x0) {
          return param_2;
        }
        return pAVar7;
      }
    }
  case (FieldAccess)0x2:
  case (FieldAccess)0x3:
  case (FieldAccess)0xb:
    pAVar7 = (AbstractState *)
             AbstractState::KillFields
                       (param_2,uStack_60,*(undefined8 *)(param_3 + 8),*(undefined8 *)(this + 0x28))
    ;
    return pAVar7;
  }
}

