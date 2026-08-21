
/* js_register_cocos2dx_spine_PointAttachment(se::Object*) */

undefined8 js_register_cocos2dx_spine_PointAttachment(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 local_38;
  undefined7 uStack_37;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = (basic_string)0x1e;
  uStack_37 = 0x746e656d686361;
  uStack_3f = 0x7441746e696f50;
  local_38 = 0x74;
  local_30 = (void *)0x0;
  this = (Class *)se::Class::create(&local_40,param_1,__jsb_spine_Attachment_proto,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineFunction(this,"getX",js_cocos2dx_spine_PointAttachment_getXRegistry);
  se::Class::defineFunction(this,"getY",js_cocos2dx_spine_PointAttachment_getYRegistry);
  se::Class::defineFunction
            (this,"getRotation",js_cocos2dx_spine_PointAttachment_getRotationRegistry);
  se::Class::defineFunction
            (this,"setRotation",js_cocos2dx_spine_PointAttachment_setRotationRegistry);
  se::Class::defineFunction(this,"copy",js_cocos2dx_spine_PointAttachment_copyRegistry);
  se::Class::defineFunction(this,"setX",js_cocos2dx_spine_PointAttachment_setXRegistry);
  se::Class::defineFunction(this,"setY",js_cocos2dx_spine_PointAttachment_setYRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<spine::PointAttachment>(this);
  __jsb_spine_PointAttachment_proto = se::Class::getProto(this);
  __jsb_spine_PointAttachment_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

