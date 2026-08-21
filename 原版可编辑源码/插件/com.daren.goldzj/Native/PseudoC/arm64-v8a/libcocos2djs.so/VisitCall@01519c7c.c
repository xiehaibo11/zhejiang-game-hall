
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::interpreter::BytecodeGenerator::VisitCall(v8::internal::Call*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitCall(BytecodeGenerator *this,Call *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  Call CVar4;
  long lVar5;
  bool bVar6;
  uint uVar7;
  undefined4 uVar8;
  long *plVar9;
  BytecodeLabel *pBVar10;
  BytecodeArrayBuilder *pBVar11;
  undefined8 uVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  BytecodeLabels *pBVar16;
  byte bVar17;
  AstNode *pAVar18;
  long lVar19;
  int iVar20;
  uint uVar21;
  ulong uVar22;
  ulong local_f0;
  undefined8 local_d8;
  BytecodeLabel local_d0 [8];
  undefined8 local_c8;
  BytecodeGenerator *local_c0;
  BytecodeLabels *local_b8;
  BytecodeLabels *local_b0;
  long local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 local_88;
  BytecodeGenerator *pBStack_80;
  int local_78;
  undefined8 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  pAVar18 = *(AstNode **)(param_1 + 8);
  uVar7 = Call::GetCallType(param_1);
  if (uVar7 == 9) {
    VisitCallSuper(this,param_1);
    goto LAB_0151a450;
  }
  iVar2 = *(int *)(this + 0x118);
  iVar20 = *(int *)(this + 0x11c);
  plVar9 = *(long **)(this + 0x120);
  uVar14 = iVar2 + 1;
  if (iVar20 <= (int)uVar14) {
    iVar20 = iVar2 + 1;
  }
  *(uint *)(this + 0x118) = uVar14;
  *(int *)(this + 0x11c) = iVar20;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x10))(plVar9,iVar2);
    uVar14 = *(uint *)(this + 0x118);
  }
  uVar15 = (ulong)uVar14;
  if (*(int *)(param_1 + 0x1c) == 0) {
    bVar6 = false;
  }
  else {
    bVar6 = (*(uint *)(*(long *)(*(long *)(param_1 + 0x10) +
                                (long)(*(int *)(param_1 + 0x1c) + -1) * 8) + 4) & 0x3f) == 0x2d;
  }
  if ((FLAG_enable_one_shot_optimization == '\0') || (0 < *(int *)(this + 0x334))) {
    bVar17 = 0;
  }
  else if (*(int *)(*(long *)(*(long *)(this + 0x1d0) + 0x10) + 0x1c) == 0) {
    bVar17 = 1;
  }
  else {
    bVar17 = *(byte *)(*(long *)(*(long *)(this + 0x1d0) + 0x10) + 6) >> 6 & 1;
  }
  iVar20 = 0;
  uVar21 = 0;
  local_d8 = uVar15;
  switch(uVar7) {
  case 0:
    if ((bVar6 | bVar17) == 1) {
      iVar20 = *(int *)(this + 0x11c);
      plVar9 = *(long **)(this + 0x120);
      *(uint *)(this + 0x118) = uVar14 + 1;
      if (iVar20 <= (int)(uVar14 + 1)) {
        iVar20 = uVar14 + 1;
      }
      *(int *)(this + 0x11c) = iVar20;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x10))(plVar9,uVar15);
      }
      iVar20 = 1;
      local_d8 = CONCAT44(1,(int)local_d8);
      pBVar11 = (BytecodeArrayBuilder *)
                BytecodeArrayBuilder::LoadUndefined((BytecodeArrayBuilder *)(this + 0x18));
      BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar11,uVar15);
      uVar14 = *(uint *)(this + 0x118);
      uVar21 = 0;
    }
    else {
      iVar20 = 0;
      uVar21 = 1;
    }
    local_c0 = *(BytecodeGenerator **)(this + 0x300);
    if ((*(uint *)(pAVar18 + 4) & 0x3f) != 0x35) {
      pAVar18 = (AstNode *)0x0;
    }
    uVar12 = *(undefined8 *)(pAVar18 + 8);
    uVar3 = *(uint *)(pAVar18 + 4);
    local_b0 = (BytecodeLabels *)CONCAT44(local_b0._4_4_,uVar14);
    local_a8 = 2;
    *(BytecodeGenerator ***)(this + 0x300) = &local_c0;
    local_b8 = (BytecodeLabels *)this;
    BuildVariableLoad(this,uVar12,uVar3 >> 0xb & 1,1);
    *(BytecodeGenerator **)(local_b8 + 0x300) = local_c0;
    plVar9 = *(long **)(local_b8 + 0x120);
    iVar13 = *(int *)(local_b8 + 0x118);
    *(int *)(local_b8 + 0x118) = (int)local_b0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x20))(plVar9,CONCAT44(iVar13 - (int)local_b0,(int)local_b0));
    }
    BytecodeArrayBuilder::StoreAccumulatorInRegister((BytecodeArrayBuilder *)(this + 0x18),iVar2);
    CVar4 = param_1[5];
    break;
  case 1:
    iVar20 = *(int *)(this + 0x11c);
    plVar9 = *(long **)(this + 0x120);
    if (iVar20 <= (int)(uVar14 + 1)) {
      iVar20 = uVar14 + 1;
    }
    *(uint *)(this + 0x118) = uVar14 + 1;
    *(int *)(this + 0x11c) = iVar20;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,uVar15);
    }
    local_d8 = CONCAT44(1,(int)local_d8);
    iVar13 = *(int *)(this + 0x118);
    iVar20 = *(int *)(this + 0x11c);
    plVar9 = *(long **)(this + 0x120);
    uVar14 = iVar13 + 1;
    uVar22 = (ulong)uVar14;
    if (iVar20 <= (int)uVar14) {
      iVar20 = iVar13 + 1;
    }
    *(uint *)(this + 0x118) = uVar14;
    *(int *)(this + 0x11c) = iVar20;
    if (plVar9 == (long *)0x0) {
      iVar1 = iVar13 + 3;
      if (iVar20 <= iVar1) {
        iVar20 = iVar1;
      }
      *(int *)(this + 0x118) = iVar1;
      *(int *)(this + 0x11c) = iVar20;
    }
    else {
      (**(code **)(*plVar9 + 0x10))(plVar9,iVar13);
      uVar22 = (ulong)*(uint *)(this + 0x118);
      iVar20 = *(uint *)(this + 0x118) + 2;
      iVar1 = *(int *)(this + 0x11c);
      if (*(int *)(this + 0x11c) <= iVar20) {
        iVar1 = iVar20;
      }
      *(int *)(this + 0x118) = iVar20;
      *(int *)(this + 0x11c) = iVar1;
      if (*(long **)(this + 0x120) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x120) + 0x18))();
      }
    }
    local_f0 = uVar22 | 0x200000000;
    if ((*(uint *)(pAVar18 + 4) & 0x3f) != 0x35) {
      pAVar18 = (AstNode *)0x0;
    }
    pBVar11 = (BytecodeArrayBuilder *)
              BytecodeArrayBuilder::LoadLiteral
                        ((BytecodeArrayBuilder *)(this + 0x18),
                         *(AstRawString **)(*(long *)(pAVar18 + 8) + 8));
    uVar12 = BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar11,iVar13);
    pBVar11 = (BytecodeArrayBuilder *)
              BytecodeArrayBuilder::CallRuntimeForPair(uVar12,1,iVar13,local_f0);
    pBVar11 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::MoveRegister(pBVar11,uVar22,iVar2);
    BytecodeArrayBuilder::MoveRegister(pBVar11,(int)uVar22 + 1,uVar15);
    plVar9 = *(long **)(this + 0x120);
    iVar20 = *(int *)(this + 0x118);
    *(int *)(this + 0x118) = iVar13;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x20))(plVar9,CONCAT44(iVar20 - iVar13,iVar13));
    }
    iVar20 = 1;
    uVar21 = 0;
    CVar4 = param_1[5];
    break;
  case 2:
  case 3:
  case 8:
    if ((*(uint *)(pAVar18 + 4) & 0x3f) != 0x2c) {
      pAVar18 = (AstNode *)0x0;
    }
    VisitAndPushIntoRegisterList(this,*(Expression **)(pAVar18 + 8),(RegisterList *)&local_d8);
    local_c0 = *(BytecodeGenerator **)(this + 0x300);
    iVar20 = local_d8._4_4_;
    local_b0 = (BytecodeLabels *)CONCAT44(local_b0._4_4_,*(undefined4 *)(this + 0x118));
    iVar13 = 0;
    if (local_d8._4_4_ != 0) {
      iVar13 = local_d8._4_4_ + (int)local_d8 + -1;
    }
    local_a8 = 2;
    *(BytecodeGenerator ***)(this + 0x300) = &local_c0;
    local_b8 = (BytecodeLabels *)this;
    VisitPropertyLoad(this,iVar13,pAVar18);
    BytecodeArrayBuilder::StoreAccumulatorInRegister((BytecodeArrayBuilder *)(this + 0x18),iVar2);
    *(BytecodeGenerator **)(local_b8 + 0x300) = local_c0;
    plVar9 = *(long **)(local_b8 + 0x120);
    iVar13 = *(int *)(local_b8 + 0x118);
    *(int *)(local_b8 + 0x118) = (int)local_b0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x20))(plVar9,CONCAT44(iVar13 - (int)local_b0,(int)local_b0));
    }
    goto LAB_0151a1f0;
  case 4:
  case 5:
    if ((*(uint *)(pAVar18 + 4) & 0x3f) != 0x2b) {
      pAVar18 = (AstNode *)0x0;
    }
    lVar19 = *(long *)(pAVar18 + 8);
    local_d0[0] = (BytecodeLabel)0x0;
    local_c8 = 0xffffffffffffffff;
    uStack_a0 = *(undefined8 *)(this + 0x10);
    local_98 = 0;
    local_a8 = 0;
    local_90 = *(undefined8 *)(this + 0x310);
    if ((*(uint *)(lVar19 + 4) & 0x3f) != 0x2c) {
      lVar19 = 0;
    }
    *(BytecodeLabels **)(this + 0x310) = (BytecodeLabels *)&local_b8;
    local_c0 = this;
    local_b8 = (BytecodeLabels *)&local_b8;
    local_b0 = (BytecodeLabels *)&local_b8;
    VisitAndPushIntoRegisterList(this,*(Expression **)(lVar19 + 8),(RegisterList *)&local_d8);
    local_88 = *(undefined8 *)(this + 0x300);
    iVar20 = local_d8._4_4_;
    local_78 = *(int *)(this + 0x118);
    iVar13 = 0;
    if (local_d8._4_4_ != 0) {
      iVar13 = local_d8._4_4_ + (int)local_d8 + -1;
    }
    local_70 = 2;
    *(undefined8 **)(this + 0x300) = &local_88;
    pBStack_80 = this;
    VisitPropertyLoad(this,iVar13,lVar19);
    pBVar11 = (BytecodeArrayBuilder *)(this + 0x18);
    BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar11,iVar2);
    *(undefined8 *)(pBStack_80 + 0x300) = local_88;
    plVar9 = *(long **)(pBStack_80 + 0x120);
    iVar13 = *(int *)(pBStack_80 + 0x118);
    *(int *)(pBStack_80 + 0x118) = local_78;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x20))(plVar9,CONCAT44(iVar13 - local_78,local_78));
    }
    BytecodeArrayBuilder::Jump(pBVar11,local_d0);
    BytecodeLabels::Bind((BytecodeLabels *)&local_b8,pBVar11);
    BytecodeArrayBuilder::LoadUndefined(pBVar11);
    BytecodeArrayBuilder::Bind(pBVar11,local_d0);
    *(undefined8 *)(local_c0 + 0x310) = local_90;
    if (local_a8 != 0) {
      *(undefined8 *)(*(long *)local_b0 + 8) = *(undefined8 *)(local_b8 + 8);
      **(undefined8 **)(local_b8 + 8) = *(undefined8 *)local_b0;
      local_a8 = 0;
      for (pBVar16 = local_b0; pBVar16 != (BytecodeLabels *)&local_b8;
          pBVar16 = *(BytecodeLabels **)(pBVar16 + 8)) {
      }
    }
    goto LAB_0151a1f0;
  case 6:
    iVar20 = *(int *)(this + 0x11c);
    plVar9 = *(long **)(this + 0x120);
    *(uint *)(this + 0x118) = uVar14 + 1;
    if (iVar20 <= (int)(uVar14 + 1)) {
      iVar20 = uVar14 + 1;
    }
    *(int *)(this + 0x11c) = iVar20;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,uVar15);
    }
    local_d8 = CONCAT44(1,(int)local_d8);
    if ((*(uint *)(pAVar18 + 4) & 0x3f) != 0x2c) {
      pAVar18 = (AstNode *)0x0;
    }
    VisitNamedSuperPropertyLoad(this,pAVar18,uVar15);
    goto LAB_0151a1e4;
  case 7:
    iVar20 = *(int *)(this + 0x11c);
    plVar9 = *(long **)(this + 0x120);
    *(uint *)(this + 0x118) = uVar14 + 1;
    if (iVar20 <= (int)(uVar14 + 1)) {
      iVar20 = uVar14 + 1;
    }
    *(int *)(this + 0x11c) = iVar20;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,uVar15);
    }
    local_d8 = CONCAT44(1,(int)local_d8);
    if ((*(uint *)(pAVar18 + 4) & 0x3f) != 0x2c) {
      pAVar18 = (AstNode *)0x0;
    }
    VisitKeyedSuperPropertyLoad(this,pAVar18,uVar15);
