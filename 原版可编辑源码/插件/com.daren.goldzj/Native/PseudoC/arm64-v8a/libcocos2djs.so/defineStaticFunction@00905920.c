
/* se::Class::defineStaticFunction(char const*, void (*)(v8::FunctionCallbackInfo<v8::Value>
   const&)) */

undefined4 __thiscall
se::Class::defineStaticFunction
          (Class *this,char *param_1,_func_void_FunctionCallbackInfo_ptr *param_2)

{
  long lVar1;
  Template *pTVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  lVar1 = v8::String::NewFromUtf8(DAT_01d37198,param_1,0,0xffffffff);
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(ulong **)(this + 0x38) == (ulong *)0x0) {
      pTVar2 = (Template *)0x0;
    }
    else {
      pTVar2 = (Template *)v8::HandleScope::CreateHandle(DAT_01d37198,**(ulong **)(this + 0x38));
    }
    uVar4 = 1;
    uVar3 = v8::FunctionTemplate::New(DAT_01d37198,param_2,0,0,0,1,0);
    v8::Template::Set(pTVar2,lVar1,uVar3,0);
  }
  return uVar4;
}

