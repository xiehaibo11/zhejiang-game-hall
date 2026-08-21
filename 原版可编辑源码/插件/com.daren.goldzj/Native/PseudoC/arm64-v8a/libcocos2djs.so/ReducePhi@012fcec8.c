
/* v8::internal::compiler::TypedOptimization::ReducePhi(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::TypedOptimization::ReducePhi(TypedOptimization *this,Node *param_1)

{
  Node *pNVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  Node *pNVar7;
  long lVar8;
  long lVar9;
  long local_48;
  
  plVar3 = (long *)NodeProperties::GetControlInput(param_1,0);
  if (*(short *)(*plVar3 + 0x10) != 1) {
    uVar6 = *(uint *)(param_1 + 0x14);
    pNVar1 = param_1 + 0x20;
    uVar2 = *(uint *)(*(long *)param_1 + 0x14);
    pNVar7 = pNVar1;
    if ((~uVar6 & 0xf000000) == 0) {
      pNVar7 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    lVar8 = *(long *)(*(long *)pNVar7 + 8);
    if (1 < (int)uVar2) {
      lVar9 = 0;
      while( true ) {
        pNVar7 = pNVar1;
        if ((~uVar6 & 0xf000000) == 0) {
          pNVar7 = (Node *)(*(long *)pNVar1 + 0x10);
        }
        lVar8 = Type::Union(lVar8,*(undefined8 *)(*(long *)(pNVar7 + lVar9 * 8 + 8) + 8),
                            *(undefined8 *)**(undefined8 **)(this + 0x18));
        if ((ulong)uVar2 - 2 == lVar9) break;
        uVar6 = *(uint *)(param_1 + 0x14);
        lVar9 = lVar9 + 1;
      }
    }
    local_48 = *(long *)(param_1 + 8);
    if ((local_48 != lVar8) && (uVar4 = Type::SlowIs((Type *)&local_48,lVar8), (uVar4 & 1) == 0)) {
      uVar5 = Type::Intersect(local_48,lVar8,*(undefined8 *)**(undefined8 **)(this + 0x18));
      *(undefined8 *)(param_1 + 8) = uVar5;
      return param_1;
    }
  }
  return (Node *)0x0;
}

