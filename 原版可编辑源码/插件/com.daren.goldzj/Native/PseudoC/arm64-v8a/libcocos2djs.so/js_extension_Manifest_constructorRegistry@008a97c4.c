
/* js_extension_Manifest_constructorRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_extension_Manifest_constructorRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  Value *pVVar4;
  Value *pVVar5;
  Object *this;
  long *plVar6;
  ulong uVar7;
  Manifest *pMVar8;
  Object *pOVar9;
  long lVar10;
  int iVar11;
  Value *local_c0;
  Value *local_b8;
  undefined8 local_b0;
  HandleScope aHStack_a8 [24];
  ulong local_90;
  undefined8 local_88;
  void *local_80;
  State aSStack_78 [40];
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  v8::HandleScope::HandleScope(aHStack_a8,*(Isolate **)(*(long *)param_1 + 8));
  local_c0 = (Value *)0x0;
  local_b8 = (Value *)0x0;
  local_b0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_c0);
  this = (Object *)
         se::Object::_createJSObject
                   (__jsb_cocos2d_extension_Manifest_class,*(long *)(param_1 + 8) + 8);
  se::Object::_setFinalizeCallback(this,js_cocos2d_extension_Manifest_finalizeRegistry);
  se::State::State(aSStack_78,this,(vector *)&local_c0);
  plVar6 = (long *)se::State::args(aSStack_78);
  lVar1 = *plVar6;
  lVar2 = plVar6[1];
  lVar10 = lVar2 - lVar1 >> 4;
  if (lVar10 == 0) {
    pMVar8 = operator_new(400,(nothrow_t *)&std::nothrow);
    if (pMVar8 != (Manifest *)0x0) {
      local_50 = 0;
      local_48 = 0;
      local_40 = (void *)0x0;
      cocos2d::extension::Manifest::Manifest(pMVar8,(basic_string *)&local_50);
      if ((local_50 & 1) != 0) {
        operator_delete(local_40);
      }
    }
    pOVar9 = (Object *)se::State::thisObject(aSStack_78);
    se::Object::setPrivateData(pOVar9,pMVar8);
  }
  else {
    if (lVar10 == 1) {
      local_48 = 0;
      local_40 = (void *)0x0;
      local_50 = 0;
      uVar7 = seval_to_std_string((Value *)*plVar6,(basic_string *)&local_50);
      if ((uVar7 & 1) != 0) {
        pMVar8 = operator_new(400,(nothrow_t *)&std::nothrow);
        if (pMVar8 != (Manifest *)0x0) {
          cocos2d::extension::Manifest::Manifest(pMVar8,(basic_string *)&local_50);
        }
        pOVar9 = (Object *)se::State::thisObject(aSStack_78);
        se::Object::setPrivateData(pOVar9,pMVar8);
        if ((local_50 & 1) != 0) {
          operator_delete(local_40);
        }
        goto LAB_008a9a54;
      }
      if ((local_50 & 1) != 0) {
        operator_delete(local_40);
      }
    }
    else if (lVar10 == 2) {
      local_48 = 0;
      local_40 = (void *)0x0;
      local_50 = 0;
      uVar7 = seval_to_std_string((Value *)*plVar6,(basic_string *)&local_50);
      if ((uVar7 & 1) == 0) {
        iVar11 = 2;
      }
      else {
        local_88 = 0;
        local_80 = (void *)0x0;
        local_90 = 0;
        uVar7 = seval_to_std_string((Value *)(*plVar6 + 0x10),(basic_string *)&local_90);
        if ((uVar7 & 1) == 0) {
          iVar11 = 2;
        }
        else {
          pMVar8 = operator_new(400,(nothrow_t *)&std::nothrow);
          if (pMVar8 != (Manifest *)0x0) {
            cocos2d::extension::Manifest::Manifest
                      (pMVar8,(basic_string *)&local_50,(basic_string *)&local_90);
          }
          pOVar9 = (Object *)se::State::thisObject(aSStack_78);
          se::Object::setPrivateData(pOVar9,pMVar8);
          iVar11 = 1;
        }
        if ((local_90 & 1) != 0) {
          operator_delete(local_80);
        }
      }
      if ((local_50 & 1) != 0) {
        operator_delete(local_40);
      }
      if (iVar11 != 2) goto LAB_008a9a54;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_extension_auto.cpp, 563): wrong number of arguments: %d\n"
                        ,(ulong)(lVar2 - lVar1) >> 4);
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "js_extension_Manifest_constructor",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_extension_auto.cpp"
                        ,0x236);
  }
LAB_008a9a54:
  se::Value::Value((Value *)&local_50);
  uVar7 = se::Object::getProperty(this,"_ctor",(Value *)&local_50);
  if ((uVar7 & 1) != 0) {
    pOVar9 = (Object *)se::Value::toObject((Value *)&local_50);
    se::Object::call(pOVar9,(vector *)&local_c0,this,(Value *)0x0);
  }
  se::Value::~Value((Value *)&local_50);
  se::State::~State(aSStack_78);
  pVVar5 = local_c0;
  pVVar4 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar4 != pVVar5) {
      se::Value::~Value(pVVar4 + -0x10);
      pVVar4 = pVVar4 + -0x10;
    }
    local_b8 = pVVar5;
    operator_delete(local_c0);
  }
  v8::HandleScope::~HandleScope(aHStack_a8);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

