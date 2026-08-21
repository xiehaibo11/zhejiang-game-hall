
/* js_cocos2dx_network_Downloader_createDownloadFileTaskRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_network_Downloader_createDownloadFileTaskRegistry(FunctionCallbackInfo *param_1)

{
  __shared_weak_count *p_Var1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  __shared_weak_count *p_Var6;
  Value *pVVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  void *pvVar11;
  basic_string *pbVar12;
  long *plVar13;
  Value *pVVar14;
  ulong uVar15;
  Object *pOVar16;
  long lVar17;
  Isolate *pIVar18;
  Value *local_f8;
  Value *local_f0;
  undefined8 local_e8;
  HandleScope aHStack_e0 [24];
  ulong local_c8;
  undefined8 local_c0;
  void *local_b8;
  DownloadTask *local_b0;
  __shared_weak_count *local_a8;
  ulong local_a0;
  undefined8 local_98;
  void *local_90;
  ulong local_88;
  undefined8 uStack_80;
  void *local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar18 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_e0,pIVar18);
  local_f8 = (Value *)0x0;
  local_f0 = (Value *)0x0;
  local_e8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_f8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_f8);
  pvVar11 = (void *)se::internal::getPrivate(pIVar18,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar11,(vector *)&local_f8);
  pbVar12 = (basic_string *)se::State::nativeThisObject(aSStack_70);
  if (pbVar12 == (basic_string *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_cocos2dx_network_manual.cpp"
                        ,0x24,"js_cocos2dx_network_Downloader_createDownloadFileTask");
    __android_log_print(6,"jswrapper",
                        "js_network_Downloader_createDownloadFileTask : Invalid Native Object");
  }
  else {
    plVar13 = (long *)se::State::args(aSStack_70);
    lVar17 = plVar13[1] - *plVar13 >> 4;
    if (lVar17 == 3) {
      local_88 = 0;
      uStack_80 = 0;
      local_78 = (void *)0x0;
      local_a0 = 0;
      local_98 = 0;
      local_90 = (void *)0x0;
      local_c0 = 0;
      local_b8 = (void *)0x0;
      local_c8 = 0;
      uVar8 = seval_to_std_string((Value *)*plVar13,(basic_string *)&local_88);
      uVar9 = seval_to_std_string((Value *)(*plVar13 + 0x10),(basic_string *)&local_a0);
      uVar10 = seval_to_std_string((Value *)(*plVar13 + 0x20),(basic_string *)&local_c8);
      if ((uVar8 & uVar9 & uVar10 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_cocos2dx_network_manual.cpp"
                            ,0x41,"js_cocos2dx_network_Downloader_createDownloadFileTask");
        __android_log_print(6,"jswrapper",
                            "js_network_Downloader_createDownloadFileTask : Error processing arguments"
                           );
        bVar2 = false;
      }
      else {
        cocos2d::network::Downloader::createDownloadFileTask
                  (pbVar12,(basic_string *)&local_88,(basic_string *)&local_a0);
        pVVar14 = (Value *)se::State::rval(aSStack_70);
        uVar15 = DownloadTask_to_seval(local_b0,pVVar14);
        pOVar16 = (Object *)se::State::thisObject(aSStack_70);
        se::Object::root(pOVar16);
        bVar2 = (uVar15 & 1) == 0;
        p_Var6 = local_a8;
        if (bVar2) {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_cocos2dx_network_manual.cpp"
                              ,0x49,"js_cocos2dx_network_Downloader_createDownloadFileTask");
          __android_log_print(6,"jswrapper",
                              "js_network_Downloader_createDownloadFileTask : Error processing arguments"
                             );
          p_Var6 = local_a8;
        }
        bVar2 = !bVar2;
        if (p_Var6 != (__shared_weak_count *)0x0) {
          p_Var1 = p_Var6 + 8;
          do {
            lVar17 = *(long *)p_Var1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
            if (bVar4) {
              *(long *)p_Var1 = lVar17 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar17 == 0) {
            (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
            std::__ndk1::__shared_weak_count::__release_weak(p_Var6);
          }
        }
      }
      if ((local_c8 & 1) != 0) {
        operator_delete(local_b8);
      }
    }
    else {
      if (lVar17 != 2) {
        __android_log_print(6,"jswrapper",
                            "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_cocos2dx_network_manual.cpp, 76): wrong number of arguments: %d, was expecting %d\n"
                            ,(ulong)(plVar13[1] - *plVar13) >> 4,3);
        goto LAB_00900898;
      }
      local_88 = 0;
      uStack_80 = 0;
      local_78 = (void *)0x0;
      local_98 = 0;
      local_90 = (void *)0x0;
      local_a0 = 0;
      uVar8 = seval_to_std_string((Value *)*plVar13,(basic_string *)&local_88);
      uVar9 = seval_to_std_string((Value *)(*plVar13 + 0x10),(basic_string *)&local_a0);
      if ((uVar8 & uVar9 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_cocos2dx_network_manual.cpp"
                            ,0x2e,"js_cocos2dx_network_Downloader_createDownloadFileTask");
        __android_log_print(6,"jswrapper",
                            "js_network_Downloader_createDownloadFileTask : Error processing arguments"
                           );
        bVar2 = false;
      }
      else {
        local_c8 = 0;
        local_c0 = 0;
        local_b8 = (void *)0x0;
        cocos2d::network::Downloader::createDownloadFileTask
                  (pbVar12,(basic_string *)&local_88,(basic_string *)&local_a0);
        if ((local_c8 & 1) != 0) {
          operator_delete(local_b8);
        }
        pVVar14 = (Value *)se::State::rval(aSStack_70);
        uVar15 = DownloadTask_to_seval(local_b0,pVVar14);
        pOVar16 = (Object *)se::State::thisObject(aSStack_70);
        se::Object::root(pOVar16);
        bVar2 = (uVar15 & 1) == 0;
        p_Var6 = local_a8;
        if (bVar2) {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_cocos2dx_network_manual.cpp"
                              ,0x36,"js_cocos2dx_network_Downloader_createDownloadFileTask");
          __android_log_print(6,"jswrapper",
                              "js_network_Downloader_createDownloadFileTask : Error processing arguments"
                             );
          p_Var6 = local_a8;
        }
        bVar2 = !bVar2;
        if (p_Var6 != (__shared_weak_count *)0x0) {
          p_Var1 = p_Var6 + 8;
          do {
            lVar17 = *(long *)p_Var1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
            if (bVar4) {
              *(long *)p_Var1 = lVar17 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar17 == 0) {
            (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
            std::__ndk1::__shared_weak_count::__release_weak(p_Var6);
          }
        }
      }
    }
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
    if (bVar2) goto LAB_009008c4;
  }
LAB_00900898:
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_network_Downloader_createDownloadFileTask",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_cocos2dx_network_manual.cpp"
                      ,0x50);
LAB_009008c4:
  pVVar14 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar14,param_1);
  se::State::~State(aSStack_70);
  pVVar7 = local_f8;
  pVVar14 = local_f0;
  if (local_f8 != (Value *)0x0) {
    while (pVVar14 != pVVar7) {
      se::Value::~Value(pVVar14 + -0x10);
      pVVar14 = pVVar14 + -0x10;
    }
    local_f0 = pVVar7;
    operator_delete(local_f8);
  }
  v8::HandleScope::~HandleScope(aHStack_e0);
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

