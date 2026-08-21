
/* v8::internal::compiler::JSContextSpecialization::Reduce(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::JSContextSpecialization::Reduce(JSContextSpecialization *this,Node *param_1)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  JSGraph *this_00;
  ObjectRef aOStack_30 [16];
  
  sVar1 = *(short *)(*(Operator **)param_1 + 0x10);
  if (sVar1 == 0x2f7) {
    uVar3 = ReduceJSStoreContext(this,param_1);
    return uVar3;
  }
  if (sVar1 != 0x2f6) {
    if (((sVar1 == 0x32) && (iVar2 = ParameterIndexOf(*(Operator **)param_1), iVar2 == -1)) &&
       (*(long *)(this + 0x30) != 0)) {
      this_00 = *(JSGraph **)(this + 0x10);
      ObjectRef::ObjectRef(aOStack_30,*(undefined8 *)(this + 0x38),*(long *)(this + 0x30),0);
      uVar4 = ObjectRef::IsJSFunction(aOStack_30);
      if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsJSFunction()");
      }
      uVar3 = JSGraph::Constant(this_00,aOStack_30);
    }
    else {
      uVar3 = 0;
    }
    return uVar3;
  }
  uVar3 = ReduceJSLoadContext(this,param_1);
  return uVar3;
}

