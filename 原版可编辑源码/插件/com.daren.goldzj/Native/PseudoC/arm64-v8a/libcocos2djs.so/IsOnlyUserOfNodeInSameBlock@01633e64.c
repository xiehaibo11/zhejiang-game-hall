
/* v8::internal::compiler::InstructionSelector::IsOnlyUserOfNodeInSameBlock(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) const */

undefined8 __thiscall
v8::internal::compiler::InstructionSelector::IsOnlyUserOfNodeInSameBlock
          (InstructionSelector *this,Node *param_1,Node *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  Node *pNVar4;
  long *plVar5;
  
  lVar2 = Schedule::block(*(Schedule **)(this + 0x28),param_1);
  lVar3 = Schedule::block(*(Schedule **)(this + 0x28),param_2);
  if (lVar2 == lVar3) {
    plVar1 = (long *)*(long *)(param_2 + 0x18);
    do {
      if (plVar1 == (long *)0x0) {
        return 1;
      }
      plVar5 = (long *)*plVar1;
      pNVar4 = (Node *)(plVar1 + (ulong)(*(uint *)(plVar1 + 2) >> 1) * 3 + 3);
      if ((*(uint *)(plVar1 + 2) & 1) == 0) {
        pNVar4 = *(Node **)pNVar4;
      }
      plVar1 = plVar5;
    } while ((pNVar4 == param_1) ||
            (lVar3 = Schedule::block(*(Schedule **)(this + 0x28),pNVar4), lVar3 != lVar2));
  }
  return 0;
}

