
/* v8::internal::compiler::LoadElimination::ReduceStoreElement(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::LoadElimination::ReduceStoreElement(LoadElimination *this,Node *param_1)

{
  AbstractElements *pAVar1;
  AbstractElements AVar2;
  AbstractElements AVar3;
  byte bVar4;
  long lVar5;
  Node *pNVar6;
  Node *pNVar7;
  long lVar8;
  Node *pNVar9;
  AbstractElements *this_00;
  ulong uVar10;
  AbstractState *this_01;
  long lVar11;
  vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
  *this_02;
  undefined8 uVar12;
  ulong uVar13;
  AbstractState *pAVar14;
  AbstractElements *pAVar15;
  Zone *this_03;
  AbstractState *local_68;
  
  lVar5 = ElementAccessOf(*(Operator **)param_1);
  pNVar6 = (Node *)NodeProperties::GetValueInput(param_1,0);
  pNVar7 = (Node *)NodeProperties::GetValueInput(param_1,1);
  lVar8 = NodeProperties::GetValueInput(param_1,2);
  pNVar9 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  this_02 = (vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
             *)(this + 0x10);
  if (((ulong)(*(long *)(this + 0x18) - *(long *)this_02 >> 3) <=
       ((ulong)*(uint *)(pNVar9 + 0x14) & 0xffffff)) ||
     (pAVar14 = *(AbstractState **)
                 (*(long *)this_02 + ((ulong)*(uint *)(pNVar9 + 0x14) & 0xffffff) * 8),
     pAVar14 == (AbstractState *)0x0)) {
    return (Node *)0x0;
  }
  this_00 = *(AbstractElements **)pAVar14;
  if (this_00 == (AbstractElements *)0x0) {
    if (lVar8 == 0) {
      return pNVar9;
    }
  }
  else {
    AVar2 = *(AbstractElements *)(lVar5 + 0x10);
    pAVar15 = this_00 + 0x10;
    do {
      if (*(long *)(pAVar15 + -0x10) != 0) {
        uVar12 = *(undefined8 *)(pAVar15 + -8);
        AVar3 = pAVar15[8];
        uVar10 = thunk_FUN_0176bf74(pNVar6);
        if ((((uVar10 & 1) != 0) && (uVar10 = thunk_FUN_0176bf74(pNVar7,uVar12), (uVar10 & 1) != 0))
           && ((AVar3 == AVar2 || (((byte)((char)AVar2 - 6U) < 3 && ((byte)((char)AVar3 - 6U) < 3)))
               ))) {
          lVar11 = *(long *)pAVar15;
          goto LAB_0176b41c;
        }
      }
      pAVar1 = pAVar15 + 0x10;
      pAVar15 = pAVar15 + 0x20;
    } while (pAVar1 != this_00 + 0x100);
    lVar11 = 0;
LAB_0176b41c:
    if (lVar11 == lVar8) {
      return pNVar9;
    }
  }
  this_01 = pAVar14;
  if (this_00 != (AbstractElements *)0x0) {
    this_03 = *(Zone **)(this + 0x28);
    lVar11 = AbstractElements::Kill(this_00,pNVar6,pNVar7,this_03);
    if (*(long *)pAVar14 != lVar11) {
      this_01 = *(AbstractState **)(this_03 + 0x10);
      if ((ulong)(*(long *)(this_03 + 0x18) - (long)this_01) < 0x210) {
        this_01 = (AbstractState *)Zone::NewExpand(this_03,0x210);
      }
      else {
        *(AbstractState **)(this_03 + 0x10) = this_01 + 0x210;
      }
      memcpy(this_01,pAVar14,0x210);
      *(long *)this_01 = lVar11;
    }
  }
  bVar4 = *(byte *)(lVar5 + 0x10);
  if ((bVar4 < 0xe) && ((1 << (ulong)(bVar4 & 0x1f) & 0x31c0U) != 0)) {
    this_01 = (AbstractState *)
              AbstractState::AddElement
                        (this_01,pNVar6,pNVar7,lVar8,bVar4,*(undefined8 *)(this + 0x28));
  }
  lVar5 = *(long *)(this + 0x10);
  uVar13 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
  uVar10 = *(long *)(this + 0x18) - lVar5 >> 3;
  if (uVar13 < uVar10) {
    pAVar14 = *(AbstractState **)(lVar5 + uVar13 * 8);
    if (pAVar14 == this_01) {
      return (Node *)0x0;
    }
  }
  else {
    pAVar14 = (AbstractState *)0x0;
    if (this_01 == (AbstractState *)0x0) {
      return (Node *)0x0;
    }
  }
  if (pAVar14 != (AbstractState *)0x0) {
    uVar10 = AbstractState::Equals(this_01,pAVar14);
    if ((uVar10 & 1) != 0) {
      return (Node *)0x0;
    }
    lVar5 = *(long *)(this + 0x10);
    uVar13 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
    uVar10 = *(long *)(this + 0x18) - lVar5 >> 3;
  }
  if (uVar10 <= uVar13) {
    local_68 = (AbstractState *)0x0;
    std::__ndk1::
    vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
    ::__append(this_02,(uVar13 - uVar10) + 1,&local_68);
    lVar5 = *(long *)this_02;
  }
  *(AbstractState **)(lVar5 + uVar13 * 8) = this_01;
  return param_1;
}

