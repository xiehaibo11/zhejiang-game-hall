
/* js_engine_FileUtils_addSearchPathRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_engine_FileUtils_addSearchPathRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  FileUtils *this;
  long *plVar6;
  ulong uVar7;
  Value *pVVar8;
  long lVar9;
  bool bVar10;
  Isolate *pIVar11;
  Value *local_c0;
  Value *local_b8;
  undefined8 local_b0;
  HandleScope aHStack_a8 [28];
  bool local_8c [4];
  ulong local_88;
  undefined8 local_80;
  void *local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a8,pIVar11);
  local_c0 = (Value *)0x0;
  local_b8 = (Value *)0x0;
  local_b0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_c0);
  pvVar5 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar5,(vector *)&local_c0);
  this = (FileUtils *)se::State::nativeThisObject(aSStack_70);
  if (this == (FileUtils *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                        ,0x22f,"js_engine_FileUtils_addSearchPath");
    __android_log_print(6,"jswrapper","js_engine_FileUtils_addSearchPath : Invalid Native Object");
  }
  else {
    plVar6 = (long *)se::State::args(aSStack_70);
    lVar9 = plVar6[1] - *plVar6 >> 4;
    if (lVar9 == 2) {
      local_88 = 0;
      local_80 = 0;
      local_78 = (void *)0x0;
      uVar3 = seval_to_std_string((Value *)*plVar6,(basic_string *)&local_88);
      uVar4 = seval_to_boolean((Value *)(*plVar6 + 0x10),local_8c);
      if ((uVar3 & uVar4 & 1) != 0) {
        cocos2d::FileUtils::addSearchPath(this,(basic_string *)&local_88,local_8c[0]);
        goto LAB_00898614;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                          ,0x23f,"js_engine_FileUtils_addSearchPath");
      __android_log_print(6,"jswrapper",
                          "js_engine_FileUtils_addSearchPath : Error processing arguments");
LAB_0089878c:
      bVar10 = false;
    }
    else {
      if (lVar9 != 1) {
        __android_log_print(6,"jswrapper",
                            "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp, 579): wrong number of arguments: %d, was expecting %d\n"
                            ,(ulong)(plVar6[1] - *plVar6) >> 4,2);
        goto LAB_00898650;
      }
      local_80 = 0;
      local_78 = (void *)0x0;
      local_88 = 0;
      uVar7 = seval_to_std_string((Value *)*plVar6,(basic_string *)&local_88);
      if ((uVar7 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                            ,0x236,"js_engine_FileUtils_addSearchPath");
        __android_log_print(6,"jswrapper",
                            "js_engine_FileUtils_addSearchPath : Error processing arguments");
        goto LAB_0089878c;
      }
      cocos2d::FileUtils::addSearchPath(this,(basic_string *)&local_88,false);
LAB_00898614:
      bVar10 = true;
    }
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
    if (bVar10) goto LAB_0089867c;
  }
LAB_00898650:
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_engine_FileUtils_addSearchPath",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                      ,0x246);
LAB_0089867c:
  pVVar8 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_c0;
  pVVar8 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar8 != pVVar2) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_b8 = pVVar2;
    operator_delete(local_c0);
  }
  v8::HandleScope::~HandleScope(aHStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

