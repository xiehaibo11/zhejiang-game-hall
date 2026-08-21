
/* v8::internal::compiler::CreateGenericLazyDeoptContinuationFrameState(v8::internal::compiler::JSGraph*,
   v8::internal::compiler::SharedFunctionInfoRef const&, v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::Node*) */

void v8::internal::compiler::CreateGenericLazyDeoptContinuationFrameState
               (JSGraph *param_1,SharedFunctionInfoRef *param_2,Node *param_3,Node *param_4,
               Node *param_5,Node *param_6)

{
  Node *local_18;
  
  local_18 = param_5;
  CreateJavaScriptBuiltinContinuationFrameState
            (param_1,param_2,0x22b,param_3,param_4,&local_18,1,param_6,1);
  return;
}

