
/* v8::internal::compiler::BytecodeGraphBuilder::Environment::Merge(v8::internal::compiler::BytecodeGraphBuilder::Environment*,
   v8::internal::compiler::BytecodeLivenessState const*) */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::Environment::Merge
          (Environment *this,Environment *param_1,BytecodeLivenessState *param_2)

{
  uint uVar1;
  Node *pNVar2;
  undefined8 uVar3;
  BytecodeLivenessState *pBVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  pNVar2 = (Node *)MergeControl(*(BytecodeGraphBuilder **)this,*(Node **)(this + 0x18),
                                *(Node **)(param_1 + 0x18));
  *(Node **)(this + 0x18) = pNVar2;
  uVar3 = MergeEffect(*(BytecodeGraphBuilder **)this,*(Node **)(this + 0x20),
                      *(Node **)(param_1 + 0x20),pNVar2);
  *(undefined8 *)(this + 0x20) = uVar3;
  uVar3 = MergeValue(*(BytecodeGraphBuilder **)this,*(Node **)(this + 0x10),
                     *(Node **)(param_1 + 0x10),pNVar2);
  *(undefined8 *)(this + 0x10) = uVar3;
  if (0 < *(int *)(this + 0xc)) {
    lVar6 = 0;
    do {
      lVar8 = lVar6 * 8;
      uVar3 = MergeValue(*(BytecodeGraphBuilder **)this,*(Node **)(*(long *)(this + 0x28) + lVar8),
                         *(Node **)(*(long *)(param_1 + 0x28) + lVar8),pNVar2);
      lVar6 = lVar6 + 1;
      *(undefined8 *)(*(long *)(this + 0x28) + lVar8) = uVar3;
    } while (lVar6 < *(int *)(this + 0xc));
  }
  if (0 < *(int *)(this + 8)) {
    uVar7 = 0;
    do {
      uVar5 = (uint)uVar7;
      uVar1 = uVar5 + *(int *)(this + 0x58);
      if (param_2 == (BytecodeLivenessState *)0x0) {
LAB_0166f760:
        uVar7 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
        uVar3 = MergeValue(*(BytecodeGraphBuilder **)this,*(Node **)(*(long *)(this + 0x28) + uVar7)
                           ,*(Node **)(*(long *)(param_1 + 0x28) + uVar7),pNVar2);
      }
      else {
        pBVar4 = param_2 + 0x10;
        if (*(int *)(param_2 + 0xc) != 1) {
          pBVar4 = (BytecodeLivenessState *)(*(long *)(param_2 + 0x10) + (ulong)(uVar5 >> 6) * 8);
        }
        if ((*(ulong *)pBVar4 >> (uVar7 & 0x3f) & 1) != 0) goto LAB_0166f760;
        uVar3 = JSGraph::OptimizedOutConstant(*(JSGraph **)(*(long *)this + 0x10));
      }
      uVar7 = (ulong)(uVar5 + 1);
      *(undefined8 *)(*(long *)(this + 0x28) + (long)(int)uVar1 * 8) = uVar3;
    } while ((int)(uVar5 + 1) < *(int *)(this + 8));
  }
  if (param_2 != (BytecodeLivenessState *)0x0) {
    uVar1 = *(int *)(param_2 + 8) - 1;
    pBVar4 = param_2 + 0x10;
    if (*(int *)(param_2 + 0xc) != 1) {
      uVar5 = *(int *)(param_2 + 8) + 0x3e;
      if (-1 < (int)uVar1) {
        uVar5 = uVar1;
      }
      pBVar4 = (BytecodeLivenessState *)(*(long *)pBVar4 + (long)((int)uVar5 >> 6) * 8);
    }
    if ((*(ulong *)pBVar4 >> ((ulong)uVar1 & 0x3f) & 1) == 0) {
      uVar3 = JSGraph::OptimizedOutConstant(*(JSGraph **)(*(long *)this + 0x10));
      goto LAB_0166f860;
    }
  }
  uVar3 = MergeValue(*(BytecodeGraphBuilder **)this,
                     *(Node **)(*(long *)(this + 0x28) + (long)*(int *)(this + 0x5c) * 8),
                     *(Node **)(*(long *)(param_1 + 0x28) + (long)*(int *)(this + 0x5c) * 8),pNVar2)
  ;
LAB_0166f860:
  *(undefined8 *)(*(long *)(this + 0x28) + (long)*(int *)(this + 0x5c) * 8) = uVar3;
  if (*(Node **)(this + 0x50) != (Node *)0x0) {
    uVar3 = MergeValue(*(BytecodeGraphBuilder **)this,*(Node **)(this + 0x50),
                       *(Node **)(param_1 + 0x50),pNVar2);
    *(undefined8 *)(this + 0x50) = uVar3;
  }
  return;
}

