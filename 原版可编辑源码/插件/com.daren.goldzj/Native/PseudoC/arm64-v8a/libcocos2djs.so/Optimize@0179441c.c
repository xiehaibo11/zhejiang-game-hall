
/* v8::internal::compiler::MemoryOptimizer::Optimize() */

void __thiscall v8::internal::compiler::MemoryOptimizer::Optimize(MemoryOptimizer *this)

{
  Node *pNVar1;
  AllocationState *pAVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  EnqueueUses(this,*(Node **)(**(long **)(this + 0xd0) + 8),*(AllocationState **)(this + 0xd8));
  lVar4 = *(long *)(this + 0x138);
  while (lVar4 != 0) {
    uVar5 = *(ulong *)(this + 0x130);
    puVar3 = *(undefined8 **)(this + 0x108);
    puVar6 = (undefined8 *)
             (*(long *)((long)puVar3 + (uVar5 >> 5 & 0x7fffffffffffff8)) + (uVar5 & 0xff) * 0x10);
    pNVar1 = (Node *)*puVar6;
    pAVar2 = (AllocationState *)puVar6[1];
    uVar5 = uVar5 + 1;
    *(ulong *)(this + 0x130) = uVar5;
    *(long *)(this + 0x138) = lVar4 + -1;
    if (0x1ff < uVar5) {
      puVar6 = (undefined8 *)*puVar3;
      if ((*(long *)(this + 0x148) == 0) || (*(ulong *)(*(long *)(this + 0x148) + 8) < 0x101)) {
        puVar6[1] = 0x100;
        *puVar6 = *(undefined8 *)(this + 0x148);
        puVar3 = *(undefined8 **)(this + 0x108);
        uVar5 = *(ulong *)(this + 0x130);
        *(undefined8 **)(this + 0x148) = puVar6;
      }
      *(undefined8 **)(this + 0x108) = puVar3 + 1;
      *(ulong *)(this + 0x130) = uVar5 - 0x100;
    }
    VisitNode(this,pNVar1,pAVar2);
    lVar4 = *(long *)(this + 0x138);
  }
  return;
}

