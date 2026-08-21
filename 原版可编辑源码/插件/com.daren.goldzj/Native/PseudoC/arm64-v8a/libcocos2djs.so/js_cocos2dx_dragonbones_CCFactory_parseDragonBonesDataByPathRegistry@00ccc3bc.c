
/* js_cocos2dx_dragonbones_CCFactory_parseDragonBonesDataByPathRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_CCFactory_parseDragonBonesDataByPathRegistry
               (FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  void *pvVar4;
  CCFactory *this;
  long *plVar5;
  ulong uVar6;
  type *ptVar7;
  Value *pVVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  Isolate *pIVar13;
  Value *local_d8;
  Value *local_d0;
  Value *local_c8;
  HandleScope aHStack_c0 [28];
  float local_a4;
  ulong local_a0;
  undefined8 uStack_98;
  void *local_90;
  ulong local_88;
  undefined8 uStack_80;
  void *local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar13 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_c0,pIVar13);
  local_d8 = operator_new(0xa0);
  local_c8 = local_d8 + 0xa0;
  local_d0 = local_d8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_d8);
  pvVar4 = (void *)se::internal::getPrivate(pIVar13,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar4,(vector *)&local_d8);
  this = (CCFactory *)se::State::nativeThisObject(aSStack_70);
  if (this == (CCFactory *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x1f56,"js_cocos2dx_dragonbones_CCFactory_parseDragonBonesDataByPath");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_dragonbones_CCFactory_parseDragonBonesDataByPath : Invalid Native Object"
                       );
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_70);
    lVar12 = plVar5[1] - *plVar5 >> 4;
    if (lVar12 == 3) {
      local_88 = 0;
      uStack_80 = 0;
      local_78 = (void *)0x0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = (void *)0x0;
      local_a4 = 0.0;
      uVar6 = seval_to_std_string((Value *)*plVar5,(basic_string *)&local_88);
      uVar9 = seval_to_std_string((Value *)(*plVar5 + 0x10),(basic_string *)&local_a0);
      uVar10 = seval_to_float((Value *)(*plVar5 + 0x20),&local_a4);
      if ((((uVar6 & 1) == 0) || ((uVar9 & 1) == 0)) || ((uVar10 & 1) == 0)) {
        uVar11 = 0x1f75;
LAB_00ccc7f0:
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                            ,uVar11,"js_cocos2dx_dragonbones_CCFactory_parseDragonBonesDataByPath");
        __android_log_print(6,"jswrapper",
                            "js_cocos2dx_dragonbones_CCFactory_parseDragonBonesDataByPath : Error processing arguments"
                           );
        bVar3 = false;
      }
      else {
        ptVar7 = (type *)dragonBones::CCFactory::parseDragonBonesDataByPath
                                   (this,(basic_string *)&local_88,(basic_string *)&local_a0,
                                    local_a4);
        pVVar8 = (Value *)se::State::rval(aSStack_70);
        bVar3 = native_ptr_to_rooted_seval<dragonBones::DragonBonesData>(ptVar7,pVVar8,(bool *)0x0);
        if (!bVar3) {
          uVar11 = 0x1f78;
          goto LAB_00ccc7f0;
        }
        bVar3 = true;
      }
      if ((local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
joined_r0x00ccc824:
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
        if (bVar3) goto LAB_00ccc858;
        goto LAB_00ccc82c;
      }
    }
    else {
      if (lVar12 == 2) {
        local_88 = 0;
        uStack_80 = 0;
        local_78 = (void *)0x0;
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = (void *)0x0;
        uVar6 = seval_to_std_string((Value *)*plVar5,(basic_string *)&local_88);
        uVar9 = seval_to_std_string((Value *)(*plVar5 + 0x10),(basic_string *)&local_a0);
        if (((uVar6 & 1) == 0) || ((uVar9 & 1) == 0)) {
          uVar11 = 0x1f68;
LAB_00ccc72c:
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                              ,uVar11,"js_cocos2dx_dragonbones_CCFactory_parseDragonBonesDataByPath"
                             );
          __android_log_print(6,"jswrapper",
                              "js_cocos2dx_dragonbones_CCFactory_parseDragonBonesDataByPath : Error processing arguments"
                             );
          bVar3 = false;
        }
        else {
          ptVar7 = (type *)dragonBones::CCFactory::parseDragonBonesDataByPath
                                     (this,(basic_string *)&local_88,(basic_string *)&local_a0,1.0);
          pVVar8 = (Value *)se::State::rval(aSStack_70);
          bVar3 = native_ptr_to_rooted_seval<dragonBones::DragonBonesData>
                            (ptVar7,pVVar8,(bool *)0x0);
          if (!bVar3) {
            uVar11 = 0x1f6b;
            goto LAB_00ccc72c;
          }
          bVar3 = true;
        }
        if ((local_a0 & 1) != 0) {
          operator_delete(local_90);
        }
        goto joined_r0x00ccc824;
      }
      if (lVar12 != 1) {
        __android_log_print(6,"jswrapper",
                            "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp, 8059): wrong number of arguments: %d, was expecting %d\n"
                            ,(ulong)(plVar5[1] - *plVar5) >> 4,3);
        goto LAB_00ccc82c;
      }
      local_88 = 0;
      uStack_80 = 0;
      local_78 = (void *)0x0;
      uVar6 = seval_to_std_string((Value *)*plVar5,(basic_string *)&local_88);
      if ((uVar6 & 1) == 0) {
        uVar11 = 0x1f5d;
LAB_00ccc790:
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                            ,uVar11,"js_cocos2dx_dragonbones_CCFactory_parseDragonBonesDataByPath");
        __android_log_print(6,"jswrapper",
                            "js_cocos2dx_dragonbones_CCFactory_parseDragonBonesDataByPath : Error processing arguments"
                           );
        bVar3 = false;
      }
      else {
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = (void *)0x0;
        ptVar7 = (type *)dragonBones::CCFactory::parseDragonBonesDataByPath
                                   (this,(basic_string *)&local_88,(basic_string *)&local_a0,1.0);
        if ((local_a0 & 1) != 0) {
          operator_delete(local_90);
        }
        pVVar8 = (Value *)se::State::rval(aSStack_70);
        bVar3 = native_ptr_to_rooted_seval<dragonBones::DragonBonesData>(ptVar7,pVVar8,(bool *)0x0);
        if (!bVar3) {
          uVar11 = 0x1f60;
          goto LAB_00ccc790;
        }
        bVar3 = true;
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
        if (bVar3) goto LAB_00ccc858;
        goto LAB_00ccc82c;
      }
    }
    if (bVar3) goto LAB_00ccc858;
  }
LAB_00ccc82c:
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_CCFactory_parseDragonBonesDataByPath",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0x1f7e);
LAB_00ccc858:
  pVVar8 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_d8;
  pVVar8 = local_d0;
  if (local_d8 != (Value *)0x0) {
    while (pVVar8 != pVVar2) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_d0 = pVVar2;
    operator_delete(local_d8);
  }
  v8::HandleScope::~HandleScope(aHStack_c0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

