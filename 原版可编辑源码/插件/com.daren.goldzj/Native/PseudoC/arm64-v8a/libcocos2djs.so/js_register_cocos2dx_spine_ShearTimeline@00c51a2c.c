
/* js_register_cocos2dx_spine_ShearTimeline(se::Object*) */

undefined8 js_register_cocos2dx_spine_ShearTimeline(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined5 uStack_3f;
  undefined2 uStack_3a;
  undefined1 uStack_38;
  undefined5 uStack_37;
  undefined1 local_32;
  undefined1 uStack_31;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_31 = 0;
  local_30 = (void *)0x0;
  local_40 = (basic_string)0x1a;
  uStack_37 = 0x656e696c65;
  uStack_3f = 0x7261656853;
  uStack_3a = 0x6954;
  uStack_38 = 0x6d;
  local_32 = 0;
  this = (Class *)se::Class::create(&local_40,param_1,__jsb_spine_TranslateTimeline_proto,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineFunction
            (this,"getPropertyId",js_cocos2dx_spine_ShearTimeline_getPropertyIdRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<spine::ShearTimeline>(this);
  __jsb_spine_ShearTimeline_proto = se::Class::getProto(this);
  __jsb_spine_ShearTimeline_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

