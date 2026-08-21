
/* js_register_cocos2dx_dragonbones_Animation(se::Object*) */

undefined8 js_register_cocos2dx_dragonbones_Animation(Object *param_1)

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
  local_37 = 0x6e;
  uStack_3f = 0x6974616d696e41;
  uStack_38 = 0x6f;
  this = (Class *)se::Class::create(&local_40,param_1,__jsb_dragonBones_BaseObject_proto,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineProperty
            (this,"timeScale",js_cocos2dx_dragonbones_Animation_get_timeScaleRegistry,
             js_cocos2dx_dragonbones_Animation_set_timeScaleRegistry);
  se::Class::defineFunction(this,"init",js_cocos2dx_dragonbones_Animation_initRegistry);
  se::Class::defineFunction
            (this,"gotoAndPlayByTime",js_cocos2dx_dragonbones_Animation_gotoAndPlayByTimeRegistry);
  se::Class::defineFunction(this,"fadeIn",js_cocos2dx_dragonbones_Animation_fadeInRegistry);
  se::Class::defineFunction(this,"playConfig",js_cocos2dx_dragonbones_Animation_playConfigRegistry);
  se::Class::defineFunction
            (this,"isCompleted",js_cocos2dx_dragonbones_Animation_isCompletedRegistry);
  se::Class::defineFunction(this,"play",js_cocos2dx_dragonbones_Animation_playRegistry);
  se::Class::defineFunction(this,"getState",js_cocos2dx_dragonbones_Animation_getStateRegistry);
  se::Class::defineFunction(this,"stop",js_cocos2dx_dragonbones_Animation_stopRegistry);
  se::Class::defineFunction
            (this,"getLastAnimationName",
             js_cocos2dx_dragonbones_Animation_getLastAnimationNameRegistry);
  se::Class::defineFunction
            (this,"getLastAnimationState",
             js_cocos2dx_dragonbones_Animation_getLastAnimationStateRegistry);
  se::Class::defineFunction
            (this,"getAnimationNames",js_cocos2dx_dragonbones_Animation_getAnimationNamesRegistry);
  se::Class::defineFunction
            (this,"advanceTime",js_cocos2dx_dragonbones_Animation_advanceTimeRegistry);
  se::Class::defineFunction(this,"isPlaying",js_cocos2dx_dragonbones_Animation_isPlayingRegistry);
  se::Class::defineFunction
            (this,"gotoAndPlayByProgress",
             js_cocos2dx_dragonbones_Animation_gotoAndPlayByProgressRegistry);
  se::Class::defineFunction
            (this,"getAnimationConfig",js_cocos2dx_dragonbones_Animation_getAnimationConfigRegistry)
  ;
  se::Class::defineFunction(this,"reset",js_cocos2dx_dragonbones_Animation_resetRegistry);
  se::Class::defineFunction
            (this,"hasAnimation",js_cocos2dx_dragonbones_Animation_hasAnimationRegistry);
  se::Class::defineFunction
            (this,"gotoAndStopByTime",js_cocos2dx_dragonbones_Animation_gotoAndStopByTimeRegistry);
  se::Class::defineFunction
            (this,"gotoAndStopByProgress",
             js_cocos2dx_dragonbones_Animation_gotoAndStopByProgressRegistry);
  se::Class::defineFunction
            (this,"gotoAndPlayByFrame",js_cocos2dx_dragonbones_Animation_gotoAndPlayByFrameRegistry)
  ;
  se::Class::defineFunction
            (this,"gotoAndStopByFrame",js_cocos2dx_dragonbones_Animation_gotoAndStopByFrameRegistry)
  ;
  se::Class::install(this);
  JSBClassType::registerClass<dragonBones::Animation>(this);
  __jsb_dragonBones_Animation_proto = se::Class::getProto(this);
  __jsb_dragonBones_Animation_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

