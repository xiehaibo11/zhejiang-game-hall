
/* js_renderer_Light_extractViewRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_Light_extractViewRegistry(FunctionCallbackInfo *param_1)

{
  bool bVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  Value *pVVar5;
  void *pvVar6;
  Light *this;
  long *plVar7;
  Value *pVVar8;
  Object *this_00;
  View *pVVar9;
  ulong uVar10;
  Isolate *pIVar11;
  byte *pbVar12;
  Value *local_b8;
  Value *local_b0;
  undefined8 local_a8;
  HandleScope aHStack_a0 [24];
  byte *local_88;
  byte *local_80;
  undefined8 uStack_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a0,pIVar11);
  local_b8 = (Value *)0x0;
  local_b0 = (Value *)0x0;
  local_a8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_b8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_b8);
  pvVar6 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar6,(vector *)&local_b8);
  this = (Light *)se::State::nativeThisObject(aSStack_70);
  if (this == (Light *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_renderer_manual.cpp"
                        ,0x9d,"js_renderer_Light_extractView");
    __android_log_print(6,"jswrapper","js_renderer_Light_extractView : Invalid Native Object");
  }
  else {
    plVar7 = (long *)se::State::args(aSStack_70);
    pVVar8 = (Value *)*plVar7;
    if (plVar7[1] - (long)pVVar8 == 0x20) {
      if (pVVar8[8] == (Value)0x5) {
        this_00 = (Object *)se::Value::toObject(pVVar8);
        pVVar9 = (View *)se::Object::getPrivateData(this_00);
        if (pVVar9 != (View *)0x0) {
LAB_0095d500:
          local_80 = (byte *)0x0;
          uStack_78 = 0;
          local_88 = (byte *)0x0;
          uVar10 = seval_to_std_vector_string((Value *)(*plVar7 + 0x10),(vector *)&local_88);
          bVar1 = (uVar10 & 1) == 0;
          if (bVar1) {
            __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_renderer_manual.cpp"
                                ,0xa8,"js_renderer_Light_extractView");
            __android_log_print(6,"jswrapper","Convert arg1 failed!");
            pbVar3 = local_88;
          }
          else {
            cocos2d::renderer::Light::extractView(this,pVVar9,(vector *)&local_88);
            pbVar3 = local_88;
          }
          local_88 = pbVar3;
          pbVar12 = local_80;
          if (pbVar3 != (byte *)0x0) {
            while (pbVar4 = pbVar12, pbVar4 != pbVar3) {
              pbVar12 = pbVar4 + -0x18;
              if ((*pbVar12 & 1) != 0) {
                operator_delete(*(void **)(pbVar4 + -8));
              }
            }
            local_80 = pbVar3;
            operator_delete(local_88);
          }
          if (!bVar1) goto LAB_0095d648;
          goto LAB_0095d61c;
        }
      }
      else if ((byte)pVVar8[8] < 2) {
        pVVar9 = (View *)0x0;
        goto LAB_0095d500;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_renderer_manual.cpp"
                          ,0xa4,"js_renderer_Light_extractView");
      __android_log_print(6,"jswrapper","Convert arg0 failed!");
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_renderer_manual.cpp, 173): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar7[1] - (long)pVVar8) >> 4,2);
    }
  }
LAB_0095d61c:
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_Light_extractView",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_renderer_manual.cpp"
                      ,0xb0);
LAB_0095d648:
  pVVar8 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_70);
  pVVar5 = local_b8;
  pVVar8 = local_b0;
  if (local_b8 != (Value *)0x0) {
    while (pVVar8 != pVVar5) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_b0 = pVVar5;
    operator_delete(local_b8);
  }
  v8::HandleScope::~HandleScope(aHStack_a0);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

