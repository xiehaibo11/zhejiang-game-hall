
/* v8::internal::compiler::CodeGenerator::RecordCallPosition(v8::internal::compiler::Instruction*)
    */

void __thiscall
v8::internal::compiler::CodeGenerator::RecordCallPosition(CodeGenerator *this,Instruction *param_1)

{
  int iVar1;
  ulong *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  ZoneChunkList<int> *this_00;
  InstructionSequence *this_01;
  int iVar5;
  ulong uVar6;
  Zone *this_02;
  InstructionSequence *pIVar7;
  long *plVar8;
  InstructionSequence *pIVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  InstructionSequence *pIVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  ulong *puVar18;
  long lVar19;
  undefined8 local_60;
  long lStack_58;
  
  uVar3 = *(uint *)param_1;
  plVar17 = *(long **)(param_1 + 0x18);
  this_00 = (ZoneChunkList<int> *)
            SafepointTableBuilder::DefineSafepoint(this + 0x298,this + 0xd0,uVar3 >> 0x16 & 1);
  puVar18 = (ulong *)*plVar17;
  puVar2 = (ulong *)plVar17[1];
  if (puVar18 != puVar2) {
    iVar10 = *(int *)(**(long **)(this + 0x18) + 4);
    iVar1 = *(int *)(**(long **)(this + 0x18) + 8);
    do {
      uVar6 = *puVar18;
      if ((((uVar6 & 0x1c) == 0xc) && (((uint)(uVar6 >> 5) & 0xff) < 0xb)) &&
         (iVar5 = (int)((long)uVar6 >> 0x23), iVar10 - iVar1 <= iVar5)) {
        local_60 = CONCAT44(local_60._4_4_,iVar5);
        ZoneChunkList<int>::push_back(this_00,(int *)&local_60);
      }
      puVar18 = puVar18 + 1;
    } while (puVar2 != puVar18);
  }
  if ((uVar3 >> 0x17 & 1) != 0) {
    uVar6 = *(ulong *)(param_1 +
                      (((ulong)*(uint *)(param_1 + 4) & 0xff) +
                      (ulong)(ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x20);
    if ((uVar6 & 7) == 3) {
      if (((uint)uVar6 >> 3 & 1) == 0) {
        Constant::Constant((Constant *)&local_60,(int)(uVar6 >> 0x20));
        lVar15 = lStack_58;
      }
      else {
        puVar4 = (undefined8 *)
                 (*(long *)(*(long *)(this + 0x28) + 0x60) + ((long)uVar6 >> 0x20) * 0x10);
        lVar15 = puVar4[1];
        local_60 = *puVar4;
        lStack_58 = lVar15;
      }
    }
    else {
      plVar17 = (long *)(*(long *)(this + 0x28) + 0x48);
      plVar12 = (long *)*plVar17;
      if (plVar12 == (long *)0x0) {
LAB_0162ead0:
        plVar8 = plVar17;
      }
      else {
        plVar8 = plVar17;
        do {
          iVar10 = (int)(uVar6 >> 3);
          if (iVar10 <= (int)plVar12[4]) {
            plVar8 = plVar12;
          }
          plVar12 = (long *)plVar12[(int)plVar12[4] < iVar10];
        } while (plVar12 != (long *)0x0);
        if ((plVar8 == plVar17) || (iVar10 < (int)plVar8[4])) goto LAB_0162ead0;
      }
      lVar15 = plVar8[6];
    }
    iVar10 = *(int *)(this + 0xf0);
    plVar17 = *(long **)(this + 0x2d0);
    iVar1 = *(int *)(this + 0xe0);
    lVar15 = *(long *)(this + 0xa8) + ((lVar15 << 0x20) >> 0x1d);
    if (plVar17 < *(long **)(this + 0x2d8)) {
      *plVar17 = lVar15;
      *(int *)(plVar17 + 1) = iVar10 - iVar1;
      *(long *)(this + 0x2d0) = *(long *)(this + 0x2d0) + 0x10;
    }
    else {
      lVar11 = (long)plVar17 - *(long *)(this + 0x2c8) >> 4;
      uVar6 = lVar11 + 1;
      if (uVar6 >> 0x1b != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar13 = (long)*(long **)(this + 0x2d8) - *(long *)(this + 0x2c8);
      uVar16 = lVar13 >> 3;
      if (uVar6 <= uVar16) {
        uVar6 = uVar16;
      }
      if (0x3fffffe < (ulong)(lVar13 >> 4)) {
        uVar6 = 0x7ffffff;
      }
      if (uVar6 == 0) {
        lVar13 = 0;
      }
      else {
        this_02 = *(Zone **)(this + 0x2e0);
        uVar16 = uVar6 * 0x10;
        lVar13 = *(long *)(this_02 + 0x10);
        if (uVar16 < (ulong)(*(long *)(this_02 + 0x18) - lVar13) ||
            uVar16 - (*(long *)(this_02 + 0x18) - lVar13) == 0) {
          *(ulong *)(this_02 + 0x10) = lVar13 + uVar16;
        }
        else {
          lVar13 = Zone::NewExpand(this_02,uVar16);
        }
      }
      plVar17 = (long *)(lVar13 + lVar11 * 0x10);
      *plVar17 = lVar15;
      *(int *)(plVar17 + 1) = iVar10 - iVar1;
      lVar11 = *(long *)(this + 0x2c8);
      plVar12 = plVar17;
      for (lVar15 = *(long *)(this + 0x2d0); lVar15 != lVar11; lVar15 = lVar15 + -0x10) {
        lVar19 = *(long *)(lVar15 + -0x10);
        plVar12[-1] = *(long *)(lVar15 + -8);
        plVar12[-2] = lVar19;
        plVar12 = plVar12 + -2;
      }
      *(long **)(this + 0x2c8) = plVar12;
      *(long **)(this + 0x2d0) = plVar17 + 2;
      *(ulong *)(this + 0x2d8) = lVar13 + uVar6 * 0x10;
    }
  }
  if ((uVar3 >> 0x16 & 1) == 0) {
    return;
  }
  this_01 = *(InstructionSequence **)(this + 0x28);
  *(int *)(this + 0x3bc) = *(int *)(this + 0xf0) - *(int *)(this + 0xe0);
  uVar6 = *(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x38);
  if ((uVar6 & 7) == 3) {
    if (((uint)uVar6 >> 3 & 1) == 0) {
      Constant::Constant((Constant *)&local_60,(int)(uVar6 >> 0x20));
      this_01 = *(InstructionSequence **)(this + 0x28);
    }
    else {
      puVar4 = (undefined8 *)(*(long *)(this_01 + 0x60) + ((long)uVar6 >> 0x20) * 0x10);
      lStack_58 = puVar4[1];
      local_60 = *puVar4;
    }
    iVar10 = (int)lStack_58;
    goto LAB_0162ec34;
  }
  pIVar7 = this_01 + 0x48;
  pIVar14 = *(InstructionSequence **)pIVar7;
  if (pIVar14 == (InstructionSequence *)0x0) {
LAB_0162ec14:
    pIVar9 = pIVar7;
  }
  else {
    pIVar9 = pIVar7;
    do {
      iVar10 = (int)(uVar6 >> 3);
      if (iVar10 <= *(int *)(pIVar14 + 0x20)) {
        pIVar9 = pIVar14;
      }
      pIVar14 = *(InstructionSequence **)(pIVar14 + (ulong)(*(int *)(pIVar14 + 0x20) < iVar10) * 8);
    } while (pIVar14 != (InstructionSequence *)0x0);
    if ((pIVar9 == pIVar7) || (iVar10 < *(int *)(pIVar9 + 0x20))) goto LAB_0162ec14;
  }
  iVar10 = (int)*(undefined8 *)(pIVar9 + 0x30);
LAB_0162ec34:
  plVar17 = (long *)InstructionSequence::GetDeoptimizationEntry(this_01,iVar10);
  BuildTranslation(this,param_1,*(int *)(this + 0xf0) - *(int *)(this + 0xe0),2,
                   *(undefined8 *)(*plVar17 + 8));
  return;
}

