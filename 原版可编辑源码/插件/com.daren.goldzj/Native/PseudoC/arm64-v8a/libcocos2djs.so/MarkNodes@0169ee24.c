
/* v8::internal::compiler::DecompressionOptimizer::MarkNodes() */

void __thiscall
v8::internal::compiler::DecompressionOptimizer::MarkNodes(DecompressionOptimizer *this)

{
  Node *pNVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  MaybeMarkAndQueueForRevisit(this,*(undefined8 *)(*(long *)this + 0x10),1);
  lVar3 = *(long *)(this + 0x58);
  while (lVar3 != 0) {
    uVar4 = *(ulong *)(this + 0x50);
    puVar2 = *(undefined8 **)(this + 0x28);
    pNVar1 = *(Node **)(*(long *)((long)puVar2 + (uVar4 >> 6 & 0x3fffffffffffff8)) +
                       (uVar4 & 0x1ff) * 8);
    uVar4 = uVar4 + 1;
    *(ulong *)(this + 0x50) = uVar4;
    *(long *)(this + 0x58) = lVar3 + -1;
    if (0x3ff < uVar4) {
      puVar5 = (undefined8 *)*puVar2;
      if ((*(long *)(this + 0x68) == 0) || (*(ulong *)(*(long *)(this + 0x68) + 8) < 0x201)) {
        puVar5[1] = 0x200;
        *puVar5 = *(undefined8 *)(this + 0x68);
        puVar2 = *(undefined8 **)(this + 0x28);
        uVar4 = *(ulong *)(this + 0x50);
        *(undefined8 **)(this + 0x68) = puVar5;
      }
      *(undefined8 **)(this + 0x28) = puVar2 + 1;
      *(ulong *)(this + 0x50) = uVar4 - 0x200;
    }
    MarkNodeInputs(this,pNVar1);
    lVar3 = *(long *)(this + 0x58);
  }
  return;
}