LAB_0151a1e4:
    iVar20 = 1;
    BytecodeArrayBuilder::StoreAccumulatorInRegister((BytecodeArrayBuilder *)(this + 0x18),iVar2);
LAB_0151a1f0:
    uVar21 = 0;
switchD_01519db4_caseD_9:
    CVar4 = param_1[5];
    break;
  case 9:
    goto switchD_01519db4_caseD_9;
  case 10:
    if ((bVar6 | bVar17) == 1) {
      iVar20 = *(int *)(this + 0x11c);
      plVar9 = *(long **)(this + 0x120);
      *(uint *)(this + 0x118) = uVar14 + 1;
      if (iVar20 <= (int)(uVar14 + 1)) {
        iVar20 = uVar14 + 1;
      }
      *(int *)(this + 0x11c) = iVar20;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x10))(plVar9,uVar15);
      }
      iVar20 = 1;
      local_d8 = CONCAT44(1,(int)local_d8);
      pBVar11 = (BytecodeArrayBuilder *)
                BytecodeArrayBuilder::LoadUndefined((BytecodeArrayBuilder *)(this + 0x18));
      BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar11,uVar15);
      uVar14 = *(uint *)(this + 0x118);
      uVar21 = 0;
    }
    else {
      iVar20 = 0;
      uVar21 = 1;
    }
    local_c0 = *(BytecodeGenerator **)(this + 0x300);
    local_b0 = (BytecodeLabels *)CONCAT44(local_b0._4_4_,uVar14);
    local_a8 = 2;
    *(BytecodeGenerator ***)(this + 0x300) = &local_c0;
    local_b8 = (BytecodeLabels *)this;
    if (this[8] == (BytecodeGenerator)0x0) {
      uVar15 = GetCurrentStackPosition();
      if (uVar15 < *(ulong *)this) {
        this[8] = (BytecodeGenerator)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar18);
      }
    }
    BytecodeArrayBuilder::StoreAccumulatorInRegister((BytecodeArrayBuilder *)(this + 0x18),iVar2);
    *(BytecodeGenerator **)(local_b8 + 0x300) = local_c0;
    plVar9 = *(long **)(local_b8 + 0x120);
    iVar13 = *(int *)(local_b8 + 0x118);
    *(int *)(local_b8 + 0x118) = (int)local_b0;
    if (plVar9 == (long *)0x0) goto switchD_01519db4_caseD_9;
    (**(code **)(*plVar9 + 0x20))(plVar9,CONCAT44(iVar13 - (int)local_b0,(int)local_b0));
    CVar4 = param_1[5];
    break;
  default:
    uVar21 = 0;
    CVar4 = param_1[5];
  }
  if (((byte)CVar4 >> 1 & 1) != 0) {
    pBVar11 = (BytecodeArrayBuilder *)
              BytecodeArrayBuilder::LoadAccumulatorWithRegister
                        ((BytecodeArrayBuilder *)(this + 0x18),iVar2);
    pBVar10 = (BytecodeLabel *)BytecodeLabels::New(*(BytecodeLabels **)(this + 0x310));
    BytecodeArrayBuilder::JumpIfUndefinedOrNull(pBVar11,pBVar10);
  }
  iVar13 = *(int *)(param_1 + 0x1c);
  if (0 < iVar13) {
    lVar19 = 0;
    do {
      VisitAndPushIntoRegisterList
                (this,*(Expression **)(*(long *)(param_1 + 0x10) + lVar19 * 8),
                 (RegisterList *)&local_d8);
      iVar13 = *(int *)(param_1 + 0x1c);
      lVar19 = lVar19 + 1;
    } while (lVar19 < iVar13);
    iVar20 = local_d8._4_4_;
  }
  if (iVar13 + (uVar21 ^ 1) != iVar20) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "reciever_arg_count + expr->arguments()->length() == args.register_count()");
  }
  if ((0 < iVar13) && ((*(uint *)(param_1 + 4) >> 7 & 1) != 0)) {
    uVar14 = *(uint *)(this + 0x118);
    plVar9 = *(long **)(this + 0x120);
    iVar13 = (int)local_d8 + (uVar21 ^ 1);
    iVar20 = uVar14 + 6;
    *(int *)(this + 0x118) = iVar20;
    iVar1 = *(int *)(this + 0x11c);
    if (*(int *)(this + 0x11c) <= iVar20) {
      iVar1 = iVar20;
    }
    uVar15 = (ulong)uVar14 | 0x600000000;
    *(int *)(this + 0x11c) = iVar1;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x18))(plVar9,uVar15);
    }
    pBVar11 = (BytecodeArrayBuilder *)
              BytecodeArrayBuilder::MoveRegister
                        ((BytecodeArrayBuilder *)(this + 0x18),iVar2,(ulong)uVar14);
    pBVar11 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::MoveRegister(pBVar11,iVar13,uVar14 + 1);
    uVar8 = Register::function_closure();
    pBVar11 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::MoveRegister(pBVar11,uVar8,uVar14 + 2);
    pBVar11 = (BytecodeArrayBuilder *)
              BytecodeArrayBuilder::LoadLiteral
                        (pBVar11,((ulong)*(ushort *)(*(long *)(this + 0x1e8) + 0x81) & 1) << 1);
    pBVar11 = (BytecodeArrayBuilder *)
              BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar11,uVar14 + 3);
    pBVar11 = (BytecodeArrayBuilder *)
              BytecodeArrayBuilder::LoadLiteral
                        (pBVar11,(long)*(int *)(*(long *)(this + 0x1e8) + 0x70) << 1);
    pBVar11 = (BytecodeArrayBuilder *)
              BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar11,uVar14 + 4);
    pBVar11 = (BytecodeArrayBuilder *)
              BytecodeArrayBuilder::LoadLiteral(pBVar11,(long)*(int *)param_1 << 1);
    BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar11,uVar14 + 5);
    pBVar11 = (BytecodeArrayBuilder *)
              BytecodeArrayBuilder::CallRuntime((BytecodeArrayBuilder *)(this + 0x18),0x3d,uVar15);
    BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar11,iVar2);
    plVar9 = *(long **)(this + 0x120);
    iVar20 = *(int *)(this + 0x118);
    *(uint *)(this + 0x118) = uVar14;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x20))(plVar9,CONCAT44(iVar20 - uVar14,uVar14));
    }
  }
  uVar15 = local_d8;
  iVar20 = *(int *)param_1;
  pBVar11 = (BytecodeArrayBuilder *)(this + 0x18);
  if ((iVar20 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
    this[0x1c0] = (BytecodeGenerator)0x1;
    *(int *)(this + 0x1c4) = iVar20;
  }
  if (bVar6 == false) {
    if (bVar17 == 0) {
      uVar12 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),4)
      ;
      if ((uVar7 | 1) == 3) {
        BytecodeArrayBuilder::CallProperty();
      }
      else if (uVar21 == 0) {
        BytecodeArrayBuilder::CallAnyReceiver(pBVar11,iVar2,uVar15,uVar12);
      }
      else {
        BytecodeArrayBuilder::CallUndefinedReceiver();
      }
    }
    else {
      BytecodeArrayBuilder::CallNoFeedback(pBVar11,iVar2,local_d8);
    }
  }
  else {
    uVar12 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),4);
    BytecodeArrayBuilder::CallWithSpread(pBVar11,iVar2,uVar15,uVar12);
  }
LAB_0151a450:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

