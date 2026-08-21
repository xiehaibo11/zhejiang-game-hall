
/* js_gfx_FrameBuffer_initRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_gfx_FrameBuffer_initRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  void *pvVar7;
  FrameBuffer *this;
  long *plVar8;
  Value *pVVar9;
  Object *pOVar10;
  DeviceGraphics *pDVar11;
  ulong uVar12;
  Object *pOVar13;
  RenderTarget *pRVar14;
  Isolate *pIVar15;
  Value *local_110;
  Value *local_108;
  undefined8 local_100;
  HandleScope aHStack_f8 [24];
  long *local_e0;
  long *local_d8;
  long *plStack_d0;
  ushort local_c8 [2];
  ushort local_c4 [2];
  State aSStack_c0 [40];
  uint local_98 [2];
  char local_90;
  RenderTarget *local_88;
  char local_80;
  Value aVStack_78 [8];
  char local_70;
  Value aVStack_68 [8];
  char local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar15 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_f8,pIVar15);
  local_110 = (Value *)0x0;
  local_108 = (Value *)0x0;
  local_100 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_110,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_110);
  pvVar7 = (void *)se::internal::getPrivate(pIVar15,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_c0,pvVar7,(vector *)&local_110);
  this = (FrameBuffer *)se::State::nativeThisObject(aSStack_c0);
  if (this == (FrameBuffer *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_gfx_manual.cpp"
                        ,0x304,"js_gfx_FrameBuffer_init");
    __android_log_print(6,"jswrapper","js_gfx_FrameBuffer_init : Invalid Native Object");
  }
  else {
    plVar8 = (long *)se::State::args(aSStack_c0);
    pVVar9 = (Value *)*plVar8;
    if (plVar8[1] - (long)pVVar9 == 0x40) {
      local_c4[0] = 0;
      local_c8[0] = 0;
      if (pVVar9[8] == (Value)0x5) {
        pOVar10 = (Object *)se::Value::toObject(pVVar9);
        pDVar11 = (DeviceGraphics *)se::Object::getPrivateData(pOVar10);
        pVVar9 = (Value *)*plVar8;
        bVar3 = pDVar11 == (DeviceGraphics *)0x0;
      }
      else {
        bVar3 = 1 < (byte)pVVar9[8];
        pDVar11 = (DeviceGraphics *)0x0;
      }
      bVar4 = seval_to_uint16(pVVar9 + 0x10,local_c4);
      bVar5 = seval_to_uint16((Value *)(*plVar8 + 0x20),local_c8);
      if ((!bVar3 & bVar4 & bVar5) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_gfx_manual.cpp"
                            ,0x30f,"js_gfx_FrameBuffer_init");
        __android_log_print(6,"jswrapper","js_gfx_FrameBuffer_init : Error processing arguments");
      }
      else if (*(char *)(*plVar8 + 0x38) == '\x05') {
        local_d8 = (long *)0x0;
        plStack_d0 = (long *)0x0;
        local_e0 = (long *)0x0;
        pOVar10 = (Object *)se::Value::toObject((Value *)(*plVar8 + 0x30));
        se::Value::Value(aVStack_68);
        bVar4 = cocos2d::renderer::FrameBuffer::init(this,pDVar11,local_c4[0],local_c8[0]);
        pVVar9 = (Value *)se::State::rval(aSStack_c0);
        uVar12 = boolean_to_seval((bool)(bVar4 & 1),pVVar9);
        if ((uVar12 & 1) == 0) {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_gfx_manual.cpp"
                              ,0x31b,"js_gfx_FrameBuffer_init");
          __android_log_print(6,"jswrapper","js_gfx_FrameBuffer_init : Error processing arguments");
          bVar3 = false;
        }
        else {
          uVar12 = se::Object::getProperty(pOVar10,"colors",aVStack_68);
          if (((uVar12 & 1) != 0) && (local_60 == '\x05')) {
            pOVar13 = (Object *)se::Value::toObject(aVStack_68);
            uVar12 = se::Object::isArray(pOVar13);
            if ((uVar12 & 1) != 0) {
              local_98[0] = 0;
              pOVar13 = (Object *)se::Value::toObject(aVStack_68);
              uVar6 = se::Object::getArrayLength(pOVar13,local_98);
              if (local_98[0] != 0 && ((uVar6 ^ 0xffffffff) & 1) == 0) {
                uVar6 = 0;
                do {
                  local_88 = (RenderTarget *)0x0;
                  se::Value::Value(aVStack_78);
                  pOVar13 = (Object *)se::Value::toObject(aVStack_68);
                  se::Object::getArrayElement(pOVar13,uVar6,aVStack_78);
                  if (local_70 == '\x05') {
                    pOVar13 = (Object *)se::Value::toObject(aVStack_78);
                    pRVar14 = (RenderTarget *)se::Object::getPrivateData(pOVar13);
                    local_88 = pRVar14;
                    if (pRVar14 == (RenderTarget *)0x0) goto LAB_0096468c;
                  }
                  else {
                    pRVar14 = (RenderTarget *)0x0;
LAB_0096468c:
                    local_88 = (RenderTarget *)0x0;
                  }
                  if (local_d8 == plStack_d0) {
                    std::__ndk1::
                    vector<cocos2d::renderer::RenderTarget*,std::__ndk1::allocator<cocos2d::renderer::RenderTarget*>>
                    ::__push_back_slow_path<cocos2d::renderer::RenderTarget*const&>
                              ((vector<cocos2d::renderer::RenderTarget*,std::__ndk1::allocator<cocos2d::renderer::RenderTarget*>>
                                *)&local_e0,&local_88);
                  }
                  else {
                    *local_d8 = (long)pRVar14;
                    local_d8 = local_d8 + 1;
                  }
                  se::Value::~Value(aVStack_78);
                  uVar6 = uVar6 + 1;
                } while (uVar6 < local_98[0]);
                cocos2d::renderer::FrameBuffer::setColorBuffers(this,(vector *)&local_e0);
              }
            }
          }
          se::Value::Value(aVStack_78);
          uVar12 = se::Object::getProperty(pOVar10,"depth",aVStack_78);
          if (((uVar12 & 1) != 0) && (local_70 == '\x05')) {
            pOVar13 = (Object *)se::Value::toObject(aVStack_78);
            pRVar14 = (RenderTarget *)se::Object::getPrivateData(pOVar13);
            cocos2d::renderer::FrameBuffer::setDepthBuffer(this,pRVar14);
          }
          se::Value::Value((Value *)&local_88);
          uVar12 = se::Object::getProperty(pOVar10,"stencil",(Value *)&local_88);
          if (((uVar12 & 1) != 0) && (local_80 == '\x05')) {
            pOVar13 = (Object *)se::Value::toObject((Value *)&local_88);
            pRVar14 = (RenderTarget *)se::Object::getPrivateData(pOVar13);
            cocos2d::renderer::FrameBuffer::setStencilBuffer(this,pRVar14);
          }
          se::Value::Value((Value *)local_98);
          uVar12 = se::Object::getProperty(pOVar10,"depthStencil",(Value *)local_98);
          if (((uVar12 & 1) != 0) && (local_90 == '\x05')) {
            pOVar10 = (Object *)se::Value::toObject((Value *)local_98);
            pRVar14 = (RenderTarget *)se::Object::getPrivateData(pOVar10);
            cocos2d::renderer::FrameBuffer::setDepthStencilBuffer(this,pRVar14);
          }
          se::Value::~Value((Value *)local_98);
          se::Value::~Value((Value *)&local_88);
          se::Value::~Value(aVStack_78);
          bVar3 = true;
        }
        se::Value::~Value(aVStack_68);
        if (local_e0 != (long *)0x0) {
          local_d8 = local_e0;
          operator_delete(local_e0);
        }
        if (bVar3) goto LAB_009648ec;
      }
      else {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_gfx_manual.cpp"
                            ,0x310,"js_gfx_FrameBuffer_init");
        __android_log_print(6,"jswrapper","options argument isn\'t an object!");
      }
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_gfx_manual.cpp, 838): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar8[1] - (long)pVVar9) >> 4,4);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_gfx_FrameBuffer_init",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_gfx_manual.cpp"
                      ,0x349);
LAB_009648ec:
  pVVar9 = (Value *)se::State::rval(aSStack_c0);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_c0);
  pVVar2 = local_110;
  pVVar9 = local_108;
  if (local_110 != (Value *)0x0) {
    while (pVVar9 != pVVar2) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_108 = pVVar2;
    operator_delete(local_110);
  }
  v8::HandleScope::~HandleScope(aHStack_f8);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

