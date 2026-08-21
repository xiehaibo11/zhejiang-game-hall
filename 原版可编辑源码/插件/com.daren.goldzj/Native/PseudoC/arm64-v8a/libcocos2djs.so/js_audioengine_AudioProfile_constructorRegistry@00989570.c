
/* js_audioengine_AudioProfile_constructorRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_audioengine_AudioProfile_constructorRegistry(FunctionCallbackInfo *param_1)

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
  undefined8 local_90;
  HandleScope aHStack_88 [24];
  Value aVStack_70 [16];
  State aSStack_60 [40];
  long local_38;
  
                    /* try { // try from 00989574 to 00a895b3 has its CatchHandler @ 00989574
                       catch() { ... } // from try @ 00989574 with catch @ 00989574
                       catch() { ... } // from try @ 00989660 with catch @ 00989574
                       catch() { ... } // from try @ 009896c0 with catch @ 00989574 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
                    /* try { // try from 009895b4 to 00a895b7 has its CatchHandler @ 009896dc */
  v8::HandleScope::HandleScope(aHStack_88,*(Isolate **)(*(long *)param_1 + 8));
  local_a0 = (Value *)0x0;
  local_98 = (Value *)0x0;
  local_90 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a0);
  this = (Object *)
         se::Object::_createJSObject(__jsb_cocos2d_AudioProfile_class,*(long *)(param_1 + 8) + 8);
                    /* try { // try from 009895fc to 00a8960b has its CatchHandler @ 009896c0 */
  se::Object::_setFinalizeCallback(this,js_cocos2d_AudioProfile_finalizeRegistry);
  se::State::State(aSStack_60,this,(vector *)&local_a0);
  puVar4 = operator_new(0x28,(nothrow_t *)&std::nothrow);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[4] = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 3) = 0;
  }
  pOVar5 = (Object *)se::State::thisObject(aSStack_60);
  se::Object::setPrivateData(pOVar5,puVar4);
  se::NonRefNativePtrCreatedByCtorMap::emplace(puVar4);
  se::Value::Value(aVStack_70);
                    /* try { // try from 00989658 to 00a8965f has its CatchHandler @ 009896dc */
                    /* try { // try from 00989660 to 00a896b7 has its CatchHandler @ 00989574 */
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
                    /* try { // try from 009896b8 to 00a896bf has its CatchHandler @ 009896dc */
      pVVar2 = pVVar2 + -0x10;
    }
    local_98 = pVVar3;
    operator_delete(local_a0);
  }
  v8::HandleScope::~HandleScope(aHStack_88);
                    /* catch() { ... } // from try @ 009895b4 with catch @ 009896dc
                       catch() { ... } // from try @ 00989658 with catch @ 009896dc
                       catch() { ... } // from try @ 009896b8 with catch @ 009896dc */
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 009896f0 to 00a8973f has its CatchHandler @ 009896f0
                       catch() { ... } // from try @ 009896f0 with catch @ 009896f0
                       catch() { ... } // from try @ 009897b4 with catch @ 009896f0 */
  return;
}

