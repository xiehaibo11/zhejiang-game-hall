
/* JSB_WebSocketDelegate::onError(cocos2d::network::WebSocket*,
   cocos2d::network::WebSocket::ErrorCode const&) */

void JSB_WebSocketDelegate::onError(WebSocket *param_1,ErrorCode *param_2)

{
  long lVar1;
  Value *pVVar2;
  Value *pVVar3;
  Isolate *pIVar4;
  long lVar5;
  long lVar6;
  Object *pOVar7;
  ulong uVar8;
  Object *this;
  Object *local_b0;
  HandleScope aHStack_a8 [24];
  Value aVStack_90 [16];
  Value *local_80;
  Value *local_78;
  undefined8 local_70;
  Value aVStack_68 [8];
  char local_60;
  Value aVStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00993f40 to 00a93fa7 has its CatchHandler @ 00994134 */
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  pIVar4 = (Isolate *)v8::Isolate::GetCurrent();
  v8::HandleScope::HandleScope(aHStack_a8,pIVar4);
  if (cocos2d::Application::_instance == 0) goto LAB_009940e0;
  lVar5 = se::NativePtrToObjectMap::find(param_2);
  lVar6 = se::NativePtrToObjectMap::end();
  if (lVar5 == lVar6) goto LAB_009940e0;
  this = *(Object **)(lVar5 + 0x18);
  pOVar7 = (Object *)se::Object::createPlainObject();
  se::HandleObject::HandleObject((HandleObject *)&local_b0,pOVar7);
  pOVar7 = local_b0;
  se::Value::Value((Value *)&local_80,"error");
                    /* try { // try from 00993fac to 00a93fef has its CatchHandler @ 00994104 */
  se::Object::setProperty(pOVar7,"type",(Value *)&local_80);
  se::Value::~Value((Value *)&local_80);
  se::Value::Value(aVStack_58);
  native_ptr_to_seval<cocos2d::network::WebSocket>((type *)param_2,aVStack_58,(bool *)0x0);
  se::Object::setProperty(local_b0,"target",aVStack_58);
                    /* try { // try from 00993ff4 to 00a94037 has its CatchHandler @ 00994100 */
  se::Value::Value(aVStack_68);
  pOVar7 = (Object *)se::Value::toObject((Value *)(param_1 + 0x18));
  uVar8 = se::Object::getProperty(pOVar7,"onerror",aVStack_68);
  if (((uVar8 & 1) == 0) || (local_60 != '\x05')) {
LAB_009940a8:
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_websocket.cpp, 251): Can\'t get onerror function!\n"
                       );
  }
  else {
    pOVar7 = (Object *)se::Value::toObject(aVStack_68);
    uVar8 = se::Object::isFunction(pOVar7);
    if ((uVar8 & 1) == 0) goto LAB_009940a8;
    local_80 = (Value *)0x0;
    local_78 = (Value *)0x0;
    local_70 = 0;
    se::Value::Value(aVStack_90,(HandleObject *)&local_b0,false);
                    /* try { // try from 00994050 to 00a9408b has its CatchHandler @ 00994134 */
    std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::
    __push_back_slow_path<se::Value>
              ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_80,aVStack_90);
    se::Value::~Value(aVStack_90);
    pOVar7 = (Object *)se::Value::toObject(aVStack_68);
    se::Object::call(pOVar7,(vector *)&local_80,this,(Value *)0x0);
    pVVar3 = local_80;
    pVVar2 = local_78;
    if (local_80 != (Value *)0x0) {
      while (pVVar2 != pVVar3) {
                    /* try { // try from 0099408c to 00a9418b has its CatchHandler @ 00993e34 */
        se::Value::~Value(pVVar2 + -0x10);
        pVVar2 = pVVar2 + -0x10;
      }
      local_78 = pVVar3;
      operator_delete(local_80);
                    /* catch() { ... } // from try @ 00993eb4 with catch @ 0099411c */
    }
  }
  se::Object::unroot(this);
  se::Value::~Value(aVStack_68);
  se::Value::~Value(aVStack_58);
  se::HandleObject::~HandleObject((HandleObject *)&local_b0);
LAB_009940e0:
  v8::HandleScope::~HandleScope(aHStack_a8);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00993ea8 with catch @ 00994120 */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00993f08 with catch @ 00994100
                       catch() { ... } // from try @ 00993ff4 with catch @ 00994100 */
                    /* catch() { ... } // from try @ 00993ef4 with catch @ 00994104
                       catch() { ... } // from try @ 00993fac with catch @ 00994104 */
  return;
}

