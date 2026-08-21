
/* v8::internal::TriggerFailureExtension::TriggerCheckFalse(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void v8::internal::TriggerFailureExtension::TriggerCheckFalse(FunctionCallbackInfo *param_1)

{
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","false");
}

