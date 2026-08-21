
/* js_register_cocos2dx_spine_SkeletonCacheAnimation(se::Object*) */

undefined8 js_register_cocos2dx_spine_SkeletonCacheAnimation(Object *param_1)

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
  uStack_2f = 0x6e6f6974616d;
  uStack_37 = 0x416568636143;
  uStack_31 = 0x6e;
  uStack_30 = 0x69;
  local_3f = 0x6e6f74656c656b53;
  uStack_29 = 0;
  this = (Class *)se::Class::create(&local_40,param_1,(Object *)0x0,
                                    js_cocos2dx_spine_SkeletonCacheAnimation_constructorRegistry);
  if (((byte)local_40 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_29,CONCAT61(uStack_2f,uStack_30)));
  }
  se::Class::defineFunction
            (this,"setUseTint",js_cocos2dx_spine_SkeletonCacheAnimation_setUseTintRegistry);
  se::Class::defineFunction
            (this,"setTimeScale",js_cocos2dx_spine_SkeletonCacheAnimation_setTimeScaleRegistry);
  se::Class::defineFunction
            (this,"findAnimation",js_cocos2dx_spine_SkeletonCacheAnimation_findAnimationRegistry);
  se::Class::defineFunction
            (this,"setAttachUtil",js_cocos2dx_spine_SkeletonCacheAnimation_setAttachUtilRegistry);
  se::Class::defineFunction(this,"paused",js_cocos2dx_spine_SkeletonCacheAnimation_pausedRegistry);
  se::Class::defineFunction(this,"destroy",js_cocos2dx_spine_SkeletonCacheAnimation_destroyRegistry)
  ;
  se::Class::defineFunction
            (this,"setAttachment",js_cocos2dx_spine_SkeletonCacheAnimation_setAttachmentRegistry);
  se::Class::defineFunction
            (this,"setAnimation",js_cocos2dx_spine_SkeletonCacheAnimation_setAnimationRegistry);
  se::Class::defineFunction
            (this,"setBonesToSetupPose",
             js_cocos2dx_spine_SkeletonCacheAnimation_setBonesToSetupPoseRegistry);
  se::Class::defineFunction
            (this,"onEnable",js_cocos2dx_spine_SkeletonCacheAnimation_onEnableRegistry);
  se::Class::defineFunction
            (this,"setStartListener",
             js_cocos2dx_spine_SkeletonCacheAnimation_setStartListenerRegistry);
  se::Class::defineFunction
            (this,"setEffect",js_cocos2dx_spine_SkeletonCacheAnimation_setEffectRegistry);
  se::Class::defineFunction
            (this,"isOpacityModifyRGB",
             js_cocos2dx_spine_SkeletonCacheAnimation_isOpacityModifyRGBRegistry);
  se::Class::defineFunction
            (this,"setToSetupPose",js_cocos2dx_spine_SkeletonCacheAnimation_setToSetupPoseRegistry);
  se::Class::defineFunction
            (this,"setOpacityModifyRGB",
             js_cocos2dx_spine_SkeletonCacheAnimation_setOpacityModifyRGBRegistry);
  se::Class::defineFunction
            (this,"setSlotsToSetupPose",
             js_cocos2dx_spine_SkeletonCacheAnimation_setSlotsToSetupPoseRegistry);
  se::Class::defineFunction
            (this,"setEndListener",js_cocos2dx_spine_SkeletonCacheAnimation_setEndListenerRegistry);
  se::Class::defineFunction
            (this,"beginSchedule",js_cocos2dx_spine_SkeletonCacheAnimation_beginScheduleRegistry);
  se::Class::defineFunction
            (this,"updateAllAnimationCache",
             js_cocos2dx_spine_SkeletonCacheAnimation_updateAllAnimationCacheRegistry);
  se::Class::defineFunction
            (this,"addAnimation",js_cocos2dx_spine_SkeletonCacheAnimation_addAnimationRegistry);
  se::Class::defineFunction(this,"update",js_cocos2dx_spine_SkeletonCacheAnimation_updateRegistry);
  se::Class::defineFunction
            (this,"getAttachment",js_cocos2dx_spine_SkeletonCacheAnimation_getAttachmentRegistry);
  se::Class::defineFunction
            (this,"setCompleteListener",
             js_cocos2dx_spine_SkeletonCacheAnimation_setCompleteListenerRegistry);
  se::Class::defineFunction
            (this,"updateAnimationCache",
             js_cocos2dx_spine_SkeletonCacheAnimation_updateAnimationCacheRegistry);
  se::Class::defineFunction
            (this,"getTimeScale",js_cocos2dx_spine_SkeletonCacheAnimation_getTimeScaleRegistry);
  se::Class::defineFunction
            (this,"findBone",js_cocos2dx_spine_SkeletonCacheAnimation_findBoneRegistry);
  se::Class::defineFunction
            (this,"onDisable",js_cocos2dx_spine_SkeletonCacheAnimation_onDisableRegistry);
  se::Class::defineFunction
            (this,"setColor",js_cocos2dx_spine_SkeletonCacheAnimation_setColorRegistry);
  se::Class::defineFunction
            (this,"bindNodeProxy",js_cocos2dx_spine_SkeletonCacheAnimation_bindNodeProxyRegistry);
  se::Class::defineFunction
            (this,"setBatchEnabled",js_cocos2dx_spine_SkeletonCacheAnimation_setBatchEnabledRegistry
            );
  se::Class::defineFunction(this,"setSkin",js_cocos2dx_spine_SkeletonCacheAnimation_setSkinRegistry)
  ;
  se::Class::defineFunction
            (this,"findSlot",js_cocos2dx_spine_SkeletonCacheAnimation_findSlotRegistry);
  se::Class::defineFunction
            (this,"getSkeleton",js_cocos2dx_spine_SkeletonCacheAnimation_getSkeletonRegistry);
  se::Class::defineFunction
            (this,"stopSchedule",js_cocos2dx_spine_SkeletonCacheAnimation_stopScheduleRegistry);
  se::Class::defineFinalizeFunction(this,js_spine_SkeletonCacheAnimation_finalizeRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<spine::SkeletonCacheAnimation>(this);
  __jsb_spine_SkeletonCacheAnimation_proto = se::Class::getProto(this);
  __jsb_spine_SkeletonCacheAnimation_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

