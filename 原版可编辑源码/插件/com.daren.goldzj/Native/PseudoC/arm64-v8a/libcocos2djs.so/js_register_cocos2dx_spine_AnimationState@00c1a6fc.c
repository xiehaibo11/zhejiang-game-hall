
/* js_register_cocos2dx_spine_AnimationState(se::Object*) */

undefined8 js_register_cocos2dx_spine_AnimationState(Object *param_1)

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
  this = (Class *)se::Class::create(&local_40,param_1,(Object *)0x0,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineFunction(this,"getData",js_cocos2dx_spine_AnimationState_getDataRegistry);
  se::Class::defineFunction
            (this,"addAnimation",js_cocos2dx_spine_AnimationState_addAnimationRegistry);
  se::Class::defineFunction
            (this,"setEmptyAnimations",js_cocos2dx_spine_AnimationState_setEmptyAnimationsRegistry);
  se::Class::defineFunction(this,"getCurrent",js_cocos2dx_spine_AnimationState_getCurrentRegistry);
  se::Class::defineFunction(this,"enableQueue",js_cocos2dx_spine_AnimationState_enableQueueRegistry)
  ;
  se::Class::defineFunction(this,"clearTracks",js_cocos2dx_spine_AnimationState_clearTracksRegistry)
  ;
  se::Class::defineFunction(this,"update",js_cocos2dx_spine_AnimationState_updateRegistry);
  se::Class::defineFunction
            (this,"disableQueue",js_cocos2dx_spine_AnimationState_disableQueueRegistry);
  se::Class::defineFunction
            (this,"setEmptyAnimation",js_cocos2dx_spine_AnimationState_setEmptyAnimationRegistry);
  se::Class::defineFunction
            (this,"setTimeScale",js_cocos2dx_spine_AnimationState_setTimeScaleRegistry);
  se::Class::defineFunction(this,"getTracks",js_cocos2dx_spine_AnimationState_getTracksRegistry);
  se::Class::defineFunction(this,"clearTrack",js_cocos2dx_spine_AnimationState_clearTrackRegistry);
  se::Class::defineFunction
            (this,"setAnimation",js_cocos2dx_spine_AnimationState_setAnimationRegistry);
  se::Class::defineFunction
            (this,"addEmptyAnimation",js_cocos2dx_spine_AnimationState_addEmptyAnimationRegistry);
  se::Class::defineFunction
            (this,"getTimeScale",js_cocos2dx_spine_AnimationState_getTimeScaleRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<spine::AnimationState>(this);
  __jsb_spine_AnimationState_proto = se::Class::getProto(this);
  __jsb_spine_AnimationState_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

