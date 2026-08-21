
/* v8::internal::interpreter::BytecodeGenerator::VisitDeclarations(v8::base::ThreadedListBase<v8::internal::Declaration,
   v8::base::EmptyBase, v8::base::ThreadedListTraits<v8::internal::Declaration> >*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitDeclarations
          (BytecodeGenerator *this,ThreadedListBase *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  BytecodeGenerator BVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  BytecodeArrayBuilder *pBVar11;
  long lVar12;
  Zone *pZVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  AstNode *pAVar20;
  ThreadedListBase *pTVar21;
  
  pTVar21 = *(ThreadedListBase **)(param_1 + 8);
  iVar1 = *(int *)(this + 0x118);
  if (param_1 != pTVar21) {
    BVar6 = this[8];
    iVar3 = iVar1;
    while( true ) {
      if (BVar6 == (BytecodeGenerator)0x0) {
        pAVar20 = *(AstNode **)param_1;
        uVar8 = GetCurrentStackPosition();
        if (uVar8 < *(ulong *)this) {
          this[8] = (BytecodeGenerator)0x1;
        }
        else {
          VisitNoStackOverflowCheck(this,pAVar20);
        }
      }
      plVar9 = *(long **)(this + 0x120);
      iVar2 = *(int *)(this + 0x118);
      *(int *)(this + 0x118) = iVar3;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x20))(plVar9,CONCAT44(iVar2 - iVar3,iVar3));
      }
      param_1 = (ThreadedListBase *)(*(long *)param_1 + 0x10);
      if (param_1 == pTVar21) break;
      iVar3 = *(int *)(this + 0x118);
      BVar6 = this[8];
    }
  }
  plVar9 = *(long **)(this + 0x200);
  if (*plVar9 != plVar9[1]) {
    lVar10 = BytecodeArrayBuilder::AllocateDeferredConstantPoolEntry();
    plVar9[4] = lVar10;
    *(undefined1 *)(plVar9 + 5) = 1;
    uVar4 = *(uint *)(this + 0x118);
    plVar9 = *(long **)(this + 0x120);
    uVar5 = **(uint **)(this + 0x1d0);
    iVar3 = uVar4 + 3;
    *(int *)(this + 0x118) = iVar3;
    iVar2 = *(int *)(this + 0x11c);
    if (*(int *)(this + 0x11c) <= iVar3) {
      iVar2 = iVar3;
    }
    uVar8 = (ulong)uVar4 | 0x300000000;
    *(int *)(this + 0x11c) = iVar2;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x18))(plVar9,uVar8);
    }
    pBVar11 = (BytecodeArrayBuilder *)
              BytecodeArrayBuilder::LoadConstantPoolEntry
                        ((BytecodeArrayBuilder *)(this + 0x18),
                         *(ulong *)(*(long *)(this + 0x200) + 0x20));
    pBVar11 = (BytecodeArrayBuilder *)
              BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar11,(ulong)uVar4);
    pBVar11 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::LoadLiteral(pBVar11,(uVar5 & 1) << 1);
    pBVar11 = (BytecodeArrayBuilder *)
              BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar11,uVar4 + 1);
    uVar7 = Register::function_closure();
    pBVar11 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::MoveRegister(pBVar11,uVar7,uVar4 + 2);
    BytecodeArrayBuilder::CallRuntime(pBVar11,0x12e,uVar8);
    puVar14 = *(undefined8 **)(this + 0x218);
    uVar19 = *(undefined8 *)(this + 0x200);
    if (puVar14 < *(undefined8 **)(this + 0x220)) {
      *puVar14 = uVar19;
      *(long *)(this + 0x218) = *(long *)(this + 0x218) + 8;
    }
    else {
      lVar10 = (long)puVar14 - *(long *)(this + 0x210) >> 3;
      uVar8 = lVar10 + 1;
      if (uVar8 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar12 = (long)*(undefined8 **)(this + 0x220) - *(long *)(this + 0x210);
      uVar16 = lVar12 >> 2;
      if (uVar8 <= uVar16) {
        uVar8 = uVar16;
      }
      if (0x7fffffe < (ulong)(lVar12 >> 3)) {
        uVar8 = 0xfffffff;
      }
      if (uVar8 == 0) {
        lVar12 = 0;
      }
      else {
        pZVar13 = *(Zone **)(this + 0x228);
        uVar16 = uVar8 * 8;
        lVar12 = *(long *)(pZVar13 + 0x10);
        if (uVar16 < (ulong)(*(long *)(pZVar13 + 0x18) - lVar12) ||
            uVar16 - (*(long *)(pZVar13 + 0x18) - lVar12) == 0) {
          *(ulong *)(pZVar13 + 0x10) = lVar12 + uVar16;
        }
        else {
          lVar12 = Zone::NewExpand(pZVar13,uVar16);
        }
      }
      puVar14 = (undefined8 *)(lVar12 + lVar10 * 8);
      puVar15 = puVar14 + 1;
      *puVar14 = uVar19;
      puVar17 = *(undefined8 **)(this + 0x210);
      puVar18 = *(undefined8 **)(this + 0x218);
      while (puVar18 != puVar17) {
        puVar18 = puVar18 + -1;
        puVar14 = puVar14 + -1;
        *puVar14 = *puVar18;
      }
      *(undefined8 **)(this + 0x210) = puVar14;
      *(undefined8 **)(this + 0x218) = puVar15;
      *(ulong *)(this + 0x220) = lVar12 + uVar8 * 8;
    }
    pZVar13 = *(Zone **)(this + 0x10);
    puVar14 = *(undefined8 **)(pZVar13 + 0x10);
    if ((ulong)(*(long *)(pZVar13 + 0x18) - (long)puVar14) < 0x30) {
      puVar14 = (undefined8 *)Zone::NewExpand(pZVar13,0x30);
    }
    else {
      *(undefined8 **)(pZVar13 + 0x10) = puVar14 + 6;
    }
    uVar19 = *(undefined8 *)(this + 0x10);
    *puVar14 = 0;
    puVar14[1] = 0;
    *(undefined1 *)(puVar14 + 5) = 0;
    puVar14[2] = 0;
    puVar14[3] = uVar19;
    puVar14[4] = 0;
    *(undefined8 **)(this + 0x200) = puVar14;
  }
  plVar9 = *(long **)(this + 0x120);
  iVar3 = *(int *)(this + 0x118);
  *(int *)(this + 0x118) = iVar1;
  if (plVar9 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0150c700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar9 + 0x20))(plVar9,CONCAT44(iVar3 - iVar1,iVar1));
  return;
}

