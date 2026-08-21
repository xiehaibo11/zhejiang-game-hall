
/* v8::internal::compiler::BinopMatcher<v8::internal::compiler::FloatMatcher<double,
   (v8::internal::compiler::IrOpcode::Value)26>, v8::internal::compiler::FloatMatcher<double,
   (v8::internal::compiler::IrOpcode::Value)26> >::BinopMatcher(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::
BinopMatcher<v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>,v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>>
::BinopMatcher(BinopMatcher<v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>,v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>>
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
  *(long **)(this + 8) = plVar5;
  *(undefined8 *)(this + 0x10) = 0;
  sVar1 = *(short *)(*plVar5 + 0x10);
  this[0x18] = (BinopMatcher<v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>,v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>>
                )(sVar1 == 0x1a);
  if (sVar1 == 0x1a) {
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(*plVar5 + 0x30);
  }
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  plVar5 = *(long **)(pNVar4 + 8);
  *(long **)(this + 0x20) = plVar5;
  *(undefined8 *)(this + 0x28) = 0;
  sVar2 = *(short *)(*plVar5 + 0x10);
  this[0x30] = (BinopMatcher<v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>,v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>>
                )(sVar2 == 0x1a);
  if (sVar2 == 0x1a) {
    *(undefined8 *)(this + 0x28) = *(undefined8 *)(*plVar5 + 0x30);
  }
  if ((((*(byte *)(*(long *)param_1 + 0x12) & 1) != 0) && (sVar1 == 0x1a)) && (sVar2 != 0x1a)) {
    SwapInputs(this);
    return;
  }
  return;
}

