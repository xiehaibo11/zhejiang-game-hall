
/* v8::internal::CreateFunc(v8::internal::Isolate*, v8::internal::Handle<v8::internal::String>, void
   (*)(v8::FunctionCallbackInfo<v8::Value> const&), bool) */

void v8::internal::CreateFunc
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  FunctionTemplate *this;
  long lVar1;
  
  this = (FunctionTemplate *)FunctionTemplate::New(param_1,param_3,0,0,0,1,0);
  if ((param_4 & 1) == 0) {
    FunctionTemplate::RemovePrototype(this);
  }
  else {
    FunctionTemplate::ReadOnlyPrototype(this);
  }
  lVar1 = ApiNatives::InstantiateFunction(this,param_2);
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

