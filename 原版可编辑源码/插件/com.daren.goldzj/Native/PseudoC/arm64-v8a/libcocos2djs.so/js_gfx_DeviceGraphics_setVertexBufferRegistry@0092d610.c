
/* js_gfx_DeviceGraphics_setVertexBufferRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_gfx_DeviceGraphics_setVertexBufferRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  int iVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  void *pvVar7;
  DeviceGraphics *this;
  long *plVar8;
  Value *pVVar9;
  Object *pOVar10;
  VertexBuffer *pVVar11;
  long lVar12;
  Isolate *pIVar13;
  Value *local_b8;
  Value *local_b0;
  undefined8 local_a8;
  HandleScope aHStack_a0 [28];
  int local_84;
  State aSStack_80 [40];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar13 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a0,pIVar13);
  local_b8 = (Value *)0x0;
  local_b0 = (Value *)0x0;
  local_a8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_b8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_b8);
  pvVar7 = (void *)se::internal::getPrivate(pIVar13,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar7,(vector *)&local_b8);
  this = (DeviceGraphics *)se::State::nativeThisObject(aSStack_80);
  if (this == (DeviceGraphics *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                        ,0x2ae,"js_gfx_DeviceGraphics_setVertexBuffer");
    __android_log_print(6,"jswrapper",
                        "js_gfx_DeviceGraphics_setVertexBuffer : Invalid Native Object");
  }
  else {
    plVar8 = (long *)se::State::args(aSStack_80);
    pVVar9 = (Value *)*plVar8;
    lVar12 = plVar8[1] - (long)pVVar9 >> 4;
    if (lVar12 == 3) {
      local_84 = 0;
      bVar5 = seval_to_int32(pVVar9,&local_84);
      iVar3 = local_84;
      lVar12 = *plVar8;
      if (*(byte *)(lVar12 + 0x18) == 5) {
        pOVar10 = (Object *)se::Value::toObject((Value *)(lVar12 + 0x10));
        pVVar11 = (VertexBuffer *)se::Object::getPrivateData(pOVar10);
        lVar12 = *plVar8;
        bVar4 = pVVar11 == (VertexBuffer *)0x0;
      }
      else {
        bVar4 = 1 < *(byte *)(lVar12 + 0x18);
        pVVar11 = (VertexBuffer *)0x0;
      }
      local_84 = 0;
      bVar6 = seval_to_int32((Value *)(lVar12 + 0x20),&local_84);
      if ((bVar5 & !bVar4 & bVar6) != 0) {
        cocos2d::renderer::DeviceGraphics::setVertexBuffer(this,iVar3,pVVar11,local_84);
        goto LAB_0092d8f4;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                          ,0x2c2,"js_gfx_DeviceGraphics_setVertexBuffer");
      __android_log_print(6,"jswrapper",
                          "js_gfx_DeviceGraphics_setVertexBuffer : Error processing arguments");
    }
    else if (lVar12 == 2) {
      local_84 = 0;
      bVar5 = seval_to_int32(pVVar9,&local_84);
      iVar3 = local_84;
      bVar6 = *(byte *)(*plVar8 + 0x18);
      if (bVar6 == 5) {
        pOVar10 = (Object *)se::Value::toObject((Value *)(*plVar8 + 0x10));
        pVVar11 = (VertexBuffer *)se::Object::getPrivateData(pOVar10);
        if (pVVar11 != (VertexBuffer *)0x0) {
          bVar5 = bVar5 & 1;
          goto joined_r0x0092d82c;
        }
      }
      else {
        pVVar11 = (VertexBuffer *)0x0;
        bVar5 = bVar5 & bVar6 < 2;
joined_r0x0092d82c:
        if (bVar5 != 0) {
          cocos2d::renderer::DeviceGraphics::setVertexBuffer(this,iVar3,pVVar11,0);
          goto LAB_0092d8f4;
        }
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                          ,0x2b7,"js_gfx_DeviceGraphics_setVertexBuffer");
      __android_log_print(6,"jswrapper",
                          "js_gfx_DeviceGraphics_setVertexBuffer : Error processing arguments");
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp, 710): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar8[1] - (long)pVVar9) >> 4,3);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_gfx_DeviceGraphics_setVertexBuffer",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                      ,0x2c9);
LAB_0092d8f4:
  pVVar9 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_80);
  pVVar2 = local_b8;
  pVVar9 = local_b0;
  if (local_b8 != (Value *)0x0) {
    while (pVVar9 != pVVar2) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_b0 = pVVar2;
    operator_delete(local_b8);
  }
  v8::HandleScope::~HandleScope(aHStack_a0);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

