
/* js_cocos2dx_dragonbones_Bone_containsRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_cocos2dx_dragonbones_Bone_containsRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  byte bVar3;
  void *pvVar4;
  Bone *this;
  undefined8 *puVar5;
  Value *pVVar6;
  Object *this_00;
  Bone *pBVar7;
  ulong uVar8;
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
  this = (Bone *)se::State::nativeThisObject(aSStack_60);
  if (this == (Bone *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x12d4,"js_cocos2dx_dragonbones_Bone_contains");
    pcVar9 = "js_cocos2dx_dragonbones_Bone_contains : Invalid Native Object";
LAB_00cb5f60:
    __android_log_print(6,"jswrapper",pcVar9);
  }
  else {
    puVar5 = (undefined8 *)se::State::args(aSStack_60);
    pVVar6 = (Value *)*puVar5;
    if (puVar5[1] - (long)pVVar6 == 0x10) {
      if (pVVar6[8] == (Value)0x5) {
        this_00 = (Object *)se::Value::toObject(pVVar6);
        pBVar7 = (Bone *)se::Object::getPrivateData(this_00);
        if (pBVar7 == (Bone *)0x0) goto LAB_00cb5f28;
LAB_00cb5ed8:
        bVar3 = dragonBones::Bone::contains(this,pBVar7);
        pVVar6 = (Value *)se::State::rval(aSStack_60);
        uVar8 = boolean_to_seval((bool)(bVar3 & 1),pVVar6);
        if ((uVar8 & 1) != 0) goto LAB_00cb5f98;
        uVar10 = 0x12de;
      }
      else {
        if ((byte)pVVar6[8] < 2) {
          pBVar7 = (Bone *)0x0;
          goto LAB_00cb5ed8;
        }
LAB_00cb5f28:
        uVar10 = 0x12db;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                          ,uVar10,"js_cocos2dx_dragonbones_Bone_contains");
      pcVar9 = "js_cocos2dx_dragonbones_Bone_contains : Error processing arguments";
      goto LAB_00cb5f60;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp, 4833): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(puVar5[1] - (long)pVVar6) >> 4,1);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_Bone_contains",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0x12e4);
LAB_00cb5f98:
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

