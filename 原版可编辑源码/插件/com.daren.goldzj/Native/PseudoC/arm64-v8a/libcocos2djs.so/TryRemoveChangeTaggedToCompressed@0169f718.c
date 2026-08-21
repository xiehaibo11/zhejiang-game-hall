
/* v8::internal::compiler::DecompressionOptimizer::TryRemoveChangeTaggedToCompressed(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::DecompressionOptimizer::TryRemoveChangeTaggedToCompressed
          (DecompressionOptimizer *this,Node *param_1)

{
  char cVar1;
  Operator *pOVar2;
  uint uVar3;
  Node *pNVar4;
  
  pNVar4 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  pNVar4 = *(Node **)pNVar4;
  uVar3 = 0;
  if (*(uint *)(this + 0x18) <= *(uint *)(pNVar4 + 0x10)) {
    uVar3 = *(uint *)(pNVar4 + 0x10) - *(uint *)(this + 0x18);
  }
  if ((uVar3 & 0xff) != 1) {
    return;
  }
  pOVar2 = *(Operator **)pNVar4;
  uVar3 = (uint)*(ushort *)(pOVar2 + 0x10);
  if (*(ushort *)(pOVar2 + 0x10) < 0x1e7) {
    if (uVar3 - 0x1aa < 2) {
LAB_0169f79c:
      cVar1 = LoadRepresentationOf(pOVar2);
      if ((byte)(cVar1 - 9U) < 2) goto LAB_0169f854;
      pOVar2 = *(Operator **)pNVar4;
      uVar3 = (uint)*(ushort *)(pOVar2 + 0x10);
    }
    else if (uVar3 == 0x1f) goto LAB_0169f854;
  }
  else if ((uVar3 == 0x1ef) || (uVar3 == 0x1e7)) goto LAB_0169f79c;
  if (uVar3 == 0x23) {
    cVar1 = PhiRepresentationOf(pOVar2);
    if ((byte)(cVar1 - 9U) < 2) goto LAB_0169f854;
    pOVar2 = *(Operator **)pNVar4;
  }
  uVar3 = (uint)*(ushort *)(pOVar2 + 0x10);
  if (*(ushort *)(pOVar2 + 0x10) < 0x1e7) {
    if (uVar3 - 0x1aa < 2) {
LAB_0169f80c:
      cVar1 = LoadRepresentationOf(pOVar2);
      if ((byte)(cVar1 - 7U) < 2) goto LAB_0169f854;
      pOVar2 = *(Operator **)pNVar4;
      uVar3 = (uint)*(ushort *)(pOVar2 + 0x10);
    }
    else if (uVar3 == 0x1e) goto LAB_0169f854;
  }
  else if ((uVar3 == 0x1ef) || (uVar3 == 0x1e7)) goto LAB_0169f80c;
  if (uVar3 == 0x23) {
    cVar1 = PhiRepresentationOf(pOVar2);
    if ((byte)(cVar1 - 7U) < 2) goto LAB_0169f854;
    uVar3 = (uint)*(ushort *)(*(long *)pNVar4 + 0x10);
  }
  if (uVar3 != 0x1cf) {
    return;
  }
LAB_0169f854:
  NodeProperties::ReplaceUses(param_1,pNVar4,(Node *)0x0,(Node *)0x0,(Node *)0x0);
  return;
}

