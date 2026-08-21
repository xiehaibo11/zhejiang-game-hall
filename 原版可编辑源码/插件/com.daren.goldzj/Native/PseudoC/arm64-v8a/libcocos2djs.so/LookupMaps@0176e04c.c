
/* v8::internal::compiler::LoadElimination::AbstractState::LookupMaps(v8::internal::compiler::Node*,
   v8::internal::ZoneHandleSet<v8::internal::Map>*) const */

undefined8 __thiscall
v8::internal::compiler::LoadElimination::AbstractState::LookupMaps
          (AbstractState *this,Node *param_1,ZoneHandleSet *param_2)

{
  short sVar1;
  long *plVar2;
  Node *pNVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  Node *pNVar7;
  
  if (*(long *)(this + 0x208) == 0) {
    return 0;
  }
  while (((sVar1 = *(short *)(*(long *)param_1 + 0x10), sVar1 == 0x28 || (sVar1 == 0xde)) ||
         (sVar1 == 0x3a))) {
    pNVar3 = param_1 + 0x20;
    uVar6 = *(uint *)(param_1 + 0x14) >> 0x18 & 0xf;
    pNVar7 = pNVar3;
    if (uVar6 == 0xf) {
      uVar6 = *(uint *)(*(long *)pNVar3 + 8);
      pNVar7 = (Node *)(*(long *)pNVar3 + 0x10);
    }
    if ((0 < (int)uVar6) && (*(long *)pNVar7 == 0)) break;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar3 = (Node *)(*(long *)pNVar3 + 0x10);
    }
    param_1 = *(Node **)pNVar3;
  }
  plVar2 = (long *)(*(long *)(this + 0x208) + 8);
  plVar5 = (long *)*plVar2;
  plVar4 = plVar2;
  if (plVar5 != (long *)0x0) {
    do {
      if ((Node *)plVar5[4] >= param_1) {
        plVar4 = plVar5;
      }
      plVar5 = (long *)plVar5[(Node *)plVar5[4] < param_1];
    } while (plVar5 != (long *)0x0);
    if ((plVar4 != plVar2) && ((Node *)plVar4[4] <= param_1)) {
      *(long *)param_2 = plVar4[5];
      return 1;
    }
  }
  return 0;
}

