
/* v8::internal::compiler::LoadElimination::ReduceLoadElement(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::LoadElimination::ReduceLoadElement(LoadElimination *this,Node *param_1)

{
  long *plVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  AbstractState *pAVar7;
  long lVar8;
  Node *pNVar9;
  ulong uVar10;
  vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
  *this_00;
  ulong uVar11;
  AbstractState *pAVar12;
  long *plVar13;
  byte bVar14;
  uint uVar15;
  long lVar16;
  Node *pNVar17;
  AbstractState *local_68;
  
  uVar3 = NodeProperties::GetValueInput(param_1,0);
  uVar4 = NodeProperties::GetValueInput(param_1,1);
  lVar5 = NodeProperties::GetEffectInput(param_1,0);
  this_00 = (vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
             *)(this + 0x10);
  uVar10 = (ulong)*(uint *)(lVar5 + 0x14) & 0xffffff;
  if (((ulong)(*(long *)(this + 0x18) - *(long *)this_00 >> 3) <= uVar10) ||
     (pAVar12 = *(AbstractState **)(*(long *)this_00 + uVar10 * 8), pAVar12 == (AbstractState *)0x0)
     ) {
    return (Node *)0x0;
  }
  lVar6 = ElementAccessOf(*(Operator **)param_1);
  bVar14 = *(byte *)(lVar6 + 0x10);
  if (0xd < bVar14) {
    return (Node *)0x0;
  }
  uVar15 = (uint)bVar14;
  if ((1 << (ulong)(uVar15 & 0x1f) & 0x31c0U) == 0) {
    return (Node *)0x0;
  }
  lVar8 = *(long *)pAVar12;
  if (lVar8 != 0) {
    plVar13 = (long *)(lVar8 + 0x10);
    do {
      if (plVar13[-2] != 0) {
        lVar16 = plVar13[-1];
        bVar2 = *(byte *)(plVar13 + 1);
        uVar10 = thunk_FUN_0176bf74(uVar3);
        if ((((uVar10 & 1) != 0) && (uVar10 = thunk_FUN_0176bf74(uVar4,lVar16), (uVar10 & 1) != 0))
           && ((bVar2 == uVar15 || (((uVar15 - 6 & 0xff) < 3 && ((bVar2 - 6 & 0xff) < 3)))))) {
          pNVar17 = (Node *)*plVar13;
          if (pNVar17 != (Node *)0x0) {
            uVar15 = (byte)pNVar17[0x17] & 0xf;
            pNVar9 = pNVar17 + 0x20;
            if (uVar15 == 0xf) {
              uVar15 = *(uint *)(*(long *)pNVar9 + 8);
              pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
            }
            if (((int)uVar15 < 1) || (*(long *)pNVar9 != 0)) {
              local_68 = *(AbstractState **)(pNVar17 + 8);
              if ((local_68 == *(AbstractState **)(param_1 + 8)) ||
                 (uVar10 = Type::SlowIs((Type *)&local_68), (uVar10 & 1) != 0)) {
                (**(code **)(**(long **)(this + 8) + 0x20))
                          (*(long **)(this + 8),param_1,pNVar17,lVar5,0);
                return pNVar17;
              }
              bVar14 = *(byte *)(lVar6 + 0x10);
            }
          }
          break;
        }
      }
      plVar1 = plVar13 + 2;
      plVar13 = plVar13 + 4;
    } while (plVar1 != (long *)(lVar8 + 0x100));
  }
  pAVar12 = (AbstractState *)
            AbstractState::AddElement
                      (pAVar12,uVar3,uVar4,param_1,bVar14,*(undefined8 *)(this + 0x28));
  lVar5 = *(long *)(this + 0x10);
  uVar11 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
  uVar10 = *(long *)(this + 0x18) - lVar5 >> 3;
  if (uVar11 < uVar10) {
    pAVar7 = *(AbstractState **)(lVar5 + uVar11 * 8);
    if (pAVar7 == pAVar12) {
      return (Node *)0x0;
    }
  }
  else {
    pAVar7 = (AbstractState *)0x0;
    if (pAVar12 == (AbstractState *)0x0) {
      return (Node *)0x0;
    }
  }
  if (pAVar7 != (AbstractState *)0x0) {
    uVar10 = AbstractState::Equals(pAVar12,pAVar7);
    if ((uVar10 & 1) != 0) {
      return (Node *)0x0;
    }
    lVar5 = *(long *)(this + 0x10);
    uVar11 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
    uVar10 = *(long *)(this + 0x18) - lVar5 >> 3;
  }
  if (uVar10 <= uVar11) {
    local_68 = (AbstractState *)0x0;
    std::__ndk1::
    vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
    ::__append(this_00,(uVar11 - uVar10) + 1,&local_68);
    lVar5 = *(long *)this_00;
  }
  *(AbstractState **)(lVar5 + uVar11 * 8) = pAVar12;
  return param_1;
}

