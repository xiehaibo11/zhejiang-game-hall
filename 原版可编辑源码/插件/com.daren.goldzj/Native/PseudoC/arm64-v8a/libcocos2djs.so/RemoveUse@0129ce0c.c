
/* v8::internal::compiler::Node::RemoveUse(v8::internal::compiler::Node::Use*) */

void __thiscall v8::internal::compiler::Node::RemoveUse(Node *this,Use *param_1)

{
  Node *pNVar1;
  
  pNVar1 = this + 0x18;
  if (*(Node **)(param_1 + 8) != (Node *)0x0) {
    pNVar1 = *(Node **)(param_1 + 8);
  }
  *(undefined8 *)pNVar1 = *(undefined8 *)param_1;
  if (*(long *)param_1 != 0) {
    *(undefined8 *)(*(long *)param_1 + 8) = *(undefined8 *)(param_1 + 8);
  }
  return;
}

