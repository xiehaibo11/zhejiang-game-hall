
/* v8::internal::compiler::InstructionSelector::VisitBlock(v8::internal::compiler::BasicBlock*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitBlock
          (InstructionSelector *this,BasicBlock *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  long *plVar3;
  long lVar4;
  ushort uVar5;
  uint uVar6;
  ulong uVar7;
  Zone *this_00;
  Instruction *this_01;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  Node *pNVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  
  *(BasicBlock **)(this + 0x30) = param_1;
  plVar13 = *(long **)(param_1 + 0x40);
  plVar3 = *(long **)(param_1 + 0x48);
  lVar17 = *(long *)(this + 0x38);
  lVar4 = *(long *)(this + 0x40);
  if (plVar13 == plVar3) {
    iVar18 = 0;
  }
  else {
    iVar18 = 0;
    do {
      plVar15 = (long *)*plVar13;
      *(int *)(*(long *)(this + 0xf8) + ((ulong)*(uint *)((long)plVar15 + 0x14) & 0xffffff) * 4) =
           iVar18;
      uVar5 = *(ushort *)(*plVar15 + 0x10);
      if (((uVar5 - 0x18c < 0x1b) ||
          (((uVar6 = uVar5 - 0x1e8, uVar6 < 10 && ((1 << (ulong)(uVar6 & 0x1f) & 0x381U) != 0)) ||
           (uVar5 == 0x1ac)))) || (uVar5 == 0x31)) {
        iVar18 = iVar18 + 1;
      }
      plVar13 = plVar13 + 1;
    } while (plVar3 != plVar13);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    *(int *)(*(long *)(this + 0xf8) +
            ((ulong)*(uint *)(*(long *)(param_1 + 0x38) + 0x14) & 0xffffff) * 4) = iVar18;
  }
  VisitControl(this,param_1);
  if (this[0x178] != (InstructionSelector)0x0) {
    return;
  }
  puVar11 = *(undefined8 **)(this + 0x40);
  uVar19 = lVar4 - lVar17;
  iVar18 = (int)(uVar19 >> 3);
  if ((int)((ulong)((long)puVar11 - *(long *)(this + 0x38)) >> 3) != iVar18) {
    pNVar16 = *(Node **)(param_1 + 0x38);
    puVar8 = (undefined8 *)(*(long *)(this + 0x38) + ((long)(uVar19 * 0x20000000) >> 0x1d));
    if ((puVar8 != puVar11) && (puVar8 < puVar11 + -1)) {
      puVar11 = puVar11 + -2;
      do {
        uVar14 = *puVar8;
        *puVar8 = puVar11[1];
        puVar11[1] = uVar14;
        bVar1 = puVar8 + 1 < puVar11;
        puVar8 = puVar8 + 1;
        puVar11 = puVar11 + -1;
      } while (bVar1);
    }
    if (((pNVar16 != (Node *)0x0) &&
        (*(SourcePositionTable **)(this + 0x18) != (SourcePositionTable *)0x0)) &&
       (uVar7 = SourcePositionTable::GetSourcePosition
                          (*(SourcePositionTable **)(this + 0x18),pNVar16),
       (uVar7 & 0x7fffffffffff) != 0)) {
      if (*(int *)(this + 0x20) != 1) {
        uVar5 = *(ushort *)(*(long *)pNVar16 + 0x10);
        if (((0x31 < uVar5) || ((1L << ((ulong)uVar5 & 0x3f) & 0x200000000c000U) == 0)) &&
           (1 < uVar5 - 0x1ef)) goto LAB_01632f20;
      }
      InstructionSequence::SetSourcePosition
                (*(InstructionSequence **)(this + 0x10),
                 *(undefined8 *)(*(long *)(this + 0x38) + ((long)(uVar19 * 0x20000000) >> 0x20) * 8)
                 ,uVar7);
    }
  }
LAB_01632f20:
  puVar11 = *(undefined8 **)(param_1 + 0x40);
  puVar8 = *(undefined8 **)(param_1 + 0x48);
  do {
    if (puVar8 == puVar11) {
      plVar13 = *(long **)(*(long *)(this + 0x10) + 0x10);
      lVar17 = *plVar13;
      if ((ulong)(long)*(int *)(param_1 + 4) < (ulong)(plVar13[1] - lVar17 >> 3)) {
        lVar17 = *(long *)(lVar17 + (long)*(int *)(param_1 + 4) * 8);
        iVar10 = (int)((ulong)(*(long *)(this + 0x40) - *(long *)(this + 0x38)) >> 3);
        if (iVar10 == iVar18) {
          this_00 = *(Zone **)(*(long *)(this + 0x10) + 8);
          this_01 = *(Instruction **)(this_00 + 0x10);
          if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < 0x30) {
            this_01 = (Instruction *)Zone::NewExpand(this_00,0x30);
          }
          else {
            *(Instruction **)(this_00 + 0x10) = this_01 + 0x30;
          }
          Instruction::Instruction
                    (this_01,0x11,0,(InstructionOperand *)0x0,0,(InstructionOperand *)0x0,0,
                     (InstructionOperand *)0x0);
          Emit(this,this_01);
          iVar10 = (int)((ulong)(*(long *)(this + 0x40) - *(long *)(this + 0x38)) >> 3);
        }
        *(int *)(lVar17 + 0x70) = iVar10;
        *(int *)(lVar17 + 0x74) = iVar18;
        *(undefined8 *)(this + 0x30) = 0;
        return;
      }
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar8 = puVar8 + -1;
    pNVar16 = (Node *)*puVar8;
    uVar19 = *(long *)(this + 0x40) - *(long *)(this + 0x38);
    iVar10 = (int)(uVar19 >> 3);
    if ((((*(short *)(*(long *)pNVar16 + 0x10) == 0x38) ||
         ((~*(byte *)(*(long *)pNVar16 + 0x12) & 0x70) != 0)) ||
        ((*(ulong *)(*(long *)(this + 0xd8) + (((ulong)*(uint *)(pNVar16 + 0x14) & 0xffffc0) >> 3))
          >> ((ulong)*(uint *)(pNVar16 + 0x14) & 0x3f) & 1) != 0)) &&
       ((*(ulong *)(*(long *)(this + 0xb8) + (((ulong)*(uint *)(pNVar16 + 0x14) & 0xffffc0) >> 3))
         >> ((ulong)*(uint *)(pNVar16 + 0x14) & 0x3f) & 1) == 0)) {
      VisitNode(this,pNVar16);
      if (this[0x178] != (InstructionSelector)0x0) {
        return;
      }
      puVar12 = *(undefined8 **)(this + 0x40);
      if ((int)((ulong)((long)puVar12 - *(long *)(this + 0x38)) >> 3) != iVar10) {
        puVar9 = (undefined8 *)(*(long *)(this + 0x38) + ((long)(uVar19 * 0x20000000) >> 0x1d));
        if ((puVar9 != puVar12) && (puVar9 < puVar12 + -1)) {
          puVar12 = puVar12 + -2;
          do {
            uVar14 = *puVar9;
            *puVar9 = puVar12[1];
            puVar12[1] = uVar14;
            bVar1 = puVar9 + 1 < puVar12;
            puVar9 = puVar9 + 1;
            puVar12 = puVar12 + -1;
          } while (bVar1);
          if (pNVar16 == (Node *)0x0) goto LAB_0163307c;
        }
        if ((*(SourcePositionTable **)(this + 0x18) != (SourcePositionTable *)0x0) &&
           (uVar7 = SourcePositionTable::GetSourcePosition
                              (*(SourcePositionTable **)(this + 0x18),pNVar16),
           (uVar7 & 0x7fffffffffff) != 0)) {
          if (*(int *)(this + 0x20) != 1) {
            uVar5 = *(ushort *)(*(long *)pNVar16 + 0x10);
            if (((0x31 < uVar5) || ((1L << ((ulong)uVar5 & 0x3f) & 0x200000000c000U) == 0)) &&
               (1 < uVar5 - 0x1ef)) goto LAB_0163307c;
          }
          InstructionSequence::SetSourcePosition
                    (*(InstructionSequence **)(this + 0x10),
                     *(undefined8 *)
                      (*(long *)(this + 0x38) + ((long)(uVar19 * 0x20000000) >> 0x20) * 8),uVar7);
        }
      }
    }
LAB_0163307c:
    if (*(int *)(this + 0x1a0) == 1) {
      puVar2 = (undefined4 *)
               (*(long *)(this + 0x180) + ((ulong)*(uint *)(pNVar16 + 0x14) & 0xffffff) * 8);
      *puVar2 = (int)((ulong)(*(long *)(this + 0x40) - *(long *)(this + 0x38)) >> 3);
      puVar2[1] = iVar10;
    }
  } while( true );
}

