
/* js_cls_set_strokeStyleRegistry(v8::Local<v8::Name>, v8::Local<v8::Value>,
   v8::PropertyCallbackInfo<void> const&) */

void js_cls_set_strokeStyleRegistry(undefined8 param_1,undefined8 param_2,long *param_3)

{
  bool bVar1;
  long lVar2;
  Value *pVVar3;
  Value *pVVar4;
  void *pvVar5;
  CanvasRenderingContext2D *this;
  long *plVar6;
  ulong uVar7;
  Isolate *pIVar8;
  Value *local_b8;
  Value *local_b0;
  Value *local_a8;
  HandleScope aHStack_a0 [24];
  ulong local_88;
  undefined8 local_80;
  void *local_78;
  State aSStack_70 [40];
  Value aVStack_48 [16];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*param_3 + 0x10);
  v8::HandleScope::HandleScope(aHStack_a0,pIVar8);
  pvVar5 = (void *)se::internal::getPrivate(pIVar8,*param_3 + 0x30);
  se::Value::Value(aVStack_48);
  se::internal::jsToSeValue(pIVar8,param_2,aVStack_48);
  local_b8 = (Value *)0x0;
  local_b0 = (Value *)0x0;
  local_a8 = (Value *)0x0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_b8,10);
  if (local_b0 < local_a8) {
    se::Value::Value(local_b0,aVStack_48);
    local_b0 = local_b0 + 0x10;
  }
  else {
    std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::
    __push_back_slow_path<se::Value>
              ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_b8,aVStack_48);
  }
  se::State::State(aSStack_70,pvVar5,(vector *)&local_b8);
  this = (CanvasRenderingContext2D *)se::State::nativeThisObject(aSStack_70);
  if (this == (CanvasRenderingContext2D *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_cocos2dx_manual.cpp"
                        ,0x19b,"js_cls_set_strokeStyle");
    __android_log_print(6,"jswrapper","js_#cls_set_#property : Invalid Native Object");
  }
  else {
    plVar6 = (long *)se::State::args(aSStack_70);
    if (plVar6[1] - *plVar6 == 0x10) {
      local_80 = 0;
      local_78 = (void *)0x0;
      local_88 = 0;
      uVar7 = seval_to_std_string((Value *)*plVar6,(basic_string *)&local_88);
      bVar1 = (uVar7 & 1) == 0;
      if (bVar1) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_cocos2dx_manual.cpp"
                            ,0x19b,"js_cls_set_strokeStyle");
        __android_log_print(6,"jswrapper","js_#cls_set_#property : Error processing arguments");
      }
      else {
        cocos2d::CanvasRenderingContext2D::set_strokeStyle(this,(basic_string *)&local_88);
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      if (!bVar1) goto LAB_008e68cc;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_cocos2dx_manual.cpp, 411): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar6[1] - *plVar6) >> 4,1);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cls_set_strokeStyle",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_cocos2dx_manual.cpp"
                      ,0x19b);
LAB_008e68cc:
  se::State::~State(aSStack_70);
  pVVar4 = local_b8;
  pVVar3 = local_b0;
  if (local_b8 != (Value *)0x0) {
    while (pVVar3 != pVVar4) {
      se::Value::~Value(pVVar3 + -0x10);
      pVVar3 = pVVar3 + -0x10;
    }
    local_b0 = pVVar4;
    operator_delete(local_b8);
  }
  se::Value::~Value(aVStack_48);
  v8::HandleScope::~HandleScope(aHStack_a0);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

