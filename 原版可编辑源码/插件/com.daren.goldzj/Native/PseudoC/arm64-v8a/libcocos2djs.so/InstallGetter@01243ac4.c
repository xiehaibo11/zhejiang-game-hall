
/* v8::internal::InstallGetter(v8::internal::Isolate*, v8::internal::Handle<v8::internal::JSObject>,
   char const*, void (*)(v8::FunctionCallbackInfo<v8::Value> const&)) */

void v8::internal::InstallGetter(long param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  FunctionTemplate *this;
  char *local_50;
  size_t sStack_48;
  
  sStack_48 = strlen(param_3);
  local_50 = param_3;
  lVar1 = Factory::NewStringFromOneByte(param_1,&local_50,0);
  if ((lVar1 != 0) && (lVar2 = Name::ToFunctionName(param_1,lVar1,param_1 + 0x700), lVar2 != 0)) {
    this = (FunctionTemplate *)FunctionTemplate::New(param_1,param_4,0,0,0,1,0);
    FunctionTemplate::RemovePrototype(this);
    lVar2 = ApiNatives::InstantiateFunction(this,lVar2);
    if (lVar2 != 0) {
      v8::Object::SetAccessorProperty(param_2,lVar1,lVar2,0,0,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

