
/* v8::internal::compiler::InstructionSelector::VisitFloat32Mul(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitFloat32Mul
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
  
  BinopMatcher<v8::internal::compiler::FloatMatcher<float,(v8::internal::compiler::IrOpcode::Value)25>,v8::internal::compiler::FloatMatcher<float,(v8::internal::compiler::IrOpcode::Value)25>>
  ::BinopMatcher(aBStack_68,param_1);
  if ((*(short *)(*(long *)local_60 + 0x10) == 0x162) &&
     (uVar1 = CanCover(this,param_1,local_60), (uVar1 & 1) != 0)) {
    uVar1 = GetVirtualRegister(this,param_1);
    MarkAsDefined(this,param_1);
    pNVar4 = local_60 + 0x20;
    if ((~*(uint *)(local_60 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    pNVar4 = *(Node **)pNVar4;
    uVar2 = GetVirtualRegister(this,pNVar4);
    MarkAsUsed(this,pNVar4);
    local_60 = local_50;
  }
  else {
    if ((*(short *)(*(long *)local_50 + 0x10) != 0x162) ||
       (uVar1 = CanCover(this,param_1,local_50), (uVar1 & 1) == 0)) {
      FUN_0161f6a4(this,0xaf,param_1);
      return;
    }
    uVar1 = GetVirtualRegister(this,param_1);
    MarkAsDefined(this,param_1);
    pNVar4 = local_50 + 0x20;
    if ((~*(uint *)(local_50 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    pNVar4 = *(Node **)pNVar4;
    uVar2 = GetVirtualRegister(this,pNVar4);
    MarkAsUsed(this,pNVar4);
  }
  uVar3 = GetVirtualRegister(this,local_60);
  MarkAsUsed(this,local_60);
  Emit(this,0xb4,(uVar1 & 0xffffffff) << 3 | 0xd800000001,(uVar2 & 0xffffffff) << 3 | 0x5800000001,
       (uVar3 & 0xffffffff) << 3 | 0x5800000001,0,0);
  return;
}

