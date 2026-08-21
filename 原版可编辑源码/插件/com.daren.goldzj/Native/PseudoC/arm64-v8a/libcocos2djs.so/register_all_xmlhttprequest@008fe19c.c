
/* register_all_xmlhttprequest(se::Object*) */

undefined8 register_all_xmlhttprequest(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_48;
  undefined6 uStack_47;
  undefined1 uStack_41;
  undefined1 uStack_40;
  undefined6 uStack_3f;
  undefined1 local_39;
  void *local_38;
  Class *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = (void *)0x0;
  local_48 = (basic_string)0x1c;
  uStack_3f = 0x747365757165;
  uStack_47 = 0x7474484c4d58;
  uStack_41 = 0x70;
  uStack_40 = 0x52;
  local_39 = 0;
  this = (Class *)se::Class::create(&local_48,param_1,(Object *)0x0,
                                    XMLHttpRequest_constructorRegistry);
  if (((byte)local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  se::Class::defineFinalizeFunction(this,XMLHttpRequest_finalizeRegistry);
  se::Class::defineFunction(this,"open",XMLHttpRequest_openRegistry);
  se::Class::defineFunction(this,"abort",XMLHttpRequest_abortRegistry);
  se::Class::defineFunction(this,"send",XMLHttpRequest_sendRegistry);
  se::Class::defineFunction(this,"setRequestHeader",XMLHttpRequest_setRequestHeaderRegistry);
  se::Class::defineFunction
            (this,"getAllResponseHeaders",XMLHttpRequest_getAllResponseHeadersRegistry);
  se::Class::defineFunction(this,"getResponseHeader",XMLHttpRequest_getResonpseHeaderRegistry);
  se::Class::defineFunction(this,"overrideMimeType",XMLHttpRequest_overrideMimeTypeRegistry);
  se::Class::defineProperty
            (this,"__mimeType",XMLHttpRequest_getMIMETypeRegistry,
             (_func_void_Local_Local_PropertyCallbackInfo_ptr *)0x0);
  se::Class::defineProperty
            (this,"readyState",XMLHttpRequest_getReadyStateRegistry,
             (_func_void_Local_Local_PropertyCallbackInfo_ptr *)0x0);
  se::Class::defineProperty
            (this,"status",XMLHttpRequest_getStatusRegistry,
             (_func_void_Local_Local_PropertyCallbackInfo_ptr *)0x0);
  se::Class::defineProperty
            (this,"statusText",XMLHttpRequest_getStatusTextRegistry,
             (_func_void_Local_Local_PropertyCallbackInfo_ptr *)0x0);
  se::Class::defineProperty
            (this,"responseText",XMLHttpRequest_getResponseTextRegistry,
             (_func_void_Local_Local_PropertyCallbackInfo_ptr *)0x0);
  se::Class::defineProperty
            (this,"responseXML",XMLHttpRequest_getResponseXMLRegistry,
             (_func_void_Local_Local_PropertyCallbackInfo_ptr *)0x0);
  se::Class::defineProperty
            (this,"response",XMLHttpRequest_getResponseRegistry,
             (_func_void_Local_Local_PropertyCallbackInfo_ptr *)0x0);
  se::Class::defineProperty
            (this,"timeout",XMLHttpRequest_getTimeoutRegistry,XMLHttpRequest_setTimeoutRegistry);
  se::Class::defineProperty
            (this,"responseType",XMLHttpRequest_getResponseTypeRegistry,
             XMLHttpRequest_setResponseTypeRegistry);
  se::Class::defineProperty
            (this,"withCredentials",XMLHttpRequest_getWithCredentialsRegistry,
             (_func_void_Local_Local_PropertyCallbackInfo_ptr *)0x0);
  se::Class::install(this);
  local_48 = SUB81(this,0);
  uStack_47 = (undefined6)((ulong)this >> 8);
  uStack_41 = (undefined1)((ulong)this >> 0x38);
  local_30 = (Class *)0x1867464;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
  ::__emplace_unique_impl<char_const*&,se::Class*&>(JSBClassType::__jsbClassTypeMap,&local_30);
  __jsb_XMLHttpRequest_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

