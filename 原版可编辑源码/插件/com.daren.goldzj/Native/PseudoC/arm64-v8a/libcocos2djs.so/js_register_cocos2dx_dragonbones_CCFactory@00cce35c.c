
/* js_register_cocos2dx_dragonbones_CCFactory(se::Object*) */

undefined8 js_register_cocos2dx_dragonbones_CCFactory(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined2 local_37;
  undefined5 uStack_35;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_35 = 0;
  local_30 = (void *)0x0;
  local_40 = (basic_string)0x12;
  uStack_3f = 0x6f746361464343;
  uStack_38 = 0x72;
  local_37 = 0x79;
  this = (Class *)se::Class::create(&local_40,param_1,__jsb_dragonBones_BaseFactory_proto,
                                    js_cocos2dx_dragonbones_CCFactory_constructorRegistry);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineFunction
            (this,"setTimeScale",js_cocos2dx_dragonbones_CCFactory_setTimeScaleRegistry);
  se::Class::defineFunction
            (this,"getSoundEventManager",
             js_cocos2dx_dragonbones_CCFactory_getSoundEventManagerRegistry);
  se::Class::defineFunction(this,"render",js_cocos2dx_dragonbones_CCFactory_renderRegistry);
  se::Class::defineFunction
            (this,"removeDragonBonesDataByUUID",
             js_cocos2dx_dragonbones_CCFactory_removeDragonBonesDataByUUIDRegistry);
  se::Class::defineFunction(this,"update",js_cocos2dx_dragonbones_CCFactory_updateRegistry);
  se::Class::defineFunction(this,"remove",js_cocos2dx_dragonbones_CCFactory_removeRegistry);
  se::Class::defineFunction
            (this,"getTextureAtlasDataByIndex",
             js_cocos2dx_dragonbones_CCFactory_getTextureAtlasDataByIndexRegistry);
  se::Class::defineFunction
            (this,"getDragonBones",js_cocos2dx_dragonbones_CCFactory_getDragonBonesRegistry);
  se::Class::defineFunction
            (this,"parseDragonBonesDataByPath",
             js_cocos2dx_dragonbones_CCFactory_parseDragonBonesDataByPathRegistry);
  se::Class::defineFunction(this,"add",js_cocos2dx_dragonbones_CCFactory_addRegistry);
  se::Class::defineFunction
            (this,"buildArmatureDisplay",
             js_cocos2dx_dragonbones_CCFactory_buildArmatureDisplayRegistry);
  se::Class::defineFunction
            (this,"stopSchedule",js_cocos2dx_dragonbones_CCFactory_stopScheduleRegistry);
  se::Class::defineFunction
            (this,"removeTextureAtlasDataByIndex",
             js_cocos2dx_dragonbones_CCFactory_removeTextureAtlasDataByIndexRegistry);
  se::Class::defineFunction
            (this,"getTimeScale",js_cocos2dx_dragonbones_CCFactory_getTimeScaleRegistry);
  se::Class::defineStaticFunction(this,"isInit",js_cocos2dx_dragonbones_CCFactory_isInitRegistry);
  se::Class::defineStaticFunction
            (this,"destroyFactory",js_cocos2dx_dragonbones_CCFactory_destroyFactoryRegistry);
  se::Class::defineStaticFunction
            (this,"getClock",js_cocos2dx_dragonbones_CCFactory_getClockRegistry);
  se::Class::defineStaticFunction
            (this,"getInstance",js_cocos2dx_dragonbones_CCFactory_getFactoryRegistry);
  se::Class::defineFinalizeFunction(this,js_dragonBones_CCFactory_finalizeRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<dragonBones::CCFactory>(this);
  __jsb_dragonBones_CCFactory_proto = se::Class::getProto(this);
  __jsb_dragonBones_CCFactory_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

