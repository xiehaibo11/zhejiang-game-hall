
/* js_engine_FileUtils_addSearchResolutionsOrderRegistry(v8::FunctionCallbackInfo<v8::Value> const&)
    */

void js_engine_FileUtils_addSearchResolutionsOrderRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  Value *pVVar9;
  long lVar10;
  bool bVar11;
  Isolate *pIVar12;
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
  pIVar12 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a8,pIVar12);
  local_c0 = (Value *)0x0;
  local_b8 = (Value *)0x0;
  local_b0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_c0);
  pvVar5 = (void *)se::internal::getPrivate(pIVar12,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar5,(vector *)&local_c0);
  plVar6 = (long *)se::State::nativeThisObject(aSStack_70);
  if (plVar6 == (long *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                        ,0x213,"js_engine_FileUtils_addSearchResolutionsOrder");
    __android_log_print(6,"jswrapper",
                        "js_engine_FileUtils_addSearchResolutionsOrder : Invalid Native Object");
  }
  else {
    plVar7 = (long *)se::State::args(aSStack_70);
    lVar10 = plVar7[1] - *plVar7 >> 4;
    if (lVar10 == 2) {
      local_88 = 0;
      local_80 = 0;
      local_78 = (void *)0x0;
      uVar3 = seval_to_std_string((Value *)*plVar7,(basic_string *)&local_88);
      uVar4 = seval_to_boolean((Value *)(*plVar7 + 0x10),local_8c);
      if ((uVar3 & uVar4 & 1) != 0) {
        (**(code **)(*plVar6 + 0x68))(plVar6,&local_88,local_8c[0]);
        goto LAB_00898280;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                          ,0x223,"js_engine_FileUtils_addSearchResolutionsOrder");
      __android_log_print(6,"jswrapper",
                          "js_engine_FileUtils_addSearchResolutionsOrder : Error processing arguments"
                         );
LAB_008983f8:
      bVar11 = false;
    }
    else {
      if (lVar10 != 1) {
        __android_log_print(6,"jswrapper",
                            "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp, 551): wrong number of arguments: %d, was expecting %d\n"
                            ,(ulong)(plVar7[1] - *plVar7) >> 4,2);
        goto LAB_008982bc;
      }
      local_80 = 0;
      local_78 = (void *)0x0;
      local_88 = 0;
      uVar8 = seval_to_std_string((Value *)*plVar7,(basic_string *)&local_88);
      if ((uVar8 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                            ,0x21a,"js_engine_FileUtils_addSearchResolutionsOrder");
        __android_log_print(6,"jswrapper",
                            "js_engine_FileUtils_addSearchResolutionsOrder : Error processing arguments"
                           );
        goto LAB_008983f8;
      }
      (**(code **)(*plVar6 + 0x68))(plVar6,&local_88,0);
LAB_00898280:
      bVar11 = true;
    }
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
    if (bVar11) goto LAB_008982e8;
  }
LAB_008982bc:
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_engine_FileUtils_addSearchResolutionsOrder",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                      ,0x22a);
LAB_008982e8:
  pVVar9 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_c0;
  pVVar9 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar9 != pVVar2) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
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

