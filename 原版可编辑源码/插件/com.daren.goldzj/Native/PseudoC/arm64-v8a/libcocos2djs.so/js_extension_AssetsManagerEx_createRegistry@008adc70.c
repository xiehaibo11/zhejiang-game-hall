
/* js_extension_AssetsManagerEx_createRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_extension_AssetsManagerEx_createRegistry(FunctionCallbackInfo *param_1)

{
  bool bVar1;
  long lVar2;
  Value *pVVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  long *plVar7;
  Ref *this;
  Object *this_00;
  Value *pVVar8;
  Isolate *pIVar9;
  Value *local_c0;
  Value *local_b8;
  undefined8 local_b0;
  HandleScope aHStack_a8 [24];
  ulong local_90;
  undefined8 local_88;
  void *local_80;
  ulong local_78;
  undefined8 uStack_70;
  void *local_68;
  State aSStack_60 [40];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar9 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a8,pIVar9);
  local_c0 = (Value *)0x0;
  local_b8 = (Value *)0x0;
  local_b0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_c0);
  pvVar6 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar6,(vector *)&local_c0);
  plVar7 = (long *)se::State::args(aSStack_60);
  if (plVar7[1] - *plVar7 == 0x20) {
    local_78 = 0;
    uStack_70 = 0;
    local_68 = (void *)0x0;
    local_88 = 0;
    local_80 = (void *)0x0;
    local_90 = 0;
    uVar4 = seval_to_std_string((Value *)*plVar7,(basic_string *)&local_78);
    uVar5 = seval_to_std_string((Value *)(*plVar7 + 0x10),(basic_string *)&local_90);
    bVar1 = (uVar4 & uVar5 & 1) == 0;
    if (bVar1) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_extension_auto.cpp"
                          ,0x445,"js_extension_AssetsManagerEx_create");
      __android_log_print(6,"jswrapper",
                          "js_extension_AssetsManagerEx_create : Error processing arguments");
    }
    else {
      this = (Ref *)cocos2d::extension::AssetsManagerEx::create
                              ((basic_string *)&local_78,(basic_string *)&local_90);
      cocos2d::Ref::retain(this);
      this_00 = (Object *)
                se::Object::createObjectWithClass(__jsb_cocos2d_extension_AssetsManagerEx_class);
      se::Object::setPrivateData(this_00,this);
      pVVar8 = (Value *)se::State::rval(aSStack_60);
      se::Value::setObject(pVVar8,this_00,false);
    }
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    if (!bVar1) goto LAB_008ade68;
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_extension_auto.cpp, 1101): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar7[1] - *plVar7) >> 4,2);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_extension_AssetsManagerEx_create",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_extension_auto.cpp"
                      ,0x450);
LAB_008ade68:
  pVVar8 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_60);
  pVVar3 = local_c0;
  pVVar8 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar8 != pVVar3) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_b8 = pVVar3;
    operator_delete(local_c0);
  }
  v8::HandleScope::~HandleScope(aHStack_a8);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

