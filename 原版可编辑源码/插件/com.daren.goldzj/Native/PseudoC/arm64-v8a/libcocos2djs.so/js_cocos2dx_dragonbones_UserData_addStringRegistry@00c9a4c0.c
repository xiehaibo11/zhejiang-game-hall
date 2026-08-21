
/* js_cocos2dx_dragonbones_UserData_addStringRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_cocos2dx_dragonbones_UserData_addStringRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  bool bVar2;
  Value *pVVar3;
  ulong __n;
  void *pvVar4;
  UserData *pUVar5;
  long *plVar6;
  ulong uVar7;
  Value *pVVar8;
  Isolate *pIVar9;
  void *__dest;
  Value *local_e0;
  Value *local_d8;
  Value *local_d0;
  HandleScope aHStack_c8 [24];
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  ulong local_98;
  ulong uStack_90;
  void *local_88;
  State aSStack_80 [40];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar9 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_c8,pIVar9);
  local_e0 = operator_new(0xa0);
  local_d0 = local_e0 + 0xa0;
  local_d8 = local_e0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_e0);
  pvVar4 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar4,(vector *)&local_e0);
  pUVar5 = (UserData *)se::State::nativeThisObject(aSStack_80);
  if (pUVar5 == (UserData *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,900,"js_cocos2dx_dragonbones_UserData_addString");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_dragonbones_UserData_addString : Invalid Native Object");
  }
  else {
    plVar6 = (long *)se::State::args(aSStack_80);
    if (plVar6[1] - *plVar6 == 0x10) {
      local_98 = 0;
      uStack_90 = 0;
      local_88 = (void *)0x0;
      uVar7 = seval_to_std_string((Value *)*plVar6,(basic_string *)&local_98);
      pvVar4 = local_88;
      __n = uStack_90;
      if ((uVar7 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                            ,0x38b,"js_cocos2dx_dragonbones_UserData_addString");
        __android_log_print(6,"jswrapper",
                            "js_cocos2dx_dragonbones_UserData_addString : Error processing arguments"
                           );
        bVar2 = false;
      }
      else {
        local_b0 = 0;
        uStack_a8 = 0;
        local_a0 = (void *)0x0;
        if ((local_98 & 1) == 0) {
          local_a0 = local_88;
          uStack_a8 = uStack_90;
          local_b0 = local_98;
        }
        else {
          if (0xffffffffffffffef < uStack_90) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (uStack_90 < 0x17) {
            __dest = (void *)((ulong)&local_b0 | 1);
            local_b0 = (ulong)(byte)((int)uStack_90 << 1);
            if (uStack_90 != 0) goto LAB_00c9a784;
          }
          else {
            uVar7 = uStack_90 + 0x10 & 0xfffffffffffffff0;
            __dest = operator_new(uVar7);
            local_b0 = uVar7 | 1;
            uStack_a8 = __n;
            local_a0 = __dest;
LAB_00c9a784:
            memcpy(__dest,pvVar4,__n);
          }
          *(undefined1 *)((long)__dest + __n) = 0;
        }
        dragonBones::UserData::addString(pUVar5,&local_b0);
        if ((local_b0 & 1) != 0) {
          operator_delete(local_a0);
        }
        bVar2 = true;
      }
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
      }
      if (bVar2) goto LAB_00c9a6ac;
    }
    else {
      __android_log_print(6,"jswrapper",&DAT_0192ecd0,(ulong)(plVar6[1] - *plVar6) >> 4,1);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_UserData_addString",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0x392);
LAB_00c9a6ac:
  pVVar8 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_80);
  pVVar3 = local_e0;
  pVVar8 = local_d8;
  if (local_e0 != (Value *)0x0) {
    while (pVVar8 != pVVar3) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_d8 = pVVar3;
    operator_delete(local_e0);
  }
  v8::HandleScope::~HandleScope(aHStack_c8);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

