
/* js_renderer_Assembler_ctorRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_Assembler_ctorRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  Value *pVVar3;
  Object *this;
  Assembler *this_00;
  Object *pOVar4;
  ulong uVar5;
  Value *local_a0;
  Value *local_98;
  undefined8 local_90;
  HandleScope aHStack_88 [24];
  Value aVStack_70 [16];
  State aSStack_60 [40];
  long local_38;
  
                    /* catch() { ... } // from try @ 00952688 with catch @ 00952b74 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
                    /* try { // try from 00952bb4 to 00a52c3b has its CatchHandler @ 00952bb4
                       catch() { ... } // from try @ 00952bb4 with catch @ 00952bb4
                       catch() { ... } // from try @ 00952c44 with catch @ 00952bb4
                       catch() { ... } // from try @ 00952ccc with catch @ 00952bb4
                       catch() { ... } // from try @ 00952d5c with catch @ 00952bb4
                       catch() { ... } // from try @ 00952de8 with catch @ 00952bb4
                       catch() { ... } // from try @ 00952e78 with catch @ 00952bb4
                       catch() { ... } // from try @ 00952f04 with catch @ 00952bb4
                       catch() { ... } // from try @ 00952f98 with catch @ 00952bb4
                       catch() { ... } // from try @ 00953024 with catch @ 00952bb4
                       catch() { ... } // from try @ 0095307c with catch @ 00952bb4
                       catch() { ... } // from try @ 009531e8 with catch @ 00952bb4
                       catch() { ... } // from try @ 00953270 with catch @ 00952bb4
                       catch() { ... } // from try @ 009532f8 with catch @ 00952bb4
                       catch() { ... } // from try @ 00953384 with catch @ 00952bb4
                       catch() { ... } // from try @ 0095340c with catch @ 00952bb4
                       catch() { ... } // from try @ 00953498 with catch @ 00952bb4
                       catch() { ... } // from try @ 009534f0 with catch @ 00952bb4
                       catch() { ... } // from try @ 0095362c with catch @ 00952bb4
                       catch() { ... } // from try @ 009536b4 with catch @ 00952bb4
                       catch() { ... } // from try @ 0095373c with catch @ 00952bb4
                       catch() { ... } // from try @ 009537c8 with catch @ 00952bb4
                       catch() { ... } // from try @ 00953948 with catch @ 00952bb4
                       catch() { ... } // from try @ 0095397c with catch @ 00952bb4 */
  v8::HandleScope::HandleScope(aHStack_88,*(Isolate **)(*(long *)param_1 + 8));
  local_a0 = (Value *)0x0;
  local_98 = (Value *)0x0;
  local_90 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a0);
  this = (Object *)
         se::Object::_createJSObject
                   (__jsb_cocos2d_renderer_Assembler_class,*(long *)(param_1 + 8) + 8);
  se::Object::_setFinalizeCallback(this,js_cocos2d_renderer_Assembler_finalizeRegistry);
  se::State::State(aSStack_60,this,(vector *)&local_a0);
  this_00 = operator_new(0x90,(nothrow_t *)&std::nothrow);
  if (this_00 != (Assembler *)0x0) {
    cocos2d::renderer::Assembler::Assembler(this_00);
  }
  pOVar4 = (Object *)se::State::thisObject(aSStack_60);
                    /* try { // try from 00952c3c to 00a52c43 has its CatchHandler @ 00953ae0 */
  se::Object::setPrivateData(pOVar4,this_00);
                    /* try { // try from 00952c44 to 00a52cc3 has its CatchHandler @ 00952bb4 */
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
                    /* try { // try from 00952cc4 to 00a52ccb has its CatchHandler @ 00953a30 */
  v8::HandleScope::~HandleScope(aHStack_88);
                    /* try { // try from 00952ccc to 00a52d53 has its CatchHandler @ 00952bb4 */
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

