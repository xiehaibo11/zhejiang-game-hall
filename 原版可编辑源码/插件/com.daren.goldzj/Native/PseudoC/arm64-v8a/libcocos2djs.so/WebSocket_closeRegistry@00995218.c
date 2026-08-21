
/* WebSocket_closeRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void WebSocket_closeRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  long lVar2;
  Value VVar3;
  long lVar4;
  Value *pVVar5;
  void *pvVar6;
  long *plVar7;
  WebSocket *this;
  ScriptEngine *this_00;
  Object *this_01;
  Object *pOVar8;
  Value *pVVar9;
  int iVar10;
  Isolate *pIVar11;
  Value *local_c0;
  Value *local_b8;
  undefined8 local_b0;
  HandleScope aHStack_a8 [24];
  basic_string local_90;
  undefined7 uStack_8f;
  undefined1 local_88;
  undefined2 uStack_87;
  undefined5 uStack_85;
  void *local_80;
  int local_74;
  State aSStack_70 [40];
  long local_48;
  
                    /* catch() { ... } // from try @ 00995058 with catch @ 00995220 */
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a8,pIVar11);
  local_c0 = (Value *)0x0;
  local_b8 = (Value *)0x0;
  local_b0 = 0;
                    /* try { // try from 00995278 to 00a952cf has its CatchHandler @ 00995278
                       catch() { ... } // from try @ 00995278 with catch @ 00995278
                       catch() { ... } // from try @ 0099551c with catch @ 00995278 */
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_c0);
  pvVar6 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar6,(vector *)&local_c0);
  plVar7 = (long *)se::State::args(aSStack_70);
  lVar1 = *plVar7;
  lVar2 = plVar7[1];
  this = (WebSocket *)se::State::nativeThisObject(aSStack_70);
  iVar10 = (int)((ulong)(lVar2 - lVar1) >> 4);
                    /* try { // try from 009952d0 to 00a952e7 has its CatchHandler @ 00995604 */
  if (iVar10 == 2) {
    local_88 = 0;
    uStack_87 = 0;
    uStack_85 = 0;
    local_80 = (void *)0x0;
    local_90 = (basic_string)0x0;
    uStack_8f = 0;
                    /* try { // try from 00995350 to 00a9535f has its CatchHandler @ 00995594 */
    seval_to_int32((Value *)*plVar7,&local_74);
                    /* try { // try from 00995360 to 00a95373 has its CatchHandler @ 00995598 */
    seval_to_std_string((Value *)(*plVar7 + 0x10),&local_90);
    cocos2d::network::WebSocket::closeAsync(this,local_74,&local_90);
  }
  else {
    if (iVar10 != 1) {
      if (iVar10 == 0) {
        cocos2d::network::WebSocket::closeAsync(this);
      }
      goto LAB_009953b4;
    }
                    /* try { // try from 009952f0 to 00a952fb has its CatchHandler @ 00995600 */
    VVar3 = ((Value *)*plVar7)[8];
    if (VVar3 == (Value)0x4) {
      local_88 = 0;
      uStack_87 = 0;
      uStack_85 = 0;
      local_80 = (void *)0x0;
      local_90 = (basic_string)0x0;
      uStack_8f = 0;
                    /* try { // try from 00995388 to 00a953ef has its CatchHandler @ 00995614 */
      seval_to_std_string((Value *)*plVar7,&local_90);
      cocos2d::network::WebSocket::closeAsync(this,0x3ed,&local_90);
    }
    else {
                    /* try { // try from 009952fc to 00a95307 has its CatchHandler @ 009955fc */
      if (VVar3 != (Value)0x2) goto LAB_009953b4;
                    /* try { // try from 00995308 to 00a9531f has its CatchHandler @ 00995614 */
      seval_to_int32((Value *)*plVar7,&local_74);
      uStack_85 = 0;
      local_90 = (basic_string)0x12;
      local_80 = (void *)0x0;
      uStack_87 = 0x6e;
      uStack_8f = 0x736165725f6f6e;
      local_88 = 0x6f;
                    /* try { // try from 0099533c to 00a95343 has its CatchHandler @ 009955e4 */
      cocos2d::network::WebSocket::closeAsync(this,local_74,&local_90);
    }
  }
  if (((byte)local_90 & 1) != 0) {
    operator_delete(local_80);
  }
LAB_009953b4:
  this_00 = (ScriptEngine *)se::ScriptEngine::getInstance();
  this_01 = (Object *)se::ScriptEngine::getGlobalObject(this_00);
  pOVar8 = (Object *)se::State::thisObject(aSStack_70);
  se::Object::attachObject(this_01,pOVar8);
  pVVar9 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_70);
  pVVar5 = local_c0;
  pVVar9 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar9 != pVVar5) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_b8 = pVVar5;
    operator_delete(local_c0);
  }
  v8::HandleScope::~HandleScope(aHStack_a8);
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00995448 to 00a9548b has its CatchHandler @ 00995598 */
  return;
}

