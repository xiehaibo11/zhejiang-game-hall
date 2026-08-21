
/* v8::internal::compiler::LoadElimination::ReduceMaybeGrowFastElements(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::LoadElimination::ReduceMaybeGrowFastElements
          (LoadElimination *this,Node *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  AbstractState *pAVar5;
  undefined8 uVar6;
  ulong uVar7;
  vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
  *this_00;
  AbstractState *pAVar8;
  ulong uVar9;
  Zone *this_01;
  Node *local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  AbstractState *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  pcVar2 = (char *)GrowFastElementsParametersOf(*(Operator **)param_1);
  cVar1 = *pcVar2;
  uVar3 = NodeProperties::GetValueInput(param_1,0);
  lVar4 = NodeProperties::GetEffectInput(param_1,0);
  this_00 = (vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
             *)(this + 0x10);
  uVar7 = (ulong)*(uint *)(lVar4 + 0x14) & 0xffffff;
  if ((uVar7 < (ulong)(*(long *)(this + 0x18) - *(long *)this_00 >> 3)) &&
     (pAVar8 = *(AbstractState **)(*(long *)this_00 + uVar7 * 8), pAVar8 != (AbstractState *)0x0)) {
    if (cVar1 == '\0') {
      uVar6 = *(undefined8 *)(this + 0x28);
      pAVar5 = (AbstractState *)(*(long *)(*(long *)(this + 0x30) + 0x168) + 0x1e8);
    }
    else {
      local_68 = (AbstractState *)(*(long *)(*(long *)(this + 0x30) + 0x168) + 0xe0);
      ZoneHandleSet<v8::internal::Map>::insert
                ((ZoneHandleSet<v8::internal::Map> *)&local_68,
                 *(long *)(*(long *)(this + 0x30) + 0x168) + 0xe8,*(undefined8 *)(this + 0x28));
      uVar6 = *(undefined8 *)(this + 0x28);
      pAVar5 = local_68;
    }
    pAVar8 = (AbstractState *)AbstractState::SetMaps(pAVar8,param_1,pAVar5,uVar6);
    this_01 = *(Zone **)(this + 0x28);
    local_58 = 0;
    local_68 = pAVar8;
    uStack_60 = uVar3;
    if ((*(AbstractField **)(pAVar8 + 0x10) == (AbstractField *)0x0) ||
       (lVar4 = AbstractField::Kill(*(AbstractField **)(pAVar8 + 0x10),&local_68,0,this_01),
       *(long *)(pAVar8 + 0x10) == lVar4)) {
      pAVar5 = (AbstractState *)0x0;
    }
    else {
      pAVar5 = *(AbstractState **)(this_01 + 0x10);
      if ((ulong)(*(long *)(this_01 + 0x18) - (long)pAVar5) < 0x210) {
        pAVar5 = (AbstractState *)Zone::NewExpand(this_01,0x210);
      }
      else {
        *(AbstractState **)(this_01 + 0x10) = pAVar5 + 0x210;
      }
      memcpy(pAVar5,pAVar8,0x210);
      *(long *)(pAVar5 + 0x10) = lVar4;
    }
    local_80 = 7;
    local_78 = 0;
    uStack_70 = 0;
    if (pAVar5 != (AbstractState *)0x0) {
      pAVar8 = pAVar5;
    }
    local_88 = param_1;
    pAVar8 = (AbstractState *)
             AbstractState::AddField
                       (pAVar8,uVar3,0x200000001,&local_88,*(undefined8 *)(this + 0x28));
    lVar4 = *(long *)(this + 0x10);
    pAVar5 = (AbstractState *)0x0;
    uVar9 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
    uVar7 = *(long *)(this + 0x18) - lVar4 >> 3;
    if (uVar9 < uVar7) {
      pAVar5 = *(AbstractState **)(lVar4 + uVar9 * 8);
    }
    if (pAVar5 != pAVar8) {
      if (pAVar5 != (AbstractState *)0x0) {
        uVar7 = AbstractState::Equals(pAVar8,pAVar5);
        if ((uVar7 & 1) != 0) {
          return (Node *)0x0;
        }
        lVar4 = *(long *)(this + 0x10);
        uVar9 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
        uVar7 = *(long *)(this + 0x18) - lVar4 >> 3;
      }
      if (uVar7 <= uVar9) {
        local_68 = (AbstractState *)0x0;
        std::__ndk1::
        vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
        ::__append(this_00,(uVar9 - uVar7) + 1,&local_68);
        lVar4 = *(long *)this_00;
      }
      *(AbstractState **)(lVar4 + uVar9 * 8) = pAVar8;
      return param_1;
    }
  }
  return (Node *)0x0;
}

