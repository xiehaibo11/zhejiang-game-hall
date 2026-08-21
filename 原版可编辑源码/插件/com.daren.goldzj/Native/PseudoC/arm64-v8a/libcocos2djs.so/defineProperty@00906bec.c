
/* se::Object::defineProperty(char const*, void (*)(v8::Local<v8::Name>,
   v8::PropertyCallbackInfo<v8::Value> const&), void (*)(v8::Local<v8::Name>, v8::Local<v8::Value>,
   v8::PropertyCallbackInfo<void> const&)) */

bool __thiscall
se::Object::defineProperty
          (Object *this,char *param_1,_func_void_Local_PropertyCallbackInfo_ptr *param_2,
          _func_void_Local_Local_PropertyCallbackInfo_ptr *param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  lVar2 = v8::String::NewFromUtf8(DAT_01d371a8,param_1,0,0xffffffff);
  bVar1 = false;
  if (lVar2 != 0) {
    uVar3 = ObjectWrap::handle((ObjectWrap *)(this + 0x18),DAT_01d371a8);
    uVar4 = v8::Isolate::GetCurrentContext(DAT_01d371a8);
    uVar5 = v8::Object::SetAccessor(uVar3,uVar4,lVar2,param_2,param_3,0,0,0,0,0);
    if ((uVar5 & 0xff) == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = (uVar5 & 0xff00) != 0;
    }
  }
  return bVar1;
}

