
/* js_renderer_Camera_worldToScreenRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_Camera_worldToScreenRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  Camera *this;
  long *plVar4;
  ulong uVar5;
  Object *this_00;
  Value *pVVar6;
  Isolate *pIVar7;
  Value *local_c8;
  Value *local_c0;
  undefined8 local_b8;
  HandleScope aHStack_b0 [24];
  int local_98;
  int local_94;
  Vec3 aVStack_90 [16];
  float local_80;
  float local_7c;
  float local_78;
  State aSStack_70 [40];
  Value aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar7 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b0,pIVar7);
  local_c8 = (Value *)0x0;
  local_c0 = (Value *)0x0;
  local_b8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_c8);
  pvVar3 = (void *)se::internal::getPrivate(pIVar7,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar3,(vector *)&local_c8);
  this = (Camera *)se::State::nativeThisObject(aSStack_70);
  if (this == (Camera *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_renderer_manual.cpp"
                        ,0x74,"js_renderer_Camera_worldToScreen");
    __android_log_print(6,"jswrapper","js_renderer_Camera_worldToScreen : Invalid Native Object");
  }
  else {
    plVar4 = (long *)se::State::args(aSStack_70);
    if (plVar4[1] - *plVar4 == 0x40) {
      cocos2d::Vec3::Vec3((Vec3 *)&local_80);
      cocos2d::Vec3::Vec3(aVStack_90);
      uVar5 = seval_to_Vec3((Value *)(*plVar4 + 0x10),aVStack_90);
      if ((uVar5 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_renderer_manual.cpp"
                            ,0x7c,"js_renderer_Camera_worldToScreen");
        __android_log_print(6,"jswrapper","Convert arg1 failed!");
      }
      else {
        local_94 = 0;
        uVar5 = seval_to_int32((Value *)(*plVar4 + 0x20),&local_94);
        if ((uVar5 & 1) == 0) {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_renderer_manual.cpp"
                              ,0x7f,"js_renderer_Camera_worldToScreen");
          __android_log_print(6,"jswrapper","Convert arg2 failed!");
        }
        else {
          local_98 = 0;
          uVar5 = seval_to_int32((Value *)(*plVar4 + 0x30),&local_98);
          if ((uVar5 & 1) != 0) {
            cocos2d::renderer::Camera::worldToScreen
                      (this,(Vec3 *)&local_80,aVStack_90,local_94,local_98);
            this_00 = (Object *)se::Value::toObject((Value *)*plVar4);
            se::Value::Value(aVStack_48,local_80);
            se::Object::setProperty(this_00,"x",aVStack_48);
            se::Value::~Value(aVStack_48);
            se::Value::Value(aVStack_48,local_7c);
            se::Object::setProperty(this_00,"y",aVStack_48);
            se::Value::~Value(aVStack_48);
            se::Value::Value(aVStack_48,local_78);
            se::Object::setProperty(this_00,"z",aVStack_48);
            se::Value::~Value(aVStack_48);
            pVVar6 = (Value *)se::State::rval(aSStack_70);
            se::Value::setObject(pVVar6,this_00,false);
            cocos2d::Vec3::~Vec3(aVStack_90);
            cocos2d::Vec3::~Vec3((Vec3 *)&local_80);
            goto LAB_0095d050;
          }
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_renderer_manual.cpp"
                              ,0x82,"js_renderer_Camera_worldToScreen");
          __android_log_print(6,"jswrapper","Convert arg3 failed!");
        }
      }
      cocos2d::Vec3::~Vec3(aVStack_90);
      cocos2d::Vec3::~Vec3((Vec3 *)&local_80);
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_renderer_manual.cpp, 139): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar4[1] - *plVar4) >> 4,4);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_Camera_worldToScreen",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_renderer_manual.cpp"
                      ,0x8e);
LAB_0095d050:
  pVVar6 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_c8;
  pVVar6 = local_c0;
  if (local_c8 != (Value *)0x0) {
    while (pVVar6 != pVVar2) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_c0 = pVVar2;
    operator_delete(local_c8);
  }
  v8::HandleScope::~HandleScope(aHStack_b0);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

