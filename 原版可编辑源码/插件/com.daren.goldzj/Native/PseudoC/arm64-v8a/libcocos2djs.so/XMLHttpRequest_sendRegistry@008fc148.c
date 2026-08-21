
/* XMLHttpRequest_sendRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void XMLHttpRequest_sendRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  Value VVar4;
  long lVar5;
  Value *pVVar6;
  void *pvVar7;
  long *plVar8;
  XMLHttpRequest *this;
  byte *pbVar9;
  Object *this_00;
  ulong uVar10;
  char *pcVar11;
  Value *pVVar12;
  Isolate *pIVar13;
  Value *local_c0;
  Value *local_b8;
  undefined8 local_b0;
  HandleScope aHStack_a8 [24];
  Data aDStack_90 [16];
  ulong local_80;
  uchar *puStack_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar13 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a8,pIVar13);
  local_c0 = (Value *)0x0;
  local_b8 = (Value *)0x0;
  local_b0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_c0);
  pvVar7 = (void *)se::internal::getPrivate(pIVar13,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar7,(vector *)&local_c0);
  plVar8 = (long *)se::State::args(aSStack_70);
  lVar1 = *plVar8;
  lVar2 = plVar8[1];
  this = (XMLHttpRequest *)se::State::nativeThisObject(aSStack_70);
  if (lVar2 == lVar1) {
    XMLHttpRequest::sendRequest(this);
    goto LAB_008fc340;
  }
  pVVar12 = (Value *)*plVar8;
  VVar4 = pVVar12[8];
  if ((byte)VVar4 < 2) {
    XMLHttpRequest::sendRequest(this);
    goto LAB_008fc340;
  }
  if (VVar4 == (Value)0x3) {
    pcVar11 = "boolean";
LAB_008fc2fc:
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_xmlhttprequest.cpp, 834): args[0] type: %s isn\'t supported!\n"
                        ,pcVar11);
  }
  else {
    if (VVar4 != (Value)0x5) {
      if (VVar4 == (Value)0x4) {
        pbVar9 = (byte *)se::Value::toString(pVVar12);
        uVar10 = *(ulong *)(pbVar9 + 8);
        pbVar3 = *(byte **)(pbVar9 + 0x10);
        if ((*pbVar9 & 1) == 0) {
          pbVar3 = pbVar9 + 1;
          uVar10 = (ulong)(*pbVar9 >> 1);
        }
        XMLHttpRequest::setHttpRequestData(this,(char *)pbVar3,uVar10);
        XMLHttpRequest::sendRequest(this);
        goto LAB_008fc340;
      }
      pcVar11 = "number";
      if (VVar4 != (Value)0x2) {
        pcVar11 = "UNKNOWN";
      }
      goto LAB_008fc2fc;
    }
    this_00 = (Object *)se::Value::toObject(pVVar12);
    uVar10 = se::Object::isTypedArray(this_00);
    if ((uVar10 & 1) == 0) {
      uVar10 = se::Object::isArrayBuffer(this_00);
      if ((uVar10 & 1) == 0) {
        __android_log_print(6,"jswrapper",
                            "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_xmlhttprequest.cpp, 822): args[0] isn\'t a typed array or an array buffer\n"
                           );
      }
      else {
        local_80 = 0;
        puStack_78 = (uchar *)0x0;
        uVar10 = se::Object::getArrayBufferData(this_00,&puStack_78,&local_80);
        if ((uVar10 & 1) != 0) {
          cocos2d::Data::Data(aDStack_90);
          cocos2d::Data::copy(aDStack_90,puStack_78,local_80);
          pcVar11 = (char *)cocos2d::Data::getBytes(aDStack_90);
          uVar10 = cocos2d::Data::getSize(aDStack_90);
          XMLHttpRequest::setHttpRequestData(this,pcVar11,uVar10);
          XMLHttpRequest::sendRequest(this);
          goto LAB_008fc428;
        }
        __android_log_print(6,"jswrapper",
                            "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_xmlhttprequest.cpp, 816): Failed to get data of ArrayBufferObject!\n"
                           );
      }
    }
    else {
      local_80 = 0;
      puStack_78 = (uchar *)0x0;
      uVar10 = se::Object::getTypedArrayData(this_00,&puStack_78,&local_80);
      if ((uVar10 & 1) != 0) {
        cocos2d::Data::Data(aDStack_90);
        cocos2d::Data::copy(aDStack_90,puStack_78,local_80);
        pcVar11 = (char *)cocos2d::Data::getBytes(aDStack_90);
        uVar10 = cocos2d::Data::getSize(aDStack_90);
        XMLHttpRequest::setHttpRequestData(this,pcVar11,uVar10);
        XMLHttpRequest::sendRequest(this);
LAB_008fc428:
        cocos2d::Data::~Data(aDStack_90);
        goto LAB_008fc340;
      }
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_xmlhttprequest.cpp, 800): Failed to get data of TypedArray!\n"
                         );
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "XMLHttpRequest_send",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_xmlhttprequest.cpp"
                      ,0x349);
LAB_008fc340:
  pVVar12 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar12,param_1);
  se::State::~State(aSStack_70);
  pVVar6 = local_c0;
  pVVar12 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar12 != pVVar6) {
      se::Value::~Value(pVVar12 + -0x10);
      pVVar12 = pVVar12 + -0x10;
    }
    local_b8 = pVVar6;
    operator_delete(local_c0);
  }
  v8::HandleScope::~HandleScope(aHStack_a8);
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

