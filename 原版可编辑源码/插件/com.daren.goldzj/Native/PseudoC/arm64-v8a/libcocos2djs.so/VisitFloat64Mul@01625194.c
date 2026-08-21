
/* v8::internal::compiler::InstructionSelector::VisitFloat64Mul(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitFloat64Mul
          (InstructionSelector *this,Node *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  Node *pNVar5;
  BinopMatcher<v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>,v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>>
  aBStack_80 [8];
  Node *local_78;
  Node *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  BinopMatcher<v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>,v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>>
  ::BinopMatcher(aBStack_80,param_1);
  if ((*(short *)(*(long *)local_78 + 0x10) == 0x181) &&
     (uVar2 = CanCover(this,param_1,local_78), (uVar2 & 1) != 0)) {
    uVar2 = GetVirtualRegister(this,param_1);
    MarkAsDefined(this,param_1);
    pNVar5 = local_78 + 0x20;
    if ((~*(uint *)(local_78 + 0x14) & 0xf000000) == 0) {
      pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
    }
    pNVar5 = *(Node **)pNVar5;
    uVar3 = GetVirtualRegister(this,pNVar5);
    MarkAsUsed(this,pNVar5);
    local_78 = local_60;
  }
  else {
    if ((*(short *)(*(long *)local_60 + 0x10) != 0x181) ||
       (uVar2 = CanCover(this,param_1,local_60), (uVar2 & 1) == 0)) {
      FUN_0161f6a4(this,0xbb,param_1);
      goto LAB_01625368;
    }
    uVar2 = GetVirtualRegister(this,param_1);
    MarkAsDefined(this,param_1);
    pNVar5 = local_60 + 0x20;
    if ((~*(uint *)(local_60 + 0x14) & 0xf000000) == 0) {
      pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
    }
    pNVar5 = *(Node **)pNVar5;
    uVar3 = GetVirtualRegister(this,pNVar5);
    MarkAsUsed(this,pNVar5);
  }
  uVar4 = GetVirtualRegister(this,local_78);
  MarkAsUsed(this,local_78);
  Emit(this,0xc3,(uVar2 & 0xffffffff) << 3 | 0xd800000001,(uVar3 & 0xffffffff) << 3 | 0x5800000001,
       (uVar4 & 0xffffffff) << 3 | 0x5800000001,0,0);
LAB_01625368:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

