
/* js_gfx_DeviceGraphics_setUniformRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_gfx_DeviceGraphics_setUniformRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  bool bVar2;
  Value *pVVar3;
  uint uVar4;
  void *pvVar5;
  DeviceGraphics *this;
  long *plVar6;
  ulong uVar7;
  Object *this_00;
  ulong uVar8;
  Value *pVVar9;
  Isolate *pIVar10;
  float fVar11;
  Value *local_d8;
  Value *local_d0;
  undefined8 local_c8;
  HandleScope aHStack_c0 [24];
  ulong local_a8;
  uchar *puStack_a0;
  ulong local_98;
  ulong local_90;
  void *local_88;
  State aSStack_80 [40];
  __murmur2_or_cityhash<unsigned_long,64ul> a_Stack_58 [8];
  char local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_c0,pIVar10);
  local_d8 = (Value *)0x0;
  local_d0 = (Value *)0x0;
  local_c8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_d8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_d8);
  pvVar5 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar5,(vector *)&local_d8);
  this = (DeviceGraphics *)se::State::nativeThisObject(aSStack_80);
  if (this == (DeviceGraphics *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_gfx_manual.cpp"
                        ,0x75,"js_gfx_DeviceGraphics_setUniform");
    __android_log_print(6,"jswrapper","js_gfx_DeviceGraphics_setUniform : Invalid Native Object");
  }
  else {
    plVar6 = (long *)se::State::args(aSStack_80);
    if (plVar6[1] - *plVar6 == 0x20) {
      local_90 = 0;
      local_88 = (void *)0x0;
      local_98 = 0;
      uVar7 = seval_to_std_string((Value *)*plVar6,(basic_string *)&local_98);
      if ((uVar7 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_gfx_manual.cpp"
                            ,0x7c,"js_gfx_DeviceGraphics_setUniform");
        __android_log_print(6,"jswrapper","Convert uniform name failed!");
        bVar2 = false;
      }
      else {
        uVar7 = local_98 >> 1 & 0x7f;
        pvVar5 = (void *)((ulong)&local_98 | 1);
        if ((local_98 & 1) != 0) {
          uVar7 = local_90;
          pvVar5 = local_88;
        }
        uVar7 = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                          (a_Stack_58,pvVar5,uVar7);
        se::Value::Value((Value *)a_Stack_58,(Value *)(*plVar6 + 0x10));
        if (local_50 == '\x02') {
          fVar11 = (float)se::Value::toFloat((Value *)a_Stack_58);
          cocos2d::renderer::DeviceGraphics::setUniformf(this,uVar7,fVar11);
        }
        else if (local_50 == '\x03') {
          uVar4 = se::Value::toBoolean((Value *)a_Stack_58);
          cocos2d::renderer::DeviceGraphics::setUniformi(this,uVar7,uVar4 & 1);
        }
        else if (local_50 == '\x05') {
          this_00 = (Object *)se::Value::toObject((Value *)a_Stack_58);
          uVar8 = se::Object::isTypedArray(this_00);
          if ((uVar8 & 1) != 0) {
            local_a8 = 0;
            puStack_a0 = (uchar *)0x0;
            uVar8 = se::Object::getTypedArrayData(this_00,&puStack_a0,&local_a8);
            if ((uVar8 & 1) != 0) {
              cocos2d::renderer::DeviceGraphics::setUniform(this,uVar7,puStack_a0,local_a8,0,1);
            }
          }
        }
        se::Value::~Value((Value *)a_Stack_58);
        bVar2 = true;
      }
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
      }
      if (bVar2) goto LAB_00960798;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_gfx_manual.cpp, 161): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar6[1] - *plVar6) >> 4,2);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_gfx_DeviceGraphics_setUniform",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_gfx_manual.cpp"
                      ,0xa4);
LAB_00960798:
  pVVar9 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_80);
  pVVar3 = local_d8;
  pVVar9 = local_d0;
  if (local_d8 != (Value *)0x0) {
    while (pVVar9 != pVVar3) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_d0 = pVVar3;
    operator_delete(local_d8);
  }
  v8::HandleScope::~HandleScope(aHStack_c0);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

