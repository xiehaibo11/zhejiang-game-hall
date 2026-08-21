
/* js_register_cocos2dx_spine_BoundingBoxAttachment(se::Object*) */

undefined8 js_register_cocos2dx_spine_BoundingBoxAttachment(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined5 uStack_37;
  undefined2 uStack_32;
  undefined1 uStack_30;
  undefined5 uStack_2f;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_29 = 0;
  local_40 = (basic_string)0x2a;
  uStack_2a = 0;
  uStack_2f = 0x746e656d68;
  uStack_37 = 0x7441786f42;
  uStack_32 = 0x6174;
  uStack_30 = 99;
  uStack_3f = 0x6e69646e756f42;
  uStack_38 = 0x67;
  this = (Class *)se::Class::create(&local_40,param_1,__jsb_spine_VertexAttachment_proto,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_29,CONCAT16(uStack_2a,CONCAT51(uStack_2f,uStack_30))));
  }
  se::Class::defineFunction(this,"copy",js_cocos2dx_spine_BoundingBoxAttachment_copyRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<spine::BoundingBoxAttachment>(this);
  __jsb_spine_BoundingBoxAttachment_proto = se::Class::getProto(this);
  __jsb_spine_BoundingBoxAttachment_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

