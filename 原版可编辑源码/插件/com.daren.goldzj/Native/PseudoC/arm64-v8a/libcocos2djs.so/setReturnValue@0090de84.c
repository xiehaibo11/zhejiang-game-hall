
/* se::internal::setReturnValue(se::Value const&, v8::FunctionCallbackInfo<v8::Value> const&) */

void se::internal::setReturnValue(Value *param_1,FunctionCallbackInfo *param_2)

{
  _setReturnValue<v8::FunctionCallbackInfo<v8::Value>>(param_1,param_2);
  return;
}

