
/* js_gfx_Texture2D_updateRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_gfx_Texture2D_updateRegistry(FunctionCallbackInfo *param_1)

{
  bool bVar1;
  long lVar2;
  Value *pVVar3;
  void *pvVar4;
  Texture2D *this;
  long *plVar5;
  ulong uVar6;
  Value *pVVar7;
  long lVar8;
  Isolate *pIVar9;
  Value *local_d0;
  Value *local_c8;
  undefined8 local_c0;
  HandleScope aHStack_b8 [24];
  State aSStack_a0 [40];
  void *local_78;
  void *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_4a;
  undefined2 local_46;
  undefined1 local_44;
  undefined4 local_43;
  
  lVar2 = tpidr_el0;
  lVar8 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar9 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b8,pIVar9);
  local_d0 = (Value *)0x0;
  local_c8 = (Value *)0x0;
  local_c0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_d0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_d0);
  pvVar4 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_a0,pvVar4,(vector *)&local_d0);
  this = (Texture2D *)se::State::nativeThisObject(aSStack_a0);
  if (this == (Texture2D *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                        ,0x5ff,"js_gfx_Texture2D_update");
    __android_log_print(6,"jswrapper","js_gfx_Texture2D_update : Invalid Native Object");
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_a0);
    if (plVar5[1] - *plVar5 == 0x10) {
      local_50 = 0x40004;
      local_78 = (void *)0x0;
      local_70 = (void *)0x0;
      local_68 = 0;
      uStack_58 = 0x140100001907;
      local_60 = 0x190800000001;
      local_4c = 0;
      local_4a = 0x812f812f;
      local_46 = 0x101;
      local_44 = 1;
      local_43 = 0;
      uVar6 = seval_to_TextureOptions((Value *)*plVar5,(Options *)&local_78);
      bVar1 = (uVar6 & 1) == 0;
      if (bVar1) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                            ,0x606,"js_gfx_Texture2D_update");
        __android_log_print(6,"jswrapper","js_gfx_Texture2D_update : Error processing arguments");
      }
      else {
        cocos2d::renderer::Texture2D::update(this,(Options *)&local_78);
      }
      if (local_78 != (void *)0x0) {
        local_70 = local_78;
        operator_delete(local_78);
      }
      if (!bVar1) goto LAB_00934154;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp, 1546): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar5[1] - *plVar5) >> 4,1);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_gfx_Texture2D_update",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                      ,0x60d);
LAB_00934154:
  pVVar7 = (Value *)se::State::rval(aSStack_a0);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_a0);
  pVVar3 = local_d0;
  pVVar7 = local_c8;
  if (local_d0 != (Value *)0x0) {
    while (pVVar7 != pVVar3) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
    }
    local_c8 = pVVar3;
    operator_delete(local_d0);
  }
  v8::HandleScope::~HandleScope(aHStack_b8);
  if (*(long *)(lVar2 + 0x28) == lVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

