
/* v8::internal::compiler::JSTypedLowering::ReduceJSToString(v8::internal::compiler::Node*) */

long __thiscall
v8::internal::compiler::JSTypedLowering::ReduceJSToString(JSTypedLowering *this,Node *param_1)

{
  long lVar1;
  Node *pNVar2;
  
  pNVar2 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar2 = (Node *)(*(long *)pNVar2 + 0x10);
  }
  lVar1 = ReduceJSToStringInput(this,*(Node **)pNVar2);
  if (lVar1 != 0) {
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,lVar1,0,0);
  }
  return lVar1;
}

