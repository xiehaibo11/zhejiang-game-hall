
/* v8::internal::compiler::InstructionSelector::VisitInt32Mul(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitInt32Mul(InstructionSelector *this,Node *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  InstructionSequence *this_00;
  Node *pNVar5;
  int iVar6;
  undefined2 uVar7;
  Constant aCStack_90 [16];
  int local_80;
  char local_7c;
  Node *local_78;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_68 [8];
  Node *local_60;
  Node *local_50;
  int local_48;
  char local_44;
  
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  ::BinopMatcher(aBStack_68,param_1);
  if ((local_44 != '\0') && (2 < local_48)) {
    uVar4 = (long)local_48 - 1;
    uVar3 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar4 >> 
                                                  8)),POPCOUNT((char)uVar4))))))));
    uVar7 = NEON_uaddlv(uVar3,1);
    if (((CONCAT62((int6)((ulong)uVar3 >> 0x10),uVar7) & 0xffffffff) == 1) &&
       (uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1,
       uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2,
       uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4,
       uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8,
       uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10,
       iVar6 = (int)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20), iVar6 != 0)) {
      uVar4 = GetVirtualRegister(this,param_1);
      MarkAsDefined(this,param_1);
      pNVar5 = local_60;
      uVar1 = GetVirtualRegister(this,local_60);
      MarkAsUsed(this,pNVar5);
      uVar2 = GetVirtualRegister(this,local_60);
      MarkAsUsed(this,local_60);
      this_00 = *(InstructionSequence **)(this + 0x10);
      Constant::Constant(aCStack_90,iVar6);
      uVar3 = InstructionSequence::AddImmediate(this_00,aCStack_90);
      Emit(this,0x661,(uVar4 & 0xffffffff) << 3 | 0xd800000001,
           (uVar1 & 0xffffffff) << 3 | 0x5800000001,(uVar2 & 0xffffffff) << 3 | 0x5800000001,uVar3,0
           ,0);
      return;
    }
  }
  if ((((*(short *)(*(long *)local_60 + 0x10) == 0x131) &&
       (uVar4 = CanCover(this,param_1,local_60), (uVar4 & 1) != 0)) &&
      (BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
       ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
                       *)aCStack_90,local_60), local_7c != '\0')) && (local_80 == 0)) {
    uVar4 = GetVirtualRegister(this,param_1);
    MarkAsDefined(this,param_1);
    uVar1 = GetVirtualRegister(this,local_78);
    MarkAsUsed(this,local_78);
    pNVar5 = local_50;
  }
  else {
    if (((*(short *)(*(long *)local_50 + 0x10) != 0x131) ||
        (uVar4 = CanCover(this,param_1,local_50), (uVar4 & 1) == 0)) ||
       ((BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
         ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
                         *)aCStack_90,local_50), local_7c == '\0' || (local_80 != 0)))) {
      FUN_0161f6a4(this,0x79,param_1);
      return;
    }
    uVar4 = GetVirtualRegister(this,param_1);
    MarkAsDefined(this,param_1);
    uVar1 = GetVirtualRegister(this,local_60);
    MarkAsUsed(this,local_60);
    pNVar5 = local_78;
  }
  uVar2 = GetVirtualRegister(this,pNVar5);
  MarkAsUsed(this,pNVar5);
  Emit(this,0x81,(uVar4 & 0xffffffff) << 3 | 0xd800000001,(uVar1 & 0xffffffff) << 3 | 0x5800000001,
       (uVar2 & 0xffffffff) << 3 | 0x5800000001,0,0);
  return;
}

