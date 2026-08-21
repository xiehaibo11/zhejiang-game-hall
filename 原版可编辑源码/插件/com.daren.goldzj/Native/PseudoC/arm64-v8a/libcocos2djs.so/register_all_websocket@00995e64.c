
/* register_all_websocket(se::Object*) */

undefined8 register_all_websocket(Object *param_1)

{
  long lVar1;
  Class *this;
  Object *pOVar2;
  Class *local_60;
  Class *pCStack_58;
  basic_string local_50;
  undefined7 uStack_4f;
  undefined1 uStack_48;
  undefined2 local_47;
  undefined5 uStack_45;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00995e98 to 00a95edb has its CatchHandler @ 00995fec */
  uStack_45 = 0;
  local_40 = (void *)0x0;
  local_50 = (basic_string)0x12;
  local_47 = 0x74;
  uStack_4f = 0x6b636f53626557;
  uStack_48 = 0x65;
  this = (Class *)se::Class::create(&local_50,param_1,(Object *)0x0,WebSocket_constructorRegistry);
  if (((byte)local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  se::Class::defineFinalizeFunction(this,WebSocket_finalizeRegistry);
  se::Class::defineFunction(this,"send",WebSocket_sendRegistry);
  se::Class::defineFunction(this,"close",WebSocket_closeRegistry);
  se::Class::defineProperty
            (this,"readyState",WebSocket_getReadyStateRegistry,
             (_func_void_Local_Local_PropertyCallbackInfo_ptr *)0x0);
                    /* try { // try from 00995f38 to 00a95f73 has its CatchHandler @ 00996064 */
  se::Class::defineProperty
            (this,"bufferedAmount",WebSocket_getBufferedAmountRegistry,
             (_func_void_Local_Local_PropertyCallbackInfo_ptr *)0x0);
  se::Class::defineProperty
            (this,"extensions",WebSocket_getExtensionsRegistry,
             (_func_void_Local_Local_PropertyCallbackInfo_ptr *)0x0);
                    /* try { // try from 00995f74 to 00a960bb has its CatchHandler @ 00995ca4 */
  se::Class::defineProperty
            (this,"CONNECTING",Websocket_CONNECTINGRegistry,
             (_func_void_Local_Local_PropertyCallbackInfo_ptr *)0x0);
  se::Class::defineProperty
            (this,"CLOSING",Websocket_CLOSINGRegistry,
             (_func_void_Local_Local_PropertyCallbackInfo_ptr *)0x0);
  se::Class::defineProperty
            (this,"OPEN",Websocket_OPENRegistry,
             (_func_void_Local_Local_PropertyCallbackInfo_ptr *)0x0);
  se::Class::defineProperty
            (this,"CLOSED",Websocket_CLOSEDRegistry,
             (_func_void_Local_Local_PropertyCallbackInfo_ptr *)0x0);
  se::Class::install(this);
                    /* catch() { ... } // from try @ 00995da8 with catch @ 00995fec
                       catch() { ... } // from try @ 00995e98 with catch @ 00995fec */
  se::Value::Value((Value *)&local_50);
                    /* catch() { ... } // from try @ 00995d7c with catch @ 00995ff0
                       catch() { ... } // from try @ 00995e50 with catch @ 00995ff0 */
  se::Object::getProperty(param_1,"WebSocket",(Value *)&local_50);
  pOVar2 = (Object *)se::Value::toObject((Value *)&local_50);
  se::Object::defineProperty
            (pOVar2,"CONNECTING",Websocket_CONNECTINGRegistry,
             (_func_void_Local_Local_PropertyCallbackInfo_ptr *)0x0);
  pOVar2 = (Object *)se::Value::toObject((Value *)&local_50);
  se::Object::defineProperty
            (pOVar2,"CLOSING",Websocket_CLOSINGRegistry,
             (_func_void_Local_Local_PropertyCallbackInfo_ptr *)0x0);
  pOVar2 = (Object *)se::Value::toObject((Value *)&local_50);
                    /* catch() { ... } // from try @ 00995d28 with catch @ 0099604c */
                    /* catch() { ... } // from try @ 00995d1c with catch @ 00996050 */
                    /* catch() { ... } // from try @ 00995cfc with catch @ 00996054 */
  se::Object::defineProperty
            (pOVar2,"OPEN",Websocket_OPENRegistry,
             (_func_void_Local_Local_PropertyCallbackInfo_ptr *)0x0);
                    /* catch() { ... } // from try @ 00995d34 with catch @ 00996064
                       catch() { ... } // from try @ 00995de4 with catch @ 00996064
                       catch() { ... } // from try @ 00995f38 with catch @ 00996064 */
  pOVar2 = (Object *)se::Value::toObject((Value *)&local_50);
  se::Object::defineProperty
            (pOVar2,"CLOSED",Websocket_CLOSEDRegistry,
             (_func_void_Local_Local_PropertyCallbackInfo_ptr *)0x0);
  local_60 = (Class *)0x188d4da;
  pCStack_58 = this;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
  ::__emplace_unique_impl<char_const*&,se::Class*&>(JSBClassType::__jsbClassTypeMap,&local_60);
  __jsb_WebSocket_class = this;
  se::ScriptEngine::getInstance();
                    /* try { // try from 009960bc to 00a9610f has its CatchHandler @ 009960bc
                       catch() { ... } // from try @ 009960bc with catch @ 009960bc
                       catch() { ... } // from try @ 00996284 with catch @ 009960bc */
  se::ScriptEngine::clearException();
  se::Value::~Value((Value *)&local_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

