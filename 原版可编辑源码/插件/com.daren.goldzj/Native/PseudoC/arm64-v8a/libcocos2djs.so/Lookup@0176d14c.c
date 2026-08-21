
/* v8::internal::compiler::LoadElimination::AbstractMaps::Lookup(v8::internal::compiler::Node*,
   v8::internal::ZoneHandleSet<v8::internal::Map>*) const */

undefined8 __thiscall
v8::internal::compiler::LoadElimination::AbstractMaps::Lookup
          (AbstractMaps *this,Node *param_1,ZoneHandleSet *param_2)

{
  Node *pNVar1;
  short sVar2;
  undefined8 uVar3;
  AbstractMaps *pAVar4;
  AbstractMaps *pAVar5;
  AbstractMaps *pAVar6;
  uint uVar7;
  Node *pNVar8;
  
  while (((sVar2 = *(short *)(*(long *)param_1 + 0x10), sVar2 == 0x28 || (sVar2 == 0xde)) ||
         (sVar2 == 0x3a))) {
    pNVar1 = param_1 + 0x20;
    uVar7 = *(uint *)(param_1 + 0x14) >> 0x18 & 0xf;
    pNVar8 = pNVar1;
    if (uVar7 == 0xf) {
      uVar7 = *(uint *)(*(long *)pNVar1 + 8);
      pNVar8 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    if ((0 < (int)uVar7) && (*(long *)pNVar8 == 0)) break;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      uVar3 = FUN_0176d150(*(long *)pNVar1 + 0x10);
      return uVar3;
    }
    param_1 = *(Node **)pNVar1;
  }
  pAVar4 = this + 8;
  pAVar6 = *(AbstractMaps **)pAVar4;
  pAVar5 = pAVar4;
  if (pAVar6 != (AbstractMaps *)0x0) {
    do {
      if (*(Node **)(pAVar6 + 0x20) >= param_1) {
        pAVar5 = pAVar6;
      }
      pAVar6 = *(AbstractMaps **)(pAVar6 + (ulong)(*(Node **)(pAVar6 + 0x20) < param_1) * 8);
    } while (pAVar6 != (AbstractMaps *)0x0);
    if ((pAVar5 != pAVar4) && (*(Node **)(pAVar5 + 0x20) <= param_1)) {
      *(undefined8 *)param_2 = *(undefined8 *)(pAVar5 + 0x28);
      return 1;
    }
  }
  return 0;
}

