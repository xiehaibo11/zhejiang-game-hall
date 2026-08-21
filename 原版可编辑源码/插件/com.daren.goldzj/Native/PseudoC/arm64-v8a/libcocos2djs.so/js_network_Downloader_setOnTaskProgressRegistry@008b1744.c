
/* js_network_Downloader_setOnTaskProgressRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_network_Downloader_setOnTaskProgressRegistry(FunctionCallbackInfo *param_1)

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
  undefined **ppuVar12;
  Isolate *pIVar13;
  Value *local_1b8;
  Value *local_1b0;
  undefined8 local_1a8;
  HandleScope aHStack_1a0 [24];
  State aSStack_188 [40];
  Value aVStack_160 [16];
  Value aVStack_150 [16];
  Value aVStack_140 [16];
  Value aVStack_130 [16];
  long alStack_120 [4];
  long *local_100;
  Value aVStack_f0 [16];
  Value aVStack_e0 [16];
  Value *local_d0;
  long alStack_c0 [4];
  long *local_a0;
  long alStack_90 [4];
  long *local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar13 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_1a0,pIVar13);
  local_1b8 = (Value *)0x0;
  local_1b0 = (Value *)0x0;
  local_1a8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_1b8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_1b8);
  pvVar3 = (void *)se::internal::getPrivate(pIVar13,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_188,pvVar3,(vector *)&local_1b8);
  lVar4 = se::State::nativeThisObject(aSStack_188);
  if (lVar4 == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_network_auto.cpp"
                        ,0xd,"js_network_Downloader_setOnTaskProgress");
    __android_log_print(6,"jswrapper",
                        "js_network_Downloader_setOnTaskProgress : Invalid Native Object");
  }
  else {
    puVar5 = (undefined8 *)se::State::args(aSStack_188);
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
            if (plVar10 == (long *)0x0) goto LAB_008b1a30;
            pcVar11 = *(code **)(*plVar10 + 0x28);
          }
          (*pcVar11)();
        }
        else {
          pOVar7 = (Object *)se::State::thisObject(aSStack_188);
          se::Value::Value(aVStack_130,pOVar7,false);
          se::Value::Value(aVStack_140,(Value *)*puVar5);
          pOVar7 = (Object *)se::Value::toObject(aVStack_130);
          pOVar9 = (Object *)se::Value::toObject(aVStack_140);
          se::Object::attachObject(pOVar7,pOVar9);
          se::Value::Value(aVStack_160,aVStack_130);
          se::Value::Value(aVStack_150,aVStack_140);
          se::Value::Value(aVStack_f0,aVStack_160);
          se::Value::Value(aVStack_e0,aVStack_150);
          local_70 = (long *)0x0;
          plVar10 = operator_new(0x28);
          *plVar10 = (long)&PTR_FUN_01c67518;
          se::Value::Value((Value *)(plVar10 + 1),aVStack_f0);
          se::Value::Value((Value *)(plVar10 + 3),aVStack_e0);
          local_70 = plVar10;
          FUN_008b27d4(alStack_90,alStack_c0);
          if (alStack_90 == local_70) {
            pcVar11 = *(code **)(*local_70 + 0x20);
LAB_008b1b44:
            (*pcVar11)();
          }
          else if (local_70 != (long *)0x0) {
            pcVar11 = *(code **)(*local_70 + 0x28);
            goto LAB_008b1b44;
          }
          se::Value::~Value(aVStack_e0);
          se::Value::~Value(aVStack_f0);
          se::Value::~Value(aVStack_150);
          se::Value::~Value(aVStack_160);
          se::Value::~Value(aVStack_140);
          se::Value::~Value(aVStack_130);
        }
        if (local_a0 == (long *)0x0) goto LAB_008b1a30;
        if (alStack_c0 == local_a0) {
          local_100 = alStack_120;
          (**(code **)(*local_a0 + 0x18))(local_a0,alStack_120);
          plVar10 = local_100;
        }
        else {
          plVar10 = (long *)(**(code **)(*local_a0 + 0x10))();
        }
        local_100 = plVar10;
        if (plVar10 == (long *)0x0) goto LAB_008b1a3c;
        local_d0 = (Value *)0x0;
        pVVar6 = operator_new(0x40);
        ppuVar12 = &PTR____func_01c675a8;
        *(undefined ***)pVVar6 = &PTR____func_01c675a8;
        if (alStack_120 == plVar10) {
          *(Value **)(pVVar6 + 0x30) = pVVar6 + 0x10;
          (**(code **)(*plVar10 + 0x18))(plVar10);
          ppuVar12 = *(undefined ***)pVVar6;
        }
        else {
          *(long **)(pVVar6 + 0x30) = plVar10;
          local_100 = (long *)0x0;
        }
        local_d0 = pVVar6;
        local_70 = (long *)(*(code *)ppuVar12[2])(pVVar6);
      }
      else {
        local_a0 = (long *)0x0;
LAB_008b1a30:
        local_100 = (long *)0x0;
LAB_008b1a3c:
        local_d0 = (Value *)0x0;
        local_70 = (long *)0x0;
      }
      FUN_008b293c(alStack_90,lVar4 + 0x60);
      if (alStack_90 == local_70) {
        pcVar11 = *(code **)(*local_70 + 0x20);
LAB_008b1a74:
        (*pcVar11)();
      }
      else if (local_70 != (long *)0x0) {
        pcVar11 = *(code **)(*local_70 + 0x28);
        goto LAB_008b1a74;
      }
      if (aVStack_f0 == local_d0) {
        pcVar11 = *(code **)(*(long *)local_d0 + 0x20);
LAB_008b1a9c:
        (*pcVar11)();
      }
      else if (local_d0 != (Value *)0x0) {
        pcVar11 = *(code **)(*(long *)local_d0 + 0x28);
        goto LAB_008b1a9c;
      }
      if (alStack_120 == local_100) {
        pcVar11 = *(code **)(*local_100 + 0x20);
LAB_008b1ac8:
        (*pcVar11)();
      }
      else if (local_100 != (long *)0x0) {
        pcVar11 = *(code **)(*local_100 + 0x28);
        goto LAB_008b1ac8;
      }
      if (alStack_c0 == local_a0) {
        (**(code **)(*local_a0 + 0x20))();
      }
      else if (local_a0 != (long *)0x0) {
        (**(code **)(*local_a0 + 0x28))();
      }
      goto LAB_008b19a4;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_network_auto.cpp, 56): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(puVar5[1] - (long)pVVar6) >> 4,1);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_network_Downloader_setOnTaskProgress",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_network_auto.cpp"
                      ,0x3b);
LAB_008b19a4:
  pVVar6 = (Value *)se::State::rval(aSStack_188);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_188);
  pVVar2 = local_1b8;
  pVVar6 = local_1b0;
  if (local_1b8 != (Value *)0x0) {
    while (pVVar6 != pVVar2) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_1b0 = pVVar2;
    operator_delete(local_1b8);
  }
  v8::HandleScope::~HandleScope(aHStack_1a0);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

