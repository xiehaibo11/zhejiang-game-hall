
/* v8::internal::compiler::BinopMatcher<v8::internal::compiler::IntMatcher<long,
   (v8::internal::compiler::IrOpcode::Value)24>, v8::internal::compiler::IntMatcher<long,
   (v8::internal::compiler::IrOpcode::Value)24> >::BinopMatcher(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::
BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
::BinopMatcher(BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
               *this,Node *param_1)

{
  bool bVar1;
  bool bVar2;
  long *plVar3;
  Node *pNVar5;
  long lVar6;
  Node *pNVar4;
  
  *(Node **)this = param_1;
  pNVar5 = param_1 + 0x20;
  pNVar4 = pNVar5;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar4 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  plVar3 = *(long **)pNVar4;
  this[0x18] = (BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
                )0x0;
  *(long **)(this + 8) = plVar3;
  *(undefined8 *)(this + 0x10) = 0;
  lVar6 = *plVar3;
  if (*(short *)(lVar6 + 0x10) == 0x18) {
    lVar6 = *(long *)(lVar6 + 0x30);
LAB_0161dc6c:
    *(long *)(this + 0x10) = lVar6;
    bVar1 = true;
    this[0x18] = (BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
                  )0x1;
  }
  else {
    bVar1 = false;
    if (*(short *)(lVar6 + 0x10) == 0x17) {
      lVar6 = (long)*(int *)(lVar6 + 0x2c);
      goto LAB_0161dc6c;
    }
  }
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  plVar3 = *(long **)(pNVar5 + 8);
  this[0x30] = (BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
                )0x0;
  *(long **)(this + 0x20) = plVar3;
  *(undefined8 *)(this + 0x28) = 0;
  lVar6 = *plVar3;
  if (*(short *)(lVar6 + 0x10) == 0x18) {
    lVar6 = *(long *)(lVar6 + 0x30);
  }
  else {
    if (*(short *)(lVar6 + 0x10) != 0x17) {
      bVar2 = true;
      goto joined_r0x0161dcd0;
    }
    lVar6 = (long)*(int *)(lVar6 + 0x2c);
  }
  bVar2 = false;
  *(long *)(this + 0x28) = lVar6;
  this[0x30] = (BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
                )0x1;
joined_r0x0161dcd0:
  if (((bVar1) && ((*(byte *)(*(long *)param_1 + 0x12) & 1) != 0)) && (bVar2)) {
    SwapInputs(this);
    return;
  }
  return;
}

