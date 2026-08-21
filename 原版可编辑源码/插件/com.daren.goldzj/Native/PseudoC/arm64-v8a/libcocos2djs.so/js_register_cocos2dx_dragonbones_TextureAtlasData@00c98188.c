
/* js_register_cocos2dx_dragonbones_TextureAtlasData(se::Object*) */

undefined8 js_register_cocos2dx_dragonbones_TextureAtlasData(Object *param_1)

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
  uStack_37 = 0x74614473616c74;
  uStack_30 = 0x61;
  uStack_3f = 0x65727574786554;
  uStack_38 = 0x41;
  uStack_2f = 0;
  this = (Class *)se::Class::create(&local_40,param_1,__jsb_dragonBones_BaseObject_proto,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_2e,CONCAT11(uStack_2f,uStack_30)));
  }
  se::Class::defineProperty
            (this,"name",js_cocos2dx_dragonbones_TextureAtlasData_get_nameRegistry,
             js_cocos2dx_dragonbones_TextureAtlasData_set_nameRegistry);
  se::Class::defineFunction
            (this,"createTexture",js_cocos2dx_dragonbones_TextureAtlasData_createTextureRegistry);
  se::Class::defineFunction
            (this,"getTexture",js_cocos2dx_dragonbones_TextureAtlasData_getTextureRegistry);
  se::Class::defineFunction
            (this,"addTexture",js_cocos2dx_dragonbones_TextureAtlasData_addTextureRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<dragonBones::TextureAtlasData>(this);
  __jsb_dragonBones_TextureAtlasData_proto = se::Class::getProto(this);
  __jsb_dragonBones_TextureAtlasData_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

