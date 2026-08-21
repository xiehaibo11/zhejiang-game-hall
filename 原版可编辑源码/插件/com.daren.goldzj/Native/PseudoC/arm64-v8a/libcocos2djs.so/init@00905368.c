
/* se::Class::init(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, se::Object*, se::Object*, void
   (*)(v8::FunctionCallbackInfo<v8::Value> const&)) */

undefined4 __thiscall
se::Class::init(Class *this,basic_string *param_1,Object *param_2,Object *param_3,
               _func_void_FunctionCallbackInfo_ptr *param_4)

{
  ulong uVar1;
  basic_string *pbVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  undefined8 uVar5;
  long lVar6;
  FunctionTemplate *pFVar7;
  ObjectTemplate *this_00;
  Class *pCVar8;
  undefined4 uVar9;
  
  if (this != (Class *)param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)this,
           (char *)pbVar2,uVar1);
  }
  *(Object **)(this + 0x18) = param_2;
  if (param_2 != (Object *)0x0) {
    RefCounter::incRef((RefCounter *)param_2);
  }
  *(Object **)(this + 0x20) = param_3;
  if (param_3 != (Object *)0x0) {
    RefCounter::incRef((RefCounter *)param_3);
  }
  *(_func_void_FunctionCallbackInfo_ptr **)(this + 0x30) = param_4;
  pIVar3 = DAT_01d37198;
  puVar4 = (ulong *)v8::FunctionTemplate::New(DAT_01d37198,param_4,0,0,0,1,0);
  if (*(ulong **)(this + 0x38) != (ulong *)0x0) {
    v8::V8::DisposeGlobal(*(ulong **)(this + 0x38));
    *(undefined8 *)(this + 0x38) = 0;
  }
  if (puVar4 != (ulong *)0x0) {
    uVar5 = v8::V8::GlobalizeReference(pIVar3,puVar4);
    *(undefined8 *)(this + 0x38) = uVar5;
  }
  if (((byte)*this & 1) == 0) {
    pCVar8 = this + 1;
  }
  else {
    pCVar8 = *(Class **)(this + 0x10);
  }
  lVar6 = v8::String::NewFromUtf8(DAT_01d37198,pCVar8,0,0xffffffff);
  if (lVar6 == 0) {
    uVar9 = 0;
  }
  else {
    if (*(ulong **)(this + 0x38) == (ulong *)0x0) {
      pFVar7 = (FunctionTemplate *)0x0;
    }
    else {
      pFVar7 = (FunctionTemplate *)
               v8::HandleScope::CreateHandle(DAT_01d37198,**(ulong **)(this + 0x38));
    }
    v8::FunctionTemplate::SetClassName(pFVar7,lVar6);
    if (*(ulong **)(this + 0x38) == (ulong *)0x0) {
      pFVar7 = (FunctionTemplate *)0x0;
    }
    else {
      pFVar7 = (FunctionTemplate *)
               v8::HandleScope::CreateHandle(DAT_01d37198,**(ulong **)(this + 0x38));
    }
    this_00 = (ObjectTemplate *)v8::FunctionTemplate::InstanceTemplate(pFVar7);
    uVar9 = 1;
    v8::ObjectTemplate::SetInternalFieldCount(this_00,1);
  }
  return uVar9;
}

