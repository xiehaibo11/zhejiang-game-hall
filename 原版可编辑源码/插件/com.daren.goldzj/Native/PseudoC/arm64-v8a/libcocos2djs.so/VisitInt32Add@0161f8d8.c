
/* v8::internal::compiler::InstructionSelector::VisitInt32Add(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitInt32Add(InstructionSelector *this,Node *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  Node *pNVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_90 [8];
  Node *local_88;
  Node *local_78;
  int local_70;
  char local_6c;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_68 [8];
  Node *local_60;
  Node *local_50;
  
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  ::BinopMatcher(aBStack_68,param_1);
  if ((*(short *)(*(long *)local_60 + 0x10) == 0x133) &&
     (uVar1 = CanCover(this,param_1,local_60), (uVar1 & 1) != 0)) {
    BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
    ::BinopMatcher(aBStack_90,local_60);
    if ((local_6c != '\0') && (2 < local_70)) {
      uVar1 = (long)local_70 - 1;
      uVar7 = CONCAT17(POPCOUNT((char)(uVar1 >> 0x38)),
                       CONCAT16(POPCOUNT((char)(uVar1 >> 0x30)),
                                CONCAT15(POPCOUNT((char)(uVar1 >> 0x28)),
                                         CONCAT14(POPCOUNT((char)(uVar1 >> 0x20)),
                                                  CONCAT13(POPCOUNT((char)(uVar1 >> 0x18)),
                                                           CONCAT12(POPCOUNT((char)(uVar1 >> 0x10)),
                                                                    CONCAT11(POPCOUNT((char)(uVar1 
                                                  >> 8)),POPCOUNT((char)uVar1))))))));
      uVar6 = NEON_uaddlv(uVar7,1);
      if (((CONCAT62((int6)((ulong)uVar7 >> 0x10),uVar6) & 0xffffffff) == 1) && ((uVar1 & 1) == 0))
      goto LAB_0161f964;
    }
    uVar1 = GetVirtualRegister(this,param_1);
    MarkAsDefined(this,param_1);
    uVar2 = GetVirtualRegister(this,local_88);
    MarkAsUsed(this,local_88);
    uVar3 = GetVirtualRegister(this,local_78);
    MarkAsUsed(this,local_78);
    pNVar5 = local_50;
  }
  else {
LAB_0161f964:
    if ((*(short *)(*(long *)local_50 + 0x10) != 0x133) ||
       (uVar1 = CanCover(this,param_1,local_50), (uVar1 & 1) == 0)) {
LAB_0161f9c8:
      FUN_0161fb58(this,param_1,0x61,0x77);
      return;
    }
    BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
    ::BinopMatcher(aBStack_90,local_50);
    if ((local_6c != '\0') && (2 < local_70)) {
      uVar1 = (long)local_70 - 1;
      uVar7 = CONCAT17(POPCOUNT((char)(uVar1 >> 0x38)),
                       CONCAT16(POPCOUNT((char)(uVar1 >> 0x30)),
                                CONCAT15(POPCOUNT((char)(uVar1 >> 0x28)),
                                         CONCAT14(POPCOUNT((char)(uVar1 >> 0x20)),
                                                  CONCAT13(POPCOUNT((char)(uVar1 >> 0x18)),
                                                           CONCAT12(POPCOUNT((char)(uVar1 >> 0x10)),
                                                                    CONCAT11(POPCOUNT((char)(uVar1 
                                                  >> 8)),POPCOUNT((char)uVar1))))))));
      uVar6 = NEON_uaddlv(uVar7,1);
      if (((CONCAT62((int6)((ulong)uVar7 >> 0x10),uVar6) & 0xffffffff) == 1) && ((uVar1 & 1) == 0))
      goto LAB_0161f9c8;
    }
    uVar1 = GetVirtualRegister(this,param_1);
    MarkAsDefined(this,param_1);
    uVar2 = GetVirtualRegister(this,local_88);
    MarkAsUsed(this,local_88);
    uVar3 = GetVirtualRegister(this,local_78);
    MarkAsUsed(this,local_78);
    pNVar5 = local_60;
  }
  uVar4 = GetVirtualRegister(this,pNVar5);
  MarkAsUsed(this,pNVar5);
  Emit(this,0x7d,(uVar1 & 0xffffffff) << 3 | 0xd800000001,(uVar2 & 0xffffffff) << 3 | 0x5800000001,
       (uVar3 & 0xffffffff) << 3 | 0x5800000001,(uVar4 & 0xffffffff) << 3 | 0x5800000001,0,0);
  return;
}

