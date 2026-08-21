
/* se::Class::defineProperty(char const*, void (*)(v8::Local<v8::Name>,
   v8::PropertyCallbackInfo<v8::Value> const&), void (*)(v8::Local<v8::Name>, v8::Local<v8::Value>,
   v8::PropertyCallbackInfo<void> const&)) */

undefined8 __thiscall
se::Class::defineProperty
          (Class *this,char *param_1,_func_void_Local_PropertyCallbackInfo_ptr *param_2,
          _func_void_Local_Local_PropertyCallbackInfo_ptr *param_3)

{
  long lVar1;
  FunctionTemplate *this_00;
  undefined8 uVar2;
  
  lVar1 = v8::String::NewFromUtf8(DAT_01d37198,param_1,0,0xffffffff);
  uVar2 = 0;
  if (lVar1 != 0) {
    if (*(ulong **)(this + 0x38) == (ulong *)0x0) {
      this_00 = (FunctionTemplate *)0x0;
    }
    else {
      this_00 = (FunctionTemplate *)
                v8::HandleScope::CreateHandle(DAT_01d37198,**(ulong **)(this + 0x38));
    }
    uVar2 = v8::FunctionTemplate::PrototypeTemplate(this_00);
    v8::ObjectTemplate::SetAccessor(uVar2,lVar1,param_2,param_3,0,0,0,0,0,0);
    uVar2 = 1;
  }
  return uVar2;
}

