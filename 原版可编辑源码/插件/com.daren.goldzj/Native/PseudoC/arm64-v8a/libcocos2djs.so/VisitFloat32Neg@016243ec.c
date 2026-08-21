
/* v8::internal::compiler::InstructionSelector::VisitFloat32Neg(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitFloat32Neg
          (InstructionSelector *this,Node *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  Node *pNVar4;
  BinopMatcher<v8::internal::compiler::FloatMatcher<float,(v8::internal::compiler::IrOpcode::Value)25>,v8::internal::compiler::FloatMatcher<float,(v8::internal::compiler::IrOpcode::Value)25>>
  aBStack_68 [8];
  Node *local_60;
  Node *local_50;
  
  pNVar4 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  pNVar4 = *(Node **)pNVar4;
  if ((*(short *)(*(long *)pNVar4 + 0x10) == 0x15d) &&
     (uVar1 = CanCover(this,param_1,pNVar4), (uVar1 & 1) != 0)) {
    BinopMatcher<v8::internal::compiler::FloatMatcher<float,(v8::internal::compiler::IrOpcode::Value)25>,v8::internal::compiler::FloatMatcher<float,(v8::internal::compiler::IrOpcode::Value)25>>
    ::BinopMatcher(aBStack_68,pNVar4);
    uVar1 = GetVirtualRegister(this,param_1);
    MarkAsDefined(this,param_1);
    uVar2 = GetVirtualRegister(this,local_60);
    MarkAsUsed(this,local_60);
    uVar3 = GetVirtualRegister(this,local_50);
    MarkAsUsed(this,local_50);
    Emit(this,0xb4,(uVar1 & 0xffffffff) << 3 | 0xd800000001,(uVar2 & 0xffffffff) << 3 | 0x5800000001
         ,(uVar3 & 0xffffffff) << 3 | 0x5800000001,0,0);
    return;
  }
  FUN_0161f3b8(this,0xb2,param_1);
  return;
}

