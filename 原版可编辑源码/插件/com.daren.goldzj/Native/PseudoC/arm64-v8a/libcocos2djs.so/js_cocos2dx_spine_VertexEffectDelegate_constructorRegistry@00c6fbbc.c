
/* js_cocos2dx_spine_VertexEffectDelegate_constructorRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_spine_VertexEffectDelegate_constructorRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  Value *pVVar3;
  Object *this;
  VertexEffectDelegate *this_00;
  Object *pOVar4;
  ulong uVar5;
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
         se::Object::_createJSObject
                   (__jsb_spine_VertexEffectDelegate_class,*(long *)(param_1 + 8) + 8);
  se::Object::_setFinalizeCallback(this,js_spine_VertexEffectDelegate_finalizeRegistry);
  se::State::State(aSStack_60,this,(vector *)&local_a0);
  this_00 = operator_new(0x38,(nothrow_t *)&std::nothrow);
  if (this_00 != (VertexEffectDelegate *)0x0) {
    spine::VertexEffectDelegate::VertexEffectDelegate(this_00);
  }
  pOVar4 = (Object *)se::State::thisObject(aSStack_60);
  se::Object::setPrivateData(pOVar4,this_00);
  se::Value::Value(aVStack_70);
  uVar5 = se::Object::getProperty(this,"_ctor",aVStack_70);
  if ((uVar5 & 1) != 0) {
    pOVar4 = (Object *)se::Value::toObject(aVStack_70);
    se::Object::call(pOVar4,(vector *)&local_a0,this,(Value *)0x0);
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

