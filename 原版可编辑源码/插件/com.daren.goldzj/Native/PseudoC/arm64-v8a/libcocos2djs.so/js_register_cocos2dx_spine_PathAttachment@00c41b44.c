
/* js_register_cocos2dx_spine_PathAttachment(se::Object*) */

undefined8 js_register_cocos2dx_spine_PathAttachment(Object *param_1)

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
  uStack_37 = 0x746e656d6863;
  uStack_3f = 0x744168746150;
  local_39 = 0x6174;
  local_31 = 0;
  this = (Class *)se::Class::create(&local_40,param_1,__jsb_spine_VertexAttachment_proto,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineFunction
            (this,"isConstantSpeed",js_cocos2dx_spine_PathAttachment_isConstantSpeedRegistry);
  se::Class::defineFunction(this,"isClosed",js_cocos2dx_spine_PathAttachment_isClosedRegistry);
  se::Class::defineFunction
            (this,"setConstantSpeed",js_cocos2dx_spine_PathAttachment_setConstantSpeedRegistry);
  se::Class::defineFunction(this,"setClosed",js_cocos2dx_spine_PathAttachment_setClosedRegistry);
  se::Class::defineFunction(this,"getLengths",js_cocos2dx_spine_PathAttachment_getLengthsRegistry);
  se::Class::defineFunction(this,"copy",js_cocos2dx_spine_PathAttachment_copyRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<spine::PathAttachment>(this);
  __jsb_spine_PathAttachment_proto = se::Class::getProto(this);
  __jsb_spine_PathAttachment_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

