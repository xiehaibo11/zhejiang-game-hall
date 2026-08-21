
/* v8::internal::compiler::InstructionSelector::CanCover(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) const */

bool __thiscall
v8::internal::compiler::InstructionSelector::CanCover
          (InstructionSelector *this,Node *param_1,Node *param_2)

{
  uint uVar1;
  Node *pNVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  Node *pNVar8;
  
  lVar4 = Schedule::block(*(Schedule **)(this + 0x28),param_2);
  lVar5 = Schedule::block(*(Schedule **)(this + 0x28),param_1);
  if (lVar4 == lVar5) {
    if ((~*(byte *)(*(long *)param_2 + 0x12) & 0x7c) == 0) {
      plVar7 = *(long **)(param_2 + 0x18);
      if (plVar7 != (long *)0x0) {
        pNVar8 = (Node *)(plVar7 + (ulong)(*(uint *)(plVar7 + 2) >> 1) * 3 + 3);
        if ((*(uint *)(plVar7 + 2) & 1) == 0) {
          pNVar8 = *(Node **)pNVar8;
        }
        if (pNVar8 == param_1) {
          return *plVar7 == 0;
        }
      }
    }
    else if (*(int *)(*(long *)(this + 0xf8) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 4) ==
             *(int *)(*(long *)(this + 0xf8) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 4)) {
      plVar7 = (long *)*(long *)(param_2 + 0x18);
      do {
        plVar3 = plVar7;
        if (plVar3 == (long *)0x0) {
          return true;
        }
        uVar1 = *(uint *)(plVar3 + 2);
        plVar7 = (long *)*plVar3;
        pNVar8 = (Node *)(plVar3 + (ulong)(uVar1 >> 1) * 3 + 3);
        lVar4 = 0x10;
        if ((uVar1 & 1) != 0) {
          lVar4 = 0x20;
        }
        pNVar2 = pNVar8;
        if ((uVar1 & 1) == 0) {
          pNVar2 = *(Node **)pNVar8;
        }
      } while ((pNVar2 == param_1) ||
              (uVar6 = NodeProperties::IsValueEdge(plVar3,pNVar8 + (ulong)(uVar1 >> 1) * 8 + lVar4),
              (uVar6 & 1) == 0));
    }
  }
  return false;
}

