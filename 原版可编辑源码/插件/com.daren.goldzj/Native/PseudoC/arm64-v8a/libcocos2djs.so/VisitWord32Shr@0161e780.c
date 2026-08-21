
/* v8::internal::compiler::InstructionSelector::VisitWord32Shr(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitWord32Shr(InstructionSelector *this,Node *param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  Node *pNVar9;
  Node *pNVar10;
  InstructionSequence *pIVar11;
  undefined2 uVar12;
  uint uVar13;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_c0 [8];
  Node *local_b8;
  uint local_a0;
  char local_9c;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_98 [8];
  Node *local_90;
  Node *local_80;
  uint local_78;
  char local_74;
  undefined1 local_70 [16];
  
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  ::BinopMatcher(aBStack_98,param_1);
  if ((*(short *)(*(long *)local_90 + 0x10) == 0x128) && (local_74 != '\0')) {
    uVar8 = (ulong)local_78;
    BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
    ::BinopMatcher(aBStack_c0,local_90);
    if ((local_9c != '\0') && (local_a0 != 0)) {
      uVar8 = uVar8 & 0x1f;
      local_a0 = local_a0 & -1 << uVar8;
      uVar13 = CONCAT13(POPCOUNT((char)(local_a0 >> 0x18)),
                        CONCAT12(POPCOUNT((char)(local_a0 >> 0x10)),
                                 CONCAT11(POPCOUNT((char)(local_a0 >> 8)),POPCOUNT((char)local_a0)))
                       );
      uVar12 = NEON_uaddlv((ulong)uVar13,1);
      iVar1 = CONCAT22((short)(uVar13 >> 0x10),uVar12);
      if (iVar1 + (int)uVar8 + (int)LZCOUNT(local_a0) == 0x20) {
        uVar2 = GetVirtualRegister(this,param_1);
        MarkAsDefined(this,param_1);
        uVar3 = GetVirtualRegister(this,local_b8);
        MarkAsUsed(this,local_b8);
        lVar6 = *(long *)local_80;
        if (*(short *)(lVar6 + 0x10) == 0x17) {
          uVar7 = (ulong)*(int *)(lVar6 + 0x2c);
        }
        else {
          uVar7 = *(ulong *)(lVar6 + 0x30);
        }
        pIVar11 = *(InstructionSequence **)(this + 0x10);
        if (uVar7 == uVar8) {
          local_70 = OperandGenerator::ToConstant(local_80);
        }
        else {
          Constant::Constant((Constant *)local_70,(int)uVar8);
        }
        uVar4 = InstructionSequence::AddImmediate(pIVar11,(Constant *)local_70);
        pIVar11 = *(InstructionSequence **)(this + 0x10);
        Constant::Constant((Constant *)local_70,iVar1);
        uVar5 = InstructionSequence::AddImmediate(pIVar11,(Constant *)local_70);
        Emit(this,0x9d,(uVar2 & 0xffffffff) << 3 | 0xd800000001,
             (uVar3 & 0xffffffff) << 3 | 0x5800000001,uVar4,uVar5,0,0);
        return;
      }
    }
  }
  else {
    uVar8 = FUN_0161eacc(this,param_1);
    if ((uVar8 & 1) != 0) {
      return;
    }
  }
  if ((*(short *)(*(long *)local_90 + 0x10) == 0x13a) && (local_74 != '\0')) {
    pNVar10 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar10 = (Node *)(*(long *)pNVar10 + 0x10);
    }
    uVar8 = CanCover(this,param_1,*(Node **)pNVar10);
    if ((uVar8 & 1) != 0) {
      uVar8 = InstructionSequence::NextVirtualRegister(*(InstructionSequence **)(this + 0x10));
      pNVar10 = local_90 + 0x20;
      uVar8 = (uVar8 & 0xffffffff) << 3 | 0x5800000001;
      pNVar9 = pNVar10;
      if ((~*(uint *)(local_90 + 0x14) & 0xf000000) == 0) {
        pNVar9 = (Node *)(*(long *)pNVar10 + 0x10);
      }
      pNVar9 = *(Node **)pNVar9;
      uVar2 = GetVirtualRegister(this,pNVar9);
      MarkAsUsed(this,pNVar9);
      if ((~*(uint *)(local_90 + 0x14) & 0xf000000) == 0) {
        pNVar10 = (Node *)(*(long *)pNVar10 + 0x10);
      }
      pNVar10 = *(Node **)(pNVar10 + 8);
      uVar3 = GetVirtualRegister(this,pNVar10);
      MarkAsUsed(this,pNVar10);
      Emit(this,0x7b,uVar8,(uVar2 & 0xffffffff) << 3 | 0x5800000001,
           (uVar3 & 0xffffffff) << 3 | 0x5800000001,0,0);
      uVar2 = GetVirtualRegister(this,param_1);
      MarkAsDefined(this,param_1);
      pIVar11 = *(InstructionSequence **)(this + 0x10);
      Constant::Constant((Constant *)aBStack_c0,local_78 & 0x1f | 0x20);
      uVar4 = InstructionSequence::AddImmediate(pIVar11,(Constant *)aBStack_c0);
      Emit(this,0x8e,(uVar2 & 0xffffffff) << 3 | 0xd800000001,uVar8,uVar4,0,0);
      return;
    }
  }
  FUN_0161e41c(this,0x8f,param_1,1);
  return;
}

