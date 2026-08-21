
/* v8::internal::compiler::LoadElimination::Reduce(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::LoadElimination::Reduce(LoadElimination *this,Node *param_1)

{
  ushort uVar1;
  long *plVar2;
  Node *pNVar3;
  FieldAccess *pFVar4;
  AbstractState *pAVar5;
  ulong uVar6;
  undefined8 uVar7;
  Operator *pOVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
  *this_00;
  ulong uVar12;
  AbstractState *local_48;
  
  pOVar8 = *(Operator **)param_1;
  if ((FLAG_trace_turbo_load_elimination != '\0') && (0 < *(int *)(pOVar8 + 0x18))) {
    PrintF(" visit #%d:%s",(ulong)(*(uint *)(param_1 + 0x14) & 0xffffff),*(undefined8 *)(pOVar8 + 8)
          );
    if (0 < *(int *)(*(long *)param_1 + 0x14)) {
      PrintF("(");
      if (0 < *(int *)(*(long *)param_1 + 0x14)) {
        plVar2 = (long *)NodeProperties::GetValueInput(param_1,0);
        PrintF("#%d:%s",(ulong)(*(uint *)((long)plVar2 + 0x14) & 0xffffff),
               *(undefined8 *)(*plVar2 + 8));
        if (1 < *(int *)(*(long *)param_1 + 0x14)) {
          iVar10 = 1;
          do {
            PrintF(", ");
            plVar2 = (long *)NodeProperties::GetValueInput(param_1,iVar10);
            PrintF("#%d:%s",(ulong)(*(uint *)((long)plVar2 + 0x14) & 0xffffff),
                   *(undefined8 *)(*plVar2 + 8));
            iVar10 = iVar10 + 1;
          } while (iVar10 < *(int *)(*(long *)param_1 + 0x14));
        }
      }
      PrintF(")");
    }
    PrintF("\n");
    pOVar8 = *(Operator **)param_1;
    if (0 < *(int *)(pOVar8 + 0x18)) {
      uVar11 = 0;
      do {
        plVar2 = (long *)NodeProperties::GetEffectInput(param_1,uVar11);
        uVar6 = (ulong)*(uint *)((long)plVar2 + 0x14) & 0xffffff;
        if (uVar6 < (ulong)(*(long *)(this + 0x18) - *(long *)(this + 0x10) >> 3)) {
          pAVar5 = *(AbstractState **)(*(long *)(this + 0x10) + uVar6 * 8);
          uVar7 = *(undefined8 *)(*plVar2 + 8);
          if (pAVar5 == (AbstractState *)0x0) goto LAB_01768b4c;
          PrintF("  state[%i]: #%d:%s\n",(ulong)uVar11,uVar6,uVar7);
          AbstractState::Print(pAVar5);
        }
        else {
          uVar7 = *(undefined8 *)(*plVar2 + 8);
LAB_01768b4c:
          PrintF("  no state[%i]: #%d:%s\n",(ulong)uVar11,uVar6,uVar7);
        }
        pOVar8 = *(Operator **)param_1;
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < *(int *)(pOVar8 + 0x18));
    }
  }
  uVar1 = *(ushort *)(pOVar8 + 0x10);
  if (uVar1 < 0x3d) {
    if (uVar1 == 0) {
      this_00 = (vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
                 *)(this + 0x10);
      lVar9 = *(long *)this_00;
      uVar12 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
      uVar6 = *(long *)(this + 0x18) - lVar9 >> 3;
      if (uVar12 < uVar6) {
        pAVar5 = *(AbstractState **)(lVar9 + uVar12 * 8);
        if (pAVar5 == (AbstractState *)AbstractState::empty_state_) {
          return (Node *)0x0;
        }
        if (pAVar5 != (AbstractState *)0x0) {
          uVar6 = AbstractState::Equals((AbstractState *)AbstractState::empty_state_,pAVar5);
          if ((uVar6 & 1) != 0) {
            return (Node *)0x0;
          }
          lVar9 = *(long *)(this + 0x10);
          uVar12 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
          uVar6 = *(long *)(this + 0x18) - lVar9 >> 3;
        }
      }
      if (uVar6 <= uVar12) {
        local_48 = (AbstractState *)0x0;
        std::__ndk1::
        vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
        ::__append(this_00,(uVar12 - uVar6) + 1,&local_48);
        lVar9 = *(long *)this_00;
      }
      *(undefined1 **)(lVar9 + uVar12 * 8) = AbstractState::empty_state_;
      return param_1;
    }
    if (uVar1 == 0x24) {
      pNVar3 = (Node *)ReduceEffectPhi(this,param_1);
      return pNVar3;
    }
    if (uVar1 == 0x39) {
      pNVar3 = (Node *)ReduceMapGuard(this,param_1);
      return pNVar3;
    }
  }
  else {
    switch(uVar1) {
    case 0xd6:
      pNVar3 = (Node *)ReduceCheckMaps(this,param_1);
      return pNVar3;
    case 0xd7:
    case 0xd8:
    case 0xd9:
    case 0xda:
    case 0xdb:
    case 0xdc:
    case 0xdd:
    case 0xde:
    case 0xdf:
    case 0xe0:
    case 0xe1:
    case 0xe2:
    case 0xe4:
    case 0xe5:
    case 0xe6:
    case 0xe7:
    case 0xe8:
    case 0xe9:
    case 0xec:
    case 0xed:
    case 0xee:
    case 0xef:
    case 0xf0:
    case 0xf3:
    case 0xf5:
    case 0xf6:
    case 0xf7:
    case 0xf9:
    case 0xfa:
    case 0xfb:
    case 0xfc:
    case 0xfd:
    case 0xfe:
    case 0xff:
    case 0x100:
    case 0x101:
    case 0x102:
    case 0x103:
    case 0x104:
    case 0x105:
    case 0x106:
    case 0x107:
    case 0x108:
    case 0x109:
    case 0x10a:
    case 0x10b:
    case 0x10c:
    case 0x10d:
    case 0x10e:
    case 0x10f:
    case 0x110:
    case 0x111:
    case 0x112:
    case 0x113:
    case 0x114:
    case 0x115:
    case 0x116:
    case 0x117:
    case 0x118:
    case 0x119:
      break;
    case 0xe3:
      pNVar3 = (Node *)ReduceCompareMaps(this,param_1);
      return pNVar3;
    case 0xea:
      pFVar4 = (FieldAccess *)FieldAccessOf(pOVar8);
      pNVar3 = (Node *)ReduceLoadField(this,param_1,pFVar4);
      return pNVar3;
    case 0xeb:
      pNVar3 = (Node *)ReduceLoadElement(this,param_1);
      return pNVar3;
    case 0xf1:
      pFVar4 = (FieldAccess *)FieldAccessOf(pOVar8);
      pNVar3 = (Node *)ReduceStoreField(this,param_1,pFVar4);
      return pNVar3;
    case 0xf2:
      pNVar3 = (Node *)ReduceStoreElement(this,param_1);
      return pNVar3;
    case 0xf4:
      pNVar3 = (Node *)ReduceStoreTypedElement(this,param_1);
      return pNVar3;
    case 0xf8:
      pNVar3 = (Node *)ReduceTransitionAndStoreElement(this,param_1);
      return pNVar3;
    case 0x11a:
      pNVar3 = (Node *)ReduceEnsureWritableFastElements(this,param_1);
      return pNVar3;
    case 0x11b:
      pNVar3 = (Node *)ReduceMaybeGrowFastElements(this,param_1);
      return pNVar3;
    case 0x11c:
      pNVar3 = (Node *)ReduceTransitionElementsKind(this,param_1);
      return pNVar3;
    default:
      if (uVar1 == 0x3d) {
        return (Node *)0x0;
      }
    }
  }
  pNVar3 = (Node *)ReduceOtherNode(this,param_1);
  return pNVar3;
}

