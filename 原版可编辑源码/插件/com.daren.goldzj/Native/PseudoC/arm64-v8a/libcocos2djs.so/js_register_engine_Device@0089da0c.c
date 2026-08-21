
/* js_register_engine_Device(se::Object*) */

undefined8 js_register_engine_Device(Object *param_1)

{
  long lVar1;
  Class *this;
  Class *local_48;
  undefined8 local_40;
  void *local_38;
  Class *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  local_38 = (void *)0x0;
  local_48 = (Class *)0x6563697665440c;
  this = (Class *)se::Class::create((basic_string *)&local_48,param_1,(Object *)0x0,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((ulong)local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  se::Class::defineStaticFunction
            (this,"getDevicePixelRatio",js_engine_Device_getDevicePixelRatioRegistry);
  se::Class::defineStaticFunction
            (this,"setAccelerometerEnabled",js_engine_Device_setAccelerometerEnabledRegistry);
  se::Class::defineStaticFunction
            (this,"setAccelerometerInterval",js_engine_Device_setAccelerometerIntervalRegistry);
  se::Class::defineStaticFunction(this,"vibrate",js_engine_Device_vibrateRegistry);
  se::Class::defineStaticFunction(this,"setKeepScreenOn",js_engine_Device_setKeepScreenOnRegistry);
  se::Class::defineStaticFunction(this,"getNetworkType",js_engine_Device_getNetworkTypeRegistry);
  se::Class::defineStaticFunction(this,"getBatteryLevel",js_engine_Device_getBatteryLevelRegistry);
  se::Class::defineStaticFunction
            (this,"getDeviceRotation",js_engine_Device_getDeviceRotationRegistry);
  se::Class::defineStaticFunction(this,"getDPI",js_engine_Device_getDPIRegistry);
  se::Class::defineStaticFunction(this,"getSafeAreaEdge",js_engine_Device_getSafeAreaEdgeRegistry);
  se::Class::defineStaticFunction(this,"getDeviceModel",js_engine_Device_getDeviceModelRegistry);
  se::Class::install(this);
  local_30 = (Class *)0x185b01a;
  local_48 = this;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
  ::__emplace_unique_impl<char_const*&,se::Class*&>(JSBClassType::__jsbClassTypeMap,&local_30);
  __jsb_cocos2d_Device_proto = se::Class::getProto(this);
  __jsb_cocos2d_Device_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

