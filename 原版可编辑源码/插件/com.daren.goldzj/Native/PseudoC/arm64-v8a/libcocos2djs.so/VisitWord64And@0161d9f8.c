
/* v8::internal::compiler::InstructionSelector::VisitWord64And(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitWord64And(InstructionSelector *this,Node *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  InstructionSequence *pIVar12;
  ushort uVar13;
  undefined1 local_d8 [16];
  BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
  aBStack_c8 [8];
  Node *local_c0;
  Node *local_a8;
  uint local_a0;
  char local_98;
  BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
  aBStack_90 [8];
  Node *local_88;
  Node *local_70;
  undefined8 local_68;
  char local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
  ::BinopMatcher(aBStack_90,param_1);
  if (((*(short *)(*(long *)local_88 + 0x10) == 0x13f) &&
      (uVar5 = CanCover(this,param_1,local_88), (uVar5 & 1) != 0)) && (local_60 != '\0')) {
    uVar7 = CONCAT17(POPCOUNT((char)((ulong)local_68 >> 0x38)),
                     CONCAT16(POPCOUNT((char)((ulong)local_68 >> 0x30)),
                              CONCAT15(POPCOUNT((char)((ulong)local_68 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)((ulong)local_68 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)((ulong)local_68 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)((ulong)local_68 >>
                                                                                 0x10)),
                                                                  CONCAT11(POPCOUNT((char)((ulong)
                                                  local_68 >> 8)),POPCOUNT((char)local_68))))))));
    uVar13 = NEON_uaddlv(uVar7,1);
    uVar6 = CONCAT62((int6)((ulong)uVar7 >> 0x10),uVar13);
    uVar5 = uVar6 & 0xffffffff;
    if ((((uVar13 & 0x3f) != 0) && (LZCOUNT(local_68) + uVar5 == 0x40)) &&
       (BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
        ::BinopMatcher(aBStack_c8,local_88), local_98 != '\0')) {
      uVar11 = (ulong)local_a0 & 0x3f;
      iVar1 = 0x40 - (int)uVar11;
      if (uVar5 + uVar11 < 0x41) {
        iVar1 = (int)uVar6;
      }
      uVar5 = GetVirtualRegister(this,param_1);
      MarkAsDefined(this,param_1);
      uVar6 = GetVirtualRegister(this,local_c0);
      MarkAsUsed(this,local_c0);
      lVar9 = *(long *)local_a8;
      if (*(short *)(lVar9 + 0x10) == 0x17) {
        uVar10 = (ulong)*(int *)(lVar9 + 0x2c);
      }
      else {
        uVar10 = *(ulong *)(lVar9 + 0x30);
      }
      pIVar12 = *(InstructionSequence **)(this + 0x10);
      if (uVar10 == uVar11) {
        local_d8 = OperandGenerator::ToConstant(local_a8);
      }
      else {
        Constant::Constant((Constant *)local_d8,(int)uVar11);
      }
      uVar7 = InstructionSequence::AddImmediate(pIVar12,(Constant *)local_d8);
      pIVar12 = *(InstructionSequence **)(this + 0x10);
      Constant::Constant((Constant *)local_d8,iVar1);
      uVar8 = InstructionSequence::AddImmediate(pIVar12,(Constant *)local_d8);
      Emit(this,0x9c,(uVar5 & 0xffffffff) << 3 | 0xd800000001,
           (uVar6 & 0xffffffff) << 3 | 0x5800000001,uVar7,uVar8,0,0);
      goto LAB_0161db68;
    }
  }
  uVar3 = CanCover(this,param_1,local_88);
  uVar4 = CanCover(this,param_1,local_70);
  FUN_0161dcf8(this,param_1,aBStack_90,0x62,uVar3 & 1,uVar4 & 1);
LAB_0161db68:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

