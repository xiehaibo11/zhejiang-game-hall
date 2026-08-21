
/* v8::internal::compiler::InstructionSelector::VisitWord32Shl(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitWord32Shl(InstructionSelector *this,Node *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  InstructionSequence *pIVar6;
  undefined2 uVar7;
  uint uVar8;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_a0 [8];
  Node *local_98;
  int local_80;
  char local_7c;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_78 [8];
  Node *local_70;
  Node *local_60;
  int local_58;
  char local_54;
  Constant local_50 [16];
  
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  ::BinopMatcher(aBStack_78,param_1);
  if ((((*(short *)(*(long *)local_70 + 0x10) == 0x128) &&
       (uVar2 = CanCover(this,param_1,local_70), (uVar2 & 1) != 0)) && (local_54 != '\0')) &&
     (((local_58 - 1U < 0x1f &&
       (BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
        ::BinopMatcher(aBStack_a0,local_70), local_7c != '\0')) && (local_80 != 0)))) {
    uVar8 = CONCAT13(POPCOUNT((char)((uint)local_80 >> 0x18)),
                     CONCAT12(POPCOUNT((char)((uint)local_80 >> 0x10)),
                              CONCAT11(POPCOUNT((char)((uint)local_80 >> 8)),
                                       POPCOUNT((char)local_80))));
    uVar7 = NEON_uaddlv((ulong)uVar8,1);
    iVar1 = CONCAT22((short)(uVar8 >> 0x10),uVar7);
    if ((int)LZCOUNT(local_80) + iVar1 == 0x20) {
      uVar2 = GetVirtualRegister(this,param_1);
      uVar5 = (uVar2 & 0xffffffff) << 3 | 0xd800000001;
      MarkAsDefined(this,param_1);
      uVar2 = GetVirtualRegister(this,local_98);
      uVar2 = (uVar2 & 0xffffffff) << 3 | 0x5800000001;
      MarkAsUsed(this,local_98);
      pIVar6 = *(InstructionSequence **)(this + 0x10);
      local_50 = (Constant  [16])OperandGenerator::ToConstant(local_60);
      uVar3 = InstructionSequence::AddImmediate(pIVar6,local_50);
      if (0x1f < (uint)(local_58 + iVar1)) {
        Emit(this,0x8d,uVar5,uVar2,uVar3,0,0);
        return;
      }
      pIVar6 = *(InstructionSequence **)(this + 0x10);
      Constant::Constant(local_50,iVar1);
      uVar4 = InstructionSequence::AddImmediate(pIVar6,local_50);
      Emit(this,0x9e,uVar5,uVar2,uVar3,uVar4,0,0);
      return;
    }
  }
  FUN_0161e41c(this,0x8d,param_1,1);
  return;
}

