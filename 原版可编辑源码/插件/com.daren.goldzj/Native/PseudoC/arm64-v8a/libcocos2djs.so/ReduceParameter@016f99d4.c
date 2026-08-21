
/* v8::internal::compiler::JSContextSpecialization::ReduceParameter(v8::internal::compiler::Node*)
    */

undefined8 __thiscall
v8::internal::compiler::JSContextSpecialization::ReduceParameter
          (JSContextSpecialization *this,Node *param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  JSGraph *this_00;
  ObjectRef aOStack_30 [16];
  
  iVar1 = ParameterIndexOf(*(Operator **)param_1);
  if ((iVar1 == -1) && (*(long *)(this + 0x30) != 0)) {
    this_00 = *(JSGraph **)(this + 0x10);
    ObjectRef::ObjectRef(aOStack_30,*(undefined8 *)(this + 0x38),*(long *)(this + 0x30),0);
    uVar3 = ObjectRef::IsJSFunction(aOStack_30);
    if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsJSFunction()");
    }
    uVar2 = JSGraph::Constant(this_00,aOStack_30);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

