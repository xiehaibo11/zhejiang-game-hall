
/* js_cocos2dx_dragonbones_Armature_setFlipYRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_cocos2dx_dragonbones_Armature_setFlipYRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  Armature *this;
  undefined8 *puVar4;
  Value *pVVar5;
  char *pcVar6;
  ulong uVar7;
  Isolate *pIVar8;
  Value *local_b0;
  Value *local_a8;
  Value *local_a0;
  HandleScope aHStack_98 [28];
  Armature local_7c [4];
  ulong local_78;
  undefined8 uStack_70;
  void *local_68;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_98,pIVar8);
  local_b0 = operator_new(0xa0);
  local_a0 = local_b0 + 0xa0;
  local_a8 = local_b0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_b0);
  pvVar3 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar3,(vector *)&local_b0);
  this = (Armature *)se::State::nativeThisObject(aSStack_60);
  if (this == (Armature *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0xe93,"js_cocos2dx_dragonbones_Armature_setFlipY");
    pcVar6 = "js_cocos2dx_dragonbones_Armature_setFlipY : Invalid Native Object";
LAB_00cae0fc:
    __android_log_print(6,"jswrapper",pcVar6);
  }
  else {
    puVar4 = (undefined8 *)se::State::args(aSStack_60);
    uVar7 = puVar4[1] - (long)*puVar4;
    if (uVar7 == 0x10) {
      uVar7 = seval_to_boolean((Value *)*puVar4,(bool *)local_7c);
      if ((uVar7 & 1) != 0) {
        this[0x5d] = local_7c[0];
        local_78 = 0;
        uStack_70 = 0;
        local_68 = (void *)0x0;
        dragonBones::Armature::invalidUpdate(this,(basic_string *)&local_78,false);
        if ((local_78 & 1) != 0) {
          operator_delete(local_68);
        }
        goto LAB_00cae134;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                          ,0xe9a,"js_cocos2dx_dragonbones_Armature_setFlipY");
      pcVar6 = "js_cocos2dx_dragonbones_Armature_setFlipY : Error processing arguments";
      goto LAB_00cae0fc;
    }
    __android_log_print(6,"jswrapper",&DAT_019365f9,uVar7 >> 4,1);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_Armature_setFlipY",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0xea1);
LAB_00cae134:
  pVVar5 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar5,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_b0;
  pVVar5 = local_a8;
  if (local_b0 != (Value *)0x0) {
    while (pVVar5 != pVVar2) {
      se::Value::~Value(pVVar5 + -0x10);
      pVVar5 = pVVar5 + -0x10;
    }
    local_a8 = pVVar2;
    operator_delete(local_b0);
  }
  v8::HandleScope::~HandleScope(aHStack_98);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

