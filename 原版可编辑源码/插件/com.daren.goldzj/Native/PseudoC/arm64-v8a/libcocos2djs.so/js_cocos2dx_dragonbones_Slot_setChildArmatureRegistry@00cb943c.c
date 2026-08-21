
/* js_cocos2dx_dragonbones_Slot_setChildArmatureRegistry(v8::FunctionCallbackInfo<v8::Value> const&)
    */

void js_cocos2dx_dragonbones_Slot_setChildArmatureRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  Slot *this;
  undefined8 *puVar4;
  Value *pVVar5;
  Object *this_00;
  Armature *pAVar6;
  char *pcVar7;
  Isolate *pIVar8;
  Value *local_90;
  Value *local_88;
  Value *local_80;
  HandleScope aHStack_78 [24];
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_78,pIVar8);
  local_90 = operator_new(0xa0);
  local_80 = local_90 + 0xa0;
  local_88 = local_90;
  se::internal::jsToSeArgs(param_1,(vector *)&local_90);
  pvVar3 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar3,(vector *)&local_90);
  this = (Slot *)se::State::nativeThisObject(aSStack_60);
  if (this == (Slot *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x14c2,&DAT_0192a9f8);
    pcVar7 = "js_cocos2dx_dragonbones_Slot_setChildArmature : Invalid Native Object";
LAB_00cb95c8:
    __android_log_print(6,"jswrapper",pcVar7);
  }
  else {
    puVar4 = (undefined8 *)se::State::args(aSStack_60);
    pVVar5 = (Value *)*puVar4;
    if (puVar4[1] - (long)pVVar5 == 0x10) {
      if (pVVar5[8] == (Value)0x5) {
        this_00 = (Object *)se::Value::toObject(pVVar5);
        pAVar6 = (Armature *)se::Object::getPrivateData(this_00);
        if (pAVar6 == (Armature *)0x0) {
LAB_00cb9590:
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                              ,0x14c9,&DAT_0192a9f8);
          pcVar7 = "js_cocos2dx_dragonbones_Slot_setChildArmature : Error processing arguments";
          goto LAB_00cb95c8;
        }
      }
      else {
        if (1 < (byte)pVVar5[8]) goto LAB_00cb9590;
        pAVar6 = (Armature *)0x0;
      }
      dragonBones::Slot::setChildArmature(this,pAVar6);
      goto LAB_00cb9600;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp, 5325): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(puVar4[1] - (long)pVVar5) >> 4,1);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",&DAT_0192a9f8,
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0x14d0);
LAB_00cb9600:
  pVVar5 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar5,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_90;
  pVVar5 = local_88;
  if (local_90 != (Value *)0x0) {
    while (pVVar5 != pVVar2) {
      se::Value::~Value(pVVar5 + -0x10);
      pVVar5 = pVVar5 + -0x10;
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

