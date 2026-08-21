
/* js_gfx_Texture2D_updateSubImageRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_gfx_Texture2D_updateSubImageRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  Texture2D *this;
  long *plVar4;
  ulong uVar5;
  Value *pVVar6;
  Isolate *pIVar7;
  Value *local_b0;
  Value *local_a8;
  undefined8 local_a0;
  HandleScope aHStack_98 [24];
  State aSStack_80 [40];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined2 local_40;
  undefined1 local_3e;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar7 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_98,pIVar7);
  local_b0 = (Value *)0x0;
  local_a8 = (Value *)0x0;
  local_a0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_b0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_b0);
  pvVar3 = (void *)se::internal::getPrivate(pIVar7,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar3,(vector *)&local_b0);
  this = (Texture2D *)se::State::nativeThisObject(aSStack_80);
  if (this == (Texture2D *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                        ,0x5ec,"js_gfx_Texture2D_updateSubImage");
    __android_log_print(6,"jswrapper","js_gfx_Texture2D_updateSubImage : Invalid Native Object");
  }
  else {
    plVar4 = (long *)se::State::args(aSStack_80);
    if (plVar4[1] - *plVar4 == 0x10) {
      local_50 = 0;
      local_58 = 0;
      local_3e = 0;
      local_40 = 0;
      local_48 = 0;
      uVar5 = seval_to_TextureSubImageOption((Value *)*plVar4,(SubImageOption *)&local_58);
      if ((uVar5 & 1) != 0) {
        cocos2d::renderer::Texture2D::updateSubImage(this,(SubImageOption *)&local_58);
        goto LAB_00933e9c;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                          ,0x5f3,"js_gfx_Texture2D_updateSubImage");
      __android_log_print(6,"jswrapper",
                          "js_gfx_Texture2D_updateSubImage : Error processing arguments");
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp, 1527): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar4[1] - *plVar4) >> 4,1);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_gfx_Texture2D_updateSubImage",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                      ,0x5fa);
LAB_00933e9c:
  pVVar6 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_80);
  pVVar2 = local_b0;
  pVVar6 = local_a8;
  if (local_b0 != (Value *)0x0) {
    while (pVVar6 != pVVar2) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_a8 = pVVar2;
    operator_delete(local_b0);
  }
  v8::HandleScope::~HandleScope(aHStack_98);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

