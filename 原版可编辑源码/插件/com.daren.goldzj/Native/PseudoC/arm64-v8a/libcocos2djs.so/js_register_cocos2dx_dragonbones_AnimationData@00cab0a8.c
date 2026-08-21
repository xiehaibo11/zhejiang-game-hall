
/* js_register_cocos2dx_dragonbones_AnimationData(se::Object*) */

undefined8 js_register_cocos2dx_dragonbones_AnimationData(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined5 uStack_3f;
  undefined2 uStack_3a;
  undefined1 uStack_38;
  undefined5 uStack_37;
  undefined1 local_32;
  undefined1 uStack_31;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_31 = 0;
  local_40 = (basic_string)0x1a;
  local_30 = (void *)0x0;
  uStack_37 = 0x617461446e;
  uStack_3f = 0x616d696e41;
  uStack_3a = 0x6974;
  uStack_38 = 0x6f;
  local_32 = 0;
  this = (Class *)se::Class::create(&local_40,param_1,(Object *)0x0,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineProperty
            (this,"frameCount",js_cocos2dx_dragonbones_AnimationData_get_frameCountRegistry,
             js_cocos2dx_dragonbones_AnimationData_set_frameCountRegistry);
  se::Class::defineProperty
            (this,"playTimes",js_cocos2dx_dragonbones_AnimationData_get_playTimesRegistry,
             js_cocos2dx_dragonbones_AnimationData_set_playTimesRegistry);
  se::Class::defineProperty
            (this,"duration",js_cocos2dx_dragonbones_AnimationData_get_durationRegistry,
             js_cocos2dx_dragonbones_AnimationData_set_durationRegistry);
  se::Class::defineProperty
            (this,"fadeInTime",js_cocos2dx_dragonbones_AnimationData_get_fadeInTimeRegistry,
             js_cocos2dx_dragonbones_AnimationData_set_fadeInTimeRegistry);
  se::Class::defineProperty
            (this,"name",js_cocos2dx_dragonbones_AnimationData_get_nameRegistry,
             js_cocos2dx_dragonbones_AnimationData_set_nameRegistry);
  se::Class::defineFunction
            (this,"getActionTimeline",
             js_cocos2dx_dragonbones_AnimationData_getActionTimelineRegistry);
  se::Class::defineFunction
            (this,"setParent",js_cocos2dx_dragonbones_AnimationData_setParentRegistry);
  se::Class::defineFunction
            (this,"setActionTimeline",
             js_cocos2dx_dragonbones_AnimationData_setActionTimelineRegistry);
  se::Class::defineFunction
            (this,"getSlotCachedFrameIndices",
             js_cocos2dx_dragonbones_AnimationData_getSlotCachedFrameIndicesRegistry);
  se::Class::defineFunction
            (this,"addConstraintTimeline",
             js_cocos2dx_dragonbones_AnimationData_addConstraintTimelineRegistry);
  se::Class::defineFunction
            (this,"getBoneCachedFrameIndices",
             js_cocos2dx_dragonbones_AnimationData_getBoneCachedFrameIndicesRegistry);
  se::Class::defineFunction
            (this,"getZOrderTimeline",
             js_cocos2dx_dragonbones_AnimationData_getZOrderTimelineRegistry);
  se::Class::defineFunction
            (this,"setZOrderTimeline",
             js_cocos2dx_dragonbones_AnimationData_setZOrderTimelineRegistry);
  se::Class::defineFunction
            (this,"getParent",js_cocos2dx_dragonbones_AnimationData_getParentRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<dragonBones::AnimationData>(this);
  __jsb_dragonBones_AnimationData_proto = se::Class::getProto(this);
  __jsb_dragonBones_AnimationData_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

