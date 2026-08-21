
/* se::Object::defineFunction(char const*, void (*)(v8::FunctionCallbackInfo<v8::Value> const&)) */

bool __thiscall
se::Object::defineFunction(Object *this,char *param_1,_func_void_FunctionCallbackInfo_ptr *param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  FunctionTemplate *pFVar4;
  long lVar5;
  Object *pOVar6;
  ulong uVar7;
  
  lVar2 = v8::String::NewFromUtf8(DAT_01d371a8,param_1,0,0xffffffff);
  bVar1 = false;
  if (lVar2 != 0) {
    uVar3 = v8::Isolate::GetCurrentContext(DAT_01d371a8);
    pFVar4 = (FunctionTemplate *)v8::FunctionTemplate::New(DAT_01d371a8,param_2,0,0,0,1,0);
    lVar5 = v8::FunctionTemplate::GetFunction(pFVar4,uVar3);
    bVar1 = false;
    if (lVar5 != 0) {
      pOVar6 = (Object *)ObjectWrap::handle((ObjectWrap *)(this + 0x18),DAT_01d371a8);
      uVar7 = v8::Object::Set(pOVar6,uVar3,lVar2,lVar5);
      if ((uVar7 & 0xff) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = (uVar7 & 0xff00) != 0;
      }
    }
  }
  return bVar1;
}

