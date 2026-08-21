
/* js_cocos2dx_dragonbones_BaseFactory_replaceSkinRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_BaseFactory_replaceSkinRegistry(FunctionCallbackInfo *param_1)

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
  ulong uVar15;
  undefined8 uVar16;
  Value *pVVar17;
  Isolate *pIVar18;
  byte *pbVar19;
  Value *local_d0;
  Value *local_c8;
  Value *local_c0;
  HandleScope aHStack_b8 [24];
  byte *local_a0;
  byte *local_98;
  undefined8 uStack_90;
  bool local_84 [4];
  State aSStack_80 [40];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar18 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b8,pIVar18);
  local_d0 = operator_new(0xa0);
  local_c0 = local_d0 + 0xa0;
  local_c8 = local_d0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_d0);
  pvVar8 = (void *)se::internal::getPrivate(pIVar18,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar8,(vector *)&local_d0);
  plVar9 = (long *)se::State::nativeThisObject(aSStack_80);
  if (plVar9 == (long *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x19e9,"js_cocos2dx_dragonbones_BaseFactory_replaceSkin");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_dragonbones_BaseFactory_replaceSkin : Invalid Native Object");
  }
  else {
    plVar10 = (long *)se::State::args(aSStack_80);
    if (plVar10[1] - *plVar10 == 0x40) {
      local_98 = (byte *)0x0;
      uStack_90 = 0;
      local_a0 = (byte *)0x0;
      pVVar17 = (Value *)*plVar10;
      if (pVVar17[8] == (Value)0x5) {
        pOVar11 = (Object *)se::Value::toObject(pVVar17);
        lVar12 = se::Object::getPrivateData(pOVar11);
        pVVar17 = (Value *)*plVar10;
        bVar5 = lVar12 == 0;
      }
      else {
        bVar5 = 1 < (byte)pVVar17[8];
        lVar12 = 0;
      }
      if (pVVar17[0x18] == (Value)0x5) {
        pOVar11 = (Object *)se::Value::toObject(pVVar17 + 0x10);
        lVar13 = se::Object::getPrivateData(pOVar11);
        pVVar17 = (Value *)*plVar10;
        bVar6 = lVar13 == 0;
      }
      else {
        bVar6 = 1 < (byte)pVVar17[0x18];
        lVar13 = 0;
      }
      uVar14 = seval_to_boolean(pVVar17 + 0x20,local_84);
      uVar15 = seval_to_std_vector_string((Value *)(*plVar10 + 0x30),(vector *)&local_a0);
      if (((bVar5 || bVar6) || ((uVar14 & 1) == 0)) || ((uVar15 & 1) == 0)) {
        uVar16 = 0x19f6;
LAB_00cc2b68:
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                            ,uVar16,"js_cocos2dx_dragonbones_BaseFactory_replaceSkin");
        __android_log_print(6,"jswrapper",
                            "js_cocos2dx_dragonbones_BaseFactory_replaceSkin : Error processing arguments"
                           );
        bVar5 = false;
        pbVar2 = local_a0;
      }
      else {
        bVar7 = (**(code **)(*plVar9 + 0xc0))(plVar9,lVar12,lVar13,local_84[0],&local_a0);
        pVVar17 = (Value *)se::State::rval(aSStack_80);
        uVar14 = boolean_to_seval((bool)(bVar7 & 1),pVVar17);
        if ((uVar14 & 1) == 0) {
          uVar16 = 0x19f9;
          goto LAB_00cc2b68;
        }
        bVar5 = true;
        pbVar2 = local_a0;
      }
      local_a0 = pbVar2;
      pbVar19 = local_98;
      if (pbVar2 != (byte *)0x0) {
        while (pbVar3 = pbVar19, pbVar3 != pbVar2) {
          pbVar19 = pbVar3 + -0x18;
          if ((*pbVar19 & 1) != 0) {
            operator_delete(*(void **)(pbVar3 + -8));
          }
        }
        local_98 = pbVar2;
        operator_delete(local_a0);
      }
      if (bVar5) goto LAB_00cc2c00;
    }
    else {
      __android_log_print(6,"jswrapper",&DAT_0193f274,(ulong)(plVar10[1] - *plVar10) >> 4,4);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_BaseFactory_replaceSkin",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0x19ff);
LAB_00cc2c00:
  pVVar17 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar17,param_1);
  se::State::~State(aSStack_80);
  pVVar4 = local_d0;
  pVVar17 = local_c8;
  if (local_d0 != (Value *)0x0) {
    while (pVVar17 != pVVar4) {
      se::Value::~Value(pVVar17 + -0x10);
      pVVar17 = pVVar17 + -0x10;
    }
    local_c8 = pVVar4;
    operator_delete(local_d0);
  }
  v8::HandleScope::~HandleScope(aHStack_b8);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

