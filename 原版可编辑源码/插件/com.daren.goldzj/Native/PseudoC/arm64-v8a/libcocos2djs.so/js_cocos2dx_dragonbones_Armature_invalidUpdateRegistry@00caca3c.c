
/* js_cocos2dx_dragonbones_Armature_invalidUpdateRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_Armature_invalidUpdateRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  bool bVar2;
  Value *pVVar3;
  void *pvVar4;
  Armature *this;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  Value *pVVar8;
  undefined8 uVar9;
  long lVar10;
  Isolate *pIVar11;
  Value *local_c0;
  Value *local_b8;
  Value *local_b0;
  HandleScope aHStack_a8 [28];
  bool local_8c [4];
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
  this = (Armature *)se::State::nativeThisObject(aSStack_70);
  if (this == (Armature *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0xdc3,"js_cocos2dx_dragonbones_Armature_invalidUpdate");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_dragonbones_Armature_invalidUpdate : Invalid Native Object");
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_70);
    lVar10 = plVar5[1] - *plVar5 >> 4;
    if (lVar10 == 2) {
      local_88 = 0;
      uStack_80 = 0;
      local_78 = (void *)0x0;
      uVar6 = seval_to_std_string((Value *)*plVar5,(basic_string *)&local_88);
      uVar7 = seval_to_boolean((Value *)(*plVar5 + 0x10),local_8c);
      if (((uVar6 & 1) != 0) && ((uVar7 & 1) != 0)) goto LAB_00cacbe0;
      uVar9 = 0xdd7;
LAB_00cacc6c:
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                          ,uVar9,"js_cocos2dx_dragonbones_Armature_invalidUpdate");
      __android_log_print(6,"jswrapper",
                          "js_cocos2dx_dragonbones_Armature_invalidUpdate : Error processing arguments"
                         );
      bVar2 = false;
    }
    else {
      if (lVar10 != 1) {
        if (lVar10 == 0) {
          local_88 = 0;
          uStack_80 = 0;
          local_78 = (void *)0x0;
          dragonBones::Armature::invalidUpdate(this,(basic_string *)&local_88,false);
          if ((local_88 & 1) != 0) {
            operator_delete(local_78);
          }
          goto LAB_00cacccc;
        }
        __android_log_print(6,"jswrapper",
                            "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp, 3547): wrong number of arguments: %d, was expecting %d\n"
                            ,(ulong)(plVar5[1] - *plVar5) >> 4,2);
        goto LAB_00cacca0;
      }
      local_88 = 0;
      uStack_80 = 0;
      local_78 = (void *)0x0;
      uVar6 = seval_to_std_string((Value *)*plVar5,(basic_string *)&local_88);
      if ((uVar6 & 1) == 0) {
        uVar9 = 0xdce;
        goto LAB_00cacc6c;
      }
      local_8c[0] = false;
LAB_00cacbe0:
      dragonBones::Armature::invalidUpdate(this,(basic_string *)&local_88,local_8c[0]);
      bVar2 = true;
    }
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
    if (bVar2) goto LAB_00cacccc;
  }
LAB_00cacca0:
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_Armature_invalidUpdate",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0xdde);
LAB_00cacccc:
  pVVar8 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_70);
  pVVar3 = local_c0;
  pVVar8 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar8 != pVVar3) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_b8 = pVVar3;
    operator_delete(local_c0);
  }
  v8::HandleScope::~HandleScope(aHStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

