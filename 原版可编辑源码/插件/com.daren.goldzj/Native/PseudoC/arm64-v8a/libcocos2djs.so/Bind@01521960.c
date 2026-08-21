
/* v8::internal::interpreter::BytecodeLabels::Bind(v8::internal::interpreter::BytecodeArrayBuilder*)
    */

void __thiscall
v8::internal::interpreter::BytecodeLabels::Bind(BytecodeLabels *this,BytecodeArrayBuilder *param_1)

{
  BytecodeLabels *pBVar1;
  
  pBVar1 = *(BytecodeLabels **)(this + 8);
  this[0x20] = (BytecodeLabels)0x1;
  for (; this != pBVar1; pBVar1 = *(BytecodeLabels **)(pBVar1 + 8)) {
    BytecodeArrayBuilder::Bind(param_1,(BytecodeLabel *)(pBVar1 + 0x10));
  }
  return;
}

