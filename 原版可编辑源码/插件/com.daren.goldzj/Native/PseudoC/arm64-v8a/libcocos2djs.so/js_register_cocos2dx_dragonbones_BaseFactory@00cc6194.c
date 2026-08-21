
/* js_register_cocos2dx_dragonbones_BaseFactory(se::Object*) */

undefined8 js_register_cocos2dx_dragonbones_BaseFactory(Object *param_1)

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
  local_37 = 0x79726f;
  uStack_3f = 0x63614665736142;
  uStack_38 = 0x74;
  this = (Class *)se::Class::create(&local_40,param_1,(Object *)0x0,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineFunction
            (this,"replaceSkin",js_cocos2dx_dragonbones_BaseFactory_replaceSkinRegistry);
  se::Class::defineFunction
            (this,"replaceAnimation",js_cocos2dx_dragonbones_BaseFactory_replaceAnimationRegistry);
  se::Class::defineFunction(this,"getClock",js_cocos2dx_dragonbones_BaseFactory_getClockRegistry);
  se::Class::defineFunction
            (this,"removeDragonBonesData",
             js_cocos2dx_dragonbones_BaseFactory_removeDragonBonesDataRegistry);
  se::Class::defineFunction
            (this,"removeTextureAtlasData",
             js_cocos2dx_dragonbones_BaseFactory_removeTextureAtlasDataRegistry);
  se::Class::defineFunction
            (this,"parseDragonBonesData",
             js_cocos2dx_dragonbones_BaseFactory_parseDragonBonesDataRegistry);
  se::Class::defineFunction(this,"clear",js_cocos2dx_dragonbones_BaseFactory_clearRegistry);
  se::Class::defineFunction
            (this,"addDragonBonesData",
             js_cocos2dx_dragonbones_BaseFactory_addDragonBonesDataRegistry);
  se::Class::defineFunction
            (this,"buildArmature",js_cocos2dx_dragonbones_BaseFactory_buildArmatureRegistry);
  se::Class::defineFunction
            (this,"addTextureAtlasData",
             js_cocos2dx_dragonbones_BaseFactory_addTextureAtlasDataRegistry);
  se::Class::defineFunction
            (this,"getArmatureData",js_cocos2dx_dragonbones_BaseFactory_getArmatureDataRegistry);
  se::Class::defineFunction
            (this,"replaceSlotDisplay",
             js_cocos2dx_dragonbones_BaseFactory_replaceSlotDisplayRegistry);
  se::Class::defineFunction
            (this,"changeSkin",js_cocos2dx_dragonbones_BaseFactory_changeSkinRegistry);
  se::Class::defineFunction
            (this,"replaceDisplay",js_cocos2dx_dragonbones_BaseFactory_replaceDisplayRegistry);
  se::Class::defineFunction
            (this,"getDragonBonesData",
             js_cocos2dx_dragonbones_BaseFactory_getDragonBonesDataRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<dragonBones::BaseFactory>(this);
  __jsb_dragonBones_BaseFactory_proto = se::Class::getProto(this);
  __jsb_dragonBones_BaseFactory_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

