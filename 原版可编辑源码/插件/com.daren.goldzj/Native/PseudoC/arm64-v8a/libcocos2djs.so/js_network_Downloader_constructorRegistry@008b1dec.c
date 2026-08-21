
/* js_network_Downloader_constructorRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_network_Downloader_constructorRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  Value *pVVar4;
  Value *pVVar5;
  Object *this;
  long *plVar6;
  ulong uVar7;
  Downloader *pDVar8;
  Object *pOVar9;
  long lVar10;
  Value *local_b0;
  Value *local_a8;
  undefined8 local_a0;
  HandleScope aHStack_98 [24];
  State aSStack_80 [40];
  DownloaderHints aDStack_58 [8];
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  v8::HandleScope::HandleScope(aHStack_98,*(Isolate **)(*(long *)param_1 + 8));
  local_b0 = (Value *)0x0;
  local_a8 = (Value *)0x0;
  local_a0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_b0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_b0);
  this = (Object *)
         se::Object::_createJSObject
                   (__jsb_cocos2d_network_Downloader_class,*(long *)(param_1 + 8) + 8);
  se::Object::_setFinalizeCallback(this,js_cocos2d_network_Downloader_finalizeRegistry);
  se::State::State(aSStack_80,this,(vector *)&local_b0);
  plVar6 = (long *)se::State::args(aSStack_80);
  lVar1 = *plVar6;
  lVar2 = plVar6[1];
  lVar10 = lVar2 - lVar1 >> 4;
  if (lVar10 == 0) {
    pDVar8 = operator_new(0xd0,(nothrow_t *)&std::nothrow);
    if (pDVar8 != (Downloader *)0x0) {
      cocos2d::network::Downloader::Downloader(pDVar8);
    }
    pOVar9 = (Object *)se::State::thisObject(aSStack_80);
    se::Object::setPrivateData(pOVar9,pDVar8);
    se::NonRefNativePtrCreatedByCtorMap::emplace(pDVar8);
  }
  else {
    if (lVar10 == 1) {
      local_48 = 0;
      local_40 = (void *)0x0;
      local_50 = 0;
      uVar7 = seval_to_DownloaderHints((Value *)*plVar6,aDStack_58);
      if ((uVar7 & 1) != 0) {
        pDVar8 = operator_new(0xd0,(nothrow_t *)&std::nothrow);
        if (pDVar8 != (Downloader *)0x0) {
          cocos2d::network::Downloader::Downloader(pDVar8,aDStack_58);
        }
        pOVar9 = (Object *)se::State::thisObject(aSStack_80);
        se::Object::setPrivateData(pOVar9,pDVar8);
        se::NonRefNativePtrCreatedByCtorMap::emplace(pDVar8);
        if ((local_50 & 1) != 0) {
          operator_delete(local_40);
        }
        goto LAB_008b1fa8;
      }
      if ((local_50 & 1) != 0) {
        operator_delete(local_40);
      }
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_network_auto.cpp, 87): wrong number of arguments: %d\n"
                        ,(ulong)(lVar2 - lVar1) >> 4);
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "js_network_Downloader_constructor",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_network_auto.cpp"
                        ,0x5a);
  }
LAB_008b1fa8:
  se::Value::Value((Value *)aDStack_58);
  uVar7 = se::Object::getProperty(this,"_ctor",(Value *)aDStack_58);
  if ((uVar7 & 1) != 0) {
    pOVar9 = (Object *)se::Value::toObject((Value *)aDStack_58);
    se::Object::call(pOVar9,(vector *)&local_b0,this,(Value *)0x0);
  }
  se::Value::~Value((Value *)aDStack_58);
  se::State::~State(aSStack_80);
  pVVar5 = local_b0;
  pVVar4 = local_a8;
  if (local_b0 != (Value *)0x0) {
    while (pVVar4 != pVVar5) {
      se::Value::~Value(pVVar4 + -0x10);
      pVVar4 = pVVar4 + -0x10;
    }
    local_a8 = pVVar5;
    operator_delete(local_b0);
  }
  v8::HandleScope::~HandleScope(aHStack_98);
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

