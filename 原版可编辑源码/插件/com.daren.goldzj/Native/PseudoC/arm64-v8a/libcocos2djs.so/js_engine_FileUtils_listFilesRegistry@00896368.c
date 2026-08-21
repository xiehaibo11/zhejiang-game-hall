
/* js_engine_FileUtils_listFilesRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_engine_FileUtils_listFilesRegistry(FunctionCallbackInfo *param_1)

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
  Value *local_d0;
  Value *local_c8;
  undefined8 local_c0;
  HandleScope aHStack_b8 [24];
  byte *local_a0;
  byte *local_98;
  ulong local_88;
  undefined8 local_80;
  void *local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b8,pIVar11);
  local_d0 = (Value *)0x0;
  local_c8 = (Value *)0x0;
  local_c0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_d0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_d0);
  pvVar6 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar6,(vector *)&local_d0);
  plVar7 = (long *)se::State::nativeThisObject(aSStack_70);
  if (plVar7 == (long *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                        ,0x16b,"js_engine_FileUtils_listFiles");
    __android_log_print(6,"jswrapper","js_engine_FileUtils_listFiles : Invalid Native Object");
  }
  else {
    plVar8 = (long *)se::State::args(aSStack_70);
    if (plVar8[1] - *plVar8 == 0x10) {
      local_80 = 0;
      local_78 = (void *)0x0;
      local_88 = 0;
      uVar9 = seval_to_std_string((Value *)*plVar8,(basic_string *)&local_88);
      if ((uVar9 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                            ,0x172,"js_engine_FileUtils_listFiles");
        __android_log_print(6,"jswrapper",
                            "js_engine_FileUtils_listFiles : Error processing arguments");
        bVar1 = false;
      }
      else {
        (**(code **)(*plVar7 + 0x118))(&local_a0,plVar7,&local_88);
        pVVar10 = (Value *)se::State::rval(aSStack_70);
        uVar9 = std_vector_string_to_seval((vector *)&local_a0,pVVar10);
        bVar1 = (uVar9 & 1) == 0;
        pbVar3 = local_a0;
        if (bVar1) {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                              ,0x175,"js_engine_FileUtils_listFiles");
          __android_log_print(6,"jswrapper",
                              "js_engine_FileUtils_listFiles : Error processing arguments");
          pbVar3 = local_a0;
        }
        bVar1 = !bVar1;
        local_a0 = pbVar3;
        if (pbVar3 != (byte *)0x0) {
          while (pbVar4 = local_98, pbVar4 != pbVar3) {
            local_98 = pbVar4 + -0x18;
            if ((*local_98 & 1) != 0) {
              operator_delete(*(void **)(pbVar4 + -8));
            }
          }
          operator_delete(local_a0);
        }
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      if (bVar1) goto LAB_00896608;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp, 376): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar8[1] - *plVar8) >> 4,1);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_engine_FileUtils_listFiles",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                      ,0x17b);
LAB_00896608:
  pVVar10 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar10,param_1);
  se::State::~State(aSStack_70);
  pVVar5 = local_d0;
  pVVar10 = local_c8;
  if (local_d0 != (Value *)0x0) {
    while (pVVar10 != pVVar5) {
      se::Value::~Value(pVVar10 + -0x10);
      pVVar10 = pVVar10 + -0x10;
    }
    local_c8 = pVVar5;
    operator_delete(local_d0);
  }
  v8::HandleScope::~HandleScope(aHStack_b8);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

