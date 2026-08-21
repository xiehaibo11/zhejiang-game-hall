
/* js_register_cocos2dx_dragonbones_TextureData(se::Object*) */

undefined8 js_register_cocos2dx_dragonbones_TextureData(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined4 local_37;
  undefined3 uStack_33;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_33 = 0;
  local_30 = (void *)0x0;
  local_40 = (basic_string)0x16;
  local_37 = 0x617461;
  uStack_3f = 0x65727574786554;
  uStack_38 = 0x44;
  this = (Class *)se::Class::create(&local_40,param_1,__jsb_dragonBones_BaseObject_proto,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineFunction(this,"getParent",js_cocos2dx_dragonbones_TextureData_getParentRegistry);
  se::Class::defineFunction(this,"setFrame",js_cocos2dx_dragonbones_TextureData_setFrameRegistry);
  se::Class::defineFunction(this,"getRegion",js_cocos2dx_dragonbones_TextureData_getRegionRegistry);
  se::Class::defineFunction(this,"getFrame",js_cocos2dx_dragonbones_TextureData_getFrameRegistry);
  se::Class::defineFunction(this,"setParent",js_cocos2dx_dragonbones_TextureData_setParentRegistry);
  se::Class::defineStaticFunction
            (this,"createRectangle",js_cocos2dx_dragonbones_TextureData_createRectangleRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<dragonBones::TextureData>(this);
  __jsb_dragonBones_TextureData_proto = se::Class::getProto(this);
  __jsb_dragonBones_TextureData_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

