
/* js_cocos2dx_dragonbones_AnimationState_initRegistry(v8::FunctionCallbackInfo<v8::Value> const&)
    */

void js_cocos2dx_dragonbones_AnimationState_initRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  void *pvVar6;
  AnimationState *this;
  undefined8 *puVar7;
  Object *pOVar8;
  Armature *pAVar9;
  AnimationData *pAVar10;
  AnimationConfig *pAVar11;
  char *pcVar12;
  Value *pVVar13;
  Isolate *pIVar14;
  Value *local_b0;
  Value *local_a8;
  Value *local_a0;
  HandleScope aHStack_98 [24];
  State aSStack_80 [40];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar14 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_98,pIVar14);
  local_b0 = operator_new(0xa0);
  local_a0 = local_b0 + 0xa0;
  local_a8 = local_b0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_b0);
  pvVar6 = (void *)se::internal::getPrivate(pIVar14,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar6,(vector *)&local_b0);
  this = (AnimationState *)se::State::nativeThisObject(aSStack_80);
  if (this == (AnimationState *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x1099,"js_cocos2dx_dragonbones_AnimationState_init");
    pcVar12 = "js_cocos2dx_dragonbones_AnimationState_init : Invalid Native Object";
LAB_00cb1bbc:
    __android_log_print(6,"jswrapper",pcVar12);
  }
  else {
    puVar7 = (undefined8 *)se::State::args(aSStack_80);
    pVVar13 = (Value *)*puVar7;
    if (puVar7[1] - (long)pVVar13 == 0x30) {
      if (pVVar13[8] == (Value)0x5) {
        pOVar8 = (Object *)se::Value::toObject(pVVar13);
        pAVar9 = (Armature *)se::Object::getPrivateData(pOVar8);
        pVVar13 = (Value *)*puVar7;
        bVar4 = pAVar9 == (Armature *)0x0;
      }
      else {
        bVar4 = 1 < (byte)pVVar13[8];
        pAVar9 = (Armature *)0x0;
      }
      if (pVVar13[0x18] == (Value)0x5) {
        pOVar8 = (Object *)se::Value::toObject(pVVar13 + 0x10);
        pAVar10 = (AnimationData *)se::Object::getPrivateData(pOVar8);
        pVVar13 = (Value *)*puVar7;
        bVar5 = pAVar10 == (AnimationData *)0x0;
      }
      else {
        bVar5 = 1 < (byte)pVVar13[0x18];
        pAVar10 = (AnimationData *)0x0;
      }
      if (pVVar13[0x28] == (Value)0x5) {
        pOVar8 = (Object *)se::Value::toObject(pVVar13 + 0x20);
        pAVar11 = (AnimationConfig *)se::Object::getPrivateData(pOVar8);
        if (pAVar11 != (AnimationConfig *)0x0) {
          bVar3 = true;
          goto LAB_00cb1b64;
        }
      }
      else {
        bVar3 = (byte)pVVar13[0x28] < 2;
        pAVar11 = (AnimationConfig *)0x0;
LAB_00cb1b64:
        if ((bool)((!bVar4 && !bVar5) & bVar3)) {
          dragonBones::AnimationState::init(this,pAVar9,pAVar10,pAVar11);
          goto LAB_00cb1bf4;
        }
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                          ,0x10a4,"js_cocos2dx_dragonbones_AnimationState_init");
      pcVar12 = "js_cocos2dx_dragonbones_AnimationState_init : Error processing arguments";
      goto LAB_00cb1bbc;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp, 4264): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(puVar7[1] - (long)pVVar13) >> 4,3);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_AnimationState_init",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0x10ab);
LAB_00cb1bf4:
  pVVar13 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar13,param_1);
  se::State::~State(aSStack_80);
  pVVar2 = local_b0;
  pVVar13 = local_a8;
  if (local_b0 != (Value *)0x0) {
    while (pVVar13 != pVVar2) {
      se::Value::~Value(pVVar13 + -0x10);
      pVVar13 = pVVar13 + -0x10;
    }
    local_a8 = pVVar2;
    operator_delete(local_b0);
  }
  v8::HandleScope::~HandleScope(aHStack_98);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

