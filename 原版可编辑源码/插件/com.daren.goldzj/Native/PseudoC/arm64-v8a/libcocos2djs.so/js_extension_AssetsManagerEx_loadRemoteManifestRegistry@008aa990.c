
/* js_extension_AssetsManagerEx_loadRemoteManifestRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_extension_AssetsManagerEx_loadRemoteManifestRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  byte bVar3;
  void *pvVar4;
  AssetsManagerEx *this;
  undefined8 *puVar5;
  Value *pVVar6;
  Object *this_00;
  Manifest *pMVar7;
  ulong uVar8;
  Isolate *pIVar9;
  Value *local_90;
  Value *local_88;
  undefined8 local_80;
  HandleScope aHStack_78 [24];
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar9 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_78,pIVar9);
  local_90 = (Value *)0x0;
  local_88 = (Value *)0x0;
  local_80 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_90,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_90);
  pvVar4 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar4,(vector *)&local_90);
  this = (AssetsManagerEx *)se::State::nativeThisObject(aSStack_60);
  if (this == (AssetsManagerEx *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_extension_auto.cpp"
                        ,0x2ad,"js_extension_AssetsManagerEx_loadRemoteManifest");
    __android_log_print(6,"jswrapper",
                        "js_extension_AssetsManagerEx_loadRemoteManifest : Invalid Native Object");
  }
  else {
    puVar5 = (undefined8 *)se::State::args(aSStack_60);
    pVVar6 = (Value *)*puVar5;
    if (puVar5[1] - (long)pVVar6 == 0x10) {
      if (pVVar6[8] == (Value)0x5) {
        this_00 = (Object *)se::Value::toObject(pVVar6);
        pMVar7 = (Manifest *)se::Object::getPrivateData(this_00);
        if (pMVar7 != (Manifest *)0x0) {
LAB_008aaae4:
          bVar3 = cocos2d::extension::AssetsManagerEx::loadRemoteManifest(this,pMVar7);
          pVVar6 = (Value *)se::State::rval(aSStack_60);
          uVar8 = boolean_to_seval((bool)(bVar3 & 1),pVVar6);
          if ((uVar8 & 1) != 0) goto LAB_008aabc0;
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_extension_auto.cpp"
                              ,0x2b7,"js_extension_AssetsManagerEx_loadRemoteManifest");
          __android_log_print(6,"jswrapper",
                              "js_extension_AssetsManagerEx_loadRemoteManifest : Error processing arguments"
                             );
          goto LAB_008aab94;
        }
      }
      else if ((byte)pVVar6[8] < 2) {
        pMVar7 = (Manifest *)0x0;
        goto LAB_008aaae4;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_extension_auto.cpp"
                          ,0x2b4,"js_extension_AssetsManagerEx_loadRemoteManifest");
      __android_log_print(6,"jswrapper",
                          "js_extension_AssetsManagerEx_loadRemoteManifest : Error processing arguments"
                         );
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_extension_auto.cpp, 698): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(puVar5[1] - (long)pVVar6) >> 4,1);
    }
  }
LAB_008aab94:
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_extension_AssetsManagerEx_loadRemoteManifest",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_extension_auto.cpp"
                      ,0x2bd);
LAB_008aabc0:
  pVVar6 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_90;
  pVVar6 = local_88;
  if (local_90 != (Value *)0x0) {
    while (pVVar6 != pVVar2) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_88 = pVVar2;
    operator_delete(local_90);
  }
  v8::HandleScope::~HandleScope(aHStack_78);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

