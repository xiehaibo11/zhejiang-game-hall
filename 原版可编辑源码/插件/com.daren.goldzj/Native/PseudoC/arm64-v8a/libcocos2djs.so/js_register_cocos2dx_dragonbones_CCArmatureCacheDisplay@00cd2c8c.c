
/* js_register_cocos2dx_dragonbones_CCArmatureCacheDisplay(se::Object*) */

undefined8 js_register_cocos2dx_dragonbones_CCArmatureCacheDisplay(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined8 local_3f;
  undefined6 uStack_37;
  undefined1 uStack_31;
  undefined1 uStack_30;
  undefined6 uStack_2f;
  undefined1 uStack_29;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = (basic_string)0x2c;
  uStack_2f = 0x79616c707369;
  uStack_37 = 0x686361436572;
  uStack_31 = 0x65;
  uStack_30 = 0x44;
  local_3f = 0x7574616d72414343;
  uStack_29 = 0;
  this = (Class *)se::Class::create(&local_40,param_1,(Object *)0x0,
                                    js_cocos2dx_dragonbones_CCArmatureCacheDisplay_constructorRegistry
                                   );
  if (((byte)local_40 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_29,CONCAT61(uStack_2f,uStack_30)));
  }
  se::Class::defineFunction
            (this,"setTimeScale",js_cocos2dx_dragonbones_CCArmatureCacheDisplay_setTimeScaleRegistry
            );
  se::Class::defineFunction
            (this,"render",js_cocos2dx_dragonbones_CCArmatureCacheDisplay_renderRegistry);
  se::Class::defineFunction
            (this,"addDBEventListener",
             js_cocos2dx_dragonbones_CCArmatureCacheDisplay_addDBEventListenerRegistry);
  se::Class::defineFunction
            (this,"setAttachUtil",
             js_cocos2dx_dragonbones_CCArmatureCacheDisplay_setAttachUtilRegistry);
  se::Class::defineFunction
            (this,"removeDBEventListener",
             js_cocos2dx_dragonbones_CCArmatureCacheDisplay_removeDBEventListenerRegistry);
  se::Class::defineFunction
            (this,"onEnable",js_cocos2dx_dragonbones_CCArmatureCacheDisplay_onEnableRegistry);
  se::Class::defineFunction
            (this,"setEffect",js_cocos2dx_dragonbones_CCArmatureCacheDisplay_setEffectRegistry);
  se::Class::defineFunction
            (this,"dispose",js_cocos2dx_dragonbones_CCArmatureCacheDisplay_disposeRegistry);
  se::Class::defineFunction
            (this,"setOpacityModifyRGB",
             js_cocos2dx_dragonbones_CCArmatureCacheDisplay_setOpacityModifyRGBRegistry);
  se::Class::defineFunction
            (this,"dispatchDBEvent",
             js_cocos2dx_dragonbones_CCArmatureCacheDisplay_dispatchDBEventRegistry);
  se::Class::defineFunction
            (this,"beginSchedule",
             js_cocos2dx_dragonbones_CCArmatureCacheDisplay_beginScheduleRegistry);
  se::Class::defineFunction
            (this,"updateAllAnimationCache",
             js_cocos2dx_dragonbones_CCArmatureCacheDisplay_updateAllAnimationCacheRegistry);
  se::Class::defineFunction
            (this,"update",js_cocos2dx_dragonbones_CCArmatureCacheDisplay_updateRegistry);
  se::Class::defineFunction
            (this,"playAnimation",
             js_cocos2dx_dragonbones_CCArmatureCacheDisplay_playAnimationRegistry);
  se::Class::defineFunction
            (this,"setDBEventCallback",
             js_cocos2dx_dragonbones_CCArmatureCacheDisplay_setDBEventCallbackRegistry);
  se::Class::defineFunction
            (this,"updateAnimationCache",
             js_cocos2dx_dragonbones_CCArmatureCacheDisplay_updateAnimationCacheRegistry);
  se::Class::defineFunction
            (this,"getTimeScale",js_cocos2dx_dragonbones_CCArmatureCacheDisplay_getTimeScaleRegistry
            );
  se::Class::defineFunction
            (this,"getAnimation",js_cocos2dx_dragonbones_CCArmatureCacheDisplay_getAnimationRegistry
            );
  se::Class::defineFunction
            (this,"onDisable",js_cocos2dx_dragonbones_CCArmatureCacheDisplay_onDisableRegistry);
  se::Class::defineFunction
            (this,"setColor",js_cocos2dx_dragonbones_CCArmatureCacheDisplay_setColorRegistry);
  se::Class::defineFunction
            (this,"bindNodeProxy",
             js_cocos2dx_dragonbones_CCArmatureCacheDisplay_bindNodeProxyRegistry);
  se::Class::defineFunction
            (this,"setBatchEnabled",
             js_cocos2dx_dragonbones_CCArmatureCacheDisplay_setBatchEnabledRegistry);
  se::Class::defineFunction
            (this,"armature",js_cocos2dx_dragonbones_CCArmatureCacheDisplay_getArmatureRegistry);
  se::Class::defineFunction
            (this,"stopSchedule",js_cocos2dx_dragonbones_CCArmatureCacheDisplay_stopScheduleRegistry
            );
  se::Class::defineFinalizeFunction(this,js_dragonBones_CCArmatureCacheDisplay_finalizeRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<dragonBones::CCArmatureCacheDisplay>(this);
  __jsb_dragonBones_CCArmatureCacheDisplay_proto = se::Class::getProto(this);
  __jsb_dragonBones_CCArmatureCacheDisplay_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

