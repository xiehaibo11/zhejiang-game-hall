
/* register_all_socketio(se::Object*) */

undefined8 register_all_socketio(Object *param_1)

{
  long lVar1;
  Class *this;
  Object *pOVar2;
  Class *local_58;
  basic_string local_50;
  undefined7 uStack_4f;
  undefined1 uStack_48;
  undefined1 local_47;
  undefined6 uStack_46;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_46 = 0;
  local_40 = (void *)0x0;
  local_50 = (basic_string)0x10;
  uStack_4f = 0x4974656b636f53;
  uStack_48 = 0x4f;
  local_47 = 0;
  this = (Class *)se::Class::create(&local_50,param_1,(Object *)0x0,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  se::Class::defineFinalizeFunction(this,SocketIO_finalizeRegistry);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00991e9c with catch @ 00991f34
                        */
  se::Class::defineProperty(this,"tag",SocketIO_prop_getTagRegistry,SocketIO_prop_setTagRegistry);
  se::Class::defineFunction(this,"send",SocketIO_sendRegistry);
  se::Class::defineFunction(this,"emit",SocketIO_emitRegistry);
  se::Class::defineFunction(this,"disconnect",SocketIO_disconnectRegistry);
  se::Class::defineFunction(this,"on",SocketIO_onRegistry);
  se::Class::install(this);
  local_58 = (Class *)0x188cfb2;
  local_50 = SUB81(this,0);
  uStack_4f = (undefined7)((ulong)this >> 8);
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
  ::__emplace_unique_impl<char_const*&,se::Class*&>(JSBClassType::__jsbClassTypeMap,&local_58);
  se::Value::Value((Value *)&local_50);
  se::Object::getProperty(param_1,"SocketIO",(Value *)&local_50);
  pOVar2 = (Object *)se::Value::toObject((Value *)&local_50);
  se::Object::defineFunction(pOVar2,"connect",SocketIO_connectRegistry);
  pOVar2 = (Object *)se::Value::toObject((Value *)&local_50);
  se::Object::defineFunction(pOVar2,"close",SocketIO_closeRegistry);
  __jsb_SocketIO_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  se::Value::~Value((Value *)&local_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

