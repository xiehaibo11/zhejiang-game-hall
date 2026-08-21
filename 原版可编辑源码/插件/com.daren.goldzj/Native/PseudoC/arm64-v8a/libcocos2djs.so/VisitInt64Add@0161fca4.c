
/* v8::internal::compiler::InstructionSelector::VisitInt64Add(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitInt64Add(InstructionSelector *this,Node *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
  aBStack_c8 [8];
  Node *local_c0;
  Node *local_a8;
  long local_a0;
  char local_98;
  BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
  aBStack_90 [8];
  Node *local_88;
  Node *local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
  ::BinopMatcher(aBStack_90,param_1);
  if ((*(short *)(*(long *)local_88 + 0x10) == 0x146) &&
     (uVar2 = CanCover(this,param_1,local_88), (uVar2 & 1) != 0)) {
    BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
    ::BinopMatcher(aBStack_c8,local_88);
    if ((local_98 != '\0') && (2 < local_a0)) {
      uVar2 = local_a0 - 1;
      uVar7 = CONCAT17(POPCOUNT((char)(uVar2 >> 0x38)),
                       CONCAT16(POPCOUNT((char)(uVar2 >> 0x30)),
                                CONCAT15(POPCOUNT((char)(uVar2 >> 0x28)),
                                         CONCAT14(POPCOUNT((char)(uVar2 >> 0x20)),
                                                  CONCAT13(POPCOUNT((char)(uVar2 >> 0x18)),
                                                           CONCAT12(POPCOUNT((char)(uVar2 >> 0x10)),
                                                                    CONCAT11(POPCOUNT((char)(uVar2 
                                                  >> 8)),POPCOUNT((char)uVar2))))))));
      uVar6 = NEON_uaddlv(uVar7,1);
      if (((int)CONCAT62((int6)((ulong)uVar7 >> 0x10),uVar6) == 1) && ((uVar2 & 1) == 0))
      goto LAB_0161fd40;
    }
    uVar2 = GetVirtualRegister(this,param_1);
    MarkAsDefined(this,param_1);
    uVar3 = GetVirtualRegister(this,local_c0);
    MarkAsUsed(this,local_c0);
    uVar4 = GetVirtualRegister(this,local_a8);
    MarkAsUsed(this,local_a8);
  }
  else {
LAB_0161fd40:
    if ((*(short *)(*(long *)local_70 + 0x10) != 0x146) ||
       (uVar2 = CanCover(this,param_1,local_70), (uVar2 & 1) == 0)) {
LAB_0161fda4:
      FUN_0161ff4c(this,param_1,0x60,0x76);
      goto LAB_0161ff1c;
    }
    BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
    ::BinopMatcher(aBStack_c8,local_70);
    if ((local_98 != '\0') && (2 < local_a0)) {
      uVar2 = local_a0 - 1;
      uVar7 = CONCAT17(POPCOUNT((char)(uVar2 >> 0x38)),
                       CONCAT16(POPCOUNT((char)(uVar2 >> 0x30)),
                                CONCAT15(POPCOUNT((char)(uVar2 >> 0x28)),
                                         CONCAT14(POPCOUNT((char)(uVar2 >> 0x20)),
                                                  CONCAT13(POPCOUNT((char)(uVar2 >> 0x18)),
                                                           CONCAT12(POPCOUNT((char)(uVar2 >> 0x10)),
                                                                    CONCAT11(POPCOUNT((char)(uVar2 
                                                  >> 8)),POPCOUNT((char)uVar2))))))));
      uVar6 = NEON_uaddlv(uVar7,1);
      if (((int)CONCAT62((int6)((ulong)uVar7 >> 0x10),uVar6) == 1) && ((uVar2 & 1) == 0))
      goto LAB_0161fda4;
    }
    uVar2 = GetVirtualRegister(this,param_1);
    MarkAsDefined(this,param_1);
    uVar3 = GetVirtualRegister(this,local_c0);
    MarkAsUsed(this,local_c0);
    uVar4 = GetVirtualRegister(this,local_a8);
    MarkAsUsed(this,local_a8);
    local_70 = local_88;
  }
  uVar5 = GetVirtualRegister(this,local_70);
  MarkAsUsed(this,local_70);
  Emit(this,0x7c,(uVar2 & 0xffffffff) << 3 | 0xd800000001,(uVar3 & 0xffffffff) << 3 | 0x5800000001,
       (uVar4 & 0xffffffff) << 3 | 0x5800000001,(uVar5 & 0xffffffff) << 3 | 0x5800000001,0,0);
LAB_0161ff1c:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

