
/* js_cocos2dx_dragonbones_CCFactory_getTextureAtlasDataByIndexRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_CCFactory_getTextureAtlasDataByIndexRegistry
               (FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  void *pvVar4;
  CCFactory *this;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  type *ptVar8;
  Value *pVVar9;
  undefined8 uVar10;
  Isolate *pIVar11;
  Value *local_c0;
  Value *local_b8;
  Value *local_b0;
  HandleScope aHStack_a8 [28];
  int local_8c;
  ulong local_88;
  undefined8 uStack_80;
  void *local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a8,pIVar11);
  local_c0 = operator_new(0xa0);
  local_b0 = local_c0 + 0xa0;
  local_b8 = local_c0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_c0);
  pvVar4 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar4,(vector *)&local_c0);
  this = (CCFactory *)se::State::nativeThisObject(aSStack_70);
  if (this == (CCFactory *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x1f2d,"js_cocos2dx_dragonbones_CCFactory_getTextureAtlasDataByIndex");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_dragonbones_CCFactory_getTextureAtlasDataByIndex : Invalid Native Object"
                       );
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_70);
    if (plVar5[1] - *plVar5 == 0x20) {
      local_88 = 0;
      uStack_80 = 0;
      local_78 = (void *)0x0;
      uVar6 = seval_to_std_string((Value *)*plVar5,(basic_string *)&local_88);
      local_8c = 0;
      uVar7 = seval_to_int32((Value *)(*plVar5 + 0x10),&local_8c);
      if (((uVar6 & 1) == 0) || ((uVar7 & 1) == 0)) {
        uVar10 = 0x1f36;
LAB_00ccc0ac:
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                            ,uVar10,"js_cocos2dx_dragonbones_CCFactory_getTextureAtlasDataByIndex");
        __android_log_print(6,"jswrapper",
                            "js_cocos2dx_dragonbones_CCFactory_getTextureAtlasDataByIndex : Error processing arguments"
                           );
        bVar3 = false;
      }
      else {
        ptVar8 = (type *)dragonBones::CCFactory::getTextureAtlasDataByIndex
                                   (this,(basic_string *)&local_88,local_8c);
        pVVar9 = (Value *)se::State::rval(aSStack_70);
        bVar3 = native_ptr_to_rooted_seval<dragonBones::CCTextureAtlasData>
                          (ptVar8,pVVar9,(bool *)0x0);
        if (!bVar3) {
          uVar10 = 0x1f39;
          goto LAB_00ccc0ac;
        }
        bVar3 = true;
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      if (bVar3) goto LAB_00ccc10c;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp, 7996): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar5[1] - *plVar5) >> 4,2);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_CCFactory_getTextureAtlasDataByIndex",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,7999);
LAB_00ccc10c:
  pVVar9 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_c0;
  pVVar9 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar9 != pVVar2) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_b8 = pVVar2;
    operator_delete(local_c0);
  }
  v8::HandleScope::~HandleScope(aHStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

