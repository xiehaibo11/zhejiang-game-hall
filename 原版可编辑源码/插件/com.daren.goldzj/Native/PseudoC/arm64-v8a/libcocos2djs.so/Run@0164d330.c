
/* v8::internal::compiler::MoveOptimizer::Run() */

void __thiscall v8::internal::compiler::MoveOptimizer::Run(MoveOptimizer *this)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  int *piVar5;
  char cVar6;
  int iVar7;
  bool bVar8;
  InstructionBlock *pIVar9;
  long lVar10;
  int *piVar11;
  Instruction *pIVar12;
  undefined8 *puVar13;
  long *plVar14;
  Instruction *pIVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  
  lVar10 = *(long *)(this + 8);
  lVar18 = *(long *)(lVar10 + 0x88);
  if (*(long *)(lVar10 + 0x90) != lVar18) {
    uVar3 = *(ulong *)(lVar10 + 0xb0);
    uVar1 = *(long *)(lVar10 + 0xb8) + uVar3;
    plVar14 = (long *)(lVar18 + (uVar3 >> 6 & 0x3fffffffffffff8));
    puVar13 = (undefined8 *)(*plVar14 + (uVar3 & 0x1ff) * 8);
    puVar17 = (undefined8 *)
              (*(long *)(lVar18 + (uVar1 >> 6 & 0x3fffffffffffff8)) + (uVar1 & 0x1ff) * 8);
    if (puVar17 != puVar13) {
      do {
        puVar16 = puVar13 + 1;
        CompressGaps(this,(Instruction *)*puVar13);
        if ((long)puVar16 - *plVar14 == 0x1000) {
          plVar14 = plVar14 + 1;
          puVar16 = (undefined8 *)*plVar14;
        }
        puVar13 = puVar16;
      } while (puVar17 != puVar16);
      lVar10 = *(long *)(this + 8);
    }
  }
  plVar14 = (long *)**(long **)(lVar10 + 0x10);
  plVar4 = (long *)(*(long **)(lVar10 + 0x10))[1];
  if (plVar14 != plVar4) {
    do {
      iVar2 = *(int *)(*plVar14 + 0x70);
      lVar18 = (long)iVar2;
      uVar1 = *(long *)(lVar10 + 0xb0) + lVar18;
      iVar7 = *(int *)(*plVar14 + 0x74) + -1;
      pIVar12 = *(Instruction **)
                 (*(long *)(*(long *)(lVar10 + 0x88) + (uVar1 >> 6 & 0x3fffffffffffff8)) +
                 (uVar1 & 0x1ff) * 8);
      RemoveClobberedDestinations(this,pIVar12);
      if (iVar2 < iVar7) {
        do {
          uVar1 = lVar18 + *(long *)(*(long *)(this + 8) + 0xb0) + 1;
          lVar18 = lVar18 + 1;
          pIVar15 = *(Instruction **)
                     (*(long *)(*(long *)(*(long *)(this + 8) + 0x88) +
                               (uVar1 >> 6 & 0x3fffffffffffff8)) + (uVar1 & 0x1ff) * 8);
          MigrateMoves(this,pIVar15,pIVar12);
          RemoveClobberedDestinations(this,pIVar15);
          pIVar12 = pIVar15;
        } while (iVar7 != lVar18);
      }
      lVar10 = *(long *)(this + 8);
      plVar14 = plVar14 + 1;
    } while (plVar14 != plVar4);
    puVar13 = (undefined8 *)**(long **)(lVar10 + 0x10);
    puVar17 = (undefined8 *)(*(long **)(lVar10 + 0x10))[1];
    if (puVar13 != puVar17) {
      do {
        pIVar9 = (InstructionBlock *)*puVar13;
        piVar11 = *(int **)(pIVar9 + 0x20);
        piVar5 = *(int **)(pIVar9 + 0x28);
        if (1 < (ulong)((long)piVar5 - (long)piVar11 >> 2)) {
          if (pIVar9[0x78] == (InstructionBlock)0x0) {
            if (piVar11 != piVar5) {
              lVar18 = **(long **)(*(long *)(this + 8) + 0x10);
              bVar8 = true;
              do {
                if ((ulong)((*(long **)(*(long *)(this + 8) + 0x10))[1] - lVar18 >> 3) <=
                    (ulong)(long)*piVar11) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                cVar6 = *(char *)(*(long *)(lVar18 + (long)*piVar11 * 8) + 0x78);
                if (cVar6 == '\0') goto LAB_0164d4a4;
                piVar11 = piVar11 + 1;
                bVar8 = (bool)(bVar8 & cVar6 != '\0');
              } while (piVar5 != piVar11);
              if (!bVar8) goto LAB_0164d4a4;
            }
          }
          else {
LAB_0164d4a4:
            OptimizeMerge(this,pIVar9);
          }
        }
        puVar13 = puVar13 + 1;
      } while (puVar13 != puVar17);
      lVar10 = *(long *)(this + 8);
    }
  }
  lVar18 = *(long *)(lVar10 + 0x88);
  if (*(long *)(lVar10 + 0x90) != lVar18) {
    uVar3 = *(ulong *)(lVar10 + 0xb0);
    uVar1 = *(long *)(lVar10 + 0xb8) + uVar3;
    plVar14 = (long *)(lVar18 + (uVar3 >> 6 & 0x3fffffffffffff8));
    puVar13 = (undefined8 *)
              (*(long *)(lVar18 + (uVar1 >> 6 & 0x3fffffffffffff8)) + (uVar1 & 0x1ff) * 8);
    puVar17 = (undefined8 *)(*plVar14 + (uVar3 & 0x1ff) * 8);
    while (puVar13 != puVar17) {
      while( true ) {
        puVar16 = puVar17 + 1;
        FinalizeMoves(this,(Instruction *)*puVar17);
        puVar17 = puVar16;
        if ((long)puVar16 - *plVar14 != 0x1000) break;
        plVar14 = plVar14 + 1;
        puVar17 = (undefined8 *)*plVar14;
        if (puVar13 == puVar17) {
          return;
        }
      }
    }
  }
  return;
}

