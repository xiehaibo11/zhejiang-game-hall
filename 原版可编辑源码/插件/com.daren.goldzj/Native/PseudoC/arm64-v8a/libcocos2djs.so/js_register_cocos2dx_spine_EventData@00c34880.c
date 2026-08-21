
/* js_register_cocos2dx_spine_EventData(se::Object*) */

undefined8 js_register_cocos2dx_spine_EventData(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined2 local_37;
  undefined5 uStack_35;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_35 = 0;
  local_30 = (void *)0x0;
  local_40 = (basic_string)0x12;
  local_37 = 0x61;
  uStack_3f = 0x6144746e657645;
  uStack_38 = 0x74;
  this = (Class *)se::Class::create(&local_40,param_1,(Object *)0x0,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineFunction(this,"getAudioPath",js_cocos2dx_spine_EventData_getAudioPathRegistry);
  se::Class::defineFunction(this,"getIntValue",js_cocos2dx_spine_EventData_getIntValueRegistry);
  se::Class::defineFunction
            (this,"getStringValue",js_cocos2dx_spine_EventData_getStringValueRegistry);
  se::Class::defineFunction(this,"getFloatValue",js_cocos2dx_spine_EventData_getFloatValueRegistry);
  se::Class::defineFunction(this,"getName",js_cocos2dx_spine_EventData_getNameRegistry);
  se::Class::defineFunction(this,"setFloatValue",js_cocos2dx_spine_EventData_setFloatValueRegistry);
  se::Class::defineFunction(this,"setIntValue",js_cocos2dx_spine_EventData_setIntValueRegistry);
  se::Class::defineFunction(this,"getVolume",js_cocos2dx_spine_EventData_getVolumeRegistry);
  se::Class::defineFunction(this,"setBalance",js_cocos2dx_spine_EventData_setBalanceRegistry);
  se::Class::defineFunction(this,"setVolume",js_cocos2dx_spine_EventData_setVolumeRegistry);
  se::Class::defineFunction
            (this,"setStringValue",js_cocos2dx_spine_EventData_setStringValueRegistry);
  se::Class::defineFunction(this,"getBalance",js_cocos2dx_spine_EventData_getBalanceRegistry);
  se::Class::defineFunction(this,"setAudioPath",js_cocos2dx_spine_EventData_setAudioPathRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<spine::EventData>(this);
  __jsb_spine_EventData_proto = se::Class::getProto(this);
  __jsb_spine_EventData_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

