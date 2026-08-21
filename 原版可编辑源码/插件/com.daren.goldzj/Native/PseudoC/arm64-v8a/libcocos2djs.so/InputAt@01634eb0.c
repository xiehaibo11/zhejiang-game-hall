
/* v8::internal::compiler::Node::InputAt(int) const */

undefined8 __thiscall v8::internal::compiler::Node::InputAt(Node *this,int param_1)

{
  Node *pNVar1;
  
  pNVar1 = this + 0x20;
  if ((~*(uint *)(this + 0x14) & 0xf000000) == 0) {
    pNVar1 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  return *(undefined8 *)(pNVar1 + (long)param_1 * 8);
}

