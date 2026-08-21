
/* v8::internal::compiler::InstructionSelector::VisitWord64Shl(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitWord64Shl(InstructionSelector *this,Node *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  Node *pNVar5;
  InstructionSequence *this_00;
  undefined1 local_90 [16];
  BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
  aBStack_80 [8];
  Node *local_78;
  Node *local_60;
  ulong local_58;
  char local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
  ::BinopMatcher(aBStack_80,param_1);
  if ((((*(short *)(*(long *)local_78 + 0x10) == 0x1ce) ||
       (*(short *)(*(long *)local_78 + 0x10) == 0x1cb)) && (local_50 != '\0')) &&
     (((local_58 & 0xffffffffffffffe0) == 0x20 &&
      (uVar2 = CanCover(this,param_1,local_78), (uVar2 & 1) != 0)))) {
    uVar2 = GetVirtualRegister(this,param_1);
    MarkAsDefined(this,param_1);
    pNVar5 = local_78 + 0x20;
    if ((~*(uint *)(local_78 + 0x14) & 0xf000000) == 0) {
      pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
    }
    pNVar5 = *(Node **)pNVar5;
    uVar3 = GetVirtualRegister(this,pNVar5);
    MarkAsUsed(this,pNVar5);
    this_00 = *(InstructionSequence **)(this + 0x10);
    local_90 = OperandGenerator::ToConstant(local_60);
    uVar4 = InstructionSequence::AddImmediate(this_00,(Constant *)local_90);
    Emit(this,0x8c,(uVar2 & 0xffffffff) << 3 | 0xd800000001,(uVar3 & 0xffffffff) << 3 | 0x5800000001
         ,uVar4,0,0);
  }
  else {
    FUN_0161e41c(this,0x8c,param_1,2);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

