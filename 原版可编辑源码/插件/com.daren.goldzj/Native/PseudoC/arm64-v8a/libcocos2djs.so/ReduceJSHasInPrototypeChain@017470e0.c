
/* v8::internal::compiler::JSNativeContextSpecialization::ReduceJSHasInPrototypeChain(v8::internal::compiler::Node*)
    */

undefined8 __thiscall
v8::internal::compiler::JSNativeContextSpecialization::ReduceJSHasInPrototypeChain
          (JSNativeContextSpecialization *this,Node *param_1)

{
  int iVar1;
  Node *pNVar2;
  long *plVar3;
  Node *pNVar4;
  ulong uVar5;
  undefined8 uVar6;
  ObjectRef local_40 [16];
  
  pNVar2 = (Node *)NodeProperties::GetValueInput(param_1,0);
  plVar3 = (long *)NodeProperties::GetValueInput(param_1,1);
  pNVar4 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  if (*(short *)(*plVar3 + 0x10) == 0x1e) {
    ObjectRef::ObjectRef(local_40,*(undefined8 *)(this + 0x18),*(undefined8 *)(*plVar3 + 0x30),0);
    uVar5 = ObjectRef::IsHeapObject(local_40);
    if ((uVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsHeapObject()");
    }
    iVar1 = InferHasInPrototypeChain(this,pNVar2,pNVar4,(HeapObjectRef *)local_40);
    if (iVar1 != 2) {
      if (iVar1 == 0) {
        uVar6 = JSGraph::TrueConstant(*(JSGraph **)(this + 0x10));
      }
      else {
        uVar6 = JSGraph::FalseConstant(*(JSGraph **)(this + 0x10));
      }
      (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar6,0,0);
      return uVar6;
    }
  }
  return 0;
}

