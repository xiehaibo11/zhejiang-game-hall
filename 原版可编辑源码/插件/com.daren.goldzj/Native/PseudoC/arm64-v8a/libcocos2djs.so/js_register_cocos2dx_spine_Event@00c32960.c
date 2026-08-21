
/* js_register_cocos2dx_spine_Event(se::Object*) */

undefined8 js_register_cocos2dx_spine_Event(Object *param_1)

{
  long lVar1;
  Class *this;
  ulong local_40 [2];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40[1] = 0;
  local_30 = (void *)0x0;
  local_40[0] = 0x746e6576450a;
  this = (Class *)se::Class::create((basic_string *)local_40,param_1,(Object *)0x0,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineFunction(this,"getFloatValue",js_cocos2dx_spine_Event_getFloatValueRegistry);
  se::Class::defineFunction(this,"getIntValue",js_cocos2dx_spine_Event_getIntValueRegistry);
  se::Class::defineFunction(this,"getStringValue",js_cocos2dx_spine_Event_getStringValueRegistry);
  se::Class::defineFunction(this,"getTime",js_cocos2dx_spine_Event_getTimeRegistry);
  se::Class::defineFunction(this,"getBalance",js_cocos2dx_spine_Event_getBalanceRegistry);
  se::Class::defineFunction(this,"setFloatValue",js_cocos2dx_spine_Event_setFloatValueRegistry);
  se::Class::defineFunction(this,"setIntValue",js_cocos2dx_spine_Event_setIntValueRegistry);
  se::Class::defineFunction(this,"getVolume",js_cocos2dx_spine_Event_getVolumeRegistry);
  se::Class::defineFunction(this,"setBalance",js_cocos2dx_spine_Event_setBalanceRegistry);
  se::Class::defineFunction(this,"getData",js_cocos2dx_spine_Event_getDataRegistry);
  se::Class::defineFunction(this,"setStringValue",js_cocos2dx_spine_Event_setStringValueRegistry);
  se::Class::defineFunction(this,"setVolume",js_cocos2dx_spine_Event_setVolumeRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<spine::Event>(this);
  __jsb_spine_Event_proto = se::Class::getProto(this);
  __jsb_spine_Event_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

