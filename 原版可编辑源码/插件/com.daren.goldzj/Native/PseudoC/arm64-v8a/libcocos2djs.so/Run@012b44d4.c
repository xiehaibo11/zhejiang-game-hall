
/* v8::internal::compiler::CFGBuilder::Run() */

void __thiscall v8::internal::compiler::CFGBuilder::Run(CFGBuilder *this)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  Node *pNVar4;
  undefined8 *puVar5;
  Node *pNVar6;
  ulong uVar7;
  ulong uVar8;
  
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(this + 0x70);
  Queue(this,*(Node **)(*(long *)(*(long *)(this + 8) + 8) + 0x10));
  lVar2 = *(long *)(this + 0x58);
  while (lVar2 != 0) {
    TickCounter::DoTick(*(TickCounter **)(*(long *)(this + 8) + 0xe8));
    uVar7 = *(ulong *)(this + 0x50);
    puVar3 = *(undefined8 **)(this + 0x28);
    uVar8 = uVar7 + 1;
    pNVar6 = *(Node **)(*(long *)((long)puVar3 + (uVar7 >> 6 & 0x3fffffffffffff8)) +
                       (uVar7 & 0x1ff) * 8);
    *(long *)(this + 0x58) = *(long *)(this + 0x58) + -1;
    *(ulong *)(this + 0x50) = uVar8;
    if (0x3ff < uVar8) {
      puVar5 = (undefined8 *)*puVar3;
      if ((*(long *)(this + 0x68) == 0) || (*(ulong *)(*(long *)(this + 0x68) + 8) < 0x201)) {
        puVar5[1] = 0x200;
        *puVar5 = *(undefined8 *)(this + 0x68);
        puVar3 = *(undefined8 **)(this + 0x28);
        uVar8 = *(ulong *)(this + 0x50);
        *(undefined8 **)(this + 0x68) = puVar5;
      }
      *(undefined8 **)(this + 0x28) = puVar3 + 1;
      *(ulong *)(this + 0x50) = uVar8 - 0x200;
    }
    iVar1 = NodeProperties::PastControlIndex(pNVar6);
    uVar8 = NodeProperties::PastEffectIndex(pNVar6);
    if ((int)uVar8 < iVar1) {
      uVar7 = -(uVar8 >> 0x1f & 1) & 0xfffffff800000000 | (uVar8 & 0xffffffff) << 3;
      iVar1 = iVar1 - (int)uVar8;
      do {
        pNVar4 = pNVar6 + 0x20;
        if ((~*(uint *)(pNVar6 + 0x14) & 0xf000000) == 0) {
          pNVar4 = (Node *)(*(long *)(pNVar6 + 0x20) + 0x10);
        }
        Queue(this,*(Node **)(pNVar4 + uVar7));
        iVar1 = iVar1 + -1;
        uVar7 = uVar7 + 8;
      } while (iVar1 != 0);
    }
    lVar2 = *(long *)(this + 0x58);
  }
  for (puVar3 = *(undefined8 **)(this + 0x70); puVar3 != *(undefined8 **)(this + 0x78);
      puVar3 = puVar3 + 1) {
    ConnectBlocks(this,(Node *)*puVar3);
  }
  return;
}

