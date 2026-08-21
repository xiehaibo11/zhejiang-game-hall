
/* js_register_cocos2dx_spine_IkConstraintTimeline(se::Object*) */

undefined8 js_register_cocos2dx_spine_IkConstraintTimeline(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined4 uStack_2f;
  undefined1 uStack_2b;
  undefined2 uStack_2a;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_2a = 0;
  local_40 = (basic_string)0x28;
  uStack_2f = 0x656e696c;
  uStack_37 = 0x6d6954746e6961;
  uStack_30 = 0x65;
  uStack_3f = 0x74736e6f436b49;
  uStack_38 = 0x72;
  uStack_2b = 0;
  this = (Class *)se::Class::create(&local_40,param_1,__jsb_spine_CurveTimeline_proto,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_2a,CONCAT15(uStack_2b,CONCAT41(uStack_2f,uStack_30))));
  }
  se::Class::defineFunction
            (this,"getPropertyId",js_cocos2dx_spine_IkConstraintTimeline_getPropertyIdRegistry);
  se::Class::defineFunction(this,"setFrame",js_cocos2dx_spine_IkConstraintTimeline_setFrameRegistry)
  ;
  se::Class::install(this);
  JSBClassType::registerClass<spine::IkConstraintTimeline>(this);
  __jsb_spine_IkConstraintTimeline_proto = se::Class::getProto(this);
  __jsb_spine_IkConstraintTimeline_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

