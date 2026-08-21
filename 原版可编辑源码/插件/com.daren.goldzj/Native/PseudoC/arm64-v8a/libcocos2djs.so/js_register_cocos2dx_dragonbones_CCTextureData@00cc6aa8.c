
/* js_register_cocos2dx_dragonbones_CCTextureData(se::Object*) */

undefined8 js_register_cocos2dx_dragonbones_CCTextureData(Object *param_1)

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
  uStack_37 = 0x6174614465;
  uStack_3f = 0x7865544343;
  uStack_3a = 0x7574;
  uStack_38 = 0x72;
  local_32 = 0;
  this = (Class *)se::Class::create(&local_40,param_1,__jsb_dragonBones_TextureData_proto,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::install(this);
  JSBClassType::registerClass<dragonBones::CCTextureData>(this);
  __jsb_dragonBones_CCTextureData_proto = se::Class::getProto(this);
  __jsb_dragonBones_CCTextureData_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

