
/* v8::internal::compiler::InstructionSelector::VisitPhi(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitPhi(InstructionSelector *this,Node *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  Zone *pZVar5;
  PhiInstruction *this_00;
  long lVar6;
  undefined8 *puVar7;
  Node *pNVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  
  pZVar5 = *(Zone **)(*(long *)(this + 0x10) + 8);
  this_00 = *(PhiInstruction **)(pZVar5 + 0x10);
  uVar3 = *(uint *)(*(long *)param_1 + 0x14);
  if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)this_00) < 0x30) {
    this_00 = (PhiInstruction *)Zone::NewExpand(pZVar5,0x30);
  }
  else {
    *(PhiInstruction **)(pZVar5 + 0x10) = this_00 + 0x30;
  }
  uVar2 = *(uint *)(param_1 + 0x14);
  iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar2 & 0xffffff) * 4);
  pZVar5 = *(Zone **)(*(InstructionSequence **)(this + 0x10) + 8);
  if (iVar4 == -1) {
    iVar4 = InstructionSequence::NextVirtualRegister(*(InstructionSequence **)(this + 0x10));
    *(int *)(*(long *)(this + 0x118) + ((ulong)uVar2 & 0xffffff) * 4) = iVar4;
  }
  PhiInstruction::PhiInstruction(this_00,pZVar5,iVar4,(long)(int)uVar3);
  lVar13 = **(long **)(*(long *)(this + 0x10) + 0x10);
  if ((ulong)(long)*(int *)(*(long *)(this + 0x30) + 4) <
      (ulong)((*(long **)(*(long *)(this + 0x10) + 0x10))[1] - lVar13 >> 3)) {
    lVar13 = *(long *)(lVar13 + (long)*(int *)(*(long *)(this + 0x30) + 4) * 8);
    puVar7 = *(undefined8 **)(lVar13 + 0x48);
    if (puVar7 == *(undefined8 **)(lVar13 + 0x50)) {
      lVar15 = (long)puVar7 - *(long *)(lVar13 + 0x40) >> 3;
      uVar14 = lVar15 + 1;
      if (uVar14 >> 0x1c != 0) goto LAB_0163f560;
      lVar6 = (long)*(undefined8 **)(lVar13 + 0x50) - *(long *)(lVar13 + 0x40);
      uVar10 = lVar6 >> 2;
      if (uVar14 <= uVar10) {
        uVar14 = uVar10;
      }
      if (0x7fffffe < (ulong)(lVar6 >> 3)) {
        uVar14 = 0xfffffff;
      }
      if (uVar14 == 0) {
        lVar6 = 0;
      }
      else {
        pZVar5 = *(Zone **)(lVar13 + 0x58);
        uVar10 = uVar14 * 8;
        lVar6 = *(long *)(pZVar5 + 0x10);
        if (uVar10 < (ulong)(*(long *)(pZVar5 + 0x18) - lVar6) ||
            uVar10 - (*(long *)(pZVar5 + 0x18) - lVar6) == 0) {
          *(ulong *)(pZVar5 + 0x10) = lVar6 + uVar10;
        }
        else {
          lVar6 = Zone::NewExpand(pZVar5,uVar10);
        }
      }
      puVar7 = (undefined8 *)(lVar6 + lVar15 * 8);
      puVar9 = puVar7 + 1;
      *puVar7 = this_00;
      puVar1 = *(undefined8 **)(lVar13 + 0x40);
      puVar12 = *(undefined8 **)(lVar13 + 0x48);
      while (puVar12 != puVar1) {
        puVar12 = puVar12 + -1;
        puVar7 = puVar7 + -1;
        *puVar7 = *puVar12;
      }
      *(undefined8 **)(lVar13 + 0x40) = puVar7;
      *(undefined8 **)(lVar13 + 0x48) = puVar9;
      *(ulong *)(lVar13 + 0x50) = lVar6 + uVar14 * 8;
    }
    else {
      *puVar7 = this_00;
      *(long *)(lVar13 + 0x48) = *(long *)(lVar13 + 0x48) + 8;
    }
    if (0 < (int)uVar3) {
      uVar14 = 0;
      do {
        pNVar8 = param_1 + 0x20;
        if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
          pNVar8 = (Node *)(*(long *)(param_1 + 0x20) + 0x10);
        }
        lVar13 = *(long *)(pNVar8 + uVar14 * 8);
        uVar10 = (ulong)*(uint *)(lVar13 + 0x14);
        uVar11 = (uVar10 & 0xffffc0) >> 3;
        *(ulong *)(*(long *)(this + 0xd8) + uVar11) =
             1L << (uVar10 & 0x3f) | *(ulong *)(*(long *)(this + 0xd8) + uVar11);
        uVar10 = (ulong)*(uint *)(lVar13 + 0x14) & 0xffffff;
        iVar4 = *(int *)(*(long *)(this + 0x118) + uVar10 * 4);
        if (iVar4 == -1) {
          iVar4 = InstructionSequence::NextVirtualRegister(*(InstructionSequence **)(this + 0x10));
          *(int *)(*(long *)(this + 0x118) + uVar10 * 4) = iVar4;
        }
        PhiInstruction::SetInput(this_00,uVar14,iVar4);
        uVar14 = uVar14 + 1;
      } while (uVar3 != uVar14);
    }
    return;
  }
LAB_0163f560:
                    /* WARNING: Subroutine does not return */
  abort();
}

