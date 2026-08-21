
/* js_register_universe_Device(se::Object*) */

undefined8 js_register_universe_Device(Object *param_1)

{
  long lVar1;
  Class *this;
  Class *local_48;
  undefined8 local_40;
  void *local_38;
  Class *local_30;
  long local_28;
  
                    /* try { // try from 009759bc to 00a75a7b has its CatchHandler @ 00975bc8 */
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
            (this,"getFreeDiskSpace",js_universe_Device_getFreeDiskSpaceRegistry);
  se::Class::defineStaticFunction(this,"getTime",js_universe_Device_getTimeRegistry);
  se::Class::defineStaticFunction(this,"copyString",js_universe_Device_copyStringRegistry);
  se::Class::defineStaticFunction
            (this,"getDeviceUserName",js_universe_Device_getDeviceUserNameRegistry);
                    /* try { // try from 00975a7c to 00a75b6f has its CatchHandler @ 009757e8 */
  se::Class::defineStaticFunction
            (this,"_onNetStateChange",js_universe_Device__onNetStateChangeRegistry);
  se::Class::defineStaticFunction(this,"isHaveApp",js_universe_Device_isHaveAppRegistry);
  se::Class::defineStaticFunction
            (this,"showIosAppComment",js_universe_Device_showIosAppCommentRegistry);
  se::Class::defineStaticFunction(this,"getMacAddress",js_universe_Device_getMacAddressRegistry);
  se::Class::defineStaticFunction(this,"getOsName",js_universe_Device_getOsNameRegistry);
  se::Class::defineStaticFunction(this,"getDeviceName",js_universe_Device_getDeviceNameRegistry);
  se::Class::defineStaticFunction(this,"ping",js_universe_Device_pingRegistry);
  se::Class::defineStaticFunction
            (this,"isSupportChangeIcon",js_universe_Device_isSupportChangeIconRegistry);
  se::Class::defineStaticFunction(this,"getAppVersion",js_universe_Device_getAppVersionRegistry);
  se::Class::defineStaticFunction(this,"getOsVersion",js_universe_Device_getOsVersionRegistry);
                    /* try { // try from 00975b70 to 00a75b77 has its CatchHandler @ 00975b90 */
                    /* try { // try from 00975b78 to 00a75b7b has its CatchHandler @ 009757e8 */
                    /* try { // try from 00975b7c to 00a75b83 has its CatchHandler @ 00975b8c */
  se::Class::defineStaticFunction(this,"showMessageBox",js_universe_Device_showMessageBoxRegistry);
                    /* try { // try from 00975b84 to 00a75b8b has its CatchHandler @ 00975b94 */
                    /* catch() { ... } // from try @ 00975b7c with catch @ 00975b8c
                       try { // try from 00975b8c to 00a75c5f has its CatchHandler @ 009757e8 */
                    /* catch() { ... } // from try @ 00975b70 with catch @ 00975b90 */
                    /* catch() { ... } // from try @ 009758ac with catch @ 00975b94
                       catch() { ... } // from try @ 00975b84 with catch @ 00975b94 */
  se::Class::defineStaticFunction
            (this,"removeAllNotifications",js_universe_Device_removeAllNotificationsRegistry);
                    /* catch() { ... } // from try @ 009758f0 with catch @ 00975ba4 */
                    /* catch() { ... } // from try @ 00975840 with catch @ 00975ba8 */
  se::Class::defineStaticFunction(this,"getLocation",js_universe_Device_getLocationRegistry);
                    /* catch() { ... } // from try @ 00975988 with catch @ 00975bb8 */
                    /* catch() { ... } // from try @ 009759bc with catch @ 00975bc8 */
  se::Class::defineStaticFunction(this,"changeIcon",js_universe_Device_changeIconRegistry);
  se::Class::defineStaticFunction(this,"getPackageName",js_universe_Device_getPackageNameRegistry);
  se::Class::defineStaticFunction(this,"startApp",js_universe_Device_startAppRegistry);
  se::Class::defineStaticFunction(this,"getPlatform",js_universe_Device_getPlatformRegistry);
  se::Class::defineStaticFunction(this,"getIp",js_universe_Device_getIpRegistry);
  se::Class::defineStaticFunction(this,"getIosIDFA",js_universe_Device_getIosIDFARegistry);
  se::Class::defineStaticFunction(this,"getBatteryState",js_universe_Device_getBatteryStateRegistry)
  ;
  se::Class::defineStaticFunction
            (this,"createNotificationNow",js_universe_Device_createNotificationNowRegistry);
  se::Class::defineStaticFunction
            (this,"setNetStateChangeCallback",js_universe_Device_setNetStateChangeCallbackRegistry);
  se::Class::defineStaticFunction(this,"getNetEnvName",js_universe_Device_getNetEnvNameRegistry);
  se::Class::defineStaticFunction
            (this,"setSkipBackupToPath",js_universe_Device_setSkipBackupToPathRegistry);
  se::Class::defineStaticFunction
            (this,"createNotification",js_universe_Device_createNotificationRegistry);
  se::Class::defineStaticFunction(this,"getHardwareCode",js_universe_Device_getHardwareCodeRegistry)
  ;
  se::Class::defineStaticFunction
            (this,"getSystemVersion",js_universe_Device_getSystemVersionRegistry);
  se::Class::defineStaticFunction
            (this,"removeNotification",js_universe_Device_removeNotificationRegistry);
  se::Class::defineStaticFunction(this,"getCarrierName",js_universe_Device_getCarrierNameRegistry);
  se::Class::defineStaticFunction(this,"getUUID",js_universe_Device_getUUIDRegistry);
  se::Class::defineStaticFunction(this,"xhCallOCFunc",js_universe_Device_Ymn_xhCallOCFuncRegistry);
  se::Class::defineStaticFunction(this,"setListener",js_universe_Device_Ymn_setListenerRegistry);
  se::Class::defineStaticFunction
            (this,"buglyReportInit",js_universe_Device_Bugly_CrashReportInitRegistry);
  se::Class::defineFinalizeFunction(this,js_universe_Device_finalizeRegistry);
  se::Class::install(this);
  local_30 = (Class *)0x18830e8;
  local_48 = this;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
  ::__emplace_unique_impl<char_const*&,se::Class*&>(JSBClassType::__jsbClassTypeMap,&local_30);
  __jsb_universe_Device_proto = se::Class::getProto(this);
  __jsb_universe_Device_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

