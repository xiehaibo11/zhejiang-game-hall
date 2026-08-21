
/* se::internal::setReturnValue(se::Value const&, v8::PropertyCallbackInfo<v8::Value> const&) */

void se::internal::setReturnValue(Value *param_1,PropertyCallbackInfo *param_2)

{
  _setReturnValue<v8::PropertyCallbackInfo<v8::Value>>(param_1,param_2);
  return;
}

