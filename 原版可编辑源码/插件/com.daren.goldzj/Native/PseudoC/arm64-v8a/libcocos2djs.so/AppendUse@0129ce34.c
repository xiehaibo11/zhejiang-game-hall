
/* v8::internal::compiler::Node::AppendUse(v8::internal::compiler::Node::Use*) */

void __thiscall v8::internal::compiler::Node::AppendUse(Node *this,Use *param_1)

{
  *(undefined8 *)param_1 = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(param_1 + 8) = 0;
  if (*(long *)(this + 0x18) != 0) {
    *(Use **)(*(long *)(this + 0x18) + 8) = param_1;
  }
  *(Use **)(this + 0x18) = param_1;
  return;
}

