
void FUN_008f2118(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  undefined8 *puVar4;
  basic_string *pbVar5;
  Value *pVVar6;
  ScriptEngine *this;
  ulong uVar7;
  Isolate *pIVar8;
  Value *local_a8;
  Value *local_a0;
  undefined8 local_98;
  HandleScope aHStack_90 [24];
  HandleScope aHStack_78 [24];
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar8);
  local_a8 = (Value *)0x0;
  local_a0 = (Value *)0x0;
  local_98 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar3 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar3,(vector *)&local_a8);
  puVar4 = (undefined8 *)se::State::args(aSStack_60);
  pbVar5 = (basic_string *)se::Value::toString((Value *)*puVar4);
  pVVar6 = (Value *)se::State::rval(aSStack_60);
  pIVar8 = (Isolate *)v8::Isolate::GetCurrent();
  v8::HandleScope::HandleScope(aHStack_78,pIVar8);
  this = (ScriptEngine *)se::ScriptEngine::getInstance();
  uVar7 = se::ScriptEngine::runScript(this,pbVar5,pVVar6);
  v8::HandleScope::~HandleScope(aHStack_78);
  if ((uVar7 & 1) == 0) {
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n","require",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_global.cpp"
                        ,300);
  }
  pVVar6 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_a8;
  pVVar6 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar6 != pVVar2) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_a0 = pVVar2;
    operator_delete(local_a8);
  }
  v8::HandleScope::~HandleScope(aHStack_90);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

