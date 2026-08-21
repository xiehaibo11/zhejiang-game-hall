
/* JSB_WebSocketDelegate::onMessage(cocos2d::network::WebSocket*, cocos2d::network::WebSocket::Data
   const&) */

void __thiscall
JSB_WebSocketDelegate::onMessage(JSB_WebSocketDelegate *this,WebSocket *param_1,Data *param_2)

{
  long lVar1;
  Value *pVVar2;
  Value *pVVar3;
  Isolate *pIVar4;
  long lVar5;
  long lVar6;
  Object *pOVar7;
  ulong uVar8;
  Object *pOVar9;
  char *__src;
  void *__dest;
  ulong uVar10;
  Object *local_d8;
  HandleScope aHStack_d0 [24];
  ulong local_b8;
  ulong local_b0;
  void *local_a8;
  HandleObject aHStack_a0 [8];
  byte local_98;
  Value *local_90;
  Value *local_88;
  Value *local_80;
  Value aVStack_78 [8];
  char local_70;
  Value aVStack_68 [16];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00993760 to 00a937b3 has its CatchHandler @ 00993760
                       catch() { ... } // from try @ 00993760 with catch @ 00993760
                       catch() { ... } // from try @ 009939b8 with catch @ 00993760 */
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  pIVar4 = (Isolate *)v8::Isolate::GetCurrent();
  v8::HandleScope::HandleScope(aHStack_d0,pIVar4);
  if (cocos2d::Application::_instance == 0) goto LAB_009938c0;
  lVar5 = se::NativePtrToObjectMap::find(param_1);
  lVar6 = se::NativePtrToObjectMap::end();
  if (lVar5 == lVar6) goto LAB_009938c0;
  pOVar9 = *(Object **)(lVar5 + 0x18);
  pOVar7 = (Object *)se::Object::createPlainObject();
                    /* try { // try from 009937b4 to 00a937cb has its CatchHandler @ 00993a50 */
  se::HandleObject::HandleObject((HandleObject *)&local_d8,pOVar7);
  pOVar7 = local_d8;
  se::Value::Value((Value *)&local_90,"message");
                    /* try { // try from 009937d4 to 00a937df has its CatchHandler @ 00993a4c */
  se::Object::setProperty(pOVar7,"type",(Value *)&local_90);
                    /* try { // try from 009937e0 to 00a937eb has its CatchHandler @ 00993a48 */
  se::Value::~Value((Value *)&local_90);
                    /* try { // try from 009937ec to 00a93803 has its CatchHandler @ 00993a60 */
  se::Value::Value(aVStack_68);
  native_ptr_to_seval<cocos2d::network::WebSocket>((type *)param_1,aVStack_68,(bool *)0x0);
  se::Object::setProperty(local_d8,"target",aVStack_68);
  se::Value::Value(aVStack_78);
                    /* try { // try from 00993820 to 00a93827 has its CatchHandler @ 00993a30 */
  pOVar7 = (Object *)se::Value::toObject((Value *)(this + 0x18));
  uVar8 = se::Object::getProperty(pOVar7,"onmessage",aVStack_78);
                    /* try { // try from 00993834 to 00a93857 has its CatchHandler @ 00993a2c */
  if (((uVar8 & 1) == 0) || (local_70 != '\x05')) {
LAB_00993890:
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_websocket.cpp, 168): Can\'t get onmessage function!\n"
                       );
  }
  else {
    pOVar7 = (Object *)se::Value::toObject(aVStack_78);
    uVar8 = se::Object::isFunction(pOVar7);
    if ((uVar8 & 1) == 0) goto LAB_00993890;
    local_90 = (Value *)0x0;
    local_88 = (Value *)0x0;
    local_80 = (Value *)0x0;
    se::Value::Value((Value *)&local_b8,(HandleObject *)&local_d8,false);
                    /* try { // try from 0099386c to 00a938d3 has its CatchHandler @ 00993a60 */
    if (local_88 < local_80) {
      se::Value::Value(local_88,(Value *)&local_b8);
      local_88 = local_88 + 0x10;
    }
    else {
      std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::
      __push_back_slow_path<se::Value>
                ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_90,(Value *)&local_b8
                );
    }
    se::Value::~Value((Value *)&local_b8);
    if (param_2[0x18] == (Data)0x0) {
      se::Value::Value((Value *)aHStack_a0);
      __src = *(char **)param_2;
                    /* catch() { ... } // from try @ 00993834 with catch @ 00993a2c
                       catch() { ... } // from try @ 00993920 with catch @ 00993a2c */
      if ((*__src == '\0') && (uVar8 = *(ulong *)(param_2 + 8), 0 < (long)uVar8)) {
                    /* catch() { ... } // from try @ 00993820 with catch @ 00993a30
                       catch() { ... } // from try @ 009938d8 with catch @ 00993a30 */
        local_b8 = 0;
        local_b0 = 0;
        local_a8 = (void *)0x0;
        if (uVar8 < 0x17) {
                    /* catch() { ... } // from try @ 009937e0 with catch @ 00993a48 */
          __dest = (void *)((ulong)&local_b8 | 1);
                    /* catch() { ... } // from try @ 009937d4 with catch @ 00993a4c */
          local_b8 = (ulong)(byte)((int)uVar8 << 1);
                    /* catch() { ... } // from try @ 009937b4 with catch @ 00993a50 */
        }
        else {
          uVar10 = uVar8 + 0x10 & 0xfffffffffffffff0;
                    /* catch() { ... } // from try @ 009937ec with catch @ 00993a60
                       catch() { ... } // from try @ 0099386c with catch @ 00993a60
                       catch() { ... } // from try @ 0099397c with catch @ 00993a60 */
          __dest = operator_new(uVar10);
          local_b8 = uVar10 | 1;
          local_b0 = uVar8;
          local_a8 = __dest;
        }
        memcpy(__dest,__src,uVar8);
        *(undefined1 *)((long)__dest + uVar8) = 0;
        se::Value::setString((Value *)aHStack_a0,(basic_string *)&local_b8);
        if ((local_b8 & 1) != 0) {
          operator_delete(local_a8);
        }
      }
      else {
                    /* try { // try from 0099397c to 00a939b7 has its CatchHandler @ 00993a60 */
        se::Value::setString((Value *)aHStack_a0,__src);
      }
      if (local_98 < 2) {
        cocos2d::network::WebSocket::closeAsync(param_1);
      }
      else {
        se::Value::Value((Value *)&local_b8,(Value *)aHStack_a0);
                    /* try { // try from 009939b8 to 00a93ab7 has its CatchHandler @ 00993760 */
        se::Object::setProperty(local_d8,"data",(Value *)&local_b8);
        se::Value::~Value((Value *)&local_b8);
      }
      se::Value::~Value((Value *)aHStack_a0);
    }
    else {
      pOVar7 = (Object *)
               se::Object::createArrayBufferObject(*(void **)param_2,*(ulong *)(param_2 + 8));
                    /* try { // try from 00993920 to 00a93963 has its CatchHandler @ 00993a2c */
      se::HandleObject::HandleObject(aHStack_a0,pOVar7);
      se::Value::Value((Value *)&local_b8,aHStack_a0,false);
      se::Object::setProperty(local_d8,"data",(Value *)&local_b8);
      se::Value::~Value((Value *)&local_b8);
      se::HandleObject::~HandleObject(aHStack_a0);
    }
    pOVar7 = (Object *)se::Value::toObject(aVStack_78);
    se::Object::call(pOVar7,(vector *)&local_90,pOVar9,(Value *)0x0);
    pVVar3 = local_90;
    pVVar2 = local_88;
    if (local_90 != (Value *)0x0) {
      while (pVVar2 != pVVar3) {
        se::Value::~Value(pVVar2 + -0x10);
        pVVar2 = pVVar2 + -0x10;
      }
      local_88 = pVVar3;
      operator_delete(local_90);
    }
  }
  se::Value::~Value(aVStack_78);
  se::Value::~Value(aVStack_68);
  se::HandleObject::~HandleObject((HandleObject *)&local_d8);
LAB_009938c0:
  v8::HandleScope::~HandleScope(aHStack_d0);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 009938d8 to 00a9391b has its CatchHandler @ 00993a30 */
  return;
}

