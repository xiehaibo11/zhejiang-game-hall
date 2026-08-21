
/* js_cocos2d_VideoPlayer_destroyRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_cocos2d_VideoPlayer_destroyRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  Ref *this;
  long lVar4;
  long lVar5;
  Value *pVVar6;
  Isolate *pIVar7;
  Value *local_90;
  Value *local_88;
  undefined8 local_80;
  HandleScope aHStack_78 [24];
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009814cc to 00a814f3 has its CatchHandler @ 009821dc */
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar7 = *(Isolate **)(*(long *)param_1 + 8);
                    /* try { // try from 009814f4 to 00a8155b has its CatchHandler @ 009811b0 */
  v8::HandleScope::HandleScope(aHStack_78,pIVar7);
  local_90 = (Value *)0x0;
  local_88 = (Value *)0x0;
  local_80 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_90,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_90);
  pvVar3 = (void *)se::internal::getPrivate(pIVar7,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar3,(vector *)&local_90);
  this = (Ref *)se::State::nativeThisObject(aSStack_60);
  cocos2d::Ref::release(this);
  pvVar3 = (void *)se::State::nativeThisObject(aSStack_60);
  lVar4 = se::NativePtrToObjectMap::find(pvVar3);
  lVar5 = se::NativePtrToObjectMap::end();
                    /* try { // try from 0098155c to 00a81583 has its CatchHandler @ 009821d8 */
  if (lVar4 != lVar5) {
    se::Object::clearPrivateData(*(Object **)(lVar4 + 0x18),true);
  }
  pVVar6 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_90;
                    /* try { // try from 00981584 to 00a8162f has its CatchHandler @ 009811b0 */
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

