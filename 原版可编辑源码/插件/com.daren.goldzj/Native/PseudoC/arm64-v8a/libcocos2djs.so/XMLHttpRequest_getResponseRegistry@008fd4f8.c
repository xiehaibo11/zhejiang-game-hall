
/* XMLHttpRequest_getResponseRegistry(v8::Local<v8::Name>, v8::PropertyCallbackInfo<v8::Value>
   const&) */

void XMLHttpRequest_getResponseRegistry(undefined8 param_1,PropertyCallbackInfo *param_2)

{
  char cVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  Object *pOVar5;
  Value *pVVar6;
  ulong uVar7;
  Isolate *pIVar8;
  HandleScope aHStack_80 [24];
  long local_68;
  State aSStack_60 [40];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_2 + 0x10);
  v8::HandleScope::HandleScope(aHStack_80,pIVar8);
  pvVar3 = (void *)se::internal::getPrivate(pIVar8,*(long *)param_2 + 0x30);
  se::State::State(aSStack_60,pvVar3);
  lVar4 = se::State::nativeThisObject(aSStack_60);
  cVar1 = *(char *)(lVar4 + 0x262);
  if (cVar1 == '\0') {
    pVVar6 = (Value *)se::State::rval(aSStack_60);
    se::Value::setString(pVVar6,(basic_string *)(lVar4 + 0x1e0));
  }
  else if (*(char *)(lVar4 + 0x263) == '\x04') {
    if (cVar1 == '\x01') {
      pvVar3 = (void *)cocos2d::Data::getBytes((Data *)(lVar4 + 0x240));
      uVar7 = cocos2d::Data::getSize((Data *)(lVar4 + 0x240));
      pOVar5 = (Object *)se::Object::createArrayBufferObject(pvVar3,uVar7);
      se::HandleObject::HandleObject((HandleObject *)&local_68,pOVar5);
      if (local_68 == 0) {
        pVVar6 = (Value *)se::State::rval(aSStack_60);
        se::Value::setNull(pVVar6);
      }
      else {
        pVVar6 = (Value *)se::State::rval(aSStack_60);
        se::Value::setObject(pVVar6,(HandleObject *)&local_68,false);
      }
    }
    else {
      if (cVar1 != '\x04') {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_xmlhttprequest.cpp"
                            ,0x3ee,"XMLHttpRequest_getResponse");
        __android_log_print(6,"jswrapper","Invalid response type");
        __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                            "XMLHttpRequest_getResponse",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_xmlhttprequest.cpp"
                            ,0x3f4);
        goto LAB_008fd6d0;
      }
      pOVar5 = (Object *)se::Object::createJSONObject((basic_string *)(lVar4 + 0x1e0));
      se::HandleObject::HandleObject((HandleObject *)&local_68,pOVar5);
      if (local_68 == 0) {
        pVVar6 = (Value *)se::State::rval(aSStack_60);
        se::Value::setNull(pVVar6);
      }
      else {
        pVVar6 = (Value *)se::State::rval(aSStack_60);
        se::Value::setObject(pVVar6,(HandleObject *)&local_68,false);
      }
    }
    se::HandleObject::~HandleObject((HandleObject *)&local_68);
  }
  else {
    pVVar6 = (Value *)se::State::rval(aSStack_60);
    se::Value::setNull(pVVar6);
  }
LAB_008fd6d0:
  pVVar6 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar6,param_2);
  se::State::~State(aSStack_60);
  v8::HandleScope::~HandleScope(aHStack_80);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

