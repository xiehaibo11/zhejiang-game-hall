
/* js_gfx_DeviceGraphics_setBlendColorRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_gfx_DeviceGraphics_setBlendColorRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  DeviceGraphics *this;
  long *plVar4;
  Value *pVVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  Isolate *pIVar9;
  Value *local_b0;
  Value *local_a8;
  undefined8 local_a0;
  HandleScope aHStack_98 [24];
  uint local_80;
  uchar local_7c [4];
  uchar local_78 [4];
  uchar local_74 [4];
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
  pvVar3 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar3,(vector *)&local_b0);
  this = (DeviceGraphics *)se::State::nativeThisObject(aSStack_70);
  if (this == (DeviceGraphics *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                        ,0x26d,"js_gfx_DeviceGraphics_setBlendColor");
    __android_log_print(6,"jswrapper","js_gfx_DeviceGraphics_setBlendColor : Invalid Native Object")
    ;
  }
  else {
    plVar4 = (long *)se::State::args(aSStack_70);
    pVVar5 = (Value *)*plVar4;
    lVar7 = plVar4[1];
    lVar8 = lVar7 - (long)pVVar5 >> 4;
    if (lVar8 == 1) {
      local_80 = 0;
      uVar6 = seval_to_uint32(pVVar5,&local_80);
      if ((uVar6 & 1) != 0) {
        cocos2d::renderer::DeviceGraphics::setBlendColor(this,local_80);
        goto LAB_0092d1e8;
      }
    }
    else if ((((lVar8 == 4) && (uVar6 = seval_to_uint8(pVVar5,(uchar *)&local_80), (uVar6 & 1) != 0)
              ) && (uVar6 = seval_to_uint8((Value *)(*plVar4 + 0x10),local_74), (uVar6 & 1) != 0))
            && ((uVar6 = seval_to_uint8((Value *)(*plVar4 + 0x20),local_78), (uVar6 & 1) != 0 &&
                (uVar6 = seval_to_uint8((Value *)(*plVar4 + 0x30),local_7c), (uVar6 & 1) != 0)))) {
      cocos2d::renderer::DeviceGraphics::setBlendColor
                (this,(uchar)local_80,local_74[0],local_78[0],local_7c[0]);
      goto LAB_0092d1e8;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp, 653): wrong number of arguments: %d\n"
                        ,(ulong)(lVar7 - (long)pVVar5) >> 4);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_gfx_DeviceGraphics_setBlendColor",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                      ,0x290);
LAB_0092d1e8:
  pVVar5 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar5,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_b0;
  pVVar5 = local_a8;
  if (local_b0 != (Value *)0x0) {
    while (pVVar5 != pVVar2) {
      se::Value::~Value(pVVar5 + -0x10);
      pVVar5 = pVVar5 + -0x10;
    }
    local_a8 = pVVar2;
    operator_delete(local_b0);
  }
  v8::HandleScope::~HandleScope(aHStack_98);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

