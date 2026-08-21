
/* js_universe_Device_showMessageBoxRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_universe_Device_showMessageBoxRegistry(FunctionCallbackInfo *param_1)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  Value *pVVar6;
  long *plVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  void *pvVar12;
  long *plVar13;
  Value *pVVar14;
  Object *pOVar15;
  ulong uVar16;
  ulong *puVar17;
  code *pcVar18;
  long lVar19;
  Isolate *pIVar20;
  Value *local_188;
  Value *local_180;
  undefined8 local_178;
  HandleScope aHStack_170 [24];
  State aSStack_158 [40];
  ulong local_130;
  undefined8 uStack_128;
  char *local_120 [2];
  Value aVStack_110 [16];
  int local_100 [4];
  ulong local_f0;
  undefined8 uStack_e8;
  char *local_e0 [2];
  long alStack_d0 [4];
  long *local_b0;
  ulong local_a0;
  undefined8 local_98;
  char *local_90;
  ulong *local_80;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar20 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_170,pIVar20);
  local_188 = (Value *)0x0;
  local_180 = (Value *)0x0;
  local_178 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_188,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_188);
  pvVar12 = (void *)se::internal::getPrivate(pIVar20,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_158,pvVar12,(vector *)&local_188);
  plVar13 = (long *)se::State::args(aSStack_158);
  pVVar14 = (Value *)*plVar13;
  lVar19 = plVar13[1] - (long)pVVar14 >> 4;
  if (lVar19 == 5) {
    local_b0 = (long *)0x0;
    if (pVVar14[8] == (Value)0x5) {
      pOVar15 = (Object *)se::Value::toObject(pVVar14);
      uVar16 = se::Object::isFunction(pOVar15);
      plVar7 = local_b0;
      if ((uVar16 & 1) == 0) {
        local_b0 = (long *)0x0;
        if (alStack_d0 == plVar7) {
          pcVar18 = *(code **)(*plVar7 + 0x20);
        }
        else {
          if (plVar7 == (long *)0x0) goto LAB_00970948;
          pcVar18 = *(code **)(*plVar7 + 0x28);
        }
        (*pcVar18)();
      }
      else {
        pOVar15 = (Object *)se::State::thisObject(aSStack_158);
        se::Value::Value((Value *)local_100,pOVar15,false);
        se::Value::Value(aVStack_110,(Value *)*plVar13);
        pOVar15 = (Object *)se::Value::toObject(aVStack_110);
        se::Object::root(pOVar15);
        se::Value::Value((Value *)&local_130,(Value *)local_100);
        se::Value::Value((Value *)local_120,aVStack_110);
        se::Value::Value((Value *)&local_f0,(Value *)&local_130);
        se::Value::Value((Value *)local_e0,(Value *)local_120);
        local_80 = (ulong *)0x0;
        puVar17 = operator_new(0x28);
        *puVar17 = (ulong)&PTR_FUN_01c69db8;
        se::Value::Value((Value *)(puVar17 + 1),(Value *)&local_f0);
        se::Value::Value((Value *)(puVar17 + 3),(Value *)local_e0);
        local_80 = puVar17;
        FUN_0097c754(&local_a0,alStack_d0);
        if (&local_a0 == local_80) {
          pcVar18 = *(code **)(*local_80 + 0x20);
LAB_00970914:
          (*pcVar18)();
        }
        else if (local_80 != (ulong *)0x0) {
          pcVar18 = *(code **)(*local_80 + 0x28);
          goto LAB_00970914;
        }
        se::Value::~Value((Value *)local_e0);
        se::Value::~Value((Value *)&local_f0);
        se::Value::~Value((Value *)local_120);
        se::Value::~Value((Value *)&local_130);
        se::Value::~Value(aVStack_110);
        se::Value::~Value((Value *)local_100);
      }
    }
    else {
      local_b0 = (long *)0x0;
    }
LAB_00970948:
    local_98 = 0;
    local_90 = (char *)0x0;
    local_a0 = 0;
    uVar10 = seval_to_std_string((Value *)(*plVar13 + 0x10),(basic_string *)&local_a0);
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0[0] = (char *)0x0;
    pcVar3 = (char *)((ulong)&local_a0 | 1);
    if ((local_a0 & 1) != 0) {
      pcVar3 = local_90;
    }
    uVar11 = seval_to_std_string((Value *)(*plVar13 + 0x20),(basic_string *)&local_f0);
    local_130 = 0;
    uStack_128 = 0;
    local_120[0] = (char *)0x0;
    pcVar4 = (char *)((ulong)&local_f0 | 1);
    if ((local_f0 & 1) != 0) {
      pcVar4 = local_e0[0];
    }
    uVar8 = seval_to_std_string((Value *)(*plVar13 + 0x30),(basic_string *)&local_130);
    local_100[0] = 0;
    pcVar2 = (char *)((ulong)&local_130 | 1);
    if ((local_130 & 1) != 0) {
      pcVar2 = local_120[0];
    }
    uVar9 = seval_to_int32((Value *)(*plVar13 + 0x40),local_100);
    bVar1 = (uVar10 & uVar11 & uVar8 & uVar9 & 1) == 0;
    if (bVar1) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                          ,0x5ec,"js_universe_Device_showMessageBox");
      __android_log_print(6,"jswrapper",
                          "js_universe_Device_showMessageBox : Error processing arguments");
    }
    else {
      universe::Device::showMessageBox((function *)alStack_d0,pcVar3,pcVar4,pcVar2,local_100[0]);
    }
    bVar1 = !bVar1;
    if ((local_130 & 1) != 0) {
      operator_delete(local_120[0]);
    }
    if ((local_f0 & 1) != 0) goto LAB_00970a3c;
joined_r0x00970a48:
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    if (alStack_d0 == local_b0) {
      pcVar18 = *(code **)(*local_b0 + 0x20);
LAB_00970bac:
      (*pcVar18)();
    }
    else if (local_b0 != (long *)0x0) {
      pcVar18 = *(code **)(*local_b0 + 0x28);
      goto LAB_00970bac;
    }
    if (bVar1) goto LAB_00970be0;
  }
  else {
    if (lVar19 == 4) {
      local_b0 = (long *)0x0;
      if (pVVar14[8] == (Value)0x5) {
        pOVar15 = (Object *)se::Value::toObject(pVVar14);
        uVar16 = se::Object::isFunction(pOVar15);
        plVar7 = local_b0;
        if ((uVar16 & 1) == 0) {
          local_b0 = (long *)0x0;
          if (alStack_d0 == plVar7) {
            pcVar18 = *(code **)(*plVar7 + 0x20);
          }
          else {
            if (plVar7 == (long *)0x0) goto LAB_009707e0;
            pcVar18 = *(code **)(*plVar7 + 0x28);
          }
          (*pcVar18)();
        }
        else {
          pOVar15 = (Object *)se::State::thisObject(aSStack_158);
          se::Value::Value((Value *)local_100,pOVar15,false);
          se::Value::Value(aVStack_110,(Value *)*plVar13);
          pOVar15 = (Object *)se::Value::toObject(aVStack_110);
          se::Object::root(pOVar15);
          se::Value::Value((Value *)&local_130,(Value *)local_100);
          se::Value::Value((Value *)local_120,aVStack_110);
          se::Value::Value((Value *)&local_f0,(Value *)&local_130);
          se::Value::Value((Value *)local_e0,(Value *)local_120);
          local_80 = (ulong *)0x0;
          puVar17 = operator_new(0x28);
          *puVar17 = (ulong)&PTR_FUN_01c69d38;
          se::Value::Value((Value *)(puVar17 + 1),(Value *)&local_f0);
          se::Value::Value((Value *)(puVar17 + 3),(Value *)local_e0);
          local_80 = puVar17;
          FUN_0097c754(&local_a0,alStack_d0);
          if (&local_a0 == local_80) {
            pcVar18 = *(code **)(*local_80 + 0x20);
LAB_009707ac:
            (*pcVar18)();
          }
          else if (local_80 != (ulong *)0x0) {
            pcVar18 = *(code **)(*local_80 + 0x28);
            goto LAB_009707ac;
          }
          se::Value::~Value((Value *)local_e0);
          se::Value::~Value((Value *)&local_f0);
          se::Value::~Value((Value *)local_120);
          se::Value::~Value((Value *)&local_130);
          se::Value::~Value(aVStack_110);
          se::Value::~Value((Value *)local_100);
        }
      }
      else {
        local_b0 = (long *)0x0;
      }
LAB_009707e0:
      local_98 = 0;
      local_90 = (char *)0x0;
      local_a0 = 0;
      uVar10 = seval_to_std_string((Value *)(*plVar13 + 0x10),(basic_string *)&local_a0);
      local_f0 = 0;
      uStack_e8 = 0;
      local_e0[0] = (char *)0x0;
      pcVar3 = (char *)((ulong)&local_a0 | 1);
      if ((local_a0 & 1) != 0) {
        pcVar3 = local_90;
      }
      uVar11 = seval_to_std_string((Value *)(*plVar13 + 0x20),(basic_string *)&local_f0);
      local_130 = 0;
      uStack_128 = 0;
      local_120[0] = (char *)0x0;
      pcVar4 = (char *)((ulong)&local_f0 | 1);
      if ((local_f0 & 1) != 0) {
        pcVar4 = local_e0[0];
      }
      uVar8 = seval_to_std_string((Value *)(*plVar13 + 0x30),(basic_string *)&local_130);
      if ((uVar10 & uVar11 & uVar8 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                            ,0x5bf,"js_universe_Device_showMessageBox");
        __android_log_print(6,"jswrapper",
                            "js_universe_Device_showMessageBox : Error processing arguments");
        bVar1 = false;
      }
      else {
        pcVar2 = (char *)((ulong)&local_130 | 1);
        if ((local_130 & 1) != 0) {
          pcVar2 = local_120[0];
        }
        universe::Device::showMessageBox((function *)alStack_d0,pcVar3,pcVar4,pcVar2,0);
        bVar1 = true;
      }
      if ((local_130 & 1) != 0) {
        operator_delete(local_120[0]);
      }
      if ((local_f0 & 1) == 0) goto joined_r0x00970a48;
LAB_00970a3c:
      operator_delete(local_e0[0]);
      goto joined_r0x00970a48;
    }
    if (lVar19 == 3) {
      local_b0 = (long *)0x0;
      if (pVVar14[8] == (Value)0x5) {
        pOVar15 = (Object *)se::Value::toObject(pVVar14);
        uVar16 = se::Object::isFunction(pOVar15);
        plVar7 = local_b0;
        if ((uVar16 & 1) == 0) {
          local_b0 = (long *)0x0;
          if (alStack_d0 == plVar7) {
            pcVar18 = *(code **)(*plVar7 + 0x20);
          }
          else {
            if (plVar7 == (long *)0x0) goto LAB_00970ae0;
            pcVar18 = *(code **)(*plVar7 + 0x28);
          }
          (*pcVar18)();
        }
        else {
          pOVar15 = (Object *)se::State::thisObject(aSStack_158);
          se::Value::Value((Value *)local_100,pOVar15,false);
          se::Value::Value(aVStack_110,(Value *)*plVar13);
          pOVar15 = (Object *)se::Value::toObject(aVStack_110);
          se::Object::root(pOVar15);
          se::Value::Value((Value *)&local_130,(Value *)local_100);
          se::Value::Value((Value *)local_120,aVStack_110);
          se::Value::Value((Value *)&local_f0,(Value *)&local_130);
          se::Value::Value((Value *)local_e0,(Value *)local_120);
          local_80 = (ulong *)0x0;
          puVar17 = operator_new(0x28);
          *puVar17 = (ulong)&PTR_FUN_01c69ca8;
          se::Value::Value((Value *)(puVar17 + 1),(Value *)&local_f0);
          se::Value::Value((Value *)(puVar17 + 3),(Value *)local_e0);
          local_80 = puVar17;
          FUN_0097c754(&local_a0,alStack_d0);
          if (&local_a0 == local_80) {
            pcVar18 = *(code **)(*local_80 + 0x20);
LAB_00970aac:
            (*pcVar18)();
          }
          else if (local_80 != (ulong *)0x0) {
            pcVar18 = *(code **)(*local_80 + 0x28);
            goto LAB_00970aac;
          }
          se::Value::~Value((Value *)local_e0);
          se::Value::~Value((Value *)&local_f0);
          se::Value::~Value((Value *)local_120);
          se::Value::~Value((Value *)&local_130);
          se::Value::~Value(aVStack_110);
          se::Value::~Value((Value *)local_100);
        }
      }
      else {
        local_b0 = (long *)0x0;
      }
LAB_00970ae0:
      local_98 = 0;
      local_90 = (char *)0x0;
      local_a0 = 0;
      uVar10 = seval_to_std_string((Value *)(*plVar13 + 0x10),(basic_string *)&local_a0);
      local_f0 = 0;
      uStack_e8 = 0;
      local_e0[0] = (char *)0x0;
      pcVar3 = (char *)((ulong)&local_a0 | 1);
      if ((local_a0 & 1) != 0) {
        pcVar3 = local_90;
      }
      uVar11 = seval_to_std_string((Value *)(*plVar13 + 0x20),(basic_string *)&local_f0);
      if ((uVar10 & uVar11 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                            ,0x594,"js_universe_Device_showMessageBox");
        __android_log_print(6,"jswrapper",
                            "js_universe_Device_showMessageBox : Error processing arguments");
        bVar1 = false;
      }
      else {
        pcVar4 = (char *)((ulong)&local_f0 | 1);
        if ((local_f0 & 1) != 0) {
          pcVar4 = local_e0[0];
        }
        universe::Device::showMessageBox((function *)alStack_d0,pcVar3,pcVar4,(char *)0x0,0);
        bVar1 = true;
      }
      if ((local_f0 & 1) != 0) {
        operator_delete(local_e0[0]);
      }
      goto joined_r0x00970a48;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 1520): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar13[1] - (long)pVVar14) >> 4,5);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_universe_Device_showMessageBox",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                      ,0x5f3);
LAB_00970be0:
  pVVar14 = (Value *)se::State::rval(aSStack_158);
  se::internal::setReturnValue(pVVar14,param_1);
  se::State::~State(aSStack_158);
  pVVar6 = local_188;
  pVVar14 = local_180;
  if (local_188 != (Value *)0x0) {
    while (pVVar14 != pVVar6) {
      se::Value::~Value(pVVar14 + -0x10);
      pVVar14 = pVVar14 + -0x10;
    }
    local_180 = pVVar6;
    operator_delete(local_188);
  }
  v8::HandleScope::~HandleScope(aHStack_170);
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

