
/* v8::internal::compiler::SpecialRPONumberer::SerializeRPOIntoSchedule() */

void __thiscall
v8::internal::compiler::SpecialRPONumberer::SerializeRPOIntoSchedule(SpecialRPONumberer *this)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  Zone *pZVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int iVar9;
  BasicBlock *pBVar10;
  long lVar11;
  long lVar12;
  
  pBVar10 = *(BasicBlock **)(this + 0x10);
  if (pBVar10 == (BasicBlock *)0x0) {
    iVar9 = 0;
  }
  else {
    iVar9 = 0;
    do {
      BasicBlock::set_rpo_number(pBVar10,iVar9);
      lVar11 = *(long *)(this + 8);
      puVar5 = *(undefined8 **)(lVar11 + 0x50);
      if (puVar5 == *(undefined8 **)(lVar11 + 0x58)) {
        lVar12 = (long)puVar5 - *(long *)(lVar11 + 0x48) >> 3;
        uVar1 = lVar12 + 1;
        if (uVar1 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar3 = (long)*(undefined8 **)(lVar11 + 0x58) - *(long *)(lVar11 + 0x48);
        uVar7 = lVar3 >> 2;
        if (uVar1 <= uVar7) {
          uVar1 = uVar7;
        }
        if (0x7fffffe < (ulong)(lVar3 >> 3)) {
          uVar1 = 0xfffffff;
        }
        if (uVar1 == 0) {
          lVar3 = 0;
        }
        else {
          pZVar4 = *(Zone **)(lVar11 + 0x60);
          uVar7 = uVar1 * 8;
          lVar3 = *(long *)(pZVar4 + 0x10);
          if (uVar7 < (ulong)(*(long *)(pZVar4 + 0x18) - lVar3) ||
              uVar7 - (*(long *)(pZVar4 + 0x18) - lVar3) == 0) {
            *(ulong *)(pZVar4 + 0x10) = lVar3 + uVar7;
          }
          else {
            lVar3 = Zone::NewExpand(pZVar4,uVar7);
          }
        }
        puVar5 = (undefined8 *)(lVar3 + lVar12 * 8);
        puVar6 = puVar5 + 1;
        *puVar5 = pBVar10;
        puVar2 = *(undefined8 **)(lVar11 + 0x48);
        puVar8 = *(undefined8 **)(lVar11 + 0x50);
        while (puVar8 != puVar2) {
          puVar8 = puVar8 + -1;
          puVar5 = puVar5 + -1;
          *puVar5 = *puVar8;
        }
        *(undefined8 **)(lVar11 + 0x48) = puVar5;
        *(undefined8 **)(lVar11 + 0x50) = puVar6;
        *(ulong *)(lVar11 + 0x58) = lVar3 + uVar1 * 8;
      }
      else {
        *puVar5 = pBVar10;
        *(long *)(lVar11 + 0x50) = *(long *)(lVar11 + 0x50) + 8;
      }
      pBVar10 = *(BasicBlock **)(pBVar10 + 0x18);
      iVar9 = iVar9 + 1;
    } while (pBVar10 != (BasicBlock *)0x0);
  }
  pBVar10 = *(BasicBlock **)(this + 0x18);
  if (pBVar10 == (BasicBlock *)0x0) {
    pZVar4 = (Zone *)**(undefined8 **)(this + 8);
    pBVar10 = *(BasicBlock **)(pZVar4 + 0x10);
    if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)pBVar10) < 0xa8) {
      pBVar10 = (BasicBlock *)Zone::NewExpand(pZVar4,0xa8);
    }
    else {
      *(BasicBlock **)(pZVar4 + 0x10) = pBVar10 + 0xa8;
    }
    BasicBlock::BasicBlock(pBVar10,**(undefined8 **)(this + 8),0xffffffffffffffff);
    *(BasicBlock **)(this + 0x18) = pBVar10;
  }
  BasicBlock::set_rpo_number(pBVar10,iVar9);
  return;
}

