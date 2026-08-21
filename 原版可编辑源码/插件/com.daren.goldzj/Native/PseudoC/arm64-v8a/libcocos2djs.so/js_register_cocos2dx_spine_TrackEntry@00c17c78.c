
/* js_register_cocos2dx_spine_TrackEntry(se::Object*) */

undefined8 js_register_cocos2dx_spine_TrackEntry(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined2 local_37;
  undefined1 local_35;
  undefined4 uStack_34;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_34 = 0;
  local_40 = (basic_string)0x14;
  local_30 = (void *)0x0;
  local_37 = 0x7972;
  uStack_3f = 0x6e456b63617254;
  uStack_38 = 0x74;
  local_35 = 0;
  this = (Class *)se::Class::create(&local_40,param_1,(Object *)0x0,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineFunction(this,"getNext",js_cocos2dx_spine_TrackEntry_getNextRegistry);
  se::Class::defineFunction
            (this,"getAttachmentThreshold",
             js_cocos2dx_spine_TrackEntry_getAttachmentThresholdRegistry);
  se::Class::defineFunction(this,"setTimeScale",js_cocos2dx_spine_TrackEntry_setTimeScaleRegistry);
  se::Class::defineFunction
            (this,"getMixDuration",js_cocos2dx_spine_TrackEntry_getMixDurationRegistry);
  se::Class::defineFunction
            (this,"setAnimationEnd",js_cocos2dx_spine_TrackEntry_setAnimationEndRegistry);
  se::Class::defineFunction
            (this,"setEventThreshold",js_cocos2dx_spine_TrackEntry_setEventThresholdRegistry);
  se::Class::defineFunction(this,"getMixingTo",js_cocos2dx_spine_TrackEntry_getMixingToRegistry);
  se::Class::defineFunction(this,"setTrackEnd",js_cocos2dx_spine_TrackEntry_setTrackEndRegistry);
  se::Class::defineFunction(this,"getMixBlend",js_cocos2dx_spine_TrackEntry_getMixBlendRegistry);
  se::Class::defineFunction(this,"getTrackEnd",js_cocos2dx_spine_TrackEntry_getTrackEndRegistry);
  se::Class::defineFunction(this,"setDelay",js_cocos2dx_spine_TrackEntry_setDelayRegistry);
  se::Class::defineFunction
            (this,"getAnimationEnd",js_cocos2dx_spine_TrackEntry_getAnimationEndRegistry);
  se::Class::defineFunction
            (this,"setAttachmentThreshold",
             js_cocos2dx_spine_TrackEntry_setAttachmentThresholdRegistry);
  se::Class::defineFunction(this,"setMixTime",js_cocos2dx_spine_TrackEntry_setMixTimeRegistry);
  se::Class::defineFunction(this,"isComplete",js_cocos2dx_spine_TrackEntry_isCompleteRegistry);
  se::Class::defineFunction(this,"getMixingFrom",js_cocos2dx_spine_TrackEntry_getMixingFromRegistry)
  ;
  se::Class::defineFunction(this,"setAlpha",js_cocos2dx_spine_TrackEntry_setAlphaRegistry);
  se::Class::defineFunction
            (this,"getDrawOrderThreshold",js_cocos2dx_spine_TrackEntry_getDrawOrderThresholdRegistry
            );
  se::Class::defineFunction(this,"getMixTime",js_cocos2dx_spine_TrackEntry_getMixTimeRegistry);
  se::Class::defineFunction(this,"setTrackTime",js_cocos2dx_spine_TrackEntry_setTrackTimeRegistry);
  se::Class::defineFunction
            (this,"setMixDuration",js_cocos2dx_spine_TrackEntry_setMixDurationRegistry);
  se::Class::defineFunction
            (this,"resetRotationDirections",
             js_cocos2dx_spine_TrackEntry_resetRotationDirectionsRegistry);
  se::Class::defineFunction
            (this,"setHoldPrevious",js_cocos2dx_spine_TrackEntry_setHoldPreviousRegistry);
  se::Class::defineFunction(this,"getLoop",js_cocos2dx_spine_TrackEntry_getLoopRegistry);
  se::Class::defineFunction(this,"getTrackTime",js_cocos2dx_spine_TrackEntry_getTrackTimeRegistry);
  se::Class::defineFunction
            (this,"getAnimationStart",js_cocos2dx_spine_TrackEntry_getAnimationStartRegistry);
  se::Class::defineFunction
            (this,"getAnimationLast",js_cocos2dx_spine_TrackEntry_getAnimationLastRegistry);
  se::Class::defineFunction
            (this,"setAnimationStart",js_cocos2dx_spine_TrackEntry_setAnimationStartRegistry);
  se::Class::defineFunction(this,"setLoop",js_cocos2dx_spine_TrackEntry_setLoopRegistry);
  se::Class::defineFunction(this,"getTrackIndex",js_cocos2dx_spine_TrackEntry_getTrackIndexRegistry)
  ;
  se::Class::defineFunction(this,"getTimeScale",js_cocos2dx_spine_TrackEntry_getTimeScaleRegistry);
  se::Class::defineFunction(this,"getDelay",js_cocos2dx_spine_TrackEntry_getDelayRegistry);
  se::Class::defineFunction(this,"getAnimation",js_cocos2dx_spine_TrackEntry_getAnimationRegistry);
  se::Class::defineFunction
            (this,"getHoldPrevious",js_cocos2dx_spine_TrackEntry_getHoldPreviousRegistry);
  se::Class::defineFunction
            (this,"getAnimationTime",js_cocos2dx_spine_TrackEntry_getAnimationTimeRegistry);
  se::Class::defineFunction
            (this,"getEventThreshold",js_cocos2dx_spine_TrackEntry_getEventThresholdRegistry);
  se::Class::defineFunction
            (this,"setDrawOrderThreshold",js_cocos2dx_spine_TrackEntry_setDrawOrderThresholdRegistry
            );
  se::Class::defineFunction
            (this,"setAnimationLast",js_cocos2dx_spine_TrackEntry_setAnimationLastRegistry);
  se::Class::defineFunction(this,"getAlpha",js_cocos2dx_spine_TrackEntry_getAlphaRegistry);
  se::Class::defineFunction(this,"setMixBlend",js_cocos2dx_spine_TrackEntry_setMixBlendRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<spine::TrackEntry>(this);
  __jsb_spine_TrackEntry_proto = se::Class::getProto(this);
  __jsb_spine_TrackEntry_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

