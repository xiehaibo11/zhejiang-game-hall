
/* v8::internal::compiler::BytecodeGraphBuilder::OsrIteratorState::ProcessOsrPrelude() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::OsrIteratorState::ProcessOsrPrelude
          (OsrIteratorState *this)

{
  ulong uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  long lVar7;
  BytecodeAnalysis *this_00;
  int *piVar8;
  int *piVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  undefined4 *puVar13;
  ulong uVar14;
  Zone *this_01;
  BytecodeGraphBuilder *this_02;
  int iVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  long lVar19;
  undefined8 uVar20;
  undefined4 local_a8;
  undefined3 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined5 uStack_78;
  undefined3 uStack_73;
  
  lVar7 = tpidr_el0;
  lVar12 = *(long *)(lVar7 + 0x28);
  this_00 = *(BytecodeAnalysis **)(*(long *)this + 0xa0);
  iVar2 = *(int *)(this_00 + 0xe8);
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","0 <= osr_entry_point_");
  }
  this_01 = *(Zone **)(*(long *)this + 8);
  piVar8 = (int *)BytecodeAnalysis::GetLoopInfoFor(this_00,iVar2);
  iVar15 = *piVar8;
  if (iVar15 == -1) {
    piVar18 = (int *)0x0;
    piVar17 = (int *)0x0;
LAB_016719a4:
    iVar15 = iVar2;
    if (piVar18 != piVar17) {
      iVar15 = piVar18[-1];
    }
    this_02 = *(BytecodeGraphBuilder **)this;
    iVar11 = *(int *)(this_02 + 0x90);
    if (iVar11 != iVar15) {
      do {
        lVar19 = *(long *)(this_02 + 0x80);
        if ((*(int *)(lVar19 + 0x18) != -1) && (*(int *)(lVar19 + 0x20) == iVar11)) {
          *(ulong *)(*(long *)(this_02 + 0x1d8) + 0x10) =
               *(ulong *)(this_02 + 0x1e0) & 0x7fff80000000 | *(ulong *)(lVar19 + 0x28) & 0x7ffffffe
          ;
          SourcePositionTableIterator::Advance(*(SourcePositionTableIterator **)(this_02 + 0x80));
        }
        interpreter::BytecodeArrayIterator::Advance((BytecodeArrayIterator *)(this_02 + 0x88));
        iVar11 = *(int *)(this_02 + 0x90);
      } while (iVar11 != iVar15);
      this_02 = *(BytecodeGraphBuilder **)this;
    }
    if (piVar18 != piVar17) {
      do {
        piVar18 = piVar18 + -1;
        iVar11 = *piVar18;
        iVar15 = *(int *)(this_02 + 0x90);
        if (iVar15 != iVar11) {
          do {
            lVar19 = *(long *)(this_02 + 0x80);
            if ((*(int *)(lVar19 + 0x18) != -1) && (*(int *)(lVar19 + 0x20) == iVar15)) {
              *(ulong *)(*(long *)(this_02 + 0x1d8) + 0x10) =
                   *(ulong *)(this_02 + 0x1e0) & 0x7fff80000000 |
                   *(ulong *)(lVar19 + 0x28) & 0x7ffffffe;
              SourcePositionTableIterator::Advance
                        (*(SourcePositionTableIterator **)(this_02 + 0x80));
            }
            interpreter::BytecodeArrayIterator::Advance((BytecodeArrayIterator *)(this_02 + 0x88));
            iVar15 = *(int *)(this_02 + 0x90);
          } while (iVar15 != iVar11);
          this_02 = *(BytecodeGraphBuilder **)this;
          iVar11 = *(int *)(this_02 + 0x90);
        }
        ExitThenEnterExceptionHandlers(this_02,iVar11);
        lVar19 = *(long *)(*(long *)this + 0x80);
        uVar3 = *(undefined4 *)(*(long *)this + 0x150);
        uVar6 = *(undefined1 *)(lVar19 + 0x30);
        uVar20 = *(undefined8 *)(lVar19 + 0x28);
        uVar4 = *(undefined4 *)(lVar19 + 0x18);
        uStack_94 = (undefined4)uVar20;
        uStack_90 = (undefined4)((ulong)uVar20 >> 0x20);
        uStack_9c = (undefined4)*(undefined8 *)(lVar19 + 0x20);
        uStack_98 = (undefined4)((ulong)*(undefined8 *)(lVar19 + 0x20) >> 0x20);
        uVar5 = *(undefined4 *)(lVar19 + 0x38);
        uStack_78 = (undefined5)CONCAT44(uStack_94,uStack_98);
        uStack_73 = (undefined3)((ulong)uVar20 >> 8);
        lVar19 = *(long *)(this + 0x10);
        lVar10 = *(long *)(this + 0x18);
        uVar1 = 0;
        if (lVar10 - lVar19 != 0) {
          uVar1 = (lVar10 - lVar19 >> 3) * 0x55 - 1;
        }
        uVar14 = *(long *)(this + 0x40) + *(long *)(this + 0x38);
        if (uVar1 == uVar14) {
          std::__ndk1::
          deque<v8::internal::compiler::BytecodeGraphBuilder::OsrIteratorState::IteratorsStates,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BytecodeGraphBuilder::OsrIteratorState::IteratorsStates>>
          ::__add_back_capacity
                    ((deque<v8::internal::compiler::BytecodeGraphBuilder::OsrIteratorState::IteratorsStates,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BytecodeGraphBuilder::OsrIteratorState::IteratorsStates>>
                      *)(this + 8));
          lVar19 = *(long *)(this + 0x10);
          lVar10 = *(long *)(this + 0x18);
          uVar14 = *(long *)(this + 0x38) + *(long *)(this + 0x40);
        }
        if (lVar10 == lVar19) {
          puVar13 = (undefined4 *)0x0;
        }
        else {
          puVar13 = (undefined4 *)(*(long *)(lVar19 + (uVar14 / 0x55) * 8) + (uVar14 % 0x55) * 0x30)
          ;
        }
        *puVar13 = uVar3;
        puVar13[2] = uVar4;
        *(ulong *)((long)puVar13 + 0x19) = CONCAT53(CONCAT14(uVar6,uStack_90),uStack_73);
        *(ulong *)(puVar13 + 5) = CONCAT35(uStack_73,uStack_78);
        *(ulong *)(puVar13 + 3) = CONCAT44(uStack_9c,local_a0);
        puVar13[9] = CONCAT31(uStack_a4,local_a8._3_1_);
        puVar13[10] = uVar5;
        *(undefined4 *)((long)puVar13 + 0x21) = local_a8;
        this_02 = *(BytecodeGraphBuilder **)this;
        *(long *)(this + 0x40) = *(long *)(this + 0x40) + 1;
      } while (piVar18 != piVar17);
    }
    iVar15 = *(int *)(this_02 + 0x90);
    if (iVar15 != iVar2) {
      do {
        lVar19 = *(long *)(this_02 + 0x80);
        if ((*(int *)(lVar19 + 0x18) != -1) && (*(int *)(lVar19 + 0x20) == iVar15)) {
          *(ulong *)(*(long *)(this_02 + 0x1d8) + 0x10) =
               *(ulong *)(this_02 + 0x1e0) & 0x7fff80000000 | *(ulong *)(lVar19 + 0x28) & 0x7ffffffe
          ;
          SourcePositionTableIterator::Advance(*(SourcePositionTableIterator **)(this_02 + 0x80));
        }
        interpreter::BytecodeArrayIterator::Advance((BytecodeArrayIterator *)(this_02 + 0x88));
        iVar15 = *(int *)(this_02 + 0x90);
      } while (iVar15 != iVar2);
      this_02 = *(BytecodeGraphBuilder **)this;
    }
    ExitThenEnterExceptionHandlers(this_02,iVar2);
    lVar19 = *(long *)this;
    puVar13 = (undefined4 *)
              BytecodeAnalysis::GetLoopInfoFor(*(BytecodeAnalysis **)(lVar19 + 0xa0),iVar2);
    *(undefined4 *)(lVar19 + 0xb4) = *puVar13;
    if (*(long *)(lVar7 + 0x28) != lVar12) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  piVar8 = (int *)0x0;
  piVar16 = (int *)0x0;
  piVar9 = (int *)0x0;
  do {
    lVar19 = (long)piVar9 - (long)piVar16 >> 2;
    uVar1 = lVar19 + 1;
    if (uVar1 >> 0x1d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar14 = (long)piVar8 - (long)piVar16 >> 1;
    if (uVar1 <= uVar14) {
      uVar1 = uVar14;
    }
    if (0xffffffe < (ulong)((long)piVar8 - (long)piVar16 >> 2)) {
      uVar1 = 0x1fffffff;
    }
    if (uVar1 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = *(long *)(this_01 + 0x10);
      uVar14 = uVar1 * 4 + 7 & 0xfffffffffffffff8;
      if ((ulong)(*(long *)(this_01 + 0x18) - lVar10) < uVar14) {
        lVar10 = Zone::NewExpand(this_01,uVar14);
      }
      else {
        *(ulong *)(this_01 + 0x10) = lVar10 + uVar14;
      }
    }
    piVar18 = (int *)(lVar10 + lVar19 * 4);
    piVar8 = (int *)(lVar10 + uVar1 * 4);
    *piVar18 = iVar15;
    piVar17 = piVar18;
    while (piVar9 != piVar16) {
      piVar9 = piVar9 + -1;
      piVar17 = piVar17 + -1;
      *piVar17 = *piVar9;
    }
    while( true ) {
      piVar18 = piVar18 + 1;
      piVar9 = (int *)BytecodeAnalysis::GetLoopInfoFor
                                (*(BytecodeAnalysis **)(*(long *)this + 0xa0),iVar15);
      iVar15 = *piVar9;
      if (iVar15 == -1) goto LAB_016719a4;
      piVar16 = piVar17;
      piVar9 = piVar18;
      if (piVar18 == piVar8) break;
      *piVar18 = iVar15;
    }
  } while( true );
}

