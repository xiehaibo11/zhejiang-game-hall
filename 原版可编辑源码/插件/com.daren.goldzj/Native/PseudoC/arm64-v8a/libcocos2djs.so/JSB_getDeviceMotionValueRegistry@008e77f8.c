
/* JSB_getDeviceMotionValueRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_getDeviceMotionValueRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Object *pOVar2;
  Value *pVVar3;
  void *pvVar4;
  float *pfVar5;
  Value *pVVar6;
  Isolate *pIVar7;
  Value *local_b0;
  Value *local_a8;
  undefined8 local_a0;
  HandleScope aHStack_98 [24];
  State aSStack_80 [40];
  Value aVStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar7 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_98,pIVar7);
  local_b0 = (Value *)0x0;
  local_a8 = (Value *)0x0;
  local_a0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_b0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_b0);
  pvVar4 = (void *)se::internal::getPrivate(pIVar7,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar4,(vector *)&local_b0);
  if (DAT_01d36f80 == (Object *)0x0) {
    DAT_01d36f80 = (Object *)se::Object::createArrayObject(9);
    se::Object::root(DAT_01d36f80);
  }
  pfVar5 = (float *)cocos2d::Device::getDeviceMotionValue();
  pOVar2 = DAT_01d36f80;
  se::Value::Value(aVStack_58,*pfVar5);
  se::Object::setArrayElement(pOVar2,0,aVStack_58);
  se::Value::~Value(aVStack_58);
  pOVar2 = DAT_01d36f80;
  se::Value::Value(aVStack_58,pfVar5[1]);
  se::Object::setArrayElement(pOVar2,1,aVStack_58);
  se::Value::~Value(aVStack_58);
  pOVar2 = DAT_01d36f80;
  se::Value::Value(aVStack_58,pfVar5[2]);
  se::Object::setArrayElement(pOVar2,2,aVStack_58);
  se::Value::~Value(aVStack_58);
  pOVar2 = DAT_01d36f80;
  se::Value::Value(aVStack_58,pfVar5[3]);
  se::Object::setArrayElement(pOVar2,3,aVStack_58);
  se::Value::~Value(aVStack_58);
  pOVar2 = DAT_01d36f80;
  se::Value::Value(aVStack_58,pfVar5[4]);
  se::Object::setArrayElement(pOVar2,4,aVStack_58);
  se::Value::~Value(aVStack_58);
  pOVar2 = DAT_01d36f80;
  se::Value::Value(aVStack_58,pfVar5[5]);
  se::Object::setArrayElement(pOVar2,5,aVStack_58);
  se::Value::~Value(aVStack_58);
  pOVar2 = DAT_01d36f80;
  se::Value::Value(aVStack_58,pfVar5[6]);
  se::Object::setArrayElement(pOVar2,6,aVStack_58);
  se::Value::~Value(aVStack_58);
  pOVar2 = DAT_01d36f80;
  se::Value::Value(aVStack_58,pfVar5[7]);
  se::Object::setArrayElement(pOVar2,7,aVStack_58);
  se::Value::~Value(aVStack_58);
  pOVar2 = DAT_01d36f80;
  se::Value::Value(aVStack_58,pfVar5[8]);
  se::Object::setArrayElement(pOVar2,8,aVStack_58);
  se::Value::~Value(aVStack_58);
  pVVar6 = (Value *)se::State::rval(aSStack_80);
  se::Value::setObject(pVVar6,DAT_01d36f80,false);
  pVVar6 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_80);
  pVVar3 = local_b0;
  pVVar6 = local_a8;
  if (local_b0 != (Value *)0x0) {
    while (pVVar6 != pVVar3) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_a8 = pVVar3;
    operator_delete(local_b0);
  }
  v8::HandleScope::~HandleScope(aHStack_98);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

