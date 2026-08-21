
/* js_cocos2dx_dragonbones_Animation_playConfigRegistry(v8::FunctionCallbackInfo<v8::Value> const&)
    */

void js_cocos2dx_dragonbones_Animation_playConfigRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  void *pvVar4;
  Animation *this;
  undefined8 *puVar5;
  Value *pVVar6;
  Object *this_00;
  AnimationConfig *pAVar7;
  type *ptVar8;
  char *pcVar9;
  undefined8 uVar10;
  Isolate *pIVar11;
  Value *local_90;
  Value *local_88;
  Value *local_80;
  HandleScope aHStack_78 [24];
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_78,pIVar11);
  local_90 = operator_new(0xa0);
  local_80 = local_90 + 0xa0;
  local_88 = local_90;
  se::internal::jsToSeArgs(param_1,(vector *)&local_90);
  pvVar4 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar4,(vector *)&local_90);
  this = (Animation *)se::State::nativeThisObject(aSStack_60);
  if (this == (Animation *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x16aa,"js_cocos2dx_dragonbones_Animation_playConfig");
    pcVar9 = "js_cocos2dx_dragonbones_Animation_playConfig : Invalid Native Object";
LAB_00cbcae0:
    __android_log_print(6,"jswrapper",pcVar9);
  }
  else {
    puVar5 = (undefined8 *)se::State::args(aSStack_60);
    pVVar6 = (Value *)*puVar5;
    if (puVar5[1] - (long)pVVar6 == 0x10) {
      if (pVVar6[8] == (Value)0x5) {
        this_00 = (Object *)se::Value::toObject(pVVar6);
        pAVar7 = (AnimationConfig *)se::Object::getPrivateData(this_00);
        if (pAVar7 == (AnimationConfig *)0x0) goto LAB_00cbcaa8;
LAB_00cbca54:
        ptVar8 = (type *)dragonBones::Animation::playConfig(this,pAVar7);
        pVVar6 = (Value *)se::State::rval(aSStack_60);
        bVar3 = native_ptr_to_rooted_seval<dragonBones::AnimationState>(ptVar8,pVVar6,(bool *)0x0);
        if (bVar3) goto LAB_00cbcb18;
        uVar10 = 0x16b4;
      }
      else {
        if ((byte)pVVar6[8] < 2) {
          pAVar7 = (AnimationConfig *)0x0;
          goto LAB_00cbca54;
        }
LAB_00cbcaa8:
        uVar10 = 0x16b1;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                          ,uVar10,"js_cocos2dx_dragonbones_Animation_playConfig");
      pcVar9 = "js_cocos2dx_dragonbones_Animation_playConfig : Error processing arguments";
      goto LAB_00cbcae0;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp, 5815): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(puVar5[1] - (long)pVVar6) >> 4,1);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_Animation_playConfig",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0x16ba);
LAB_00cbcb18:
  pVVar6 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_90;
  pVVar6 = local_88;
  if (local_90 != (Value *)0x0) {
    while (pVVar6 != pVVar2) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_88 = pVVar2;
    operator_delete(local_90);
  }
  v8::HandleScope::~HandleScope(aHStack_78);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

