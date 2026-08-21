
/* JavaScriptJavaBridge_callStaticMethodRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JavaScriptJavaBridge_callStaticMethodRegistry(FunctionCallbackInfo *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  bool bVar5;
  undefined8 *puVar6;
  Value *pVVar7;
  undefined8 *puVar8;
  byte bVar9;
  uint uVar10;
  void *pvVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  jvalue *pjVar15;
  Value *pVVar16;
  int iVar17;
  ulong uVar18;
  Isolate *pIVar19;
  long lVar20;
  jvalue *pjVar21;
  Value *local_1e0;
  Value *local_1d8;
  undefined8 local_1d0;
  HandleScope aHStack_1c8 [24];
  undefined8 local_1b0;
  undefined8 local_1a8;
  void *local_1a0;
  undefined8 *local_198;
  undefined8 *local_190;
  undefined8 *local_188;
  CallInfo local_180 [4];
  int local_17c;
  int local_130;
  long local_128;
  long lStack_120;
  undefined1 local_110;
  undefined8 local_108;
  long *local_f8;
  ulong local_e0;
  undefined8 local_d8;
  char *local_d0;
  ulong local_c8;
  undefined8 uStack_c0;
  char *local_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  char *local_a0;
  State aSStack_98 [40];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar19 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_1c8,pIVar19);
  local_1e0 = (Value *)0x0;
  local_1d8 = (Value *)0x0;
  local_1d0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_1e0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_1e0);
  pvVar11 = (void *)se::internal::getPrivate(pIVar19,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_98,pvVar11,(vector *)&local_1e0);
  plVar12 = (long *)se::State::args(aSStack_98);
  iVar17 = (int)((ulong)(plVar12[1] - *plVar12) >> 4);
  if (iVar17 == 3) {
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = (char *)0x0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = (char *)0x0;
    local_d8 = 0;
    local_d0 = (char *)0x0;
    local_e0 = 0;
    uVar13 = seval_to_std_string((Value *)*plVar12,(basic_string *)&local_b0);
    if ((uVar13 & 1) == 0) {
      __android_log_print(6,"JavaScriptJavaBridge","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/JavaScriptJavaBridge.cpp"
                          ,0x1ee,"JavaScriptJavaBridge_callStaticMethod");
      __android_log_print(6,"JavaScriptJavaBridge","Converting class name failed!");
LAB_008b4414:
      bVar5 = false;
    }
    else {
      uVar13 = seval_to_std_string((Value *)(*plVar12 + 0x10),(basic_string *)&local_c8);
      if ((uVar13 & 1) == 0) {
        __android_log_print(6,"JavaScriptJavaBridge","jsb: ERROR: File %s: Line: %d, Function: %s\n"
                            ,
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/JavaScriptJavaBridge.cpp"
                            ,0x1f1,"JavaScriptJavaBridge_callStaticMethod");
        __android_log_print(6,"JavaScriptJavaBridge","Converting method name failed!");
        goto LAB_008b4414;
      }
      uVar13 = seval_to_std_string((Value *)(*plVar12 + 0x20),(basic_string *)&local_e0);
      if ((uVar13 & 1) == 0) {
        __android_log_print(6,"JavaScriptJavaBridge","jsb: ERROR: File %s: Line: %d, Function: %s\n"
                            ,
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/JavaScriptJavaBridge.cpp"
                            ,500,"JavaScriptJavaBridge_callStaticMethod");
        __android_log_print(6,"JavaScriptJavaBridge","Converting method signature failed!");
        goto LAB_008b4414;
      }
      pcVar1 = (char *)((ulong)&local_b0 | 1);
      if ((local_b0 & 1) != 0) {
        pcVar1 = local_a0;
      }
      pcVar2 = (char *)((ulong)&local_c8 | 1);
      if ((local_c8 & 1) != 0) {
        pcVar2 = local_b8;
      }
      pcVar3 = (char *)((ulong)&local_e0 | 1);
      if ((local_e0 & 1) != 0) {
        pcVar3 = local_d0;
      }
      JavaScriptJavaBridge::CallInfo::CallInfo(local_180,pcVar1,pcVar2,pcVar3);
      if (local_180[0] == (CallInfo)0x0) {
        __android_log_print(6,"JavaScriptJavaBridge",
                            "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/JavaScriptJavaBridge.cpp, 515): JavaScriptJavaBridge::CallInfo isn\'t valid!\n"
                           );
      }
      else {
        uVar10 = JavaScriptJavaBridge::CallInfo::execute();
        if ((-1 < local_17c) && (((uVar10 ^ 1) & 1) == 0)) {
          uVar14 = se::State::rval(aSStack_98);
          JavaScriptJavaBridge::convertReturnValue(local_108,local_110,uVar14);
          bVar5 = true;
          goto LAB_008b456c;
        }
        __android_log_print(6,"JavaScriptJavaBridge",
                            "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/JavaScriptJavaBridge.cpp, 509): call result code: %d\n"
                           );
      }
LAB_008b4568:
      bVar5 = false;
LAB_008b456c:
      JavaScriptJavaBridge::CallInfo::~CallInfo(local_180);
    }
    if ((local_e0 & 1) != 0) {
      operator_delete(local_d0);
    }
    if ((local_c8 & 1) != 0) {
      operator_delete(local_b8);
    }
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    if (bVar5) goto LAB_008b4488;
  }
  else {
    if (3 < iVar17) {
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = (char *)0x0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = (char *)0x0;
      local_d8 = 0;
      local_d0 = (char *)0x0;
      local_e0 = 0;
      uVar13 = seval_to_std_string((Value *)*plVar12,(basic_string *)&local_b0);
      if ((uVar13 & 1) == 0) {
        __android_log_print(6,"JavaScriptJavaBridge","jsb: ERROR: File %s: Line: %d, Function: %s\n"
                            ,
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/JavaScriptJavaBridge.cpp"
                            ,0x20b,"JavaScriptJavaBridge_callStaticMethod");
        __android_log_print(6,"JavaScriptJavaBridge","Converting class name failed!");
      }
      else {
        uVar13 = seval_to_std_string((Value *)(*plVar12 + 0x10),(basic_string *)&local_c8);
        if ((uVar13 & 1) == 0) {
          __android_log_print(6,"JavaScriptJavaBridge",
                              "jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/JavaScriptJavaBridge.cpp"
                              ,0x20e,"JavaScriptJavaBridge_callStaticMethod");
          __android_log_print(6,"JavaScriptJavaBridge","Converting method name failed!");
        }
        else {
          uVar13 = seval_to_std_string((Value *)(*plVar12 + 0x20),(basic_string *)&local_e0);
          if ((uVar13 & 1) != 0) {
            pcVar1 = (char *)((ulong)&local_b0 | 1);
            if ((local_b0 & 1) != 0) {
              pcVar1 = local_a0;
            }
            pcVar2 = (char *)((ulong)&local_c8 | 1);
            if ((local_c8 & 1) != 0) {
              pcVar2 = local_b8;
            }
            pcVar3 = (char *)((ulong)&local_e0 | 1);
            if ((local_e0 & 1) != 0) {
              pcVar3 = local_d0;
            }
            JavaScriptJavaBridge::CallInfo::CallInfo(local_180,pcVar1,pcVar2,pcVar3);
            uVar13 = (ulong)local_130;
            if ((local_180[0] == (CallInfo)0x0) || (local_130 != iVar17 + -3)) {
              __android_log_print(6,"JavaScriptJavaBridge",
                                  "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/JavaScriptJavaBridge.cpp, 605): call valid: %d, call.getArgumentsCount()= %d\n"
                                  ,local_180[0],local_130);
              goto LAB_008b4568;
            }
            uVar18 = uVar13 << 3;
            if (uVar13 >> 0x3d != 0) {
              uVar18 = 0xffffffffffffffff;
            }
            pjVar15 = operator_new__(uVar18);
            local_198 = (undefined8 *)0x0;
            local_190 = (undefined8 *)0x0;
            local_188 = (undefined8 *)0x0;
            if (0 < local_130) {
              uVar18 = 0;
              lVar20 = 0x38;
              pjVar21 = pjVar15;
              do {
                if ((ulong)(lStack_120 - local_128) <= uVar18) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
                }
                switch(*(undefined1 *)(local_128 + uVar18)) {
                case 2:
                  local_1b0 = (ulong)local_1b0._4_4_ << 0x20;
                  seval_to_int32((Value *)(*plVar12 + lVar20 + -8),(int *)&local_1b0);
                  goto LAB_008b461c;
                case 3:
                  local_1b0 = 0;
                  seval_to_long((Value *)(*plVar12 + lVar20 + -8),&local_1b0);
                  *(ulong *)pjVar21 = local_1b0;
                  break;
                case 4:
                  local_1b0 = (ulong)local_1b0._4_4_ << 0x20;
                  seval_to_float((Value *)(*plVar12 + lVar20 + -8),(float *)&local_1b0);
LAB_008b461c:
                  *(float *)pjVar21 = (float)local_1b0;
                  break;
                case 5:
                  if (*(char *)(*plVar12 + lVar20) == '\x03') {
                    bVar9 = se::Value::toBoolean((Value *)(*plVar12 + lVar20 + -8));
                  }
                  else {
                    bVar9 = 0;
                  }
                  *pjVar21 = (jvalue)(bVar9 & 1);
                  break;
                case 6:
                  if (*(byte *)(*plVar12 + lVar20) < 2) {
                    *(undefined8 *)pjVar21 = 0;
                  }
                  else {
                    local_1a8 = 0;
                    local_1a0 = (void *)0x0;
                    local_1b0 = 0;
                    seval_to_std_string((Value *)(*plVar12 + lVar20 + -8),(basic_string *)&local_1b0
                                       );
                    pvVar11 = (void *)((ulong)&local_1b0 | 1);
                    if ((local_1b0 & 1) != 0) {
                      pvVar11 = local_1a0;
                    }
                    uVar14 = (**(code **)(*local_f8 + 0x538))(local_f8,pvVar11);
                    *(undefined8 *)pjVar21 = uVar14;
                    if (local_190 == local_188) {
                      std::__ndk1::vector<_jobject*,std::__ndk1::allocator<_jobject*>>::
                      __push_back_slow_path<_jobject*const&>
                                ((vector<_jobject*,std::__ndk1::allocator<_jobject*>> *)&local_198,
                                 (_jobject **)pjVar21);
                    }
                    else {
                      *local_190 = uVar14;
                      local_190 = local_190 + 1;
                    }
                    if ((local_1b0 & 1) != 0) {
                      operator_delete(local_1a0);
                    }
                  }
                  break;
                default:
                  __android_log_print(6,"JavaScriptJavaBridge",
                                      "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/JavaScriptJavaBridge.cpp, 584): Unsupport type of parameter %d\n"
                                      ,uVar18 & 0xffffffff);
                }
                uVar18 = uVar18 + 1;
                pjVar21 = pjVar21 + 8;
                lVar20 = lVar20 + 0x10;
              } while ((long)uVar18 < (long)uVar13);
            }
            uVar10 = JavaScriptJavaBridge::CallInfo::executeWithArgs(local_180,pjVar15);
            puVar8 = local_190;
            for (puVar6 = local_198; puVar6 != puVar8; puVar6 = puVar6 + 1) {
              (**(code **)(*local_f8 + 0xb8))(local_f8,*puVar6);
            }
            operator_delete__(pjVar15);
            if ((local_17c < 0) || (((uVar10 ^ 1) & 1) != 0)) {
              __android_log_print(6,"JavaScriptJavaBridge",
                                  "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/JavaScriptJavaBridge.cpp, 598): js_JSJavaBridge : call result code: %d\n"
                                 );
              bVar5 = false;
            }
            else {
              uVar14 = se::State::rval(aSStack_98);
              JavaScriptJavaBridge::convertReturnValue(local_108,local_110,uVar14);
              bVar5 = true;
            }
            if (local_198 != (undefined8 *)0x0) {
              local_190 = local_198;
              operator_delete(local_198);
            }
            goto LAB_008b456c;
          }
          __android_log_print(6,"JavaScriptJavaBridge",
                              "jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/JavaScriptJavaBridge.cpp"
                              ,0x211,"JavaScriptJavaBridge_callStaticMethod");
          __android_log_print(6,"JavaScriptJavaBridge","Converting method signature failed!");
        }
      }
      goto LAB_008b4414;
    }
    __android_log_print(6,"JavaScriptJavaBridge",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/JavaScriptJavaBridge.cpp, 608): wrong number of arguments: %d, was expecting >=3\n"
                       );
  }
  __android_log_print(6,"JavaScriptJavaBridge","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "JavaScriptJavaBridge_callStaticMethod",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/JavaScriptJavaBridge.cpp"
                      ,0x263);
LAB_008b4488:
  pVVar16 = (Value *)se::State::rval(aSStack_98);
  se::internal::setReturnValue(pVVar16,param_1);
  se::State::~State(aSStack_98);
  pVVar7 = local_1e0;
  pVVar16 = local_1d8;
  if (local_1e0 != (Value *)0x0) {
    while (pVVar16 != pVVar7) {
      se::Value::~Value(pVVar16 + -0x10);
      pVVar16 = pVVar16 + -0x10;
    }
    local_1d8 = pVVar7;
    operator_delete(local_1e0);
  }
  v8::HandleScope::~HandleScope(aHStack_1c8);
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

