
/* v8::internal::compiler::JSGenericLowering::LowerJSCallRuntime(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::JSGenericLowering::LowerJSCallRuntime(JSGenericLowering *this,Node *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)CallRuntimeParametersOf(*(Operator **)param_1);
  ReplaceWithRuntimeCall(this,param_1,*puVar1,puVar1[2]);
  return;
}

