
/* js_renderer_CustomAssembler_constructorRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_CustomAssembler_constructorRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  Value *pVVar3;
  Object *this;
  CustomAssembler *this_00;
  Object *pOVar4;
  ulong uVar5;
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
                   (__jsb_cocos2d_renderer_CustomAssembler_class,*(long *)(param_1 + 8) + 8);
  se::Object::_setFinalizeCallback(this,js_cocos2d_renderer_CustomAssembler_finalizeRegistry);
  se::State::State(aSStack_60,this,(vector *)&local_a0);
  this_00 = operator_new(0x70,(nothrow_t *)&std::nothrow);
  if (this_00 != (CustomAssembler *)0x0) {
                    /* try { // try from 00953900 to 00a53907 has its CatchHandler @ 00953ae0 */
    cocos2d::renderer::CustomAssembler::CustomAssembler(this_00);
  }
                    /* try { // try from 00953908 to 00a5390f has its CatchHandler @ 00953ac8 */
  pOVar4 = (Object *)se::State::thisObject(aSStack_60);
                    /* try { // try from 00953910 to 00a53917 has its CatchHandler @ 00953a94 */
  se::Object::setPrivateData(pOVar4,this_00);
                    /* try { // try from 00953918 to 00a5391f has its CatchHandler @ 00953a88 */
  se::Value::Value(aVStack_70);
                    /* try { // try from 00953920 to 00a53927 has its CatchHandler @ 00953a80 */
                    /* try { // try from 00953928 to 00a5392f has its CatchHandler @ 00953a5c */
  uVar5 = se::Object::getProperty(this,"_ctor",aVStack_70);
                    /* try { // try from 00953930 to 00a53937 has its CatchHandler @ 00953a50 */
  if ((uVar5 & 1) != 0) {
                    /* try { // try from 00953938 to 00a5393f has its CatchHandler @ 00953a48 */
    pOVar4 = (Object *)se::Value::toObject(aVStack_70);
                    /* try { // try from 00953940 to 00a53947 has its CatchHandler @ 00953a3c */
                    /* try { // try from 00953948 to 00a5394b has its CatchHandler @ 00952bb4 */
    se::Object::call(pOVar4,(vector *)&local_a0,this,(Value *)0x0);
  }
                    /* try { // try from 0095394c to 00a53953 has its CatchHandler @ 00953a30 */
  se::Value::~Value(aVStack_70);
                    /* try { // try from 00953954 to 00a53957 has its CatchHandler @ 00953a18 */
                    /* try { // try from 00953958 to 00a5395b has its CatchHandler @ 00953a00 */
  se::State::~State(aSStack_60);
  pVVar3 = local_a0;
                    /* try { // try from 0095395c to 00a5395f has its CatchHandler @ 009539ec */
                    /* try { // try from 00953960 to 00a53967 has its CatchHandler @ 009539e0 */
  pVVar2 = local_98;
  if (local_a0 != (Value *)0x0) {
                    /* try { // try from 00953968 to 00a5396b has its CatchHandler @ 009539c8 */
                    /* try { // try from 0095396c to 00a5396f has its CatchHandler @ 009539b4 */
    while (pVVar2 != pVVar3) {
                    /* try { // try from 00953970 to 00a53977 has its CatchHandler @ 00953990 */
                    /* try { // try from 00953978 to 00a5397b has its CatchHandler @ 0095397c */
      se::Value::~Value(pVVar2 + -0x10);
                    /* catch() { ... } // from try @ 009537c0 with catch @ 0095397c
                       catch() { ... } // from try @ 00953978 with catch @ 0095397c
                       try { // try from 0095397c to 00a53de3 has its CatchHandler @ 00952bb4 */
      pVVar2 = pVVar2 + -0x10;
    }
                    /* catch() { ... } // from try @ 009536ac with catch @ 00953990
                       catch() { ... } // from try @ 00953970 with catch @ 00953990 */
    local_98 = pVVar3;
    operator_delete(local_a0);
  }
  v8::HandleScope::~HandleScope(aHStack_88);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00953490 with catch @ 009539b4
                       catch() { ... } // from try @ 0095396c with catch @ 009539b4 */
  return;
}

