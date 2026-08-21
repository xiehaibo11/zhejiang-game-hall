
/* js_network_Downloader_setOnFileTaskSuccessRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_network_Downloader_setOnFileTaskSuccessRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *puVar5;
  Value *pVVar6;
  Object *pOVar7;
  ulong uVar8;
  Object *pOVar9;
  long *plVar10;
  code *pcVar11;
  Isolate *pIVar12;
  Value *local_178;
  Value *local_170;
  undefined8 local_168;
  HandleScope aHStack_160 [24];
  State aSStack_148 [40];
  Value aVStack_120 [16];
  Value aVStack_110 [16];
  Value aVStack_100 [16];
  Value aVStack_f0 [16];
  Value aVStack_e0 [16];
  Value aVStack_d0 [16];
  long alStack_c0 [4];
  long *local_a0;
  long alStack_90 [4];
  long *local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar12 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_160,pIVar12);
  local_178 = (Value *)0x0;
  local_170 = (Value *)0x0;
  local_168 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_178,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_178);
  pvVar3 = (void *)se::internal::getPrivate(pIVar12,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_148,pvVar3,(vector *)&local_178);
  lVar4 = se::State::nativeThisObject(aSStack_148);
  if (lVar4 == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_cocos2dx_network_manual.cpp"
                        ,0x55,"js_network_Downloader_setOnFileTaskSuccess");
    __android_log_print(6,"jswrapper",
                        "js_network_Downloader_setOnFileTaskSuccess : Invalid Native Object");
  }
  else {
    puVar5 = (undefined8 *)se::State::args(aSStack_148);
    pVVar6 = (Value *)*puVar5;
    if (puVar5[1] - (long)pVVar6 == 0x10) {
      local_a0 = (long *)0x0;
      if (pVVar6[8] == (Value)0x5) {
        pOVar7 = (Object *)se::Value::toObject(pVVar6);
        uVar8 = se::Object::isFunction(pOVar7);
        plVar10 = local_a0;
        if ((uVar8 & 1) == 0) {
          local_a0 = (long *)0x0;
          if (alStack_c0 == plVar10) {
            pcVar11 = *(code **)(*plVar10 + 0x20);
          }
          else {
            if (plVar10 == (long *)0x0) goto LAB_00900d94;
            pcVar11 = *(code **)(*plVar10 + 0x28);
          }
          (*pcVar11)();
        }
        else {
          pOVar7 = (Object *)se::State::thisObject(aSStack_148);
          se::Value::Value(aVStack_f0,pOVar7,false);
          se::Value::Value(aVStack_100,(Value *)*puVar5);
          pOVar7 = (Object *)se::Value::toObject(aVStack_f0);
          pOVar9 = (Object *)se::Value::toObject(aVStack_100);
          se::Object::attachObject(pOVar7,pOVar9);
          se::Value::Value(aVStack_120,aVStack_f0);
          se::Value::Value(aVStack_110,aVStack_100);
          se::Value::Value(aVStack_e0,aVStack_120);
          se::Value::Value(aVStack_d0,aVStack_110);
          local_70 = (long *)0x0;
          plVar10 = operator_new(0x28);
          *plVar10 = (long)&PTR_FUN_01c688d8;
          se::Value::Value((Value *)(plVar10 + 1),aVStack_e0);
          se::Value::Value((Value *)(plVar10 + 3),aVStack_d0);
          local_70 = plVar10;
          FUN_00901924(alStack_90,alStack_c0);
          if (alStack_90 == local_70) {
            pcVar11 = *(code **)(*local_70 + 0x20);
LAB_00900e48:
            (*pcVar11)();
          }
          else if (local_70 != (long *)0x0) {
            pcVar11 = *(code **)(*local_70 + 0x28);
            goto LAB_00900e48;
          }
          se::Value::~Value(aVStack_d0);
          se::Value::~Value(aVStack_e0);
          se::Value::~Value(aVStack_110);
          se::Value::~Value(aVStack_120);
          se::Value::~Value(aVStack_100);
          se::Value::~Value(aVStack_f0);
        }
        if (local_a0 == (long *)0x0) goto LAB_00900d94;
        if (alStack_c0 == local_a0) {
          local_70 = alStack_90;
          (**(code **)(*local_a0 + 0x18))(local_a0,alStack_90);
        }
        else {
          local_70 = (long *)(**(code **)(*local_a0 + 0x10))();
        }
      }
      else {
        local_a0 = (long *)0x0;
LAB_00900d94:
        local_70 = (long *)0x0;
      }
      FUN_00901924(alStack_90,lVar4 + 0x30);
      if (alStack_90 == local_70) {
        pcVar11 = *(code **)(*local_70 + 0x20);
LAB_00900dcc:
        (*pcVar11)();
      }
      else if (local_70 != (long *)0x0) {
        pcVar11 = *(code **)(*local_70 + 0x28);
        goto LAB_00900dcc;
      }
      if (alStack_c0 == local_a0) {
        (**(code **)(*local_a0 + 0x20))();
      }
      else if (local_a0 != (long *)0x0) {
        (**(code **)(*local_a0 + 0x28))();
      }
      goto LAB_00900d08;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_cocos2dx_network_manual.cpp, 126): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(puVar5[1] - (long)pVVar6) >> 4,1);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_network_Downloader_setOnFileTaskSuccess",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_cocos2dx_network_manual.cpp"
                      ,0x81);
LAB_00900d08:
  pVVar6 = (Value *)se::State::rval(aSStack_148);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_148);
  pVVar2 = local_178;
  pVVar6 = local_170;
  if (local_178 != (Value *)0x0) {
    while (pVVar6 != pVVar2) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_170 = pVVar2;
    operator_delete(local_178);
  }
  v8::HandleScope::~HandleScope(aHStack_160);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

