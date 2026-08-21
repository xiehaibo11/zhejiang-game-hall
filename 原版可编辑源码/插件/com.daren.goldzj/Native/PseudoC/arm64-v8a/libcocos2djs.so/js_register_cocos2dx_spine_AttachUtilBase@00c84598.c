
/* js_register_cocos2dx_spine_AttachUtilBase(se::Object*) */

undefined8 js_register_cocos2dx_spine_AttachUtilBase(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined6 uStack_3f;
  undefined2 local_39;
  undefined6 uStack_37;
  undefined1 local_31;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = (void *)0x0;
  local_40 = (basic_string)0x1c;
  uStack_37 = 0x657361426c69;
  uStack_3f = 0x686361747441;
  local_39 = 0x7455;
  local_31 = 0;
  this = (Class *)se::Class::create(&local_40,param_1,(Object *)0x0,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineFunction
            (this,"associateAttachedNode",
             js_cocos2dx_spine_AttachUtilBase_associateAttachedNodeRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<spine::AttachUtilBase>(this);
  __jsb_spine_AttachUtilBase_proto = se::Class::getProto(this);
  __jsb_spine_AttachUtilBase_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

