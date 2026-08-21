
/* v8::internal::compiler::BasicBlock::set_control_input(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::BasicBlock::set_control_input(BasicBlock *this,Node *param_1)

{
  undefined8 *puVar1;
  
  if ((*(long *)(this + 0x40) != *(long *)(this + 0x48)) &&
     (puVar1 = (undefined8 *)(*(long *)(this + 0x48) + -8), (Node *)*puVar1 == param_1)) {
    *(undefined8 **)(this + 0x48) = puVar1;
    *(Node **)(this + 0x38) = param_1;
    return;
  }
  *(Node **)(this + 0x38) = param_1;
  return;
}

