
void FUN_01521380(undefined8 *param_1)

{
  BytecodeArrayBuilder *this;
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  BytecodeArrayBuilder *pBVar14;
  ulong uVar15;
  long lVar16;
  undefined8 in_x7;
  uint uVar17;
  long *****ppppplVar18;
  BytecodeGenerator *this_00;
  undefined8 *puVar19;
  AstNode *pAVar20;
  Expression *pEVar21;
  Expression *this_01;
  BytecodeLabel local_108 [8];
  undefined8 local_100;
  undefined1 auStack_f8 [48];
  long ****local_c8;
  long ****local_c0;
  long local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  BytecodeGenerator *pBStack_98;
  int local_90;
  undefined8 local_88;
  long local_80;
  
  lVar6 = tpidr_el0;
  local_80 = *(long *)(lVar6 + 0x28);
  this_00 = (BytecodeGenerator *)*param_1;
  iVar2 = *(int *)(this_00 + 0x118);
  iVar3 = *(int *)(this_00 + 0x11c);
  plVar11 = *(long **)(this_00 + 0x120);
  if (iVar3 <= iVar2 + 1) {
    iVar3 = iVar2 + 1;
  }
  *(int *)(this_00 + 0x118) = iVar2 + 1;
  *(int *)(this_00 + 0x11c) = iVar3;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x10))(plVar11,iVar2);
  }
  uVar7 = v8::internal::FeedbackVectorSpec::AddSlot
                    ((FeedbackVectorSpec *)(*(long *)(this_00 + 0x1d0) + 0x38),5);
  uVar12 = v8::internal::FeedbackVectorSpec::AddSlot
                     ((FeedbackVectorSpec *)(*(long *)(this_00 + 0x1d0) + 0x38),5);
  iVar3 = *(int *)(*(long *)param_1[1] + 0x24);
  if (iVar3 != 0) {
    puVar19 = *(undefined8 **)(*(long *)param_1[1] + 0x18);
    this = (BytecodeArrayBuilder *)(this_00 + 0x18);
    puVar1 = puVar19 + iVar3;
    do {
      pEVar21 = (Expression *)*puVar19;
      uVar17 = *(uint *)(pEVar21 + 4);
      if ((uVar17 & 0x3f) == 0x18) {
        this_01 = *(Expression **)(pEVar21 + 8);
        pAVar20 = *(AstNode **)(pEVar21 + 0x10);
        uVar17 = *(uint *)(this_01 + 4);
      }
      else {
        if ((uVar17 & 0x3f) == 0x2d) {
          if (pEVar21 != (Expression *)0x0) {
            lVar16 = *(long *)(pEVar21 + 0x10);
            iVar3 = *(int *)(this_00 + 0x118);
            if (((*(uint *)(lVar16 + 4) & 0x3e) != 0x16) && (iVar8 = *(int *)pEVar21, iVar8 != -1))
            {
              this_00[0x1c0] = (BytecodeGenerator)0x2;
              *(int *)(this_00 + 0x1c4) = iVar8;
            }
            v8::internal::interpreter::BytecodeGenerator::PrepareAssignmentLhs
                      (auStack_f8,this_00,lVar16,0);
            iVar4 = *(int *)(this_00 + 0x118);
            iVar8 = *(int *)(this_00 + 0x11c);
            plVar11 = *(long **)(this_00 + 0x120);
            if (iVar8 <= iVar4 + 1) {
              iVar8 = iVar4 + 1;
            }
            *(int *)(this_00 + 0x118) = iVar4 + 1;
            *(int *)(this_00 + 0x11c) = iVar8;
            if (plVar11 != (long *)0x0) {
              (**(code **)(*plVar11 + 0x10))(plVar11,iVar4);
            }
            iVar8 = v8::internal::FeedbackVectorSpec::AddSlot
                              ((FeedbackVectorSpec *)(*(long *)(this_00 + 0x1d0) + 0x38),0x13);
            v8::internal::interpreter::BytecodeArrayBuilder::CreateEmptyArrayLiteral(this,iVar8);
            v8::internal::interpreter::BytecodeArrayBuilder::StoreAccumulatorInRegister(this,iVar4);
            iVar5 = *(int *)(this_00 + 0x118);
            iVar8 = *(int *)(this_00 + 0x11c);
            plVar11 = *(long **)(this_00 + 0x120);
            if (iVar8 <= iVar5 + 1) {
              iVar8 = iVar5 + 1;
            }
            *(int *)(this_00 + 0x118) = iVar5 + 1;
            *(int *)(this_00 + 0x11c) = iVar8;
            if (plVar11 != (long *)0x0) {
              (**(code **)(*plVar11 + 0x10))(plVar11,iVar5);
            }
            v8::internal::interpreter::BytecodeArrayBuilder::LoadLiteral(this,0);
            v8::internal::interpreter::BytecodeArrayBuilder::StoreAccumulatorInRegister(this,iVar5);
            pBVar14 = (BytecodeArrayBuilder *)
                      v8::internal::interpreter::BytecodeArrayBuilder::LoadTrue(this);
            v8::internal::interpreter::BytecodeArrayBuilder::StoreAccumulatorInRegister
                      (pBVar14,*(undefined4 *)param_1[2]);
            uVar9 = v8::internal::FeedbackVectorSpec::AddSlot
                              ((FeedbackVectorSpec *)(*(long *)(this_00 + 0x1d0) + 0x38),0xe);
            uVar10 = v8::internal::FeedbackVectorSpec::AddSlot
                               ((FeedbackVectorSpec *)(*(long *)(this_00 + 0x1d0) + 0x38),0xf);
            v8::internal::interpreter::BytecodeGenerator::BuildFillArrayWithIterator
                      (this_00,*(undefined8 *)param_1[3],
                       *(undefined4 *)((undefined8 *)param_1[3] + 1),iVar4,iVar5,iVar2,uVar7,in_x7,
                       uVar10,uVar9);
            v8::internal::interpreter::BytecodeArrayBuilder::LoadAccumulatorWithRegister(this,iVar4)
            ;
            v8::internal::interpreter::BytecodeGenerator::BuildAssignment
                      (this_00,auStack_f8,*(undefined1 *)param_1[4],*(undefined4 *)param_1[5]);
            plVar11 = *(long **)(this_00 + 0x120);
            iVar2 = *(int *)(this_00 + 0x118);
            *(int *)(this_00 + 0x118) = iVar3;
            if (plVar11 != (long *)0x0) {
              (**(code **)(*plVar11 + 0x20))(plVar11,CONCAT44(iVar2 - iVar3,iVar3));
            }
          }
          break;
        }
        pAVar20 = (AstNode *)0x0;
        this_01 = pEVar21;
      }
      if (((uVar17 & 0x3e) != 0x16) && (iVar3 = *(int *)this_01, iVar3 != -1)) {
        this_00[0x1c0] = (BytecodeGenerator)0x2;
        *(int *)(this_00 + 0x1c4) = iVar3;
      }
      v8::internal::interpreter::BytecodeGenerator::PrepareAssignmentLhs
                (auStack_f8,this_00,this_01,0);
      uStack_b0 = *(undefined8 *)(this_00 + 0x10);
      local_a8 = 0;
      local_b8 = 0;
      local_c8 = (long ****)&local_c8;
      local_c0 = (long ****)&local_c8;
      v8::internal::interpreter::BytecodeArrayBuilder::LoadAccumulatorWithRegister
                (this,*(undefined4 *)param_1[2]);
      uVar13 = v8::internal::interpreter::BytecodeLabels::New((BytecodeLabels *)&local_c8);
      v8::internal::interpreter::BytecodeArrayBuilder::JumpIfTrue(this,0,uVar13);
      pBVar14 = (BytecodeArrayBuilder *)
                v8::internal::interpreter::BytecodeArrayBuilder::LoadTrue(this);
      v8::internal::interpreter::BytecodeArrayBuilder::StoreAccumulatorInRegister
                (pBVar14,*(undefined4 *)param_1[2]);
      v8::internal::interpreter::BytecodeGenerator::BuildIteratorNext(this_00,param_1[3],iVar2);
      pBVar14 = (BytecodeArrayBuilder *)
                v8::internal::interpreter::BytecodeArrayBuilder::LoadNamedProperty
                          (this,iVar2,*(undefined8 *)(*(long *)(this_00 + 0x1d8) + 0xc0),uVar12);
      uVar13 = v8::internal::interpreter::BytecodeLabels::New((BytecodeLabels *)&local_c8);
      pBVar14 = (BytecodeArrayBuilder *)
                v8::internal::interpreter::BytecodeArrayBuilder::JumpIfTrue(pBVar14,0,uVar13);
      pBVar14 = (BytecodeArrayBuilder *)
                v8::internal::interpreter::BytecodeArrayBuilder::LoadNamedProperty
                          (pBVar14,iVar2,*(undefined8 *)(*(long *)(this_00 + 0x1d8) + 0x1f8),uVar7);
      pBVar14 = (BytecodeArrayBuilder *)
                v8::internal::interpreter::BytecodeArrayBuilder::StoreAccumulatorInRegister
                          (pBVar14,iVar2);
      pBVar14 = (BytecodeArrayBuilder *)
                v8::internal::interpreter::BytecodeArrayBuilder::LoadFalse(pBVar14);
      pBVar14 = (BytecodeArrayBuilder *)
                v8::internal::interpreter::BytecodeArrayBuilder::StoreAccumulatorInRegister
                          (pBVar14,*(undefined4 *)param_1[2]);
      v8::internal::interpreter::BytecodeArrayBuilder::LoadAccumulatorWithRegister(pBVar14,iVar2);
      uVar15 = v8::internal::Expression::IsTheHoleLiteral(this_01);
      if ((uVar15 & 1) == 0) {
        local_108[0] = (BytecodeLabel)0x0;
        local_100 = 0xffffffffffffffff;
        if (pAVar20 == (AstNode *)0x0) {
          v8::internal::interpreter::BytecodeArrayBuilder::Jump(this,local_108);
          v8::internal::interpreter::BytecodeLabels::Bind((BytecodeLabels *)&local_c8,this);
          v8::internal::interpreter::BytecodeArrayBuilder::LoadUndefined(this);
        }
        else {
          v8::internal::interpreter::BytecodeArrayBuilder::JumpIfNotUndefined(this,local_108);
          v8::internal::interpreter::BytecodeLabels::Bind((BytecodeLabels *)&local_c8,this);
          local_a0 = *(undefined8 *)(this_00 + 0x300);
          local_90 = *(int *)(this_00 + 0x118);
          local_88 = 2;
          *(undefined8 **)(this_00 + 0x300) = &local_a0;
          pBStack_98 = this_00;
          if (this_00[8] == (BytecodeGenerator)0x0) {
            uVar15 = v8::internal::GetCurrentStackPosition();
            if (uVar15 < *(ulong *)this_00) {
              this_00[8] = (BytecodeGenerator)0x1;
            }
            else {
              v8::internal::interpreter::BytecodeGenerator::VisitNoStackOverflowCheck
                        (this_00,pAVar20);
            }
          }
          *(undefined8 *)(pBStack_98 + 0x300) = local_a0;
          plVar11 = *(long **)(pBStack_98 + 0x120);
          iVar3 = *(int *)(pBStack_98 + 0x118);
          *(int *)(pBStack_98 + 0x118) = local_90;
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 0x20))(plVar11,CONCAT44(iVar3 - local_90,local_90));
          }
        }
        v8::internal::interpreter::BytecodeArrayBuilder::Bind(this,local_108);
        v8::internal::interpreter::BytecodeGenerator::BuildAssignment
                  (this_00,auStack_f8,*(undefined1 *)param_1[4],*(undefined4 *)param_1[5]);
      }
      else {
        v8::internal::interpreter::BytecodeLabels::Bind((BytecodeLabels *)&local_c8,this);
      }
      if (local_b8 != 0) {
        (*local_c0)[1] = (long **)local_c8[1];
        *local_c8[1] = (long **)*local_c0;
        local_b8 = 0;
        for (ppppplVar18 = (long *****)local_c0; ppppplVar18 != &local_c8;
            ppppplVar18 = (long *****)ppppplVar18[1]) {
        }
      }
      puVar19 = puVar19 + 1;
    } while (puVar19 != puVar1);
  }
  if (*(long *)(lVar6 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

