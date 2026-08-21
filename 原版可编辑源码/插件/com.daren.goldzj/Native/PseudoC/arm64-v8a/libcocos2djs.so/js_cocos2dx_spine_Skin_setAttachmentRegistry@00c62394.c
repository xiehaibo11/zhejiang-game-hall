
/* js_cocos2dx_spine_Skin_setAttachmentRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_cocos2dx_spine_Skin_setAttachmentRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  char *__s;
  byte bVar2;
  long lVar3;
  bool bVar4;
  Value *pVVar5;
  byte bVar6;
  void *pvVar7;
  Skin *this;
  long *plVar8;
  long *plVar9;
  Object *this_00;
  Attachment *pAVar10;
  Value *pVVar11;
  Isolate *pIVar12;
  Value *local_e8;
  Value *local_e0;
  Value *local_d8;
  HandleScope aHStack_d0 [24];
  byte local_b8 [16];
  char *local_a8;
  undefined **local_a0;
  size_t local_98;
  void *local_90;
  ulong local_88;
  State aSStack_80 [40];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar12 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_d0,pIVar12);
  local_e8 = operator_new(0xa0);
  local_d8 = local_e8 + 0xa0;
  local_e0 = local_e8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_e8);
  pvVar7 = (void *)se::internal::getPrivate(pIVar12,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar7,(vector *)&local_e8);
  this = (Skin *)se::State::nativeThisObject(aSStack_80);
  if (this == (Skin *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x2a92,&DAT_018eda28);
    __android_log_print(6,"jswrapper","js_cocos2dx_spine_Skin_setAttachment : Invalid Native Object"
                       );
  }
  else {
    plVar8 = (long *)se::State::args(aSStack_80);
    if (plVar8[1] - *plVar8 == 0x30) {
      local_88 = 0;
      local_90 = (void *)0x0;
      local_a0 = &PTR__String_01c67868;
      local_98 = 0;
      bVar6 = seval_to_size((Value *)*plVar8,&local_88);
      se::Value::toStringForce();
      __s = (char *)((ulong)local_b8 | 1);
      if ((local_b8[0] & 1) != 0) {
        __s = local_a8;
      }
      if (__s != (char *)0x0) {
        local_98 = strlen(__s);
        lVar1 = local_98 + 1;
        plVar9 = (long *)spine::SpineExtension::getInstance();
        local_90 = (void *)(**(code **)(*plVar9 + 0x18))
                                     (plVar9,lVar1,
                                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                      ,0x91);
        memcpy(local_90,__s,local_98 + 1);
      }
      if ((local_b8[0] & 1) != 0) {
        operator_delete(local_a8);
      }
      bVar2 = *(byte *)(*plVar8 + 0x28);
      if (bVar2 == 5) {
        this_00 = (Object *)se::Value::toObject((Value *)(*plVar8 + 0x20));
        pAVar10 = (Attachment *)se::Object::getPrivateData(this_00);
        if ((pAVar10 != (Attachment *)0x0) && ((bVar6 & 1) != 0)) goto LAB_00c625fc;
LAB_00c62530:
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                            ,0x2a9d,&DAT_018eda28);
        __android_log_print(6,"jswrapper",
                            "js_cocos2dx_spine_Skin_setAttachment : Error processing arguments");
        bVar4 = false;
      }
      else {
        pAVar10 = (Attachment *)0x0;
        if ((bVar6 & bVar2 < 2) == 0) goto LAB_00c62530;
LAB_00c625fc:
        spine::Skin::setAttachment(this,local_88,(String *)&local_a0,pAVar10);
        bVar4 = true;
      }
      pvVar7 = local_90;
      local_a0 = &PTR__String_01c67868;
      if (local_90 != (void *)0x0) {
        plVar8 = (long *)spine::SpineExtension::getInstance();
        (**(code **)(*plVar8 + 0x28))
                  (plVar8,pvVar7,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                   0xc9);
      }
      spine::SpineObject::~SpineObject((SpineObject *)&local_a0);
      if (bVar4) goto LAB_00c62678;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp, 10913): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar8[1] - *plVar8) >> 4,3);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",&DAT_018eda28,
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x2aa4);
LAB_00c62678:
  pVVar11 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar11,param_1);
  se::State::~State(aSStack_80);
  pVVar5 = local_e8;
  pVVar11 = local_e0;
  if (local_e8 != (Value *)0x0) {
    while (pVVar11 != pVVar5) {
      se::Value::~Value(pVVar11 + -0x10);
      pVVar11 = pVVar11 + -0x10;
    }
    local_e0 = pVVar5;
    operator_delete(local_e8);
  }
  v8::HandleScope::~HandleScope(aHStack_d0);
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

