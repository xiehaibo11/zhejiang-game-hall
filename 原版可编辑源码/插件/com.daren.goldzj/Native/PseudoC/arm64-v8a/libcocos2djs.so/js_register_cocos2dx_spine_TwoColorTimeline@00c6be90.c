
/* js_register_cocos2dx_spine_TwoColorTimeline(se::Object*) */

undefined8 js_register_cocos2dx_spine_TwoColorTimeline(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined6 uStack_2e;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_2e = 0;
  local_40 = (basic_string)0x20;
  uStack_37 = 0x6e696c656d6954;
  uStack_30 = 0x65;
  uStack_3f = 0x6f6c6f436f7754;
  uStack_38 = 0x72;
  uStack_2f = 0;
  this = (Class *)se::Class::create(&local_40,param_1,__jsb_spine_CurveTimeline_proto,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_2e,CONCAT11(uStack_2f,uStack_30)));
  }
  se::Class::defineFunction
            (this,"setSlotIndex",js_cocos2dx_spine_TwoColorTimeline_setSlotIndexRegistry);
  se::Class::defineFunction
            (this,"getPropertyId",js_cocos2dx_spine_TwoColorTimeline_getPropertyIdRegistry);
  se::Class::defineFunction(this,"setFrame",js_cocos2dx_spine_TwoColorTimeline_setFrameRegistry);
  se::Class::defineFunction
            (this,"getSlotIndex",js_cocos2dx_spine_TwoColorTimeline_getSlotIndexRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<spine::TwoColorTimeline>(this);
  __jsb_spine_TwoColorTimeline_proto = se::Class::getProto(this);
  __jsb_spine_TwoColorTimeline_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

