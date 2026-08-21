
/* v8::internal::compiler::BinopMatcher<v8::internal::compiler::IntMatcher<int,
   (v8::internal::compiler::IrOpcode::Value)23>, v8::internal::compiler::IntMatcher<int,
   (v8::internal::compiler::IrOpcode::Value)23> >::BinopMatcher(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::
BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
::BinopMatcher(BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
               *this,Node *param_1)

{
  short sVar1;
  short sVar2;
  Node *pNVar3;
  Node *pNVar4;
  long *plVar5;
  
  *(Node **)this = param_1;
  pNVar4 = param_1 + 0x20;
  pNVar3 = pNVar4;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar3 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  plVar5 = *(long **)pNVar3;
  *(undefined4 *)(this + 0x10) = 0;
  *(long **)(this + 8) = plVar5;
  sVar1 = *(short *)(*plVar5 + 0x10);
  this[0x14] = (BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
                )(sVar1 == 0x17);
  if (sVar1 == 0x17) {
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(*plVar5 + 0x2c);
  }
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  plVar5 = *(long **)(pNVar4 + 8);
  *(undefined4 *)(this + 0x20) = 0;
  *(long **)(this + 0x18) = plVar5;
  sVar2 = *(short *)(*plVar5 + 0x10);
  this[0x24] = (BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
                )(sVar2 == 0x17);
  if (sVar2 == 0x17) {
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(*plVar5 + 0x2c);
  }
  if ((((*(byte *)(*(long *)param_1 + 0x12) & 1) != 0) && (sVar1 == 0x17)) && (sVar2 != 0x17)) {
    SwapInputs(this);
    return;
  }
  return;
}

