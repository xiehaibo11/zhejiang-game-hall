
/* v8::internal::compiler::JSCreateLowering::ReduceJSGetTemplateObject(v8::internal::compiler::Node*)
    */

undefined8 __thiscall
v8::internal::compiler::JSCreateLowering::ReduceJSGetTemplateObject
          (JSCreateLowering *this,Node *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  ObjectRef local_50 [16];
  ObjectRef aOStack_40 [16];
  
  puVar1 = (undefined8 *)GetTemplateObjectParametersOf(*(Operator **)param_1);
  ObjectRef::ObjectRef(aOStack_40,*(undefined8 *)(this + 0x20),puVar1[1],0);
  uVar2 = ObjectRef::IsSharedFunctionInfo(aOStack_40);
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsSharedFunctionInfo()");
  }
  ObjectRef::ObjectRef((ObjectRef *)&local_60,*(undefined8 *)(this + 0x20),*puVar1,0);
  uVar2 = ObjectRef::IsTemplateObjectDescription((ObjectRef *)&local_60);
  if ((uVar2 & 1) != 0) {
    local_50 = (ObjectRef  [16])
               SharedFunctionInfoRef::GetTemplateObject(aOStack_40,local_60,uStack_58,puVar1 + 2,0);
    uVar3 = JSGraph::Constant(*(JSGraph **)(this + 0x18),local_50);
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar3,0,0);
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsTemplateObjectDescription()");
}

