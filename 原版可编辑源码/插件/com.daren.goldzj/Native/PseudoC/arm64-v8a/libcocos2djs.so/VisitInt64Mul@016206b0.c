
/* v8::internal::compiler::InstructionSelector::VisitInt64Mul(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitInt64Mul(InstructionSelector *this,Node *param_1)

{
  long lVar1;
  Node *pNVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  InstructionSequence *this_00;
  int iVar7;
  undefined2 uVar8;
  Constant aCStack_c8 [16];
  long local_b8;
  char local_b0;
  Node *local_a8;
  BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
  aBStack_90 [8];
  Node *local_88;
  Node *local_70;
  long local_68;
  char local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
  ::BinopMatcher(aBStack_90,param_1);
  if ((local_60 != '\0') && (2 < local_68)) {
    uVar6 = local_68 - 1;
    uVar5 = CONCAT17(POPCOUNT((char)(uVar6 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar6 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar6 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar6 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar6 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar6 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar6 >> 
                                                  8)),POPCOUNT((char)uVar6))))))));
    uVar8 = NEON_uaddlv(uVar5,1);
    if (((int)CONCAT62((int6)((ulong)uVar5 >> 0x10),uVar8) == 1) &&
       (uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1,
       uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2,
       uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4,
       uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8,
       uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10,
       iVar7 = (int)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20), iVar7 != 0)) {
      uVar6 = GetVirtualRegister(this,param_1);
      MarkAsDefined(this,param_1);
      pNVar2 = local_88;
      uVar3 = GetVirtualRegister(this,local_88);
      MarkAsUsed(this,pNVar2);
      uVar4 = GetVirtualRegister(this,local_88);
      MarkAsUsed(this,local_88);
      this_00 = *(InstructionSequence **)(this + 0x10);
      Constant::Constant(aCStack_c8,iVar7);
      uVar5 = InstructionSequence::AddImmediate(this_00,aCStack_c8);
      Emit(this,0x660,(uVar6 & 0xffffffff) << 3 | 0xd800000001,
           (uVar3 & 0xffffffff) << 3 | 0x5800000001,(uVar4 & 0xffffffff) << 3 | 0x5800000001,uVar5,0
           ,0);
      goto LAB_01620878;
    }
  }
  if ((((*(short *)(*(long *)local_88 + 0x10) == 0x144) &&
       (uVar6 = CanCover(this,param_1,local_88), (uVar6 & 1) != 0)) &&
      (BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
       ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
                       *)aCStack_c8,local_88), local_b0 != '\0')) && (local_b8 == 0)) {
    uVar6 = GetVirtualRegister(this,param_1);
    MarkAsDefined(this,param_1);
    uVar3 = GetVirtualRegister(this,local_a8);
    MarkAsUsed(this,local_a8);
  }
  else {
    if (((*(short *)(*(long *)local_70 + 0x10) != 0x144) ||
        (uVar6 = CanCover(this,param_1,local_70), (uVar6 & 1) == 0)) ||
       ((BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
         ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
                         *)aCStack_c8,local_70), local_b0 == '\0' || (local_b8 != 0)))) {
      FUN_0161f6a4(this,0x78,param_1);
      goto LAB_01620878;
    }
    uVar6 = GetVirtualRegister(this,param_1);
    MarkAsDefined(this,param_1);
    uVar3 = GetVirtualRegister(this,local_88);
    MarkAsUsed(this,local_88);
    local_70 = local_a8;
  }
  uVar4 = GetVirtualRegister(this,local_70);
  MarkAsUsed(this,local_70);
  Emit(this,0x80,(uVar6 & 0xffffffff) << 3 | 0xd800000001,(uVar3 & 0xffffffff) << 3 | 0x5800000001,
       (uVar4 & 0xffffffff) << 3 | 0x5800000001,0,0);
LAB_01620878:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

