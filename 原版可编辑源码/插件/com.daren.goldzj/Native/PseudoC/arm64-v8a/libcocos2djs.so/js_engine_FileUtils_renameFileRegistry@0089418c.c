
/* js_engine_FileUtils_renameFileRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_engine_FileUtils_renameFileRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  Value *pVVar4;
  byte bVar5;
  void *pvVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  Value *pVVar10;
  long lVar11;
  Isolate *pIVar12;
  int iVar13;
  Value *local_e8;
  Value *local_e0;
  undefined8 local_d8;
  HandleScope aHStack_d0 [24];
  ulong local_b8;
  undefined8 local_b0;
  void *local_a8;
  ulong local_a0;
  undefined8 local_98;
  void *local_90;
  ulong local_88;
  undefined8 local_80;
  void *local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar12 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_d0,pIVar12);
  local_e8 = (Value *)0x0;
  local_e0 = (Value *)0x0;
  local_d8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_e8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_e8);
  pvVar6 = (void *)se::internal::getPrivate(pIVar12,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar6,(vector *)&local_e8);
  plVar7 = (long *)se::State::nativeThisObject(aSStack_70);
  if (plVar7 == (long *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                        ,0x8e,"js_engine_FileUtils_renameFile");
    __android_log_print(6,"jswrapper","js_engine_FileUtils_renameFile : Invalid Native Object");
  }
  else {
    plVar8 = (long *)se::State::args(aSStack_70);
    lVar1 = *plVar8;
    lVar2 = plVar8[1];
    lVar11 = lVar2 - lVar1 >> 4;
    if (lVar11 == 3) {
      local_80 = 0;
      local_78 = (void *)0x0;
      local_88 = 0;
      uVar9 = seval_to_std_string((Value *)*plVar8,(basic_string *)&local_88);
      if ((uVar9 & 1) == 0) {
        iVar13 = 8;
      }
      else {
        local_98 = 0;
        local_90 = (void *)0x0;
        local_a0 = 0;
        uVar9 = seval_to_std_string((Value *)(*plVar8 + 0x10),(basic_string *)&local_a0);
        if ((uVar9 & 1) == 0) {
          iVar13 = 8;
        }
        else {
          local_b0 = 0;
          local_a8 = (void *)0x0;
          local_b8 = 0;
          uVar9 = seval_to_std_string((Value *)(*plVar8 + 0x20),(basic_string *)&local_b8);
          if ((uVar9 & 1) == 0) {
            iVar13 = 8;
          }
          else {
            bVar5 = (**(code **)(*plVar7 + 0x140))(plVar7,&local_88,&local_a0,&local_b8);
            pVVar10 = (Value *)se::State::rval(aSStack_70);
            uVar9 = boolean_to_seval((bool)(bVar5 & 1),pVVar10);
            if ((uVar9 & 1) == 0) {
              __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                                  ,0xad,"js_engine_FileUtils_renameFile");
              __android_log_print(6,"jswrapper",
                                  "js_engine_FileUtils_renameFile : Error processing arguments");
              plVar7 = (long *)0x0;
              iVar13 = 1;
            }
            else {
              iVar13 = 1;
              plVar7 = (long *)0x1;
            }
          }
          if ((local_b8 & 1) != 0) {
            operator_delete(local_a8);
          }
        }
        if ((local_a0 & 1) != 0) {
          operator_delete(local_90);
        }
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      if (iVar13 != 8) {
LAB_00894400:
        if (((ulong)plVar7 & 1) != 0) goto LAB_0089454c;
        goto LAB_00894520;
      }
    }
    else if (lVar11 == 2) {
      local_80 = 0;
      local_78 = (void *)0x0;
      local_88 = 0;
      uVar9 = seval_to_std_string((Value *)*plVar8,(basic_string *)&local_88);
      if ((uVar9 & 1) == 0) {
        iVar13 = 4;
      }
      else {
        local_98 = 0;
        local_90 = (void *)0x0;
        local_a0 = 0;
        uVar9 = seval_to_std_string((Value *)(*plVar8 + 0x10),(basic_string *)&local_a0);
        if ((uVar9 & 1) == 0) {
          iVar13 = 4;
        }
        else {
          bVar5 = (**(code **)(*plVar7 + 0x148))(plVar7,&local_88,&local_a0);
          pVVar10 = (Value *)se::State::rval(aSStack_70);
          uVar9 = boolean_to_seval((bool)(bVar5 & 1),pVVar10);
          if ((uVar9 & 1) == 0) {
            __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                                ,0x9b,"js_engine_FileUtils_renameFile");
            __android_log_print(6,"jswrapper",
                                "js_engine_FileUtils_renameFile : Error processing arguments");
            plVar7 = (long *)0x0;
            iVar13 = 1;
          }
          else {
            iVar13 = 1;
            plVar7 = (long *)0x1;
          }
        }
        if ((local_a0 & 1) != 0) {
          operator_delete(local_90);
        }
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      if (iVar13 != 4) goto LAB_00894400;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp, 178): wrong number of arguments: %d\n"
                        ,(ulong)(lVar2 - lVar1) >> 4);
  }
LAB_00894520:
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_engine_FileUtils_renameFile",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                      ,0xb5);
LAB_0089454c:
  pVVar10 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar10,param_1);
  se::State::~State(aSStack_70);
  pVVar4 = local_e8;
  pVVar10 = local_e0;
  if (local_e8 != (Value *)0x0) {
    while (pVVar10 != pVVar4) {
      se::Value::~Value(pVVar10 + -0x10);
      pVVar10 = pVVar10 + -0x10;
    }
    local_e0 = pVVar4;
    operator_delete(local_e8);
  }
  v8::HandleScope::~HandleScope(aHStack_d0);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

