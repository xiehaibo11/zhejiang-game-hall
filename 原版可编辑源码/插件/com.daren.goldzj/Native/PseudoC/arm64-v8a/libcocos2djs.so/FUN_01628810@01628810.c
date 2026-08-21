
undefined8
FUN_01628810(InstructionSelector *param_1,Node *param_2,uint param_3,Node *param_4,uint param_5,
            int *param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  *pBVar5;
  int iVar6;
  Node *pNVar7;
  InstructionSequence *pIVar8;
  undefined2 uVar9;
  uint uVar10;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_78 [8];
  Node *local_70;
  uint local_58;
  char local_54;
  Constant aCStack_50 [16];
  
  if (*param_6 - 1U < 4) {
    if (9 < param_5) {
      return 0;
    }
    uVar10 = 1 << (ulong)(param_5 & 0x1f);
    if ((uVar10 & 3) == 0) {
      if ((uVar10 & 0xc) == 0) {
        if ((1 << (ulong)(param_5 & 0x1f) & 0x300U) == 0) {
          return 0;
        }
        goto LAB_01628978;
      }
      if (param_3 != 0) {
        return 0;
      }
      if (*param_6 - 3U < 2) {
        return 0;
      }
      if (param_5 == 2) {
        iVar6 = 1;
      }
      else {
        if (param_5 != 3) goto LAB_01628b20;
        iVar6 = 0;
      }
      param_6[1] = iVar6;
      if ((*(short *)(*(long *)param_2 + 0x10) == 0x1de) &&
         (uVar2 = v8::internal::compiler::InstructionSelector::CanCover(param_1,param_4,param_2),
         (uVar2 & 1) != 0)) {
        uVar2 = v8::internal::compiler::InstructionSequence::NextVirtualRegister
                          (*(InstructionSequence **)(param_1 + 0x10));
        uVar2 = (uVar2 & 0xffffffff) << 3 | 0x5800000001;
        pNVar7 = param_2 + 0x20;
        if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
          pNVar7 = (Node *)(*(long *)pNVar7 + 0x10);
        }
        pNVar7 = *(Node **)pNVar7;
        uVar3 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,pNVar7);
        v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,pNVar7);
        v8::internal::compiler::InstructionSelector::Emit
                  (param_1,0xe4,uVar2,(uVar3 & 0xffffffff) << 3 | 0x5800000001,0,0);
        pIVar8 = *(InstructionSequence **)(param_1 + 0x10);
        v8::internal::compiler::Constant::Constant((Constant *)aBStack_78,0x3f);
        uVar1 = v8::internal::compiler::InstructionSequence::AddImmediate
                          (pIVar8,(Constant *)aBStack_78);
        uVar4 = 0xa5;
      }
      else {
        uVar2 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,param_2);
        uVar2 = (uVar2 & 0xffffffff) << 3;
        v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,param_2);
        pIVar8 = *(InstructionSequence **)(param_1 + 0x10);
        v8::internal::compiler::Constant::Constant((Constant *)aBStack_78,0x1f);
        pBVar5 = aBStack_78;
LAB_01628ae4:
        uVar2 = uVar2 | 0x5800000001;
        uVar1 = v8::internal::compiler::InstructionSequence::AddImmediate(pIVar8,(Constant *)pBVar5)
        ;
        uVar4 = 0xa4;
      }
      v8::internal::compiler::InstructionSelector::EmitWithContinuation
                (param_1,uVar4,uVar2,uVar1,param_6);
    }
    else {
      if (*(short *)(*(long *)param_2 + 0x10) == 0x128) {
        v8::internal::compiler::
        BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
        ::BinopMatcher(aBStack_78,param_2);
        uVar10 = CONCAT13(POPCOUNT((char)(param_3 >> 0x18)),
                          CONCAT12(POPCOUNT((char)(param_3 >> 0x10)),
                                   CONCAT11(POPCOUNT((char)(param_3 >> 8)),POPCOUNT((char)param_3)))
                         );
        uVar9 = NEON_uaddlv((ulong)uVar10,1);
        if ((((CONCAT22((short)(uVar10 >> 0x10),uVar9) == 1) && (*param_6 - 1U < 2)) &&
            (local_54 != '\0')) &&
           ((local_58 == param_3 &&
            (uVar2 = v8::internal::compiler::InstructionSelector::CanCover(param_1,param_4,param_2),
            (uVar2 & 1) != 0)))) {
          param_6[1] = param_6[1] ^ 1;
          uVar2 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,local_70);
          uVar2 = (uVar2 & 0xffffffff) << 3;
          v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,local_70);
          pIVar8 = *(InstructionSequence **)(param_1 + 0x10);
          uVar10 = (param_3 & 0xaaaaaaaa) >> 1 | (param_3 & 0x55555555) << 1;
          uVar10 = (uVar10 & 0xcccccccc) >> 2 | (uVar10 & 0x33333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
          v8::internal::compiler::Constant::Constant
                    (aCStack_50,(int)LZCOUNT(uVar10 >> 0x10 | uVar10 << 0x10));
          pBVar5 = (BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
                    *)aCStack_50;
          goto LAB_01628ae4;
        }
      }
LAB_01628978:
      if (param_3 != 0) goto LAB_0162897c;
      if ((9 < param_5) || ((0x303U >> (ulong)(param_5 & 0x1f) & 1) == 0)) {
LAB_01628b20:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      param_6[1] = *(int *)(&DAT_01a56afc + (long)(int)param_5 * 4);
      uVar2 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,param_2);
      v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,param_2);
      v8::internal::compiler::InstructionSelector::EmitWithContinuation
                (param_1,0xa6,(uVar2 & 0xffffffff) << 3 | 0x5800000001,param_6);
    }
    uVar1 = 1;
  }
  else {
LAB_0162897c:
    uVar1 = 0;
  }
  return uVar1;
}

