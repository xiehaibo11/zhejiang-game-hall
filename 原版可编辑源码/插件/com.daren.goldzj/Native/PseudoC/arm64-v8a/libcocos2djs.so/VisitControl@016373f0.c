
/* v8::internal::compiler::InstructionSelector::VisitControl(v8::internal::compiler::BasicBlock*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitControl
          (InstructionSelector *this,BasicBlock *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  BasicBlock *pBVar4;
  ulong uVar5;
  long lVar6;
  undefined1 uVar7;
  int *piVar8;
  ulong *puVar9;
  Zone *this_00;
  Instruction *this_01;
  undefined8 *puVar10;
  BasicBlock *pBVar11;
  ulong uVar12;
  Node *pNVar13;
  Node *pNVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 *local_80;
  Zone *pZStack_78;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  if (8 < *(uint *)(param_1 + 0x34)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  pNVar14 = *(Node **)(param_1 + 0x38);
  lVar2 = *(long *)(this + 0x38);
  lVar3 = *(long *)(this + 0x40);
  switch(*(uint *)(param_1 + 0x34)) {
  case 0:
    goto switchD_0163744c_caseD_0;
  case 1:
    pBVar11 = (BasicBlock *)**(undefined8 **)(param_1 + 0x60);
    goto LAB_016376c0;
  case 2:
    pBVar11 = (BasicBlock *)**(undefined8 **)(param_1 + 0x60);
    VisitCall(this,pNVar14,(BasicBlock *)(*(undefined8 **)(param_1 + 0x60))[1]);
    goto LAB_016376c0;
  case 3:
    pBVar11 = (BasicBlock *)**(undefined8 **)(param_1 + 0x60);
    pBVar4 = (BasicBlock *)(*(undefined8 **)(param_1 + 0x60))[1];
    if (pBVar11 != pBVar4) {
      VisitBranch(this,pNVar14,pBVar11,pBVar4);
      break;
    }
LAB_016376c0:
    VisitGoto(this,pBVar11);
switchD_0163744c_caseD_0:
    puVar10 = puStack_88;
joined_r0x016376b4:
    puStack_88 = puVar10;
    if (pNVar14 == (Node *)0x0) goto LAB_016376fc;
    goto LAB_016376c8;
  case 4:
    pZStack_78 = *(Zone **)this;
    uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x68) + -8);
    uVar5 = (*(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x60) >> 3) - 1;
    local_b0 = (undefined8 *)0x0;
    uStack_a8 = 0;
    local_90 = (undefined8 *)0x0;
    puStack_88 = (undefined8 *)0x0;
    local_80 = (undefined8 *)0x0;
    if (uVar5 == 0) {
LAB_0163766c:
      iVar19 = 0x7fffffff;
      iVar21 = -0x80000000;
    }
    else {
      if (uVar5 >> 0x1b != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar10 = *(undefined8 **)(pZStack_78 + 0x10);
      uVar12 = uVar5 * 0x10;
      if (uVar12 < (ulong)(*(long *)(pZStack_78 + 0x18) - (long)puVar10) ||
          uVar12 - (*(long *)(pZStack_78 + 0x18) - (long)puVar10) == 0) {
        *(undefined8 **)(pZStack_78 + 0x10) = puVar10 + uVar5 * 2;
      }
      else {
        puVar10 = (undefined8 *)Zone::NewExpand(pZStack_78,uVar12);
      }
      local_80 = puVar10 + uVar5 * 2;
      puStack_88 = puVar10;
      uVar12 = uVar5;
      do {
        uVar12 = uVar12 - 1;
        puStack_88[1] = uStack_a8;
        *puStack_88 = local_b0;
        puStack_88 = puStack_88 + 2;
      } while (uVar12 != 0);
      local_90 = puVar10;
      if (uVar5 == 0) goto LAB_0163766c;
      lVar17 = 0;
      uVar12 = 0;
      iVar18 = 0x7fffffff;
      iVar20 = -0x80000000;
      do {
        lVar15 = *(long *)(*(long *)(param_1 + 0x60) + uVar12 * 8);
        piVar8 = (int *)IfValueParametersOf(*(Operator **)**(undefined8 **)(lVar15 + 0x40));
        uVar12 = uVar12 + 1;
        *(undefined8 *)((long)local_90 + lVar17) = *(undefined8 *)piVar8;
        ((undefined8 *)((long)local_90 + lVar17))[1] = lVar15;
        iVar21 = *piVar8;
        lVar17 = lVar17 + 0x10;
        iVar19 = iVar21;
        if (iVar18 <= iVar21) {
          iVar19 = iVar18;
        }
        if (iVar21 <= iVar20) {
          iVar21 = iVar20;
        }
        iVar18 = iVar19;
        iVar20 = iVar21;
      } while (uVar5 != uVar12);
    }
    local_b0 = &local_90;
    local_a0 = 0;
    if (puStack_88 != local_90) {
      local_a0 = (ulong)((iVar21 - iVar19) + 1);
    }
    uStack_a8 = CONCAT44(iVar21,iVar19);
    uStack_98 = uVar16;
    VisitSwitch(this,pNVar14,(SwitchInfo *)&local_b0);
    puVar10 = local_90;
    if (local_90 == (undefined8 *)0x0) goto switchD_0163744c_caseD_0;
    goto joined_r0x016376b4;
  case 5:
    puVar9 = (ulong *)DeoptimizeParametersOf(*(Operator **)pNVar14);
    puStack_88 = (undefined8 *)puVar9[1];
    puVar10 = (undefined8 *)*puVar9;
    pZStack_78 = (Zone *)puVar9[3];
    local_80 = (undefined8 *)puVar9[2];
    pNVar13 = pNVar14 + 0x20;
    if ((~*(uint *)(pNVar14 + 0x14) & 0xf000000) == 0) {
      pNVar13 = (Node *)(*(long *)pNVar13 + 0x10);
    }
    local_90._1_1_ = (undefined1)((ulong)puVar10 >> 8);
    uVar7 = local_90._1_1_;
    local_90 = puVar10;
    VisitDeoptimize(this,(ulong)puVar10 & 0xff,uVar7,(ulong)&local_90 | 8,*(long *)pNVar13);
    break;
  case 6:
    VisitTailCall(this,pNVar14);
    break;
  case 7:
    VisitReturn(this,pNVar14);
    break;
  case 8:
    local_90 = (undefined8 *)0x0;
    this_00 = *(Zone **)(*(long *)(this + 0x10) + 8);
    this_01 = *(Instruction **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < 0x30) {
      this_01 = (Instruction *)Zone::NewExpand(this_00,0x30);
    }
    else {
      *(Instruction **)(this_00 + 0x10) = this_01 + 0x30;
    }
    Instruction::Instruction
              (this_01,0x15,0,(InstructionOperand *)&local_90,0,(InstructionOperand *)0x0,0,
               (InstructionOperand *)0x0);
    Emit(this,this_01);
  }
  if (pNVar14 != (Node *)0x0) {
LAB_016376c8:
    if (*(int *)(this + 0x1a0) == 1) {
      puVar1 = (undefined4 *)
               (*(long *)(this + 0x180) + ((ulong)*(uint *)(pNVar14 + 0x14) & 0xffffff) * 8);
      *puVar1 = (int)((ulong)(*(long *)(this + 0x40) - *(long *)(this + 0x38)) >> 3);
      puVar1[1] = (int)((ulong)(lVar3 - lVar2) >> 3);
    }
  }
LAB_016376fc:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

