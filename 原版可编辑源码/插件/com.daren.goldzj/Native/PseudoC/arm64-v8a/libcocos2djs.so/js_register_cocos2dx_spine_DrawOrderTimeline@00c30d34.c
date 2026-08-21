
/* js_register_cocos2dx_spine_DrawOrderTimeline(se::Object*) */

undefined8 js_register_cocos2dx_spine_DrawOrderTimeline(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined2 uStack_2f;
  undefined5 uStack_2d;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_2d = 0;
  local_40 = (basic_string)0x22;
  uStack_2f = 0x65;
  uStack_37 = 0x696c656d695472;
  uStack_30 = 0x6e;
  uStack_3f = 0x64724f77617244;
  uStack_38 = 0x65;
  this = (Class *)se::Class::create(&local_40,param_1,__jsb_spine_Timeline_proto,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_2d,CONCAT21(uStack_2f,uStack_30)));
  }
  se::Class::defineFunction
            (this,"getPropertyId",js_cocos2dx_spine_DrawOrderTimeline_getPropertyIdRegistry);
  se::Class::defineFunction
            (this,"getFrameCount",js_cocos2dx_spine_DrawOrderTimeline_getFrameCountRegistry);
  se::Class::defineFunction(this,"getFrames",js_cocos2dx_spine_DrawOrderTimeline_getFramesRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<spine::DrawOrderTimeline>(this);
  __jsb_spine_DrawOrderTimeline_proto = se::Class::getProto(this);
  __jsb_spine_DrawOrderTimeline_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

