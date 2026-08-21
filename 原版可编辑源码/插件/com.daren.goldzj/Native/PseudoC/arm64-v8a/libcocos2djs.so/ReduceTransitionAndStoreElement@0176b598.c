
/* v8::internal::compiler::LoadElimination::ReduceTransitionAndStoreElement(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::LoadElimination::ReduceTransitionAndStoreElement
          (LoadElimination *this,Node *param_1)

{
  short sVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  AbstractState *pAVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong *puVar10;
  long *plVar11;
  long *plVar12;
  uint uVar13;
  ulong *puVar14;
  vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
  *this_00;
  AbstractState *this_01;
  ulong uVar15;
  Zone *pZVar16;
  long local_70;
  AbstractState *local_68;
  long *plStack_60;
  undefined8 local_58;
  
  plVar2 = (long *)NodeProperties::GetValueInput(param_1,0);
  uVar3 = DoubleMapParameterOf(*(Operator **)param_1);
  uVar4 = FastMapParameterOf(*(Operator **)param_1);
  lVar5 = NodeProperties::GetEffectInput(param_1,0);
  this_00 = (vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
             *)(this + 0x10);
  uVar8 = (ulong)*(uint *)(lVar5 + 0x14) & 0xffffff;
  if (((ulong)(*(long *)(this + 0x18) - *(long *)this_00 >> 3) <= uVar8) ||
     (this_01 = *(AbstractState **)(*(long *)this_00 + uVar8 * 8), this_01 == (AbstractState *)0x0))
  {
    return (Node *)0x0;
  }
  local_70 = 1;
  plVar9 = plVar2;
  plStack_60 = plVar2;
  if (*(long *)(this_01 + 0x208) != 0) {
    while (((sVar1 = *(short *)(*plVar9 + 0x10), sVar1 == 0x28 || (sVar1 == 0xde)) ||
           (sVar1 == 0x3a))) {
      puVar10 = (ulong *)(plVar9 + 4);
      uVar13 = *(uint *)((long)plVar9 + 0x14) >> 0x18 & 0xf;
      puVar14 = puVar10;
      if (uVar13 == 0xf) {
        uVar13 = *(uint *)(*puVar10 + 8);
        puVar14 = (ulong *)(*puVar10 + 0x10);
      }
      if ((0 < (int)uVar13) && (*puVar14 == 0)) break;
      if ((~*(uint *)((long)plVar9 + 0x14) & 0xf000000) == 0) {
        puVar10 = (ulong *)(*puVar10 + 0x10);
      }
      plVar9 = (long *)*puVar10;
    }
    plVar7 = (long *)(*(long *)(this_01 + 0x208) + 8);
    plVar12 = (long *)*plVar7;
    plVar11 = plVar7;
    if (plVar12 != (long *)0x0) {
      do {
        if ((long *)plVar12[4] >= plVar9) {
          plVar11 = plVar12;
        }
        plVar12 = (long *)plVar12[(long *)plVar12[4] < plVar9];
      } while (plVar12 != (long *)0x0);
      if ((plVar11 != plVar7) && ((long *)plVar11[4] <= plVar9)) {
        local_70 = plVar11[5];
        ZoneHandleSet<v8::internal::Map>::insert
                  ((ZoneHandleSet<v8::internal::Map> *)&local_70,uVar3,*(undefined8 *)(this + 0x28))
        ;
        ZoneHandleSet<v8::internal::Map>::insert
                  ((ZoneHandleSet<v8::internal::Map> *)&local_70,uVar4,*(undefined8 *)(this + 0x28))
        ;
        pZVar16 = *(Zone **)(this + 0x28);
        local_58 = 0;
        pAVar6 = this_01;
        local_68 = this_01;
        if ((*(AbstractMaps **)(this_01 + 0x208) != (AbstractMaps *)0x0) &&
           (lVar5 = AbstractMaps::Kill(*(AbstractMaps **)(this_01 + 0x208),
                                       (AliasStateInfo *)&local_68,pZVar16),
           *(long *)(this_01 + 0x208) != lVar5)) {
          pAVar6 = *(AbstractState **)(pZVar16 + 0x10);
          if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pAVar6) < 0x210) {
            pAVar6 = (AbstractState *)Zone::NewExpand(pZVar16,0x210);
          }
          else {
            *(AbstractState **)(pZVar16 + 0x10) = pAVar6 + 0x210;
          }
          memcpy(pAVar6,this_01,0x208);
          *(long *)(pAVar6 + 0x208) = lVar5;
        }
        this_01 = (AbstractState *)
                  AbstractState::SetMaps(pAVar6,plVar2,local_70,*(undefined8 *)(this + 0x28));
      }
    }
  }
  pZVar16 = *(Zone **)(this + 0x28);
  local_58 = 0;
  local_68 = this_01;
  plStack_60 = plVar2;
  if ((*(AbstractField **)(this_01 + 0x10) == (AbstractField *)0x0) ||
     (lVar5 = AbstractField::Kill(*(AbstractField **)(this_01 + 0x10),&local_68,0,pZVar16),
     *(long *)(this_01 + 0x10) == lVar5)) {
    pAVar6 = (AbstractState *)0x0;
  }
  else {
    pAVar6 = *(AbstractState **)(pZVar16 + 0x10);
    if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pAVar6) < 0x210) {
      pAVar6 = (AbstractState *)Zone::NewExpand(pZVar16,0x210);
    }
    else {
      *(AbstractState **)(pZVar16 + 0x10) = pAVar6 + 0x210;
    }
    memcpy(pAVar6,this_01,0x210);
    *(long *)(pAVar6 + 0x10) = lVar5;
  }
  lVar5 = *(long *)(this + 0x10);
  if (pAVar6 != (AbstractState *)0x0) {
    this_01 = pAVar6;
  }
  uVar15 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
  uVar8 = *(long *)(this + 0x18) - lVar5 >> 3;
  if (uVar15 < uVar8) {
    pAVar6 = *(AbstractState **)(lVar5 + uVar15 * 8);
    if (pAVar6 == this_01) {
      return (Node *)0x0;
    }
  }
  else {
    pAVar6 = (AbstractState *)0x0;
    if (this_01 == (AbstractState *)0x0) {
      return (Node *)0x0;
    }
  }
  if (pAVar6 != (AbstractState *)0x0) {
    uVar8 = AbstractState::Equals(this_01,pAVar6);
    if ((uVar8 & 1) != 0) {
      return (Node *)0x0;
    }
    lVar5 = *(long *)(this + 0x10);
    uVar15 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
    uVar8 = *(long *)(this + 0x18) - lVar5 >> 3;
  }
  if (uVar8 <= uVar15) {
    local_68 = (AbstractState *)0x0;
    std::__ndk1::
    vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
    ::__append(this_00,(uVar15 - uVar8) + 1,&local_68);
    lVar5 = *(long *)this_00;
  }
  *(AbstractState **)(lVar5 + uVar15 * 8) = this_01;
  return param_1;
}

