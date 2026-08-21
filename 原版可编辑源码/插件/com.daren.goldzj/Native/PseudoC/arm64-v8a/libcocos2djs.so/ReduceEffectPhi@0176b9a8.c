
/* v8::internal::compiler::LoadElimination::ReduceEffectPhi(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::LoadElimination::ReduceEffectPhi(LoadElimination *this,Node *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  AbstractState *this_00;
  Zone *this_01;
  Node *pNVar5;
  ulong uVar6;
  long lVar7;
  vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
  *this_02;
  int iVar8;
  ulong uVar9;
  AbstractState *pAVar10;
  AbstractState *local_38;
  
  lVar3 = NodeProperties::GetEffectInput(param_1,0);
  plVar4 = (long *)NodeProperties::GetControlInput(param_1,0);
  this_02 = (vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
             *)(this + 0x10);
  uVar6 = (ulong)*(uint *)(lVar3 + 0x14) & 0xffffff;
  if (((ulong)(*(long *)(this + 0x18) - *(long *)this_02 >> 3) <= uVar6) ||
     (pAVar10 = *(AbstractState **)(*(long *)this_02 + uVar6 * 8), pAVar10 == (AbstractState *)0x0))
  {
    return (Node *)0x0;
  }
  if (*(short *)(*plVar4 + 0x10) == 1) {
    this_00 = (AbstractState *)ComputeLoopState(this,param_1,pAVar10);
    uVar1 = *(uint *)(param_1 + 0x14);
    lVar3 = *(long *)(this + 0x10);
    lVar7 = *(long *)(this + 0x18);
  }
  else {
    iVar2 = *(int *)(*(long *)param_1 + 0x18);
    if (1 < iVar2) {
      iVar8 = 1;
      do {
        lVar3 = NodeProperties::GetEffectInput(param_1,iVar8);
        uVar6 = (ulong)*(uint *)(lVar3 + 0x14) & 0xffffff;
        if ((ulong)(*(long *)(this + 0x18) - *(long *)(this + 0x10) >> 3) <= uVar6) {
          return (Node *)0x0;
        }
        if (*(long *)(*(long *)(this + 0x10) + uVar6 * 8) == 0) {
          return (Node *)0x0;
        }
        iVar8 = iVar8 + 1;
      } while (iVar2 != iVar8);
    }
    this_01 = *(Zone **)(this + 0x28);
    this_00 = *(AbstractState **)(this_01 + 0x10);
    if ((ulong)(*(long *)(this_01 + 0x18) - (long)this_00) < 0x210) {
      this_00 = (AbstractState *)Zone::NewExpand(this_01,0x210);
    }
    else {
      *(AbstractState **)(this_01 + 0x10) = this_00 + 0x210;
    }
    memcpy(this_00,pAVar10,0x210);
    if (1 < iVar2) {
      iVar8 = 1;
      do {
        lVar3 = NodeProperties::GetEffectInput(param_1,iVar8);
        uVar6 = (ulong)*(uint *)(lVar3 + 0x14) & 0xffffff;
        if (uVar6 < (ulong)(*(long *)(this + 0x18) - *(long *)(this + 0x10) >> 3)) {
          pAVar10 = *(AbstractState **)(*(long *)(this + 0x10) + uVar6 * 8);
        }
        else {
          pAVar10 = (AbstractState *)0x0;
        }
        AbstractState::Merge(this_00,pAVar10,*(Zone **)(this + 0x28));
        iVar8 = iVar8 + 1;
      } while (iVar2 != iVar8);
    }
    for (plVar4 = (long *)plVar4[3]; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      pNVar5 = (Node *)(plVar4 + (ulong)(*(uint *)(plVar4 + 2) >> 1) * 3 + 3);
      if ((*(uint *)(plVar4 + 2) & 1) == 0) {
        pNVar5 = *(Node **)pNVar5;
      }
      if (*(short *)(*(long *)pNVar5 + 0x10) == 0x23) {
        this_00 = (AbstractState *)UpdateStateForPhi(this,this_00,param_1,pNVar5);
      }
    }
    uVar1 = *(uint *)(param_1 + 0x14);
    lVar3 = *(long *)(this + 0x10);
    lVar7 = *(long *)(this + 0x18);
  }
  uVar9 = (ulong)uVar1 & 0xffffff;
  uVar6 = lVar7 - lVar3 >> 3;
  if (uVar9 < uVar6) {
    pAVar10 = *(AbstractState **)(lVar3 + uVar9 * 8);
    if (pAVar10 == this_00) {
      return (Node *)0x0;
    }
  }
  else {
    pAVar10 = (AbstractState *)0x0;
    if (this_00 == (AbstractState *)0x0) {
      return (Node *)0x0;
    }
  }
  if (pAVar10 != (AbstractState *)0x0) {
    uVar6 = AbstractState::Equals(this_00,pAVar10);
    if ((uVar6 & 1) != 0) {
      return (Node *)0x0;
    }
    lVar3 = *(long *)(this + 0x10);
    uVar9 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
    uVar6 = *(long *)(this + 0x18) - lVar3 >> 3;
  }
  if (uVar6 <= uVar9) {
    local_38 = (AbstractState *)0x0;
    std::__ndk1::
    vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
    ::__append(this_02,(uVar9 - uVar6) + 1,&local_38);
    lVar3 = *(long *)this_02;
  }
  *(AbstractState **)(lVar3 + uVar9 * 8) = this_00;
  return param_1;
}

