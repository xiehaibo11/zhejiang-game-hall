
/* JSB_WebSocketDelegate::onOpen(cocos2d::network::WebSocket*) */

void __thiscall JSB_WebSocketDelegate::onOpen(JSB_WebSocketDelegate *this,WebSocket *param_1)

{
  long lVar1;
  Value *pVVar2;
  Value *pVVar3;
  Isolate *pIVar4;
  long lVar5;
  long lVar6;
  basic_string *pbVar7;
  Object *pOVar8;
  ulong uVar9;
  Object *this_00;
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
  
                    /* catch() { ... } // from try @ 009930b8 with catch @ 0099335c */
                    /* catch() { ... } // from try @ 009930ac with catch @ 00993360 */
                    /* catch() { ... } // from try @ 0099308c with catch @ 00993364 */
                    /* catch() { ... } // from try @ 009930c4 with catch @ 00993374
                       catch() { ... } // from try @ 00993144 with catch @ 00993374
                       catch() { ... } // from try @ 00993270 with catch @ 00993374 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  pIVar4 = (Isolate *)v8::Isolate::GetCurrent();
  v8::HandleScope::HandleScope(aHStack_a8,pIVar4);
  if (cocos2d::Application::_instance == 0) goto LAB_0099354c;
  lVar5 = se::NativePtrToObjectMap::find(param_1);
  lVar6 = se::NativePtrToObjectMap::end();
  if (lVar5 == lVar6) goto LAB_0099354c;
  this_00 = *(Object **)(lVar5 + 0x18);
                    /* try { // try from 009933cc to 00a9341f has its CatchHandler @ 009933cc
                       catch() { ... } // from try @ 009933cc with catch @ 009933cc
                       catch() { ... } // from try @ 00993640 with catch @ 009933cc */
  pbVar7 = (basic_string *)cocos2d::network::WebSocket::getProtocol(param_1);
  se::Value::Value((Value *)&local_80,pbVar7);
  se::Object::setProperty(this_00,"protocol",(Value *)&local_80);
  se::Value::~Value((Value *)&local_80);
  pOVar8 = (Object *)se::Object::createPlainObject();
  se::HandleObject::HandleObject((HandleObject *)&local_b0,pOVar8);
  pOVar8 = local_b0;
  se::Value::Value((Value *)&local_80,"open");
                    /* try { // try from 00993420 to 00a93437 has its CatchHandler @ 009936f8 */
  se::Object::setProperty(pOVar8,"type",(Value *)&local_80);
  se::Value::~Value((Value *)&local_80);
                    /* try { // try from 00993440 to 00a9344b has its CatchHandler @ 009936f4 */
  se::Value::Value(aVStack_58);
                    /* try { // try from 0099344c to 00a93457 has its CatchHandler @ 009936f0 */
  native_ptr_to_seval<cocos2d::network::WebSocket>((type *)param_1,aVStack_58,(bool *)0x0);
                    /* try { // try from 00993458 to 00a9346f has its CatchHandler @ 00993708 */
  se::Object::setProperty(local_b0,"target",aVStack_58);
  se::Value::Value(aVStack_68);
  pOVar8 = (Object *)se::Value::toObject((Value *)(this + 0x18));
  uVar9 = se::Object::getProperty(pOVar8,"onopen",aVStack_68);
                    /* try { // try from 0099348c to 00a93493 has its CatchHandler @ 009936d8 */
  if (((uVar9 & 1) == 0) || (local_60 != '\x05')) {
LAB_0099351c:
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_websocket.cpp, 106): Can\'t get onopen function!\n"
                       );
  }
  else {
    pOVar8 = (Object *)se::Value::toObject(aVStack_68);
                    /* try { // try from 009934a0 to 00a934af has its CatchHandler @ 009936b4 */
    uVar9 = se::Object::isFunction(pOVar8);
    if ((uVar9 & 1) == 0) goto LAB_0099351c;
    local_80 = (Value *)0x0;
    local_78 = (Value *)0x0;
    local_70 = 0;
                    /* try { // try from 009934b0 to 00a934c3 has its CatchHandler @ 009936b8 */
    se::Value::Value(aVStack_90,(HandleObject *)&local_b0,false);
    std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::
    __push_back_slow_path<se::Value>
              ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_80,aVStack_90);
    se::Value::~Value(aVStack_90);
                    /* try { // try from 009934d8 to 00a9353f has its CatchHandler @ 00993708 */
    pOVar8 = (Object *)se::Value::toObject(aVStack_68);
    se::Object::call(pOVar8,(vector *)&local_80,this_00,(Value *)0x0);
    pVVar3 = local_80;
    pVVar2 = local_78;
    if (local_80 != (Value *)0x0) {
      while (pVVar2 != pVVar3) {
        se::Value::~Value(pVVar2 + -0x10);
        pVVar2 = pVVar2 + -0x10;
      }
      local_78 = pVVar3;
      operator_delete(local_80);
    }
  }
  se::Value::~Value(aVStack_68);
  se::Value::~Value(aVStack_58);
                    /* try { // try from 00993544 to 00a93587 has its CatchHandler @ 009936d8 */
  se::HandleObject::~HandleObject((HandleObject *)&local_b0);
LAB_0099354c:
  v8::HandleScope::~HandleScope(aHStack_a8);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

