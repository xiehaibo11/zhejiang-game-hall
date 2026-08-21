
/* v8::internal::InstallFunc(v8::internal::Isolate*, v8::internal::Handle<v8::internal::JSObject>,
   char const*, void (*)(v8::FunctionCallbackInfo<v8::Value> const&), int,
   v8::internal::PropertyAttributes) */

ulong * v8::internal::InstallFunc
                  (undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4,
                  undefined2 param_5,undefined4 param_6)

{
  long lVar1;
  FunctionTemplate *this;
  ulong *puVar2;
  char *local_50;
  size_t sStack_48;
  
  sStack_48 = strlen(param_3);
  local_50 = param_3;
  lVar1 = Factory::NewStringFromOneByte(param_1,&local_50,0);
  if (lVar1 != 0) {
    this = (FunctionTemplate *)FunctionTemplate::New(param_1,param_4,0,0,0,1,0);
    FunctionTemplate::ReadOnlyPrototype(this);
    puVar2 = (ulong *)ApiNatives::InstantiateFunction(this,lVar1);
    if (puVar2 != (ulong *)0x0) {
      *(undefined2 *)((*puVar2 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar2 + 0xb)) + 0x13) =
           param_5;
      JSObject::AddProperty(param_1,param_2,lVar1,puVar2,param_6);
      return puVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

