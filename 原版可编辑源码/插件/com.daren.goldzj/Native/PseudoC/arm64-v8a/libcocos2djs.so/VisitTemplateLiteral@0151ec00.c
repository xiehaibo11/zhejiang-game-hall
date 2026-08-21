
/* v8::internal::interpreter::BytecodeGenerator::VisitTemplateLiteral(v8::internal::TemplateLiteral*)
    */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitTemplateLiteral
          (BytecodeGenerator *this,TemplateLiteral *param_1)

{
  BytecodeArrayBuilder *this_00;
  long *plVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  bool bVar6;
  undefined4 uVar7;
  long *plVar8;
  ulong uVar9;
  AstRawString *pAVar10;
  int iVar11;
  AstNode *pAVar12;
  long lVar13;
  undefined8 local_98;
  BytecodeGenerator *pBStack_90;
  int local_88;
  undefined8 local_80;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  plVar1 = *(long **)(param_1 + 8);
  plVar2 = *(long **)(param_1 + 0x10);
  uVar7 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),0xf);
  iVar3 = *(int *)(this + 0x118);
  iVar11 = *(int *)(this + 0x11c);
  plVar8 = *(long **)(this + 0x120);
  if (iVar11 <= iVar3 + 1) {
    iVar11 = iVar3 + 1;
  }
  *(int *)(this + 0x118) = iVar3 + 1;
  *(int *)(this + 0x11c) = iVar11;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x10))(plVar8,iVar3);
  }
  iVar11 = *(int *)param_1;
  this_00 = (BytecodeArrayBuilder *)(this + 0x18);
  if ((iVar11 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
    this[0x1c0] = (BytecodeGenerator)0x1;
    *(int *)(this + 0x1c4) = iVar11;
  }
  if (*(int *)((long)plVar2 + 0xc) < 1) {
LAB_0151edf8:
    if (*(int *)(*(long *)(*plVar1 + (long)*(int *)((long)plVar1 + 0xc) * 8 + -8) + 0x10) != 0) {
      BytecodeArrayBuilder::StoreAccumulatorInRegister(this_00,iVar3);
      BytecodeArrayBuilder::LoadLiteral
                (this_00,*(AstRawString **)(*plVar1 + (long)*(int *)((long)plVar1 + 0xc) * 8 + -8));
      BytecodeArrayBuilder::BinaryOperation(this_00,0x2c,iVar3,uVar7);
    }
    if (*(long *)(lVar5 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  lVar13 = 0;
  do {
    bVar6 = false;
    while( true ) {
      pAVar10 = *(AstRawString **)(*plVar1 + lVar13 * 8);
      if (*(int *)(pAVar10 + 0x10) != 0) {
        BytecodeArrayBuilder::LoadLiteral(this_00,pAVar10);
        if (bVar6) {
          BytecodeArrayBuilder::BinaryOperation(this_00,0x2c,iVar3,uVar7);
        }
        BytecodeArrayBuilder::StoreAccumulatorInRegister(this_00,iVar3);
        bVar6 = true;
      }
      local_98 = *(undefined8 *)(this + 0x300);
      pAVar12 = *(AstNode **)(*plVar2 + lVar13 * 8);
      local_88 = *(int *)(this + 0x118);
      local_80 = 2;
      *(undefined8 **)(this + 0x300) = &local_98;
      pBStack_90 = this;
      if (this[8] == (BytecodeGenerator)0x0) {
        uVar9 = GetCurrentStackPosition();
        if (uVar9 < *(ulong *)this) {
          this[8] = (BytecodeGenerator)0x1;
        }
        else {
          VisitNoStackOverflowCheck(this,pAVar12);
        }
        iVar11 = local_80._4_4_;
      }
      else {
        iVar11 = 0;
      }
      *(undefined8 *)(pBStack_90 + 0x300) = local_98;
      plVar8 = *(long **)(pBStack_90 + 0x120);
      iVar4 = *(int *)(pBStack_90 + 0x118);
      *(int *)(pBStack_90 + 0x118) = local_88;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x20))(plVar8,CONCAT44(iVar4 - local_88,local_88));
      }
      if (iVar11 != 2) {
        BytecodeArrayBuilder::ToString(this_00);
      }
      if (bVar6) {
        BytecodeArrayBuilder::BinaryOperation(this_00,0x2c,iVar3,uVar7);
      }
      lVar13 = lVar13 + 1;
      if (*(int *)((long)plVar2 + 0xc) <= lVar13) goto LAB_0151edf8;
      if (lVar13 == 0) break;
      BytecodeArrayBuilder::StoreAccumulatorInRegister(this_00,iVar3);
      bVar6 = true;
    }
  } while( true );
}

