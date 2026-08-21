
/* js_video_VideoPlayer_constructorRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_video_VideoPlayer_constructorRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  Value *pVVar3;
  Object *this;
  VideoPlayer *this_00;
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
                    /* try { // try from 00981220 to 00a81247 has its CatchHandler @ 009821ec */
  __jsbInvocationCount = __jsbInvocationCount + 1;
  v8::HandleScope::HandleScope(aHStack_88,*(Isolate **)(*(long *)param_1 + 8));
  local_a0 = (Value *)0x0;
  local_98 = (Value *)0x0;
  local_90 = 0;
                    /* try { // try from 00981248 to 00a812a7 has its CatchHandler @ 009811b0 */
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a0);
  this = (Object *)
         se::Object::_createJSObject(__jsb_cocos2d_VideoPlayer_class,*(long *)(param_1 + 8) + 8);
  se::Object::_setFinalizeCallback(this,js_cocos2d_VideoPlayer_finalizeRegistry);
  se::State::State(aSStack_60,this,(vector *)&local_a0);
  this_00 = operator_new(0x50,(nothrow_t *)&std::nothrow);
                    /* try { // try from 009812a8 to 00a812cf has its CatchHandler @ 009821e8 */
  if (this_00 != (VideoPlayer *)0x0) {
    cocos2d::VideoPlayer::VideoPlayer(this_00);
  }
  pOVar4 = (Object *)se::State::thisObject(aSStack_60);
  se::Object::setPrivateData(pOVar4,this_00);
  se::Value::Value(aVStack_70);
                    /* try { // try from 009812d0 to 00a8132f has its CatchHandler @ 009811b0 */
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
                    /* try { // try from 00981330 to 00a81357 has its CatchHandler @ 009821e4 */
      pVVar2 = pVVar2 + -0x10;
    }
    local_98 = pVVar3;
    operator_delete(local_a0);
  }
  v8::HandleScope::~HandleScope(aHStack_88);
                    /* try { // try from 00981358 to 00a8143f has its CatchHandler @ 009811b0 */
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

