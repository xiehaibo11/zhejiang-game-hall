
/* js_register_cocos2dx_spine_Attachment(se::Object*) */

undefined8 js_register_cocos2dx_spine_Attachment(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined2 local_37;
  undefined1 local_35;
  undefined4 uStack_34;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_34 = 0;
  local_40 = (basic_string)0x14;
  local_30 = (void *)0x0;
  local_37 = 0x746e;
  uStack_3f = 0x6d686361747441;
  uStack_38 = 0x65;
  local_35 = 0;
  this = (Class *)se::Class::create(&local_40,param_1,(Object *)0x0,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineFunction(this,"getRefCount",js_cocos2dx_spine_Attachment_getRefCountRegistry);
  se::Class::defineFunction(this,"reference",js_cocos2dx_spine_Attachment_referenceRegistry);
  se::Class::defineFunction(this,"getName",js_cocos2dx_spine_Attachment_getNameRegistry);
  se::Class::defineFunction(this,"dereference",js_cocos2dx_spine_Attachment_dereferenceRegistry);
  se::Class::defineFunction(this,"copy",js_cocos2dx_spine_Attachment_copyRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<spine::Attachment>(this);
  __jsb_spine_Attachment_proto = se::Class::getProto(this);
  __jsb_spine_Attachment_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

