
/* js_register_cocos2dx_spine_SkeletonAnimation(se::Object*) */

undefined8 js_register_cocos2dx_spine_SkeletonAnimation(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined2 uStack_2f;
  undefined5 uStack_2d;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_2d = 0;
  local_40 = (basic_string)0x22;
  uStack_37 = 0x6974616d696e41;
  uStack_30 = 0x6f;
  uStack_3f = 0x6f74656c656b53;
  uStack_38 = 0x6e;
  uStack_2f = 0x6e;
  this = (Class *)se::Class::create(&local_40,param_1,__jsb_spine_SkeletonRenderer_proto,
                                    js_cocos2dx_spine_SkeletonAnimation_constructorRegistry);
  if (((byte)local_40 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_2d,CONCAT21(uStack_2f,uStack_30)));
  }
  se::Class::defineFunction
            (this,"setAnimation",js_cocos2dx_spine_SkeletonAnimation_setAnimationRegistry);
  se::Class::defineFunction
            (this,"findAnimation",js_cocos2dx_spine_SkeletonAnimation_findAnimationRegistry);
  se::Class::defineFunction
            (this,"setTrackEventListener",
             js_cocos2dx_spine_SkeletonAnimation_setTrackEventListenerRegistry);
  se::Class::defineFunction(this,"setMix",js_cocos2dx_spine_SkeletonAnimation_setMixRegistry);
  se::Class::defineFunction
            (this,"setTrackStartListener",
             js_cocos2dx_spine_SkeletonAnimation_setTrackStartListenerRegistry);
  se::Class::defineFunction
            (this,"addEmptyAnimation",js_cocos2dx_spine_SkeletonAnimation_addEmptyAnimationRegistry)
  ;
  se::Class::defineFunction
            (this,"setDisposeListener",
             js_cocos2dx_spine_SkeletonAnimation_setDisposeListenerRegistry);
  se::Class::defineFunction
            (this,"setTrackInterruptListener",
             js_cocos2dx_spine_SkeletonAnimation_setTrackInterruptListenerRegistry);
  se::Class::defineFunction
            (this,"setTrackCompleteListenerNative",
             js_cocos2dx_spine_SkeletonAnimation_setTrackCompleteListenerRegistry);
  se::Class::defineFunction
            (this,"setAnimationStateData",
             js_cocos2dx_spine_SkeletonAnimation_setAnimationStateDataRegistry);
  se::Class::defineFunction
            (this,"setEndListener",js_cocos2dx_spine_SkeletonAnimation_setEndListenerRegistry);
  se::Class::defineFunction(this,"destroy",js_cocos2dx_spine_SkeletonAnimation_destroyRegistry);
  se::Class::defineFunction(this,"getState",js_cocos2dx_spine_SkeletonAnimation_getStateRegistry);
  se::Class::defineFunction
            (this,"setCompleteListenerNative",
             js_cocos2dx_spine_SkeletonAnimation_setCompleteListenerRegistry);
  se::Class::defineFunction
            (this,"setTrackDisposeListener",
             js_cocos2dx_spine_SkeletonAnimation_setTrackDisposeListenerRegistry);
  se::Class::defineFunction
            (this,"getCurrent",js_cocos2dx_spine_SkeletonAnimation_getCurrentRegistry);
  se::Class::defineFunction
            (this,"setEventListener",js_cocos2dx_spine_SkeletonAnimation_setEventListenerRegistry);
  se::Class::defineFunction
            (this,"setEmptyAnimation",js_cocos2dx_spine_SkeletonAnimation_setEmptyAnimationRegistry)
  ;
  se::Class::defineFunction
            (this,"clearTrack",js_cocos2dx_spine_SkeletonAnimation_clearTrackRegistry);
  se::Class::defineFunction
            (this,"setInterruptListener",
             js_cocos2dx_spine_SkeletonAnimation_setInterruptListenerRegistry);
  se::Class::defineFunction
            (this,"addAnimation",js_cocos2dx_spine_SkeletonAnimation_addAnimationRegistry);
  se::Class::defineFunction
            (this,"setEmptyAnimations",
             js_cocos2dx_spine_SkeletonAnimation_setEmptyAnimationsRegistry);
  se::Class::defineFunction
            (this,"clearTracks",js_cocos2dx_spine_SkeletonAnimation_clearTracksRegistry);
  se::Class::defineFunction
            (this,"setTrackEndListener",
             js_cocos2dx_spine_SkeletonAnimation_setTrackEndListenerRegistry);
  se::Class::defineFunction
            (this,"setStartListener",js_cocos2dx_spine_SkeletonAnimation_setStartListenerRegistry);
  se::Class::defineFunction(this,"ctor",js_cocos2dx_spine_SkeletonAnimation_ctorRegistry);
  se::Class::defineStaticFunction
            (this,"createWithBinaryFile",
             js_cocos2dx_spine_SkeletonAnimation_createWithBinaryFileRegistry);
  se::Class::defineStaticFunction(this,"create",js_cocos2dx_spine_SkeletonAnimation_createRegistry);
  se::Class::defineStaticFunction
            (this,"createWithJsonFile",
             js_cocos2dx_spine_SkeletonAnimation_createWithJsonFileRegistry);
  se::Class::defineStaticFunction
            (this,"setGlobalTimeScale",
             js_cocos2dx_spine_SkeletonAnimation_setGlobalTimeScaleRegistry);
  se::Class::defineFinalizeFunction(this,js_spine_SkeletonAnimation_finalizeRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<spine::SkeletonAnimation>(this);
  __jsb_spine_SkeletonAnimation_proto = se::Class::getProto(this);
  __jsb_spine_SkeletonAnimation_class = this;
  jsb_set_extend_property("spine","SkeletonAnimation");
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

