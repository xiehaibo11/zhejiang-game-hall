
/* js_se_setExceptionCallbackRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_se_setExceptionCallbackRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  long *plVar4;
  Value *pVVar5;
  Object *pOVar6;
  RefCounter *this;
  long lVar7;
  ScriptEngine *this_00;
  ulong uVar8;
  Isolate *pIVar9;
  Value *local_c8;
  Value *local_c0;
  undefined8 local_b8;
  HandleScope aHStack_b0 [24];
  State aSStack_98 [40];
  undefined **local_70;
  RefCounter *pRStack_68;
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar9 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b0,pIVar9);
  local_c8 = (Value *)0x0;
  local_c0 = (Value *)0x0;
  local_b8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_c8);
  pvVar3 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_98,pvVar3,(vector *)&local_c8);
  plVar4 = (long *)se::State::args(aSStack_98);
  pVVar5 = (Value *)*plVar4;
  uVar8 = plVar4[1] - (long)pVVar5;
  if (uVar8 == 0x10) {
    if (pVVar5[8] == (Value)0x5) {
      pOVar6 = (Object *)se::Value::toObject(pVVar5);
      uVar8 = se::Object::isFunction(pOVar6);
      if ((uVar8 & 1) != 0) {
        this = (RefCounter *)se::Value::toObject((Value *)*plVar4);
        se::RefCounter::incRef(this);
        lVar7 = se::State::thisObject(aSStack_98);
        if (lVar7 == 0) {
          se::Object::root((Object *)this);
        }
        else {
          pOVar6 = (Object *)se::State::thisObject(aSStack_98);
          se::Object::attachObject(pOVar6,(Object *)this);
        }
        this_00 = (ScriptEngine *)se::ScriptEngine::getInstance();
        local_70 = &PTR_FUN_01c679b8;
        pRStack_68 = this;
        local_50 = &local_70;
        se::ScriptEngine::setJSExceptionCallback(this_00,(function *)&local_70);
        if (&local_70 == local_50) {
          (*(code *)(*local_50)[4])();
        }
        else if (local_50 != (undefined ***)0x0) {
          (*(code *)(*local_50)[5])();
        }
        goto LAB_008e8158;
      }
      uVar8 = plVar4[1] - *plVar4;
    }
    else {
      uVar8 = 0x10;
    }
  }
  __android_log_print(6,"jswrapper",
                      "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_cocos2dx_manual.cpp, 596): expect 1 arguments of Function type, %d provided\n"
                      ,uVar8 >> 4);
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_se_setExceptionCallback",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_cocos2dx_manual.cpp"
                      ,0x26d);
LAB_008e8158:
  pVVar5 = (Value *)se::State::rval(aSStack_98);
  se::internal::setReturnValue(pVVar5,param_1);
  se::State::~State(aSStack_98);
  pVVar2 = local_c8;
  pVVar5 = local_c0;
  if (local_c8 != (Value *)0x0) {
    while (pVVar5 != pVVar2) {
      se::Value::~Value(pVVar5 + -0x10);
      pVVar5 = pVVar5 + -0x10;
    }
    local_c0 = pVVar2;
    operator_delete(local_c8);
  }
  v8::HandleScope::~HandleScope(aHStack_b0);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

