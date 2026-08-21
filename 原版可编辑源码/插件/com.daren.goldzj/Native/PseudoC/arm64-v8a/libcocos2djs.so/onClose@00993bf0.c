
/* JSB_WebSocketDelegate::onClose(cocos2d::network::WebSocket*) */

void __thiscall JSB_WebSocketDelegate::onClose(JSB_WebSocketDelegate *this,WebSocket *param_1)

{
  long lVar1;
  Value *pVVar2;
  Value *pVVar3;
  Isolate *pIVar4;
  long lVar5;
  long lVar6;
  Object *pOVar7;
  ulong uVar8;
  ScriptEngine *this_00;
  Object *this_01;
  Object *local_b0;
  HandleScope aHStack_a8 [24];
  Value aVStack_90 [16];
  Value *local_80;
  Value *local_78;
  Value *local_70;
  Value aVStack_68 [8];
  char local_60;
  Value aVStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  pIVar4 = (Isolate *)v8::Isolate::GetCurrent();
                    /* try { // try from 00993c28 to 00a93c6b has its CatchHandler @ 00993dac */
  v8::HandleScope::HandleScope(aHStack_a8,pIVar4);
  if (cocos2d::Application::_instance == 0) goto LAB_00993da0;
  lVar5 = se::NativePtrToObjectMap::find(param_1);
  lVar6 = se::NativePtrToObjectMap::end();
  if (lVar5 != lVar6) {
    this_01 = *(Object **)(lVar5 + 0x18);
    pOVar7 = (Object *)se::Object::createPlainObject();
    se::HandleObject::HandleObject((HandleObject *)&local_b0,pOVar7);
    pOVar7 = local_b0;
    se::Value::Value((Value *)&local_80,"close");
                    /* try { // try from 00993c84 to 00a93cbf has its CatchHandler @ 00993ddc */
    se::Object::setProperty(pOVar7,"type",(Value *)&local_80);
    se::Value::~Value((Value *)&local_80);
    se::Value::Value(aVStack_58);
    native_ptr_to_seval<cocos2d::network::WebSocket>((type *)param_1,aVStack_58,(bool *)0x0);
    se::Object::setProperty(local_b0,"target",aVStack_58);
    se::Value::Value(aVStack_68);
    pOVar7 = (Object *)se::Value::toObject((Value *)(this + 0x18));
    uVar8 = se::Object::getProperty(pOVar7,"onclose",aVStack_68);
    if (((uVar8 & 1) == 0) || (local_60 != '\x05')) {
LAB_00993d48:
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_websocket.cpp, 206): Can\'t get onclose function!\n"
                         );
    }
    else {
      pOVar7 = (Object *)se::Value::toObject(aVStack_68);
      uVar8 = se::Object::isFunction(pOVar7);
      if ((uVar8 & 1) == 0) goto LAB_00993d48;
      local_80 = (Value *)0x0;
      local_78 = (Value *)0x0;
      local_70 = (Value *)0x0;
      se::Value::Value(aVStack_90,(HandleObject *)&local_b0,false);
      if (local_78 < local_70) {
                    /* try { // try from 00993d30 to 00a93d73 has its CatchHandler @ 00993d94 */
        se::Value::Value(local_78,aVStack_90);
        local_78 = local_78 + 0x10;
      }
      else {
        std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::
        __push_back_slow_path<se::Value>
                  ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_80,aVStack_90);
      }
                    /* catch() { ... } // from try @ 00993b44 with catch @ 00993ddc
                       catch() { ... } // from try @ 00993bbc with catch @ 00993ddc
                       catch() { ... } // from try @ 00993c84 with catch @ 00993ddc */
      se::Value::~Value(aVStack_90);
      pOVar7 = (Object *)se::Value::toObject(aVStack_68);
      se::Object::call(pOVar7,(vector *)&local_80,this_01,(Value *)0x0);
      pVVar3 = local_80;
      pVVar2 = local_78;
      if (local_80 != (Value *)0x0) {
        while (pVVar2 != pVVar3) {
          se::Value::~Value(pVVar2 + -0x10);
          pVVar2 = pVVar2 + -0x10;
        }
        local_78 = pVVar3;
                    /* try { // try from 00993e34 to 00a93e87 has its CatchHandler @ 00993e34
                       catch() { ... } // from try @ 00993e34 with catch @ 00993e34
                       catch() { ... } // from try @ 0099408c with catch @ 00993e34 */
        operator_delete(local_80);
      }
    }
    se::Object::unroot(this_01);
    this_00 = (ScriptEngine *)se::ScriptEngine::getInstance();
    pOVar7 = (Object *)se::ScriptEngine::getGlobalObject(this_00);
                    /* try { // try from 00993d74 to 00a93e33 has its CatchHandler @ 00993ab8 */
    se::Object::detachObject(pOVar7,this_01);
    se::Value::~Value(aVStack_68);
    se::Value::~Value(aVStack_58);
    se::HandleObject::~HandleObject((HandleObject *)&local_b0);
  }
                    /* catch() { ... } // from try @ 00993b8c with catch @ 00993d90 */
                    /* catch() { ... } // from try @ 00993b9c with catch @ 00993d94
                       catch() { ... } // from try @ 00993d30 with catch @ 00993d94 */
  cocos2d::Ref::release((Ref *)param_1);
  cocos2d::Ref::release((Ref *)this);
LAB_00993da0:
  v8::HandleScope::~HandleScope(aHStack_a8);
                    /* catch() { ... } // from try @ 00993b78 with catch @ 00993dac
                       catch() { ... } // from try @ 00993c28 with catch @ 00993dac */
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00993b38 with catch @ 00993dc4 */
                    /* catch() { ... } // from try @ 00993b2c with catch @ 00993dc8 */
                    /* catch() { ... } // from try @ 00993b0c with catch @ 00993dcc */
  return;
}

