
/* js_renderer_EffectVariant_constructorRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_EffectVariant_constructorRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  Object *this;
  undefined8 *puVar3;
  Value *pVVar4;
  EffectVariant *pEVar5;
  Object *pOVar6;
  Effect *pEVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  Value *local_a0;
  Value *local_98;
  undefined8 local_90;
  HandleScope aHStack_88 [24];
  Value aVStack_70 [16];
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  v8::HandleScope::HandleScope(aHStack_88,*(Isolate **)(*(long *)param_1 + 8));
  local_a0 = (Value *)0x0;
  local_98 = (Value *)0x0;
  local_90 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a0);
  this = (Object *)
         se::Object::_createJSObject
                   (__jsb_cocos2d_renderer_EffectVariant_class,*(long *)(param_1 + 8) + 8);
  se::Object::_setFinalizeCallback(this,js_cocos2d_renderer_EffectVariant_finalizeRegistry);
  se::State::State(aSStack_60,this,(vector *)&local_a0);
  puVar3 = (undefined8 *)se::State::args(aSStack_60);
  pVVar4 = (Value *)*puVar3;
  lVar9 = puVar3[1];
  lVar10 = lVar9 - (long)pVVar4 >> 4;
  if (lVar10 == 1) {
    if (pVVar4[8] == (Value)0x5) {
      pOVar6 = (Object *)se::Value::toObject(pVVar4);
      pEVar7 = (Effect *)se::Object::getPrivateData(pOVar6);
      if (pEVar7 != (Effect *)0x0) {
LAB_0093ab20:
        pEVar5 = operator_new(0x40,(nothrow_t *)&std::nothrow);
        if (pEVar5 != (EffectVariant *)0x0) {
          cocos2d::renderer::EffectVariant::EffectVariant(pEVar5,pEVar7);
        }
        pOVar6 = (Object *)se::State::thisObject(aSStack_60);
        se::Object::setPrivateData(pOVar6,pEVar5);
        goto LAB_0093aba0;
      }
    }
    else if ((byte)pVVar4[8] < 2) {
      pEVar7 = (Effect *)0x0;
      goto LAB_0093ab20;
    }
  }
  else if (lVar10 == 0) {
    pEVar5 = operator_new(0x40,(nothrow_t *)&std::nothrow);
    if (pEVar5 != (EffectVariant *)0x0) {
      cocos2d::renderer::EffectVariant::EffectVariant(pEVar5);
    }
    pOVar6 = (Object *)se::State::thisObject(aSStack_60);
    se::Object::setPrivateData(pOVar6,pEVar5);
    goto LAB_0093aba0;
  }
  __android_log_print(6,"jswrapper",
                      "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp, 832): wrong number of arguments: %d\n"
                      ,(ulong)(lVar9 - (long)pVVar4) >> 4);
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_EffectVariant_constructor",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                      ,0x343);
LAB_0093aba0:
  se::Value::Value(aVStack_70);
  uVar8 = se::Object::getProperty(this,"_ctor",aVStack_70);
  if ((uVar8 & 1) != 0) {
    pOVar6 = (Object *)se::Value::toObject(aVStack_70);
    se::Object::call(pOVar6,(vector *)&local_a0,this,(Value *)0x0);
  }
  se::Value::~Value(aVStack_70);
  se::State::~State(aSStack_60);
  pVVar2 = local_a0;
  pVVar4 = local_98;
  if (local_a0 != (Value *)0x0) {
    while (pVVar4 != pVVar2) {
      se::Value::~Value(pVVar4 + -0x10);
      pVVar4 = pVVar4 + -0x10;
    }
    local_98 = pVVar2;
    operator_delete(local_a0);
  }
  v8::HandleScope::~HandleScope(aHStack_88);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

