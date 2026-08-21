
/* v8::internal::compiler::JSCallReducer::ReduceJSCallWithArrayLike(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::JSCallReducer::ReduceJSCallWithArrayLike(JSCallReducer *this,Node *param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)CallParametersOf(*(Operator **)param_1);
  ReduceCallOrConstructWithArrayLikeOrSpread
            (this,param_1,*puVar1 & 0x7ffffff,puVar1 + 1,puVar1 + 2,*puVar1 >> 0x1c & 1);
  return;
}

