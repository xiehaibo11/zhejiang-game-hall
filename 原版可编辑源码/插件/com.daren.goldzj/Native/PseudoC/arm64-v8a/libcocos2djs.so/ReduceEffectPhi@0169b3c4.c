
/* v8::internal::compiler::CsaLoadElimination::ReduceEffectPhi(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::CsaLoadElimination::ReduceEffectPhi(CsaLoadElimination *this,Node *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  AbstractState *this_00;
  Zone *pZVar5;
  PersistentMap *pPVar6;
  ulong uVar7;
  long lVar8;
  vector<v8::internal::compiler::CsaLoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::CsaLoadElimination::AbstractState_const*>>
  *this_01;
  int iVar9;
  AbstractState *pAVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  AbstractState *local_48;
  
  lVar3 = NodeProperties::GetEffectInput(param_1,0);
  plVar4 = (long *)NodeProperties::GetControlInput(param_1,0);
  this_01 = (vector<v8::internal::compiler::CsaLoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::CsaLoadElimination::AbstractState_const*>>
             *)(this + 0x30);
  uVar7 = (ulong)*(uint *)(lVar3 + 0x14) & 0xffffff;
  if (((ulong)(*(long *)(this + 0x38) - *(long *)this_01 >> 3) <= uVar7) ||
     (pAVar10 = *(AbstractState **)(*(long *)this_01 + uVar7 * 8), pAVar10 == (AbstractState *)0x0))
  {
    return (Node *)0x0;
  }
  if (*(short *)(*plVar4 + 0x10) == 1) {
    this_00 = (AbstractState *)ComputeLoopState(this,param_1,pAVar10);
    uVar1 = *(uint *)(param_1 + 0x14);
    lVar3 = *(long *)(this + 0x30);
    lVar8 = *(long *)(this + 0x38);
  }
  else {
    iVar2 = *(int *)(*(long *)param_1 + 0x18);
    if (1 < iVar2) {
      iVar9 = 1;
      do {
        lVar3 = NodeProperties::GetEffectInput(param_1,iVar9);
        uVar7 = (ulong)*(uint *)(lVar3 + 0x14) & 0xffffff;
        if ((ulong)(*(long *)(this + 0x38) - *(long *)(this + 0x30) >> 3) <= uVar7) {
          return (Node *)0x0;
        }
        if (*(long *)(*(long *)(this + 0x30) + uVar7 * 8) == 0) {
          return (Node *)0x0;
        }
        iVar9 = iVar9 + 1;
      } while (iVar2 != iVar9);
    }
    pZVar5 = *(Zone **)(this + 0x58);
    this_00 = *(AbstractState **)(pZVar5 + 0x10);
    if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)this_00) < 0x20) {
      this_00 = (AbstractState *)Zone::NewExpand(pZVar5,0x20);
    }
    else {
      *(AbstractState **)(pZVar5 + 0x10) = this_00 + 0x20;
    }
    uVar12 = *(undefined8 *)pAVar10;
    uVar14 = *(undefined8 *)(pAVar10 + 0x18);
    uVar13 = *(undefined8 *)(pAVar10 + 0x10);
    *(undefined8 *)(this_00 + 8) = *(undefined8 *)(pAVar10 + 8);
    *(undefined8 *)this_00 = uVar12;
    *(undefined8 *)(this_00 + 0x18) = uVar14;
    *(undefined8 *)(this_00 + 0x10) = uVar13;
    if (1 < iVar2) {
      iVar9 = 1;
      do {
        lVar3 = NodeProperties::GetEffectInput(param_1,iVar9);
        uVar7 = (ulong)*(uint *)(lVar3 + 0x14) & 0xffffff;
        if (uVar7 < (ulong)(*(long *)(this + 0x38) - *(long *)(this + 0x30) >> 3)) {
          pZVar5 = *(Zone **)(*(long *)(this + 0x30) + uVar7 * 8);
        }
        else {
          pZVar5 = (Zone *)0x0;
        }
        AbstractState::Merge(this_00,pZVar5);
        iVar9 = iVar9 + 1;
      } while (iVar2 != iVar9);
    }
    uVar1 = *(uint *)(param_1 + 0x14);
    lVar3 = *(long *)(this + 0x30);
    lVar8 = *(long *)(this + 0x38);
  }
  uVar11 = (ulong)uVar1 & 0xffffff;
  uVar7 = lVar8 - lVar3 >> 3;
  if (uVar11 < uVar7) {
    pPVar6 = *(PersistentMap **)(lVar3 + uVar11 * 8);
    if (pPVar6 == (PersistentMap *)this_00) {
      return (Node *)0x0;
    }
  }
  else {
    pPVar6 = (PersistentMap *)0x0;
    if (this_00 == (AbstractState *)0x0) {
      return (Node *)0x0;
    }
  }
  if (pPVar6 != (PersistentMap *)0x0) {
    uVar7 = PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
            ::operator==((PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
                          *)this_00,pPVar6);
    if ((uVar7 & 1) != 0) {
      return (Node *)0x0;
    }
    lVar3 = *(long *)(this + 0x30);
    uVar11 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
    uVar7 = *(long *)(this + 0x38) - lVar3 >> 3;
  }
  if (uVar7 <= uVar11) {
    local_48 = (AbstractState *)0x0;
    std::__ndk1::
    vector<v8::internal::compiler::CsaLoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::CsaLoadElimination::AbstractState_const*>>
    ::__append(this_01,(uVar11 - uVar7) + 1,&local_48);
    lVar3 = *(long *)this_01;
  }
  if (*(PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
        **)(lVar3 + uVar11 * 8) !=
      (PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
       *)this_00) {
    *(AbstractState **)(lVar3 + uVar11 * 8) = this_00;
    return param_1;
  }
  return param_1;
}

