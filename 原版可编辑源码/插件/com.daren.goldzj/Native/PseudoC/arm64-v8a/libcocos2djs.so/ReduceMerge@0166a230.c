
/* v8::internal::compiler::BranchElimination::ReduceMerge(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::BranchElimination::ReduceMerge(BranchElimination *this,Node *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  Node *pNVar5;
  ulong uVar6;
  Node *pNVar7;
  long lVar8;
  undefined8 local_38;
  
  uVar2 = (byte)param_1[0x17] & 0xf;
  pNVar7 = param_1 + 0x20;
  if (uVar2 == 0xf) {
    uVar2 = *(uint *)(*(long *)pNVar7 + 8);
    pNVar7 = (Node *)(*(long *)pNVar7 + 0x10);
  }
  if (uVar2 != 0) {
    lVar3 = (long)(int)uVar2 << 3;
    pNVar5 = pNVar7;
    do {
      uVar6 = (ulong)*(uint *)(*(long *)pNVar5 + 0x14) & 0xffffff;
      if ((*(ulong *)(this + 0x40) <= uVar6) ||
         ((*(ulong *)(*(long *)(this + 0x38) + (uVar6 >> 3 & 0x1ffff8)) >>
           ((ulong)*(uint *)(*(long *)pNVar5 + 0x14) & 0x3f) & 1) == 0)) {
        return 0;
      }
      lVar3 = lVar3 + -8;
      pNVar5 = pNVar5 + 8;
    } while (lVar3 != 0);
  }
  lVar3 = *(long *)(this + 0x18);
  lVar4 = *(long *)(this + 0x20);
  uVar6 = (ulong)*(uint *)(*(long *)pNVar7 + 0x14) & 0xffffff;
  if (uVar6 < (ulong)(lVar4 - lVar3 >> 3)) {
    local_38 = *(undefined8 *)(lVar3 + uVar6 * 8);
  }
  else {
    local_38 = 0;
  }
  if (uVar2 != 1) {
    lVar8 = (long)(int)uVar2 * 8 + -0x10;
    while( true ) {
      pNVar7 = pNVar7 + 8;
      uVar6 = (ulong)*(uint *)(*(long *)pNVar7 + 0x14) & 0xffffff;
      if (uVar6 < (ulong)(lVar4 - lVar3 >> 3)) {
        uVar1 = *(undefined8 *)(lVar3 + uVar6 * 8);
      }
      else {
        uVar1 = 0;
      }
      FunctionalList<v8::internal::compiler::BranchElimination::BranchCondition>::
      ResetToCommonAncestor
                ((FunctionalList<v8::internal::compiler::BranchElimination::BranchCondition> *)
                 &local_38,uVar1);
      if (lVar8 == 0) break;
      lVar3 = *(long *)(this + 0x18);
      lVar4 = *(long *)(this + 0x20);
      lVar8 = lVar8 + -8;
    }
  }
  uVar1 = UpdateConditions(this,param_1,local_38);
  return uVar1;
}

