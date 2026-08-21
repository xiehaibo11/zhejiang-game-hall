
void FUN_01622744(InstructionSelector *param_1,Node *param_2,int param_3,int *param_4,
                 undefined4 param_5)

{
  Node *pNVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
  *pBVar9;
  Node *pNVar10;
  long lVar11;
  Node *pNVar12;
  InstructionSequence *this;
  undefined2 uVar13;
  InstructionSelector *local_b8;
  Constant aCStack_b0 [16];
  BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
  aBStack_a0 [8];
  Node *local_98;
  ulong local_78;
  char local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  pNVar10 = param_2 + 0x20;
  if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
    pNVar10 = (Node *)(*(long *)pNVar10 + 0x10);
  }
  pNVar1 = *(Node **)pNVar10;
  pNVar10 = *(Node **)(pNVar10 + 8);
  lVar11 = *(long *)pNVar10;
  local_b8 = param_1;
  pNVar12 = pNVar1;
  if (*(ushort *)(lVar11 + 0x10) - 0x17 < 2) {
    if (*(ushort *)(lVar11 + 0x10) == 0x17) {
      lVar11 = (long)*(int *)(lVar11 + 0x2c);
    }
    else {
      lVar11 = *(long *)(lVar11 + 0x30);
    }
    uVar6 = v8::internal::compiler::Arm64OperandGenerator::CanBeImmediate
                      ((Arm64OperandGenerator *)&local_b8,lVar11,param_5);
    if ((uVar6 & 1) == 0) goto LAB_016227e0;
  }
  else {
LAB_016227e0:
    lVar11 = *(long *)pNVar1;
    if (*(ushort *)(lVar11 + 0x10) - 0x17 < 2) {
      if (*(ushort *)(lVar11 + 0x10) == 0x17) {
        lVar11 = (long)*(int *)(lVar11 + 0x2c);
      }
      else {
        lVar11 = *(long *)(lVar11 + 0x30);
      }
      uVar6 = v8::internal::compiler::Arm64OperandGenerator::CanBeImmediate
                        ((Arm64OperandGenerator *)&local_b8,lVar11,param_5);
      if ((uVar6 & 1) != 0) {
        iVar5 = v8::internal::compiler::CommuteFlagsCondition(param_4[1]);
        param_4[1] = iVar5;
        pNVar12 = pNVar10;
        pNVar10 = pNVar1;
      }
    }
  }
  if (((param_3 == 0x68) && (iVar5 = *param_4, iVar5 != 2)) && (iVar5 != 4)) {
    lVar11 = *(long *)pNVar10;
    if (*(short *)(lVar11 + 0x10) == 0x18) {
      uVar6 = *(ulong *)(lVar11 + 0x30);
    }
    else {
      if (*(short *)(lVar11 + 0x10) != 0x17) goto LAB_016229a0;
      uVar6 = (ulong)*(int *)(lVar11 + 0x2c);
    }
    if (3 < iVar5 - 1U) goto LAB_016229a0;
    uVar2 = param_4[1];
    if (9 < uVar2) goto LAB_016229a0;
    uVar3 = 1 << (ulong)(uVar2 & 0x1f);
    if ((uVar3 & 3) != 0) {
      if (*(short *)(*(long *)pNVar12 + 0x10) == 0x13b) {
        v8::internal::compiler::
        BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
        ::BinopMatcher(aBStack_a0,pNVar12);
        uVar8 = CONCAT17(POPCOUNT((char)(uVar6 >> 0x38)),
                         CONCAT16(POPCOUNT((char)(uVar6 >> 0x30)),
                                  CONCAT15(POPCOUNT((char)(uVar6 >> 0x28)),
                                           CONCAT14(POPCOUNT((char)(uVar6 >> 0x20)),
                                                    CONCAT13(POPCOUNT((char)(uVar6 >> 0x18)),
                                                             CONCAT12(POPCOUNT((char)(uVar6 >> 0x10)
                                                                              ),
                                                                      CONCAT11(POPCOUNT((char)(uVar6
                                                                                              >> 8))
                                                                               ,POPCOUNT((char)uVar6
                                                                                        ))))))));
        uVar13 = NEON_uaddlv(uVar8,1);
        if ((((int)CONCAT62((int6)((ulong)uVar8 >> 0x10),uVar13) == 1) && (*param_4 - 1U < 2)) &&
           ((local_70 != '\0' &&
            ((local_78 == uVar6 &&
             (uVar7 = v8::internal::compiler::InstructionSelector::CanCover(param_1,param_2,pNVar12)
             , (uVar7 & 1) != 0)))))) {
          param_4[1] = param_4[1] ^ 1;
          uVar7 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,local_98);
          v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,local_98);
          this = *(InstructionSequence **)(param_1 + 0x10);
          uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
          uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
          uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          v8::internal::compiler::Constant::Constant
                    (aCStack_b0,(int)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20));
          pBVar9 = (BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
                    *)aCStack_b0;
          goto LAB_01622acc;
        }
      }
LAB_0162299c:
      if (uVar6 == 0) {
        if ((9 < uVar2) || ((0x303U >> (ulong)(uVar2 & 0x1f) & 1) == 0)) {
LAB_01622aec:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        param_4[1] = *(int *)(&DAT_01a56afc + (long)(int)uVar2 * 4);
        uVar6 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,pNVar12);
        v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,pNVar12);
        v8::internal::compiler::InstructionSelector::EmitWithContinuation
                  (param_1,0xa7,(uVar6 & 0xffffffff) << 3 | 0x5800000001,param_4);
        goto LAB_016229f4;
      }
      goto LAB_016229a0;
    }
    if ((uVar3 & 0xc) == 0) {
      if ((1 << (ulong)(uVar2 & 0x1f) & 0x300U) != 0) goto LAB_0162299c;
      goto LAB_016229a0;
    }
    if ((iVar5 - 3U < 2) || (uVar6 != 0)) goto LAB_016229a0;
    if (uVar2 == 2) {
      iVar5 = 1;
    }
    else {
      if (uVar2 != 3) goto LAB_01622aec;
      iVar5 = 0;
    }
    param_4[1] = iVar5;
    uVar7 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,pNVar12);
    v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,pNVar12);
    this = *(InstructionSequence **)(param_1 + 0x10);
    v8::internal::compiler::Constant::Constant((Constant *)aBStack_a0,0x3f);
    pBVar9 = aBStack_a0;
LAB_01622acc:
    uVar8 = v8::internal::compiler::InstructionSequence::AddImmediate(this,(Constant *)pBVar9);
    param_3 = 0xa5;
  }
  else {
LAB_016229a0:
    uVar7 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(local_b8,pNVar12);
    v8::internal::compiler::InstructionSelector::MarkAsUsed(local_b8,pNVar12);
    uVar8 = v8::internal::compiler::Arm64OperandGenerator::UseOperand(&local_b8,pNVar10,param_5);
  }
  v8::internal::compiler::InstructionSelector::EmitWithContinuation
            (param_1,param_3,(uVar7 & 0xffffffff) << 3 | 0x5800000001,uVar8,param_4);
LAB_016229f4:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

