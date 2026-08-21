
/* js_engine_FileUtils_setSearchPathsRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_engine_FileUtils_setSearchPathsRegistry(FunctionCallbackInfo *param_1)

{
  bool bVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  Value *pVVar5;
  void *pvVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  Value *pVVar10;
  Isolate *pIVar11;
  byte *pbVar12;
  Value *local_b8;
  Value *local_b0;
  undefined8 local_a8;
  HandleScope aHStack_a0 [24];
  byte *local_88;
  byte *local_80;
  undefined8 uStack_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a0,pIVar11);
  local_b8 = (Value *)0x0;
  local_b0 = (Value *)0x0;
  local_a8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_b8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_b8);
  pvVar6 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar6,(vector *)&local_b8);
  plVar7 = (long *)se::State::nativeThisObject(aSStack_70);
  if (plVar7 == (long *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                        ,0x1d6,"js_engine_FileUtils_setSearchPaths");
    __android_log_print(6,"jswrapper","js_engine_FileUtils_setSearchPaths : Invalid Native Object");
  }
  else {
    plVar8 = (long *)se::State::args(aSStack_70);
    if (plVar8[1] - *plVar8 == 0x10) {
      local_80 = (byte *)0x0;
      uStack_78 = 0;
      local_88 = (byte *)0x0;
      uVar9 = seval_to_std_vector_string((Value *)*plVar8,(vector *)&local_88);
      bVar1 = (uVar9 & 1) == 0;
      if (bVar1) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                            ,0x1dd,"js_engine_FileUtils_setSearchPaths");
        __android_log_print(6,"jswrapper",
                            "js_engine_FileUtils_setSearchPaths : Error processing arguments");
        pbVar3 = local_88;
      }
      else {
        (**(code **)(*plVar7 + 0x78))(plVar7,&local_88);
        pbVar3 = local_88;
      }
      local_88 = pbVar3;
      pbVar12 = local_80;
      if (pbVar3 != (byte *)0x0) {
        while (pbVar4 = pbVar12, pbVar4 != pbVar3) {
          pbVar12 = pbVar4 + -0x18;
          if ((*pbVar12 & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + -8));
          }
        }
        local_80 = pbVar3;
        operator_delete(local_88);
      }
      if (!bVar1) goto LAB_00897890;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp, 481): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar8[1] - *plVar8) >> 4,1);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_engine_FileUtils_setSearchPaths",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                      ,0x1e4);
LAB_00897890:
  pVVar10 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar10,param_1);
  se::State::~State(aSStack_70);
  pVVar5 = local_b8;
  pVVar10 = local_b0;
  if (local_b8 != (Value *)0x0) {
    while (pVVar10 != pVVar5) {
      se::Value::~Value(pVVar10 + -0x10);
      pVVar10 = pVVar10 + -0x10;
    }
    local_b0 = pVVar5;
    operator_delete(local_b8);
  }
  v8::HandleScope::~HandleScope(aHStack_a0);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

