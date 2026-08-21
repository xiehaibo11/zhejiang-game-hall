
/* v8::internal::compiler::JSGenericLowering::LowerJSCreateArguments(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::JSGenericLowering::LowerJSCreateArguments
          (JSGenericLowering *this,Node *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)CreateArgumentsTypeOf(*(Operator **)param_1);
  if ((ulong)(long)*pcVar1 < 3) {
    ReplaceWithRuntimeCall
              (this,param_1,*(undefined4 *)(&DAT_01a5d640 + (long)*pcVar1 * 4),0xffffffff);
    return;
  }
  return;
}

