
/* js_register_cocos2dx_spine_VertexAttachment(se::Object*) */

undefined8 js_register_cocos2dx_spine_VertexAttachment(Object *param_1)

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
  uStack_37 = 0x6e656d68636174;
  uStack_30 = 0x74;
  uStack_3f = 0x41786574726556;
  uStack_38 = 0x74;
  uStack_2f = 0;
  this = (Class *)se::Class::create(&local_40,param_1,__jsb_spine_Attachment_proto,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_2e,CONCAT11(uStack_2f,uStack_30)));
  }
  se::Class::defineFunction
            (this,"getVertices",js_cocos2dx_spine_VertexAttachment_getVerticesRegistry);
  se::Class::defineFunction
            (this,"getDeformAttachment",
             js_cocos2dx_spine_VertexAttachment_getDeformAttachmentRegistry);
  se::Class::defineFunction(this,"getId",js_cocos2dx_spine_VertexAttachment_getIdRegistry);
  se::Class::defineFunction(this,"copyTo",js_cocos2dx_spine_VertexAttachment_copyToRegistry);
  se::Class::defineFunction
            (this,"setDeformAttachment",
             js_cocos2dx_spine_VertexAttachment_setDeformAttachmentRegistry);
  se::Class::defineFunction
            (this,"getWorldVerticesLength",
             js_cocos2dx_spine_VertexAttachment_getWorldVerticesLengthRegistry);
  se::Class::defineFunction
            (this,"setWorldVerticesLength",
             js_cocos2dx_spine_VertexAttachment_setWorldVerticesLengthRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<spine::VertexAttachment>(this);
  __jsb_spine_VertexAttachment_proto = se::Class::getProto(this);
  __jsb_spine_VertexAttachment_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

