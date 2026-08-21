
int FUN_008b14f4(long param_1,basic_string *param_2,basic_string *param_3)

{
  long lVar1;
  Value *pVVar2;
  int iVar3;
  Value *pVVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  Isolate *pIVar8;
  Object *pOVar9;
  Object *this;
  ulong uVar10;
  int local_8c;
  Value *local_88;
  Value *local_80;
  undefined8 local_78;
  HandleScope aHStack_70 [24];
  Value aVStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  pIVar8 = (Isolate *)v8::Isolate::GetCurrent();
  v8::HandleScope::HandleScope(aHStack_70,pIVar8);
  local_88 = (Value *)0x0;
  local_80 = (Value *)0x0;
  local_78 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::__append
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_88,2);
  uVar5 = std_string_to_seval(param_2,local_88);
  uVar6 = std_string_to_seval(param_3,local_88 + 0x10);
  se::Value::Value(aVStack_58);
  if (*(char *)(param_1 + 0x10) == '\x05') {
    pOVar9 = (Object *)se::Value::toObject((Value *)(param_1 + 8));
  }
  else {
    pOVar9 = (Object *)0x0;
  }
  this = (Object *)se::Value::toObject((Value *)(param_1 + 0x18));
  uVar10 = se::Object::call(this,(vector *)&local_88,pOVar9,aVStack_58);
  if ((uVar10 & 1) == 0) {
    se::ScriptEngine::getInstance();
    se::ScriptEngine::clearException();
  }
  local_8c = 0;
  uVar7 = seval_to_int32(aVStack_58,&local_8c);
  iVar3 = local_8c;
  if ((uVar5 & uVar6 & uVar7 & 1) == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_extension_auto.cpp"
                        ,0x47a,"operator()");
    __android_log_print(6,"jswrapper",
                        "lambda function : Error processing return value with type int");
  }
  se::Value::~Value(aVStack_58);
  pVVar4 = local_88;
  pVVar2 = local_80;
  if (local_88 != (Value *)0x0) {
    while (pVVar2 != pVVar4) {
      se::Value::~Value(pVVar2 + -0x10);
      pVVar2 = pVVar2 + -0x10;
    }
    local_80 = pVVar4;
    operator_delete(local_88);
  }
  v8::HandleScope::~HandleScope(aHStack_70);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}

