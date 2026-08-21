
/* v8::internal::interpreter::BytecodeGenerator::BuildDestructuringObjectAssignment(v8::internal::ObjectLiteral*,
   v8::internal::Token::Value, v8::internal::LookupHoistingMode) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::BuildDestructuringObjectAssignment
          (BytecodeGenerator *this,int *param_1,undefined4 param_3,undefined4 param_4)

{
  BytecodeArrayBuilder *this_00;
  undefined8 *puVar1;
  Expression *pEVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  BytecodeArrayBuilder *pBVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  AstNode *pAVar14;
  Expression *this_01;
  undefined8 *puVar15;
  uint uVar16;
  uint uVar17;
  ulong *puVar18;
  int *piVar19;
  BytecodeLabel local_e0 [8];
  undefined8 local_d8;
  ulong local_d0;
  BytecodeGenerator *local_c8;
  int local_c0;
  undefined8 local_b8;
  ulong local_a0;
  BytecodeGenerator *local_98;
  int local_90;
  undefined8 local_88;
  long local_80;
  
  lVar6 = tpidr_el0;
  local_80 = *(long *)(lVar6 + 0x28);
  uVar3 = *(uint *)(this + 0x118);
  if ((*(byte *)((long)param_1 + 5) >> 2 & 1) == 0) {
    iVar4 = *(int *)(this + 0x11c);
    plVar7 = *(long **)(this + 0x120);
    *(uint *)(this + 0x118) = uVar3 + 1;
    if (iVar4 <= (int)(uVar3 + 1)) {
      iVar4 = uVar3 + 1;
    }
    *(int *)(this + 0x11c) = iVar4;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,uVar3);
    }
    uVar13 = 0;
    uVar16 = 0x7fffffff;
  }
  else {
    uVar17 = param_1[9];
    plVar7 = *(long **)(this + 0x120);
    iVar4 = uVar3 + uVar17;
    iVar5 = *(int *)(this + 0x11c);
    if (*(int *)(this + 0x11c) <= iVar4) {
      iVar5 = iVar4;
    }
    uVar13 = (ulong)uVar17 << 0x20;
    *(int *)(this + 0x118) = iVar4;
    *(int *)(this + 0x11c) = iVar5;
    uVar16 = uVar3;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7,CONCAT44(uVar17,uVar3));
    }
  }
  this_00 = (BytecodeArrayBuilder *)(this + 0x18);
  BytecodeArrayBuilder::StoreAccumulatorInRegister(this_00,uVar3);
  lVar11 = (long)param_1[9];
  if (param_1[9] == 0) {
LAB_01516c10:
    local_d0 = local_d0 & 0xffffffffffffff00;
    local_a0 = local_a0 & 0xffffffffffffff00;
    local_c8 = (BytecodeGenerator *)0xffffffffffffffff;
    local_98 = (BytecodeGenerator *)0xffffffffffffffff;
    pBVar8 = (BytecodeArrayBuilder *)
             BytecodeArrayBuilder::JumpIfUndefinedOrNull(this_00,(BytecodeLabel *)&local_d0);
    BytecodeArrayBuilder::Jump(pBVar8,(BytecodeLabel *)&local_a0);
    BytecodeArrayBuilder::Bind(this_00,(BytecodeLabel *)&local_d0);
    iVar4 = *param_1;
    if ((iVar4 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
      this[0x1c0] = (BytecodeGenerator)0x1;
      *(int *)(this + 0x1c4) = iVar4;
    }
    BytecodeArrayBuilder::CallRuntime(this_00,0xae,uVar3);
    BytecodeArrayBuilder::Bind(this_00,(BytecodeLabel *)&local_a0);
    lVar11 = (long)param_1[9];
    if (param_1[9] == 0) goto LAB_01517080;
    puVar15 = *(undefined8 **)(param_1 + 6);
  }
  else {
    puVar15 = *(undefined8 **)(param_1 + 6);
    if (((*(byte *)*puVar15 & 3) != 0) && (((byte *)*puVar15)[0x10] != 6)) goto LAB_01516c10;
  }
  puVar1 = puVar15 + lVar11;
  uVar12 = (ulong)uVar16;
  do {
    uVar16 = uVar16 + 1;
    puVar18 = (ulong *)*puVar15;
    iVar4 = *(int *)(this + 0x118);
    uVar10 = *puVar18;
    piVar19 = (int *)puVar18[1];
    if ((piVar19[1] & 0x3fU) == 0x18) {
      pAVar14 = *(AstNode **)(piVar19 + 4);
      piVar19 = *(int **)(piVar19 + 2);
    }
    else {
      pAVar14 = (AstNode *)0x0;
    }
    if (((piVar19[1] & 0x3eU) != 0x16) && (iVar5 = *piVar19, iVar5 != -1)) {
      this[0x1c0] = (BytecodeGenerator)0x2;
      *(int *)(this + 0x1c4) = iVar5;
    }
    if ((char)puVar18[2] == '\x06') {
      lVar11 = 0;
      uVar17 = 0x7fffffff;
    }
    else {
      this_01 = (Expression *)(uVar10 & 0xfffffffffffffffc);
      uVar10 = Expression::IsPropertyName(this_01);
      uVar17 = uVar16;
      if ((uVar10 & 1) == 0) {
        lVar11 = 0;
        if ((*(byte *)((long)param_1 + 5) >> 2 & 1) == 0) {
LAB_01516da0:
          uVar17 = *(uint *)(this + 0x118);
          iVar5 = *(int *)(this + 0x11c);
          plVar7 = *(long **)(this + 0x120);
          if (iVar5 <= (int)(uVar17 + 1)) {
            iVar5 = uVar17 + 1;
          }
          *(uint *)(this + 0x118) = uVar17 + 1;
          *(int *)(this + 0x11c) = iVar5;
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x10))(plVar7,uVar17);
          }
        }
      }
      else {
        pEVar2 = this_01;
        if ((*(uint *)(this_01 + 4) & 0x3f) != 0x29) {
          pEVar2 = (Expression *)0x0;
        }
        lVar11 = *(long *)(pEVar2 + 8);
        if ((lVar11 != 0) && (((uint)param_1[1] >> 10 & 1) == 0)) {
          uVar17 = 0x7fffffff;
          goto LAB_01516f00;
        }
        if (((uint)param_1[1] >> 10 & 1) == 0) goto LAB_01516da0;
      }
      local_c8 = this;
      if ((*puVar18 & 3) == 0) {
        local_d0 = *(ulong *)(this + 0x300);
        local_c0 = *(int *)(this + 0x118);
        local_b8 = 2;
        *(ulong **)(this + 0x300) = &local_d0;
        if (this[8] == (BytecodeGenerator)0x0) {
          uVar10 = GetCurrentStackPosition();
          if (uVar10 < *(ulong *)this) {
            this[8] = (BytecodeGenerator)0x1;
          }
          else {
            VisitNoStackOverflowCheck(this,(AstNode *)this_01);
          }
        }
        BytecodeArrayBuilder::StoreAccumulatorInRegister(this_00,uVar17);
        *(ulong *)(local_c8 + 0x300) = local_d0;
        plVar7 = *(long **)(local_c8 + 0x120);
        iVar5 = *(int *)(local_c8 + 0x118);
        *(int *)(local_c8 + 0x118) = local_c0;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x20))(plVar7,CONCAT44(iVar5 - local_c0,local_c0));
        }
      }
      else {
        local_d0 = *(ulong *)(this + 0x300);
        local_c0 = *(int *)(this + 0x118);
        local_b8 = 2;
        *(ulong **)(this + 0x300) = &local_d0;
        if (this[8] == (BytecodeGenerator)0x0) {
          uVar10 = GetCurrentStackPosition();
          if (uVar10 < *(ulong *)this) {
            this[8] = (BytecodeGenerator)0x1;
          }
          else {
            VisitNoStackOverflowCheck(this,(AstNode *)this_01);
          }
        }
        *(ulong *)(local_c8 + 0x300) = local_d0;
        plVar7 = *(long **)(local_c8 + 0x120);
        iVar5 = *(int *)(local_c8 + 0x118);
        *(int *)(local_c8 + 0x118) = local_c0;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x20))(plVar7,CONCAT44(iVar5 - local_c0,local_c0));
        }
        BytecodeArrayBuilder::ToName(this_00,uVar17);
      }
    }
LAB_01516f00:
    PrepareAssignmentLhs(&local_d0,this,piVar19,0);
    if ((char)puVar18[2] == '\x06') {
      BytecodeArrayBuilder::CallRuntime(this_00,0xd5,uVar13 | uVar12);
    }
    else if (lVar11 == 0) {
      pBVar8 = (BytecodeArrayBuilder *)
               BytecodeArrayBuilder::LoadAccumulatorWithRegister(this_00,uVar17);
      uVar9 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),8);
      BytecodeArrayBuilder::LoadKeyedProperty(pBVar8,uVar3,uVar9);
    }
    else {
      uVar9 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),5);
      BytecodeArrayBuilder::LoadNamedProperty(this_00,uVar3,lVar11,uVar9);
    }
    if (pAVar14 != (AstNode *)0x0) {
      local_e0[0] = (BytecodeLabel)0x0;
      local_d8 = 0xffffffffffffffff;
      BytecodeArrayBuilder::JumpIfNotUndefined(this_00,local_e0);
      local_a0 = *(ulong *)(this + 0x300);
      local_90 = *(int *)(this + 0x118);
      local_88 = 2;
      *(ulong **)(this + 0x300) = &local_a0;
      local_98 = this;
      if (this[8] == (BytecodeGenerator)0x0) {
        uVar10 = GetCurrentStackPosition();
        if (uVar10 < *(ulong *)this) {
          this[8] = (BytecodeGenerator)0x1;
        }
        else {
          VisitNoStackOverflowCheck(this,pAVar14);
        }
      }
      *(ulong *)(local_98 + 0x300) = local_a0;
      plVar7 = *(long **)(local_98 + 0x120);
      iVar5 = *(int *)(local_98 + 0x118);
      *(int *)(local_98 + 0x118) = local_90;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x20))(plVar7,CONCAT44(iVar5 - local_90,local_90));
      }
      BytecodeArrayBuilder::Bind(this_00,local_e0);
    }
    BuildAssignment(this,&local_d0,param_3,param_4);
    plVar7 = *(long **)(this + 0x120);
    iVar5 = *(int *)(this + 0x118);
    *(int *)(this + 0x118) = iVar4;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))(plVar7,CONCAT44(iVar5 - iVar4,iVar4));
    }
    puVar15 = puVar15 + 1;
  } while (puVar1 != puVar15);
LAB_01517080:
  if (*(int *)(*(long *)(this + 0x300) + 0x18) != 1) {
    BytecodeArrayBuilder::LoadAccumulatorWithRegister(this_00,uVar3);
  }
  plVar7 = *(long **)(this + 0x120);
  iVar4 = *(int *)(this + 0x118);
  *(uint *)(this + 0x118) = uVar3;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7,CONCAT44(iVar4 - uVar3,uVar3));
  }
  if (*(long *)(lVar6 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

