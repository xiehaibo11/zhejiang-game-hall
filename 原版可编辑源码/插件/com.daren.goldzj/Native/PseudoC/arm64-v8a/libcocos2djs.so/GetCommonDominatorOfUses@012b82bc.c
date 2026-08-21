
/* v8::internal::compiler::ScheduleLateNodeVisitor::GetCommonDominatorOfUses(v8::internal::compiler::Node*)
    */

BasicBlock * __thiscall
v8::internal::compiler::ScheduleLateNodeVisitor::GetCommonDominatorOfUses
          (ScheduleLateNodeVisitor *this,Node *param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  BasicBlock *pBVar4;
  BasicBlock *pBVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  if (*(long **)(param_1 + 0x18) == (long *)0x0) {
    pBVar5 = (BasicBlock *)0x0;
  }
  else {
    pBVar5 = (BasicBlock *)0x0;
    plVar7 = *(long **)(param_1 + 0x18);
    do {
      while( true ) {
        uVar3 = *(uint *)(plVar7 + 2);
        plVar8 = (long *)*plVar7;
        plVar1 = plVar7 + (ulong)(uVar3 >> 1) * 3 + 3;
        lVar2 = 0x10;
        if ((uVar3 & 1) != 0) {
          lVar2 = 0x20;
        }
        plVar6 = plVar1;
        if ((uVar3 & 1) == 0) {
          plVar6 = (long *)*plVar1;
        }
        if (*(int *)(*(long *)(*(long *)(this + 8) + 0xb0) +
                     ((ulong)*(uint *)((long)plVar6 + 0x14) & 0xffffff) * 0x10 + 0xc) == 0) break;
        pBVar4 = (BasicBlock *)
                 GetBlockForUse(this,plVar7,(long)plVar1 + (ulong)(uVar3 >> 1) * 8 + lVar2);
        if (pBVar5 != (BasicBlock *)0x0) {
          if (pBVar4 != (BasicBlock *)0x0) {
            pBVar5 = (BasicBlock *)BasicBlock::GetCommonDominator(pBVar5,pBVar4);
          }
          break;
        }
        pBVar5 = pBVar4;
        plVar7 = plVar8;
        if (plVar8 == (long *)0x0) {
          return pBVar4;
        }
      }
      plVar7 = plVar8;
    } while (plVar8 != (long *)0x0);
  }
  return pBVar5;
}

