
/* v8::internal::compiler::BinopMatcher<v8::internal::compiler::IntMatcher<unsigned long,
   (v8::internal::compiler::IrOpcode::Value)24>, v8::internal::compiler::IntMatcher<unsigned long,
   (v8::internal::compiler::IrOpcode::Value)24> >::BinopMatcher(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::
BinopMatcher<v8::internal::compiler::IntMatcher<unsigned_long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<unsigned_long,(v8::internal::compiler::IrOpcode::Value)24>>
::BinopMatcher(BinopMatcher<v8::internal::compiler::IntMatcher<unsigned_long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<unsigned_long,(v8::internal::compiler::IrOpcode::Value)24>>
               *this,Node *param_1)

{
  bool bVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar5;
  Node *pNVar6;
  long lVar7;
  Node *pNVar4;
  
  *(Node **)this = param_1;
  pNVar6 = param_1 + 0x20;
  pNVar4 = pNVar6;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar4 = (Node *)(*(long *)pNVar6 + 0x10);
  }
  plVar3 = *(long **)pNVar4;
  this[0x18] = (BinopMatcher<v8::internal::compiler::IntMatcher<unsigned_long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<unsigned_long,(v8::internal::compiler::IrOpcode::Value)24>>
                )0x0;
  *(long **)(this + 8) = plVar3;
  *(undefined8 *)(this + 0x10) = 0;
  lVar7 = *plVar3;
  if (*(short *)(lVar7 + 0x10) == 0x18) {
    uVar5 = *(ulong *)(lVar7 + 0x30);
LAB_01629304:
    *(ulong *)(this + 0x10) = uVar5;
    bVar1 = true;
    this[0x18] = (BinopMatcher<v8::internal::compiler::IntMatcher<unsigned_long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<unsigned_long,(v8::internal::compiler::IrOpcode::Value)24>>
                  )0x1;
  }
  else {
    bVar1 = false;
    if (*(short *)(lVar7 + 0x10) == 0x17) {
      uVar5 = (ulong)*(uint *)(lVar7 + 0x2c);
      goto LAB_01629304;
    }
  }
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar6 = (Node *)(*(long *)pNVar6 + 0x10);
  }
  plVar3 = *(long **)(pNVar6 + 8);
  this[0x30] = (BinopMatcher<v8::internal::compiler::IntMatcher<unsigned_long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<unsigned_long,(v8::internal::compiler::IrOpcode::Value)24>>
                )0x0;
  *(long **)(this + 0x20) = plVar3;
  *(undefined8 *)(this + 0x28) = 0;
  lVar7 = *plVar3;
  if (*(short *)(lVar7 + 0x10) == 0x18) {
    uVar5 = *(ulong *)(lVar7 + 0x30);
  }
  else {
    if (*(short *)(lVar7 + 0x10) != 0x17) {
      bVar2 = true;
      goto joined_r0x01629368;
    }
    uVar5 = (ulong)*(uint *)(lVar7 + 0x2c);
  }
  bVar2 = false;
  *(ulong *)(this + 0x28) = uVar5;
  this[0x30] = (BinopMatcher<v8::internal::compiler::IntMatcher<unsigned_long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<unsigned_long,(v8::internal::compiler::IrOpcode::Value)24>>
                )0x1;
joined_r0x01629368:
  if (((bVar1) && ((*(byte *)(*(long *)param_1 + 0x12) & 1) != 0)) && (bVar2)) {
    SwapInputs(this);
    return;
  }
  return;
}

