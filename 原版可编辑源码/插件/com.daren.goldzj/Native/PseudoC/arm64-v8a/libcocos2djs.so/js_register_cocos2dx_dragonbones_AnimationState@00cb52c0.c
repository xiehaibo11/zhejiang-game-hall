
/* js_register_cocos2dx_dragonbones_AnimationState(se::Object*) */

undefined8 js_register_cocos2dx_dragonbones_AnimationState(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined6 uStack_3f;
  undefined2 local_39;
  undefined6 uStack_37;
  undefined1 local_31;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = (void *)0x0;
  local_40 = (basic_string)0x1c;
  uStack_37 = 0x65746174536e;
  uStack_3f = 0x74616d696e41;
  local_39 = 0x6f69;
  local_31 = 0;
  this = (Class *)se::Class::create(&local_40,param_1,__jsb_dragonBones_BaseObject_proto,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineProperty
            (this,"additiveBlending",
             js_cocos2dx_dragonbones_AnimationState_get_additiveBlendingRegistry,
             js_cocos2dx_dragonbones_AnimationState_set_additiveBlendingRegistry);
  se::Class::defineProperty
            (this,"displayControl",js_cocos2dx_dragonbones_AnimationState_get_displayControlRegistry
             ,js_cocos2dx_dragonbones_AnimationState_set_displayControlRegistry);
  se::Class::defineProperty
            (this,"playTimes",js_cocos2dx_dragonbones_AnimationState_get_playTimesRegistry,
             js_cocos2dx_dragonbones_AnimationState_set_playTimesRegistry);
  se::Class::defineProperty
            (this,"timeScale",js_cocos2dx_dragonbones_AnimationState_get_timeScaleRegistry,
             js_cocos2dx_dragonbones_AnimationState_set_timeScaleRegistry);
  se::Class::defineProperty
            (this,"weight",js_cocos2dx_dragonbones_AnimationState_get_weightRegistry,
             js_cocos2dx_dragonbones_AnimationState_set_weightRegistry);
  se::Class::defineProperty
            (this,"autoFadeOutTime",
             js_cocos2dx_dragonbones_AnimationState_get_autoFadeOutTimeRegistry,
             js_cocos2dx_dragonbones_AnimationState_set_autoFadeOutTimeRegistry);
  se::Class::defineProperty
            (this,"fadeTotalTime",js_cocos2dx_dragonbones_AnimationState_get_fadeTotalTimeRegistry,
             js_cocos2dx_dragonbones_AnimationState_set_fadeTotalTimeRegistry);
  se::Class::defineProperty
            (this,"name",js_cocos2dx_dragonbones_AnimationState_get_nameRegistry,
             js_cocos2dx_dragonbones_AnimationState_set_nameRegistry);
  se::Class::defineFunction
            (this,"isCompleted",js_cocos2dx_dragonbones_AnimationState_isCompletedRegistry);
  se::Class::defineFunction(this,"play",js_cocos2dx_dragonbones_AnimationState_playRegistry);
  se::Class::defineFunction(this,"fadeOut",js_cocos2dx_dragonbones_AnimationState_fadeOutRegistry);
  se::Class::defineFunction(this,"getName",js_cocos2dx_dragonbones_AnimationState_getNameRegistry);
  se::Class::defineFunction(this,"stop",js_cocos2dx_dragonbones_AnimationState_stopRegistry);
  se::Class::defineFunction
            (this,"setCurrentTime",js_cocos2dx_dragonbones_AnimationState_setCurrentTimeRegistry);
  se::Class::defineFunction
            (this,"getCurrentTime",js_cocos2dx_dragonbones_AnimationState_getCurrentTimeRegistry);
  se::Class::defineFunction
            (this,"getTotalTime",js_cocos2dx_dragonbones_AnimationState_getTotalTimeRegistry);
  se::Class::defineFunction(this,"init",js_cocos2dx_dragonbones_AnimationState_initRegistry);
  se::Class::defineFunction(this,"isFadeIn",js_cocos2dx_dragonbones_AnimationState_isFadeInRegistry)
  ;
  se::Class::defineFunction
            (this,"addBoneMask",js_cocos2dx_dragonbones_AnimationState_addBoneMaskRegistry);
  se::Class::defineFunction
            (this,"containsBoneMask",js_cocos2dx_dragonbones_AnimationState_containsBoneMaskRegistry
            );
  se::Class::defineFunction
            (this,"removeAllBoneMask",
             js_cocos2dx_dragonbones_AnimationState_removeAllBoneMaskRegistry);
  se::Class::defineFunction
            (this,"getAnimationData",js_cocos2dx_dragonbones_AnimationState_getAnimationDataRegistry
            );
  se::Class::defineFunction
            (this,"isFadeComplete",js_cocos2dx_dragonbones_AnimationState_isFadeCompleteRegistry);
  se::Class::defineFunction
            (this,"advanceTime",js_cocos2dx_dragonbones_AnimationState_advanceTimeRegistry);
  se::Class::defineFunction
            (this,"isPlaying",js_cocos2dx_dragonbones_AnimationState_isPlayingRegistry);
  se::Class::defineFunction
            (this,"removeBoneMask",js_cocos2dx_dragonbones_AnimationState_removeBoneMaskRegistry);
  se::Class::defineFunction
            (this,"getCurrentPlayTimes",
             js_cocos2dx_dragonbones_AnimationState_getCurrentPlayTimesRegistry);
  se::Class::defineFunction
            (this,"isFadeOut",js_cocos2dx_dragonbones_AnimationState_isFadeOutRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<dragonBones::AnimationState>(this);
  __jsb_dragonBones_AnimationState_proto = se::Class::getProto(this);
  __jsb_dragonBones_AnimationState_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

