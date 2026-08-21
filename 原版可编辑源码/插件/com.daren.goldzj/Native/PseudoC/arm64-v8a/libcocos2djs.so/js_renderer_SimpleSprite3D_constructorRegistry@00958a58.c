
/* js_renderer_SimpleSprite3D_constructorRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_SimpleSprite3D_constructorRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  Value *pVVar3;
  Object *this;
  SimpleSprite3D *this_00;
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
                    /* try { // try from 00958a90 to 00a58a97 has its CatchHandler @ 00958b8c */
                    /* try { // try from 00958a98 to 00a58abb has its CatchHandler @ 00958a28 */
  v8::HandleScope::HandleScope(aHStack_88,*(Isolate **)(*(long *)param_1 + 8));
  local_a0 = (Value *)0x0;
  local_98 = (Value *)0x0;
  local_90 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a0,10);
                    /* try { // try from 00958abc to 00a58ac7 has its CatchHandler @ 00958b8c */
  se::internal::jsToSeArgs(param_1,(vector *)&local_a0);
                    /* try { // try from 00958ac8 to 00a58aef has its CatchHandler @ 00958a28 */
  this = (Object *)
         se::Object::_createJSObject
                   (__jsb_cocos2d_renderer_SimpleSprite3D_class,*(long *)(param_1 + 8) + 8);
  se::Object::_setFinalizeCallback(this,js_cocos2d_renderer_SimpleSprite3D_finalizeRegistry);
                    /* try { // try from 00958af0 to 00a58af7 has its CatchHandler @ 00958b88 */
  se::State::State(aSStack_60,this,(vector *)&local_a0);
                    /* try { // try from 00958af8 to 00a58b17 has its CatchHandler @ 00958a28 */
  this_00 = operator_new(0xa8,(nothrow_t *)&std::nothrow);
  if (this_00 != (SimpleSprite3D *)0x0) {
    cocos2d::renderer::SimpleSprite3D::SimpleSprite3D(this_00);
  }
                    /* try { // try from 00958b18 to 00a58b1f has its CatchHandler @ 00958b88 */
  pOVar4 = (Object *)se::State::thisObject(aSStack_60);
                    /* try { // try from 00958b20 to 00a58b3f has its CatchHandler @ 00958a28 */
  se::Object::setPrivateData(pOVar4,this_00);
  se::Value::Value(aVStack_70);
                    /* try { // try from 00958b40 to 00a58b4b has its CatchHandler @ 00958b88 */
  uVar5 = se::Object::getProperty(this,"_ctor",aVStack_70);
  if ((uVar5 & 1) != 0) {
                    /* try { // try from 00958b4c to 00a58b8f has its CatchHandler @ 00958a28 */
    pOVar4 = (Object *)se::Value::toObject(aVStack_70);
    se::Object::call(pOVar4,(vector *)&local_a0,this,(Value *)0x0);
  }
  se::Value::~Value(aVStack_70);
  se::State::~State(aSStack_60);
  pVVar3 = local_a0;
  pVVar2 = local_98;
  if (local_a0 != (Value *)0x0) {
    while (pVVar2 != pVVar3) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00958af0 with catch @ 00958b88
                       catch(type#1 @ 00000000) { ... } // from try @ 00958b18 with catch @ 00958b88
                       catch(type#1 @ 00000000) { ... } // from try @ 00958b40 with catch @ 00958b88
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00958a90 with catch @ 00958b8c
                       catch(type#1 @ 00000000) { ... } // from try @ 00958abc with catch @ 00958b8c
                        */
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

