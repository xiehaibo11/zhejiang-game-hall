
/* v8::internal::compiler::CommonOperatorReducer::ReduceStaticAssert(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::CommonOperatorReducer::ReduceStaticAssert
          (CommonOperatorReducer *this,Node *param_1)

{
  ulong uVar1;
  Node *pNVar2;
  long lVar3;
  ObjectRef local_30 [16];
  
  pNVar2 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar2 = (Node *)(*(long *)pNVar2 + 0x10);
  }
  lVar3 = **(long **)pNVar2;
  if (*(short *)(lVar3 + 0x10) == 0x1e) {
    ObjectRef::ObjectRef(local_30,*(undefined8 *)(this + 0x18),*(undefined8 *)(lVar3 + 0x30),0);
    uVar1 = ObjectRef::IsHeapObject(local_30);
    if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsHeapObject()");
    }
    uVar1 = ObjectRef::BooleanValue(local_30);
    if ((uVar1 & 1) == 0) {
      return (Node *)0x0;
    }
  }
  else if ((*(short *)(lVar3 + 0x10) != 0x17) || (*(int *)(lVar3 + 0x2c) == 0)) {
    return (Node *)0x0;
  }
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,param_1,0,0);
  return param_1;
}

