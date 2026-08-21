
/* js_register_cocos2dx_spine_Animation(se::Object*) */

undefined8 js_register_cocos2dx_spine_Animation(Object *param_1)

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
  local_37 = 0x6e;
  uStack_3f = 0x6974616d696e41;
  uStack_38 = 0x6f;
  this = (Class *)se::Class::create(&local_40,param_1,(Object *)0x0,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineFunction(this,"getTimelines",js_cocos2dx_spine_Animation_getTimelinesRegistry);
  se::Class::defineFunction(this,"hasTimeline",js_cocos2dx_spine_Animation_hasTimelineRegistry);
  se::Class::defineFunction(this,"getName",js_cocos2dx_spine_Animation_getNameRegistry);
  se::Class::defineFunction(this,"getDuration",js_cocos2dx_spine_Animation_getDurationRegistry);
  se::Class::defineFunction(this,"setDuration",js_cocos2dx_spine_Animation_setDurationRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<spine::Animation>(this);
  __jsb_spine_Animation_proto = se::Class::getProto(this);
  __jsb_spine_Animation_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

