
/* v8::internal::compiler::InstructionSelector::VisitWord32And(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitWord32And(InstructionSelector *this,Node *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  InstructionSequence *pIVar12;
  ushort uVar13;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_a0 [8];
  Node *local_98;
  Node *local_88;
  uint local_80;
  char local_7c;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_78 [8];
  Node *local_70;
  Node *local_60;
  undefined4 local_58;
  char local_54;
  undefined1 local_50 [16];
  
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  ::BinopMatcher(aBStack_78,param_1);
  if (((*(short *)(*(long *)local_70 + 0x10) == 300) &&
      (uVar5 = CanCover(this,param_1,local_70), (uVar5 & 1) != 0)) && (local_54 != '\0')) {
    uVar3 = CONCAT13(POPCOUNT((char)((uint)local_58 >> 0x18)),
                     CONCAT12(POPCOUNT((char)((uint)local_58 >> 0x10)),
                              CONCAT11(POPCOUNT((char)((uint)local_58 >> 8)),
                                       POPCOUNT((char)local_58))));
    uVar13 = NEON_uaddlv((ulong)uVar3,1);
    iVar2 = CONCAT22((short)(uVar3 >> 0x10),uVar13);
    if ((((uVar13 & 0x1f) != 0) && ((int)LZCOUNT(local_58) + iVar2 == 0x20)) &&
       (BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
        ::BinopMatcher(aBStack_a0,local_70), local_7c != '\0')) {
      iVar11 = (int)((ulong)local_80 & 0x1f);
      iVar1 = 0x20 - iVar11;
      if ((uint)(iVar11 + iVar2) < 0x21) {
        iVar1 = iVar2;
      }
      uVar5 = GetVirtualRegister(this,param_1);
      MarkAsDefined(this,param_1);
      uVar6 = GetVirtualRegister(this,local_98);
      MarkAsUsed(this,local_98);
      lVar9 = *(long *)local_88;
      if (*(short *)(lVar9 + 0x10) == 0x17) {
        uVar10 = (ulong)*(int *)(lVar9 + 0x2c);
      }
      else {
        uVar10 = *(ulong *)(lVar9 + 0x30);
      }
      pIVar12 = *(InstructionSequence **)(this + 0x10);
      if (uVar10 == ((ulong)local_80 & 0x1f)) {
        local_50 = OperandGenerator::ToConstant(local_88);
      }
      else {
        Constant::Constant((Constant *)local_50,iVar11);
      }
      uVar7 = InstructionSequence::AddImmediate(pIVar12,(Constant *)local_50);
      pIVar12 = *(InstructionSequence **)(this + 0x10);
      Constant::Constant((Constant *)local_50,iVar1);
      uVar8 = InstructionSequence::AddImmediate(pIVar12,(Constant *)local_50);
      Emit(this,0x9d,(uVar5 & 0xffffffff) << 3 | 0xd800000001,
           (uVar6 & 0xffffffff) << 3 | 0x5800000001,uVar7,uVar8,0,0);
      return;
    }
  }
  uVar3 = CanCover(this,param_1,local_70);
  uVar4 = CanCover(this,param_1,local_60);
  FUN_0161d6ac(this,param_1,aBStack_78,99,uVar3 & 1,uVar4 & 1);
  return;
}

