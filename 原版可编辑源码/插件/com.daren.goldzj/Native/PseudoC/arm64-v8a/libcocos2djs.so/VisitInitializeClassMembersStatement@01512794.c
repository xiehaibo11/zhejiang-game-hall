
/* v8::internal::interpreter::BytecodeGenerator::VisitInitializeClassMembersStatement(v8::internal::InitializeClassMembersStatement*)
    */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitInitializeClassMembersStatement
          (BytecodeGenerator *this,InitializeClassMembersStatement *param_1)

{
  int iVar1;
  BytecodeArrayBuilder *this_00;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  BytecodeArrayBuilder *pBVar9;
  ulong uVar10;
  AstNode *pAVar11;
  ulong *puVar12;
  long lVar13;
  undefined8 local_98;
  BytecodeGenerator *pBStack_90;
  int local_88;
  undefined8 local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  uVar3 = *(uint *)(this + 0x118);
  uVar10 = (ulong)uVar3;
  plVar6 = *(long **)(this + 0x120);
  iVar1 = uVar3 + 3;
  iVar2 = *(int *)(this + 0x11c);
  if (*(int *)(this + 0x11c) <= iVar1) {
    iVar2 = iVar1;
  }
  *(int *)(this + 0x118) = iVar1;
  *(int *)(this + 0x11c) = iVar2;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6,uVar10 | 0x300000000);
  }
  this_00 = (BytecodeArrayBuilder *)(this + 0x18);
  uVar5 = BytecodeArrayBuilder::Receiver(this_00);
  BytecodeArrayBuilder::MoveRegister(this_00,uVar5,uVar10);
  plVar6 = *(long **)(param_1 + 8);
  if (0 < *(int *)((long)plVar6 + 0xc)) {
    lVar13 = 0;
    do {
      puVar12 = *(ulong **)(*plVar6 + lVar13 * 8);
      if (((*puVar12 & 3) == 0) && (*(char *)((long)puVar12 + 0x12) == '\0')) {
        uVar7 = Expression::IsStringLiteral((Expression *)(*puVar12 & 0xfffffffffffffffc));
        pAVar11 = (AstNode *)(*puVar12 & 0xfffffffffffffffc);
        if ((uVar7 & 1) != 0) {
          if ((*(uint *)(pAVar11 + 4) & 0x3f) != 0x29) {
            pAVar11 = (AstNode *)0x0;
          }
          pBVar9 = (BytecodeArrayBuilder *)
                   BytecodeArrayBuilder::LoadLiteral(this_00,*(AstRawString **)(pAVar11 + 8));
          goto LAB_015128b4;
        }
        local_98 = *(undefined8 *)(this + 0x300);
        local_88 = *(int *)(this + 0x118);
        local_80 = 2;
        *(undefined8 **)(this + 0x300) = &local_98;
        pBStack_90 = this;
        if (this[8] == (BytecodeGenerator)0x0) {
          uVar7 = GetCurrentStackPosition();
          if (uVar7 < *(ulong *)this) {
            this[8] = (BytecodeGenerator)0x1;
          }
          else {
            VisitNoStackOverflowCheck(this,pAVar11);
          }
        }
        *(undefined8 *)(pBStack_90 + 0x300) = local_98;
        plVar6 = *(long **)(pBStack_90 + 0x120);
        iVar1 = *(int *)(pBStack_90 + 0x118);
        *(int *)(pBStack_90 + 0x118) = local_88;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x20))(plVar6,CONCAT44(iVar1 - local_88,local_88));
        }
        BytecodeArrayBuilder::ToName(this_00,uVar3 + 1);
      }
      else {
        BuildVariableLoad(this,puVar12[3],1,1);
        pBVar9 = this_00;
LAB_015128b4:
        BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar9,uVar3 + 1);
      }
      pAVar11 = (AstNode *)puVar12[1];
      iVar1 = *(int *)pAVar11;
      if (iVar1 != -1) {
        this[0x1c0] = (BytecodeGenerator)0x2;
        *(int *)(this + 0x1c4) = iVar1;
        pAVar11 = (AstNode *)puVar12[1];
      }
      local_98 = *(undefined8 *)(this + 0x300);
      local_88 = *(int *)(this + 0x118);
      local_80 = 2;
      *(undefined8 **)(this + 0x300) = &local_98;
      pBStack_90 = this;
      if (this[8] == (BytecodeGenerator)0x0) {
        uVar7 = GetCurrentStackPosition();
        if (uVar7 < *(ulong *)this) {
          this[8] = (BytecodeGenerator)0x1;
        }
        else {
          VisitNoStackOverflowCheck(this,pAVar11);
        }
      }
      BytecodeArrayBuilder::StoreAccumulatorInRegister(this_00,uVar3 + 2);
      *(undefined8 *)(pBStack_90 + 0x300) = local_98;
      plVar6 = *(long **)(pBStack_90 + 0x120);
      iVar1 = *(int *)(pBStack_90 + 0x118);
      *(int *)(pBStack_90 + 0x118) = local_88;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))(plVar6,CONCAT44(iVar1 - local_88,local_88));
      }
      uVar7 = FunctionLiteral::NeedsHomeObject((Expression *)puVar12[1]);
      if ((uVar7 & 1) != 0) {
        uVar5 = 2;
        if ((*(ushort *)(*(long *)(this + 0x1e8) + 0x81) & 1) != 0) {
          uVar5 = 0xb;
        }
        uVar5 = FeedbackVectorSpec::AddSlot
                          ((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),uVar5);
        uVar8 = BytecodeArrayBuilder::LoadAccumulatorWithRegister(this_00,uVar10);
        BytecodeArrayBuilder::StoreHomeObjectProperty
                  (uVar8,uVar3 + 2,uVar5,*(ushort *)(*(long *)(this + 0x1e8) + 0x81) & 1);
      }
      if ((char)puVar12[2] == '\x03') {
        uVar5 = 0xd6;
        if (*(char *)((long)puVar12 + 0x12) != '\0') {
          uVar5 = 0xce;
        }
      }
      else {
        uVar5 = 0xce;
      }
      BytecodeArrayBuilder::CallRuntime(this_00,uVar5,uVar10 | 0x300000000);
      plVar6 = *(long **)(param_1 + 8);
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)((long)plVar6 + 0xc));
  }
  if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

