
bool FUN_00987618(long param_1,undefined8 *param_2,basic_string *param_3)

{
  long lVar1;
  Value *pVVar2;
  Value *pVVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  Isolate *pIVar7;
  Object *pOVar8;
  Object *this;
  ulong uVar9;
  type *ptVar10;
  bool local_8c [4];
  Value *local_88;
  Value *local_80;
  undefined8 local_78;
  HandleScope aHStack_70 [24];
  Value aVStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  ptVar10 = (type *)*param_2;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  pIVar7 = (Isolate *)v8::Isolate::GetCurrent();
  v8::HandleScope::HandleScope(aHStack_70,pIVar7);
  local_88 = (Value *)0x0;
  local_80 = (Value *)0x0;
  local_78 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::__append
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_88,2);
  bVar4 = native_ptr_to_seval<cocos2d::WebView>(ptVar10,local_88,(bool *)0x0);
  bVar5 = std_string_to_seval(param_3,local_88 + 0x10);
  se::Value::Value(aVStack_58);
  if (*(char *)(param_1 + 0x10) == '\x05') {
    pOVar8 = (Object *)se::Value::toObject((Value *)(param_1 + 8));
  }
  else {
    pOVar8 = (Object *)0x0;
  }
  this = (Object *)se::Value::toObject((Value *)(param_1 + 0x18));
  uVar9 = se::Object::call(this,(vector *)&local_88,pOVar8,aVStack_58);
  if ((uVar9 & 1) == 0) {
    se::ScriptEngine::getInstance();
    se::ScriptEngine::clearException();
  }
  bVar6 = seval_to_boolean(aVStack_58,local_8c);
  if ((bVar4 & bVar5 & bVar6) == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp"
                        ,0x2b,"operator()");
    __android_log_print(6,"jswrapper",
                        "lambda function : Error processing return value with type bool");
  }
  se::Value::~Value(aVStack_58);
  pVVar3 = local_88;
  pVVar2 = local_80;
  if (local_88 != (Value *)0x0) {
    while (pVVar2 != pVVar3) {
      se::Value::~Value(pVVar2 + -0x10);
      pVVar2 = pVVar2 + -0x10;
    }
    local_80 = pVVar3;
    operator_delete(local_88);
  }
  v8::HandleScope::~HandleScope(aHStack_70);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_8c[0] != false;
}

