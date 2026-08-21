
/* js_cocos2dx_editor_support_Texture2D_setPixelsWideRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_editor_support_Texture2D_setPixelsWideRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  Texture2D *this;
  undefined8 *puVar4;
  Value *pVVar5;
  char *pcVar6;
  ulong uVar7;
  Isolate *pIVar8;
  Value *local_98;
  Value *local_90;
  Value *local_88;
  HandleScope aHStack_80 [28];
  int local_64;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_80,pIVar8);
  local_98 = operator_new(0xa0);
  local_88 = local_98 + 0xa0;
  local_90 = local_98;
  se::internal::jsToSeArgs(param_1,(vector *)&local_98);
  pvVar3 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar3,(vector *)&local_98);
  this = (Texture2D *)se::State::nativeThisObject(aSStack_60);
  if (this == (Texture2D *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_editor_support_auto.cpp"
                        ,0x79,"js_cocos2dx_editor_support_Texture2D_setPixelsWide");
    pcVar6 = "js_cocos2dx_editor_support_Texture2D_setPixelsWide : Invalid Native Object";
LAB_00c011e4:
    __android_log_print(6,"jswrapper",pcVar6);
  }
  else {
    puVar4 = (undefined8 *)se::State::args(aSStack_60);
    uVar7 = puVar4[1] - (long)*puVar4;
    if (uVar7 == 0x10) {
      local_64 = 0;
      uVar7 = seval_to_int32((Value *)*puVar4,&local_64);
      if ((uVar7 & 1) != 0) {
        cocos2d::middleware::Texture2D::setPixelsWide(this,local_64);
        goto LAB_00c0121c;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_editor_support_auto.cpp"
                          ,0x80,"js_cocos2dx_editor_support_Texture2D_setPixelsWide");
      pcVar6 = "js_cocos2dx_editor_support_Texture2D_setPixelsWide : Error processing arguments";
      goto LAB_00c011e4;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_editor_support_auto.cpp, 132): wrong number of arguments: %d, was expecting %d\n"
                        ,uVar7 >> 4,1);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_editor_support_Texture2D_setPixelsWide",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_editor_support_auto.cpp"
                      ,0x87);
LAB_00c0121c:
  pVVar5 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar5,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_98;
  pVVar5 = local_90;
  if (local_98 != (Value *)0x0) {
    while (pVVar5 != pVVar2) {
      se::Value::~Value(pVVar5 + -0x10);
      pVVar5 = pVVar5 + -0x10;
    }
    local_90 = pVVar2;
    operator_delete(local_98);
  }
  v8::HandleScope::~HandleScope(aHStack_80);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

