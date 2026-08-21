
/* js_gfx_Texture2D_initRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_gfx_Texture2D_initRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  byte bVar4;
  void *pvVar5;
  Texture2D *this;
  long *plVar6;
  Value *pVVar7;
  Object *this_00;
  DeviceGraphics *pDVar8;
  ulong uVar9;
  long lVar10;
  Isolate *pIVar11;
  Value *local_e0;
  Value *local_d8;
  undefined8 local_d0;
  HandleScope aHStack_c8 [24];
  State aSStack_b0 [40];
  void *local_88;
  void *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_5a;
  undefined2 local_56;
  undefined1 local_54;
  undefined4 local_53;
  
  lVar1 = tpidr_el0;
  lVar10 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_c8,pIVar11);
  local_e0 = (Value *)0x0;
  local_d8 = (Value *)0x0;
  local_d0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_e0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_e0);
  pvVar5 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_b0,pvVar5,(vector *)&local_e0);
  this = (Texture2D *)se::State::nativeThisObject(aSStack_b0);
  if (this == (Texture2D *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                        ,0x5d5,"js_gfx_Texture2D_init");
    __android_log_print(6,"jswrapper","js_gfx_Texture2D_init : Invalid Native Object");
  }
  else {
    plVar6 = (long *)se::State::args(aSStack_b0);
    if (plVar6[1] - *plVar6 == 0x20) {
      local_60 = 0x40004;
      local_88 = (void *)0x0;
      local_80 = (void *)0x0;
      local_78 = 0;
      uStack_68 = 0x140100001907;
      local_70 = 0x190800000001;
      local_5c = 0;
      local_5a = 0x812f812f;
      local_56 = 0x101;
      local_54 = 1;
      local_53 = 0;
      pVVar7 = (Value *)*plVar6;
      if (pVVar7[8] == (Value)0x5) {
        this_00 = (Object *)se::Value::toObject(pVVar7);
        pDVar8 = (DeviceGraphics *)se::Object::getPrivateData(this_00);
        pVVar7 = (Value *)*plVar6;
        bVar3 = pDVar8 == (DeviceGraphics *)0x0;
      }
      else {
        bVar3 = 1 < (byte)pVVar7[8];
        pDVar8 = (DeviceGraphics *)0x0;
      }
      bVar4 = seval_to_TextureOptions(pVVar7 + 0x10,(Options *)&local_88);
      if ((!bVar3 & bVar4) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                            ,0x5de,"js_gfx_Texture2D_init");
        __android_log_print(6,"jswrapper","js_gfx_Texture2D_init : Error processing arguments");
LAB_00933b80:
        bVar3 = false;
      }
      else {
        bVar4 = cocos2d::renderer::Texture2D::init(this,pDVar8,(Options *)&local_88);
        pVVar7 = (Value *)se::State::rval(aSStack_b0);
        uVar9 = boolean_to_seval((bool)(bVar4 & 1),pVVar7);
        if ((uVar9 & 1) == 0) {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                              ,0x5e1,"js_gfx_Texture2D_init");
          __android_log_print(6,"jswrapper","js_gfx_Texture2D_init : Error processing arguments");
          goto LAB_00933b80;
        }
        bVar3 = true;
      }
      if (local_88 != (void *)0x0) {
        local_80 = local_88;
        operator_delete(local_88);
      }
      if (bVar3) goto LAB_00933bc4;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp, 1508): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar6[1] - *plVar6) >> 4,2);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_gfx_Texture2D_init",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                      ,0x5e7);
LAB_00933bc4:
  pVVar7 = (Value *)se::State::rval(aSStack_b0);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_b0);
  pVVar2 = local_e0;
  pVVar7 = local_d8;
  if (local_e0 != (Value *)0x0) {
    while (pVVar7 != pVVar2) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
    }
    local_d8 = pVVar2;
    operator_delete(local_e0);
  }
  v8::HandleScope::~HandleScope(aHStack_c8);
  if (*(long *)(lVar1 + 0x28) == lVar10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

