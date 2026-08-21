
/* js_cocos2dx_dragonbones_BaseFactory_changeSkinRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_BaseFactory_changeSkinRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  Value *pVVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  void *pvVar8;
  long *plVar9;
  long *plVar10;
  Object *pOVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  Value *pVVar16;
  Isolate *pIVar17;
  byte *pbVar18;
  Value *local_b8;
  Value *local_b0;
  Value *local_a8;
  HandleScope aHStack_a0 [24];
  byte *local_88;
  byte *local_80;
  undefined8 uStack_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar17 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a0,pIVar17);
  local_b8 = operator_new(0xa0);
  local_a8 = local_b8 + 0xa0;
  local_b0 = local_b8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_b8);
  pvVar8 = (void *)se::internal::getPrivate(pIVar17,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar8,(vector *)&local_b8);
  plVar9 = (long *)se::State::nativeThisObject(aSStack_70);
  if (plVar9 == (long *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x1b7a,"js_cocos2dx_dragonbones_BaseFactory_changeSkin");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_dragonbones_BaseFactory_changeSkin : Invalid Native Object");
  }
  else {
    plVar10 = (long *)se::State::args(aSStack_70);
    if (plVar10[1] - *plVar10 == 0x30) {
      local_80 = (byte *)0x0;
      uStack_78 = 0;
      local_88 = (byte *)0x0;
      pVVar16 = (Value *)*plVar10;
      if (pVVar16[8] == (Value)0x5) {
        pOVar11 = (Object *)se::Value::toObject(pVVar16);
        lVar12 = se::Object::getPrivateData(pOVar11);
        pVVar16 = (Value *)*plVar10;
        bVar5 = lVar12 == 0;
      }
      else {
        bVar5 = 1 < (byte)pVVar16[8];
        lVar12 = 0;
      }
      if (pVVar16[0x18] == (Value)0x5) {
        pOVar11 = (Object *)se::Value::toObject(pVVar16 + 0x10);
        lVar13 = se::Object::getPrivateData(pOVar11);
        pVVar16 = (Value *)*plVar10;
        bVar6 = lVar13 == 0;
      }
      else {
        bVar6 = 1 < (byte)pVVar16[0x18];
        lVar13 = 0;
      }
      uVar14 = seval_to_std_vector_string(pVVar16 + 0x20,(vector *)&local_88);
      if ((bVar5 || bVar6) || ((uVar14 & 1) == 0)) {
        uVar15 = 0x1b85;
LAB_00cc5af0:
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                            ,uVar15,"js_cocos2dx_dragonbones_BaseFactory_changeSkin");
        __android_log_print(6,"jswrapper",
                            "js_cocos2dx_dragonbones_BaseFactory_changeSkin : Error processing arguments"
                           );
        bVar5 = false;
        pbVar2 = local_88;
      }
      else {
        bVar7 = (**(code **)(*plVar9 + 0xc0))(plVar9,lVar12,lVar13,0,&local_88);
        pVVar16 = (Value *)se::State::rval(aSStack_70);
        uVar14 = boolean_to_seval((bool)(bVar7 & 1),pVVar16);
        if ((uVar14 & 1) == 0) {
          uVar15 = 0x1b88;
          goto LAB_00cc5af0;
        }
        bVar5 = true;
        pbVar2 = local_88;
      }
      local_88 = pbVar2;
      pbVar18 = local_80;
      if (pbVar2 != (byte *)0x0) {
        while (pbVar3 = pbVar18, pbVar3 != pbVar2) {
          pbVar18 = pbVar3 + -0x18;
          if ((*pbVar18 & 1) != 0) {
            operator_delete(*(void **)(pbVar3 + -8));
          }
        }
        local_80 = pbVar2;
        operator_delete(local_88);
      }
      if (bVar5) goto LAB_00cc5b88;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp, 7051): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar10[1] - *plVar10) >> 4,3);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_BaseFactory_changeSkin",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0x1b8e);
LAB_00cc5b88:
  pVVar16 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar16,param_1);
  se::State::~State(aSStack_70);
  pVVar4 = local_b8;
  pVVar16 = local_b0;
  if (local_b8 != (Value *)0x0) {
    while (pVVar16 != pVVar4) {
      se::Value::~Value(pVVar16 + -0x10);
      pVVar16 = pVVar16 + -0x10;
    }
    local_b0 = pVVar4;
    operator_delete(local_b8);
  }
  v8::HandleScope::~HandleScope(aHStack_a0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

