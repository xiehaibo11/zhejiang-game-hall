
/* js_cocos2dx_spine_SkeletonDataMgr_constructorRegistry(v8::FunctionCallbackInfo<v8::Value> const&)
    */

void js_cocos2dx_spine_SkeletonDataMgr_constructorRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  Value *pVVar3;
  Object *this;
  undefined8 *puVar4;
  Object *pOVar5;
  ulong uVar6;
  Value *local_a0;
  Value *local_98;
  Value *local_90;
  HandleScope aHStack_88 [24];
  Value aVStack_70 [16];
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  v8::HandleScope::HandleScope(aHStack_88,*(Isolate **)(*(long *)param_1 + 8));
  local_a0 = operator_new(0xa0);
  local_90 = local_a0 + 0xa0;
  local_98 = local_a0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_a0);
  this = (Object *)
         se::Object::_createJSObject(__jsb_spine_SkeletonDataMgr_class,*(long *)(param_1 + 8) + 8);
  se::Object::_setFinalizeCallback(this,js_spine_SkeletonDataMgr_finalizeRegistry);
  se::State::State(aSStack_60,this,(vector *)&local_a0);
  puVar4 = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[6] = 0;
    puVar4[10] = 0;
    *puVar4 = &PTR__SkeletonDataMgr_01c8cea8;
    puVar4[9] = 0;
    puVar4[8] = puVar4 + 9;
  }
  pOVar5 = (Object *)se::State::thisObject(aSStack_60);
  se::Object::setPrivateData(pOVar5,puVar4);
  se::NonRefNativePtrCreatedByCtorMap::emplace(puVar4);
  se::Value::Value(aVStack_70);
  uVar6 = se::Object::getProperty(this,"_ctor",aVStack_70);
  if ((uVar6 & 1) != 0) {
    pOVar5 = (Object *)se::Value::toObject(aVStack_70);
    se::Object::call(pOVar5,(vector *)&local_a0,this,(Value *)0x0);
  }
  se::Value::~Value(aVStack_70);
  se::State::~State(aSStack_60);
  pVVar3 = local_a0;
  pVVar2 = local_98;
  if (local_a0 != (Value *)0x0) {
    while (pVVar2 != pVVar3) {
      se::Value::~Value(pVVar2 + -0x10);
      pVVar2 = pVVar2 + -0x10;
    }
    local_98 = pVVar3;
    operator_delete(local_a0);
  }
  v8::HandleScope::~HandleScope(aHStack_88);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

