
/* js_gfx_DeviceGraphics_drawRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_gfx_DeviceGraphics_drawRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  DeviceGraphics *this;
  long *plVar6;
  Value *pVVar7;
  ulong uVar8;
  Isolate *pIVar9;
  Value *local_b0;
  Value *local_a8;
  undefined8 local_a0;
  HandleScope aHStack_98 [28];
  int local_7c;
  ulong local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar9 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_98,pIVar9);
  local_b0 = (Value *)0x0;
  local_a8 = (Value *)0x0;
  local_a0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_b0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_b0);
  pvVar5 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar5,(vector *)&local_b0);
  this = (DeviceGraphics *)se::State::nativeThisObject(aSStack_70);
  if (this == (DeviceGraphics *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                        ,0x321,"js_gfx_DeviceGraphics_draw");
    __android_log_print(6,"jswrapper","js_gfx_DeviceGraphics_draw : Invalid Native Object");
  }
  else {
    plVar6 = (long *)se::State::args(aSStack_70);
    uVar8 = plVar6[1] - *plVar6;
    if (uVar8 == 0x20) {
      local_78 = 0;
      uVar3 = seval_to_size((Value *)*plVar6,&local_78);
      local_7c = 0;
      uVar4 = seval_to_int32((Value *)(*plVar6 + 0x10),&local_7c);
      if ((uVar3 & uVar4 & 1) != 0) {
        cocos2d::renderer::DeviceGraphics::draw(this,local_78,local_7c);
        goto LAB_0092e6a0;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                          ,0x32a,"js_gfx_DeviceGraphics_draw");
      __android_log_print(6,"jswrapper","js_gfx_DeviceGraphics_draw : Error processing arguments");
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp, 814): wrong number of arguments: %d, was expecting %d\n"
                          ,uVar8 >> 4,2);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_gfx_DeviceGraphics_draw",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                      ,0x331);
LAB_0092e6a0:
  pVVar7 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_b0;
  pVVar7 = local_a8;
  if (local_b0 != (Value *)0x0) {
    while (pVVar7 != pVVar2) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
    }
    local_a8 = pVVar2;
    operator_delete(local_b0);
  }
  v8::HandleScope::~HandleScope(aHStack_98);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

