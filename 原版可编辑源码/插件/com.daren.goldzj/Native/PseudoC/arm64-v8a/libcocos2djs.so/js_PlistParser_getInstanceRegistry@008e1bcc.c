
/* js_PlistParser_getInstanceRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_PlistParser_getInstanceRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Class *pCVar2;
  Value *pVVar3;
  void *pvVar4;
  undefined8 *puVar5;
  Value *pVVar6;
  long lVar7;
  long lVar8;
  Isolate *pIVar9;
  Object *this;
  Value *local_a0;
  Value *local_98;
  undefined8 local_90;
  HandleScope aHStack_88 [24];
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar9 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_88,pIVar9);
  local_a0 = (Value *)0x0;
  local_98 = (Value *)0x0;
  local_90 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a0);
  pvVar4 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar4,(vector *)&local_a0);
  puVar5 = __JSPlistDelegator::getInstance()::pInstance;
  if ((__JSPlistDelegator::getInstance()::pInstance == (undefined8 *)0x0) &&
     (puVar5 = operator_new(0x48,(nothrow_t *)&std::nothrow), puVar5 != (undefined8 *)0x0)) {
    puVar5[8] = 0;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    *puVar5 = &PTR____JSPlistDelegator_01c678d8;
    cocos2d::SAXParser::SAXParser((SAXParser *)(puVar5 + 1));
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[6] = 0;
  }
  __JSPlistDelegator::getInstance()::pInstance = puVar5;
  puVar5 = __JSPlistDelegator::getInstance()::pInstance;
  pCVar2 = __jsb_cocos2d_SAXParser_class;
  pVVar6 = (Value *)se::State::rval(aSStack_70);
  lVar7 = se::NativePtrToObjectMap::find(puVar5 + 1);
  lVar8 = se::NativePtrToObjectMap::end();
  if (lVar7 == lVar8) {
    this = (Object *)se::Object::createObjectWithClass(pCVar2);
    se::Object::root(this);
    se::Object::setPrivateData(this,puVar5 + 1);
  }
  else {
    this = *(Object **)(lVar7 + 0x18);
  }
  se::Value::setObject(pVVar6,this,false);
  pVVar6 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_70);
  pVVar3 = local_a0;
  pVVar6 = local_98;
  if (local_a0 != (Value *)0x0) {
    while (pVVar6 != pVVar3) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_98 = pVVar3;
    operator_delete(local_a0);
  }
  v8::HandleScope::~HandleScope(aHStack_88);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

