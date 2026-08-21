
/* v8::internal::compiler::InstructionSelector::VisitWord64Shr(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitWord64Shr(InstructionSelector *this,Node *param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  InstructionSequence *pIVar10;
  undefined2 uVar11;
  undefined1 local_d8 [16];
  BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
  aBStack_c8 [8];
  Node *local_c0;
  ulong local_a0;
  char local_98;
  BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
  aBStack_90 [8];
  Node *local_88;
  Node *local_70;
  uint local_68;
  char local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
  ::BinopMatcher(aBStack_90,param_1);
  if ((*(short *)(*(long *)local_88 + 0x10) == 0x13b) && (local_60 != '\0')) {
    BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
    ::BinopMatcher(aBStack_c8,local_88);
    if ((local_98 != '\0') && (local_a0 != 0)) {
      uVar1 = local_68 & 0x3f;
      local_a0 = local_a0 & -1L << (ulong)uVar1;
      uVar6 = CONCAT17(POPCOUNT((char)(local_a0 >> 0x38)),
                       CONCAT16(POPCOUNT((char)(local_a0 >> 0x30)),
                                CONCAT15(POPCOUNT((char)(local_a0 >> 0x28)),
                                         CONCAT14(POPCOUNT((char)(local_a0 >> 0x20)),
                                                  CONCAT13(POPCOUNT((char)(local_a0 >> 0x18)),
                                                           CONCAT12(POPCOUNT((char)(local_a0 >> 0x10
                                                                                   )),
                                                                    CONCAT11(POPCOUNT((char)(
                                                  local_a0 >> 8)),POPCOUNT((char)local_a0))))))));
      uVar11 = NEON_uaddlv(uVar6,1);
      iVar3 = (int)CONCAT62((int6)((ulong)uVar6 >> 0x10),uVar11);
      if (uVar1 + iVar3 + (int)LZCOUNT(local_a0) == 0x40) {
        uVar4 = GetVirtualRegister(this,param_1);
        MarkAsDefined(this,param_1);
        uVar5 = GetVirtualRegister(this,local_c0);
        MarkAsUsed(this,local_c0);
        lVar8 = *(long *)local_70;
        if (*(short *)(lVar8 + 0x10) == 0x17) {
          uVar9 = (ulong)*(int *)(lVar8 + 0x2c);
        }
        else {
          uVar9 = *(ulong *)(lVar8 + 0x30);
        }
        pIVar10 = *(InstructionSequence **)(this + 0x10);
        if (uVar9 == uVar1) {
          local_d8 = OperandGenerator::ToConstant(local_70);
        }
        else {
          Constant::Constant((Constant *)local_d8,uVar1);
        }
        uVar6 = InstructionSequence::AddImmediate(pIVar10,(Constant *)local_d8);
        pIVar10 = *(InstructionSequence **)(this + 0x10);
        Constant::Constant((Constant *)local_d8,iVar3);
        uVar7 = InstructionSequence::AddImmediate(pIVar10,(Constant *)local_d8);
        Emit(this,0x9c,(uVar4 & 0xffffffff) << 3 | 0xd800000001,
             (uVar5 & 0xffffffff) << 3 | 0x5800000001,uVar6,uVar7,0,0);
        goto LAB_0161ed7c;
      }
    }
  }
  FUN_0161e41c(this,0x8e,param_1,2);
LAB_0161ed7c:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

