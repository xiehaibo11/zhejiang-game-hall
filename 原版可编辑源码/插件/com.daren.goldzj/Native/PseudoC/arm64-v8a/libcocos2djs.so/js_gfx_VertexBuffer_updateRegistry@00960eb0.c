
/* js_gfx_VertexBuffer_updateRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_gfx_VertexBuffer_updateRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  VertexBuffer *this;
  long *plVar4;
  Object *this_00;
  Value *pVVar5;
  ulong uVar6;
  Isolate *pIVar7;
  Value *local_a8;
  Value *local_a0;
  undefined8 local_98;
  HandleScope aHStack_90 [24];
  ulong local_78;
  uchar *puStack_70;
  uint local_64;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar7 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar7);
  local_a8 = (Value *)0x0;
  local_a0 = (Value *)0x0;
  local_98 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar3 = (void *)se::internal::getPrivate(pIVar7,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar3,(vector *)&local_a8);
  this = (VertexBuffer *)se::State::nativeThisObject(aSStack_60);
  if (this == (VertexBuffer *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_gfx_manual.cpp"
                        ,0x113,"js_gfx_VertexBuffer_update");
    __android_log_print(6,"jswrapper","js_gfx_VertexBuffer_update : Invalid Native Object");
  }
  else {
    plVar4 = (long *)se::State::args(aSStack_60);
    uVar6 = plVar4[1] - *plVar4;
    if (uVar6 == 0x20) {
      local_64 = 0;
      uVar6 = seval_to_uint32((Value *)*plVar4,&local_64);
      if ((uVar6 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_gfx_manual.cpp"
                            ,0x11a,"js_gfx_VertexBuffer_update");
        __android_log_print(6,"jswrapper","Convert arg0 offset failed!");
      }
      else if (*(char *)(*plVar4 + 0x18) == '\x05') {
        this_00 = (Object *)se::Value::toObject((Value *)(*plVar4 + 0x10));
        uVar6 = se::Object::isTypedArray(this_00);
        if ((uVar6 & 1) == 0) {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_gfx_manual.cpp"
                              ,0x12d,"js_gfx_VertexBuffer_update");
          __android_log_print(6,"jswrapper","arg1 isn\'t a typed array!");
        }
        else {
          local_78 = 0;
          puStack_70 = (uchar *)0x0;
          uVar6 = se::Object::getTypedArrayData(this_00,&puStack_70,&local_78);
          if ((uVar6 & 1) != 0) {
            cocos2d::renderer::VertexBuffer::update(this,local_64,puStack_70,local_78);
            goto LAB_00961180;
          }
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_gfx_manual.cpp"
                              ,0x128,"js_gfx_VertexBuffer_update");
          __android_log_print(6,"jswrapper","get typed array data failed!");
        }
      }
      else {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_gfx_manual.cpp"
                            ,0x132,"js_gfx_VertexBuffer_update");
        __android_log_print(6,"jswrapper","arg1 isn\'t an object!");
      }
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_gfx_manual.cpp, 312): wrong number of arguments: %d, was expecting %d\n"
                          ,uVar6 >> 4,5);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_gfx_VertexBuffer_update",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_gfx_manual.cpp"
                      ,0x13b);
LAB_00961180:
  pVVar5 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar5,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_a8;
  pVVar5 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar5 != pVVar2) {
      se::Value::~Value(pVVar5 + -0x10);
      pVVar5 = pVVar5 + -0x10;
    }
    local_a0 = pVVar2;
    operator_delete(local_a8);
  }
  v8::HandleScope::~HandleScope(aHStack_90);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

