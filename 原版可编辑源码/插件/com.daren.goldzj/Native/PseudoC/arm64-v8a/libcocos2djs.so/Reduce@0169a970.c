
/* v8::internal::compiler::CsaLoadElimination::Reduce(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::CsaLoadElimination::Reduce(CsaLoadElimination *this,Node *param_1)

{
  ushort uVar1;
  long *plVar2;
  Node *pNVar3;
  ObjectAccess *pOVar4;
  PersistentMap *pPVar5;
  ulong uVar6;
  undefined8 uVar7;
  Operator *pOVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  vector<v8::internal::compiler::CsaLoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::CsaLoadElimination::AbstractState_const*>>
  *this_00;
  undefined8 uVar12;
  PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
  *this_01;
  ulong uVar13;
  AbstractState *this_02;
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
        if (uVar6 < (ulong)(*(long *)(this + 0x38) - *(long *)(this + 0x30) >> 3)) {
          this_02 = *(AbstractState **)(*(long *)(this + 0x30) + uVar6 * 8);
          uVar7 = *(undefined8 *)(*plVar2 + 8);
          if (this_02 == (AbstractState *)0x0) goto LAB_0169aac8;
          PrintF("  state[%i]: #%d:%s\n",(ulong)uVar11,uVar6,uVar7);
          AbstractState::Print(this_02);
        }
        else {
          uVar7 = *(undefined8 *)(*plVar2 + 8);
LAB_0169aac8:
          PrintF("  no state[%i]: #%d:%s\n",(ulong)uVar11,uVar6,uVar7);
        }
        pOVar8 = *(Operator **)param_1;
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < *(int *)(pOVar8 + 0x18));
    }
  }
  uVar1 = *(ushort *)(pOVar8 + 0x10);
  uVar11 = (uint)uVar1;
  if (uVar1 < 0xee) {
    if (uVar11 == 0x30 || uVar1 < 0x30) {
      if (uVar1 == 0) {
        this_00 = (vector<v8::internal::compiler::CsaLoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::CsaLoadElimination::AbstractState_const*>>
                   *)(this + 0x30);
        lVar9 = *(long *)this_00;
        uVar13 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
        this_01 = (PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
                   *)(this + 0x10);
        uVar6 = *(long *)(this + 0x38) - lVar9 >> 3;
        if (uVar13 < uVar6) {
          pPVar5 = *(PersistentMap **)(lVar9 + uVar13 * 8);
          if (pPVar5 == (PersistentMap *)this_01) {
            return (Node *)0x0;
          }
          if (pPVar5 != (PersistentMap *)0x0) {
            uVar6 = PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
                    ::operator==(this_01,pPVar5);
            if ((uVar6 & 1) != 0) {
              return (Node *)0x0;
            }
            lVar9 = *(long *)(this + 0x30);
            uVar13 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
            uVar6 = *(long *)(this + 0x38) - lVar9 >> 3;
          }
        }
        if (uVar6 <= uVar13) {
          local_48 = (AbstractState *)0x0;
          std::__ndk1::
          vector<v8::internal::compiler::CsaLoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::CsaLoadElimination::AbstractState_const*>>
          ::__append(this_00,(uVar13 - uVar6) + 1,&local_48);
          lVar9 = *(long *)this_00;
        }
        if (*(PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
              **)(lVar9 + uVar13 * 8) != this_01) {
          *(PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
            **)(lVar9 + uVar13 * 8) = this_01;
        }
        return param_1;
      }
      if (uVar1 == 0x24) {
        pNVar3 = (Node *)ReduceEffectPhi(this,param_1);
        return pNVar3;
      }
    }
    else if (uVar11 == 0x31) {
      plVar2 = (long *)NodeProperties::GetValueInput(param_1,0);
      if (*(short *)(*plVar2 + 0x10) == 0x1b) {
        uVar12 = *(undefined8 *)(*plVar2 + 0x30);
        uVar7 = ExternalReference::check_object_type();
        uVar6 = internal::operator==(uVar12,uVar7);
        if ((uVar6 & 1) != 0) goto LAB_0169acdc;
      }
      else {
        ExternalReference::check_object_type();
      }
    }
    else if (uVar1 == 0x3d) {
      return (Node *)0x0;
    }
  }
  else {
    if (uVar11 - 0x1a7 < 2) {
LAB_0169acdc:
      pNVar3 = (Node *)PropagateInputState(this,param_1);
      return pNVar3;
    }
    if (uVar11 == 0xf5) {
      pOVar4 = (ObjectAccess *)ObjectAccessOf(pOVar8);
      pNVar3 = (Node *)ReduceStoreToObject(this,param_1,pOVar4);
      return pNVar3;
    }
    if (uVar1 == 0xee) {
      pOVar4 = (ObjectAccess *)ObjectAccessOf(pOVar8);
      pNVar3 = (Node *)ReduceLoadFromObject(this,param_1,pOVar4);
      return pNVar3;
    }
  }
  pNVar3 = (Node *)ReduceOtherNode(this,param_1);
  return pNVar3;
}

