
/* JSB_updateInputBoxRectRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_updateInputBoxRectRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  long *plVar8;
  Value *pVVar9;
  Isolate *pIVar10;
  Value *local_a0;
  Value *local_98;
  undefined8 local_90;
  HandleScope aHStack_88 [24];
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_88,pIVar10);
  local_a0 = (Value *)0x0;
  local_98 = (Value *)0x0;
  local_90 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a0);
  pvVar7 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar7,(vector *)&local_a0);
  plVar8 = (long *)se::State::args(aSStack_70);
  pVVar9 = (Value *)*plVar8;
  if (plVar8[1] - (long)pVVar9 == 0x40) {
    if (pVVar9[8] == (Value)0x2) {
      iVar3 = se::Value::toInt32(pVVar9);
      if (*(char *)(*plVar8 + 0x18) == '\x02') {
        iVar4 = se::Value::toInt32((Value *)(*plVar8 + 0x10));
        if (*(char *)(*plVar8 + 0x28) == '\x02') {
          iVar5 = se::Value::toInt32((Value *)(*plVar8 + 0x20));
          if (*(char *)(*plVar8 + 0x38) == '\x02') {
            iVar6 = se::Value::toInt32((Value *)(*plVar8 + 0x30));
            cocos2d::EditBox::updateRect(iVar3,iVar4,iVar5,iVar6);
            goto LAB_008f188c;
          }
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_global.cpp"
                              ,0x4c4,"JSB_updateInputBoxRect");
          __android_log_print(6,"jswrapper","height is invalid!");
        }
        else {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_global.cpp"
                              ,0x4c0,"JSB_updateInputBoxRect");
          __android_log_print(6,"jswrapper","width is invalid!");
        }
      }
      else {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_global.cpp"
                            ,0x4bd,"JSB_updateInputBoxRect");
        __android_log_print(6,"jswrapper","y is invalid!");
      }
    }
    else {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_global.cpp"
                          ,0x4ba,"JSB_updateInputBoxRect");
      __android_log_print(6,"jswrapper","x is invalid!");
    }
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_global.cpp, 1227): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar8[1] - (long)pVVar9) >> 4,4);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "JSB_updateInputBoxRect",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_global.cpp"
                      ,0x4ce);
LAB_008f188c:
  pVVar9 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_a0;
  pVVar9 = local_98;
  if (local_a0 != (Value *)0x0) {
    while (pVVar9 != pVVar2) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_98 = pVVar2;
    operator_delete(local_a0);
  }
  v8::HandleScope::~HandleScope(aHStack_88);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

