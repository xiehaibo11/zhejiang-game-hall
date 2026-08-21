
/* v8::internal::compiler::MemoryOptimizer::VisitAllocateRaw(v8::internal::compiler::Node*,
   v8::internal::compiler::MemoryLowering::AllocationState const*) */

void __thiscall
v8::internal::compiler::MemoryOptimizer::VisitAllocateRaw
          (MemoryOptimizer *this,Node *param_1,AllocationState *param_2)

{
  long lVar1;
  uint uVar2;
  short sVar3;
  long *plVar4;
  char cVar5;
  long lVar6;
  Operator *pOVar7;
  ulong uVar8;
  long *plVar9;
  Node *pNVar10;
  Node *pNVar11;
  long *plVar12;
  long lVar13;
  AllocationState *local_58;
  
  local_58 = param_2;
  lVar6 = AllocateParametersOf(*(Operator **)param_1);
  cVar5 = *(char *)(lVar6 + 8);
  plVar4 = (long *)*(long *)(param_1 + 0x18);
  if (cVar5 == '\x01') {
    do {
      do {
        if (plVar4 == (long *)0x0) goto LAB_017948d0;
        plVar12 = (long *)*plVar4;
        uVar2 = *(uint *)(plVar4 + 2) >> 1;
        plVar9 = plVar4 + (ulong)uVar2 * 3 + 3;
        if ((*(uint *)(plVar4 + 2) & 1) == 0) {
          plVar9 = (long *)*plVar9;
        }
        plVar4 = plVar12;
      } while ((uVar2 != 0) || (*(short *)(*plVar9 + 0x10) != 0xf1));
      plVar12 = plVar9 + 4;
      if ((~*(uint *)((long)plVar9 + 0x14) & 0xf000000) == 0) {
        plVar12 = (long *)(*plVar12 + 0x10);
      }
      pNVar11 = (Node *)plVar12[1];
      pOVar7 = *(Operator **)pNVar11;
      sVar3 = *(short *)(pOVar7 + 0x10);
      if (sVar3 == 0x1cf) {
        pNVar10 = pNVar11 + 0x20;
        if ((~*(uint *)(pNVar11 + 0x14) & 0xf000000) == 0) {
          pNVar10 = (Node *)(*(long *)pNVar10 + 0x10);
        }
        pNVar11 = *(Node **)pNVar10;
        pOVar7 = *(Operator **)pNVar11;
        sVar3 = *(short *)(pOVar7 + 0x10);
      }
    } while ((sVar3 != 0xe8) || (cVar5 = AllocationTypeOf(pOVar7), cVar5 != '\0'));
    NodeProperties::ChangeOp(pNVar11,*(Operator **)param_1);
  }
  else {
    do {
      if (plVar4 == (long *)0x0) goto LAB_017948d4;
      uVar2 = *(uint *)(plVar4 + 2);
      lVar13 = *plVar4;
      plVar9 = plVar4 + (ulong)(uVar2 >> 1) * 3 + 3;
      lVar1 = 0x10;
      if ((uVar2 & 1) != 0) {
        lVar1 = 0x20;
      }
      lVar1 = (long)plVar9 + (ulong)(uVar2 >> 1) * 8 + lVar1;
      if ((uVar2 & 1) == 0) {
        plVar9 = (long *)*plVar9;
      }
      uVar8 = AllocationTypeNeedsUpdateToOld(this,plVar9,plVar4,lVar1);
      plVar4 = (long *)lVar13;
    } while ((uVar8 & 1) == 0);
  }
LAB_017948d0:
  cVar5 = '\x01';
LAB_017948d4:
  pNVar11 = (Node *)MemoryLowering::ReduceAllocateRaw
                              ((MemoryLowering *)(this + 0x40),param_1,cVar5,
                               *(undefined4 *)(lVar6 + 0xc),&local_58);
  if ((pNVar11 != (Node *)0x0) && (pNVar11 != param_1)) {
    NodeProperties::ReplaceUses
              (param_1,pNVar11,*(Node **)(this + 0x20),*(Node **)(this + 0x28),(Node *)0x0);
    Node::Kill(param_1);
    EnqueueUses(this,*(Node **)(local_58 + 0x18),local_58);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","reduction.Changed() && reduction.replacement() != node");
}

