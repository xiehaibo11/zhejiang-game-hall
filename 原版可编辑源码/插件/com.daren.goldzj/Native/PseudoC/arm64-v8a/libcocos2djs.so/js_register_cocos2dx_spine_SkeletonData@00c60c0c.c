
/* js_register_cocos2dx_spine_SkeletonData(se::Object*) */

undefined8 js_register_cocos2dx_spine_SkeletonData(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined4 local_37;
  undefined1 local_33;
  undefined2 uStack_32;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_32 = 0;
  local_40 = (basic_string)0x18;
  local_30 = (void *)0x0;
  local_37 = 0x61746144;
  uStack_3f = 0x6f74656c656b53;
  uStack_38 = 0x6e;
  local_33 = 0;
  this = (Class *)se::Class::create(&local_40,param_1,(Object *)0x0,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineFunction(this,"findEvent",js_cocos2dx_spine_SkeletonData_findEventRegistry);
  se::Class::defineFunction
            (this,"findAnimation",js_cocos2dx_spine_SkeletonData_findAnimationRegistry);
  se::Class::defineFunction(this,"getX",js_cocos2dx_spine_SkeletonData_getXRegistry);
  se::Class::defineFunction
            (this,"findTransformConstraint",
             js_cocos2dx_spine_SkeletonData_findTransformConstraintRegistry);
  se::Class::defineFunction(this,"setFps",js_cocos2dx_spine_SkeletonData_setFpsRegistry);
  se::Class::defineFunction
            (this,"findIkConstraint",js_cocos2dx_spine_SkeletonData_findIkConstraintRegistry);
  se::Class::defineFunction(this,"getFps",js_cocos2dx_spine_SkeletonData_getFpsRegistry);
  se::Class::defineFunction(this,"getSkins",js_cocos2dx_spine_SkeletonData_getSkinsRegistry);
  se::Class::defineFunction(this,"setWidth",js_cocos2dx_spine_SkeletonData_setWidthRegistry);
  se::Class::defineFunction(this,"setVersion",js_cocos2dx_spine_SkeletonData_setVersionRegistry);
  se::Class::defineFunction(this,"setHash",js_cocos2dx_spine_SkeletonData_setHashRegistry);
  se::Class::defineFunction
            (this,"findBoneIndex",js_cocos2dx_spine_SkeletonData_findBoneIndexRegistry);
  se::Class::defineFunction
            (this,"getDefaultSkin",js_cocos2dx_spine_SkeletonData_getDefaultSkinRegistry);
  se::Class::defineFunction(this,"getHeight",js_cocos2dx_spine_SkeletonData_getHeightRegistry);
  se::Class::defineFunction
            (this,"setDefaultSkin",js_cocos2dx_spine_SkeletonData_setDefaultSkinRegistry);
  se::Class::defineFunction(this,"getHash",js_cocos2dx_spine_SkeletonData_getHashRegistry);
  se::Class::defineFunction
            (this,"getAnimations",js_cocos2dx_spine_SkeletonData_getAnimationsRegistry);
  se::Class::defineFunction
            (this,"setImagesPath",js_cocos2dx_spine_SkeletonData_setImagesPathRegistry);
  se::Class::defineFunction
            (this,"getIkConstraints",js_cocos2dx_spine_SkeletonData_getIkConstraintsRegistry);
  se::Class::defineFunction
            (this,"getImagesPath",js_cocos2dx_spine_SkeletonData_getImagesPathRegistry);
  se::Class::defineFunction(this,"getEvents",js_cocos2dx_spine_SkeletonData_getEventsRegistry);
  se::Class::defineFunction(this,"findBone",js_cocos2dx_spine_SkeletonData_findBoneRegistry);
  se::Class::defineFunction(this,"setName",js_cocos2dx_spine_SkeletonData_setNameRegistry);
  se::Class::defineFunction
            (this,"getPathConstraints",js_cocos2dx_spine_SkeletonData_getPathConstraintsRegistry);
  se::Class::defineFunction(this,"getAudioPath",js_cocos2dx_spine_SkeletonData_getAudioPathRegistry)
  ;
  se::Class::defineFunction(this,"getVersion",js_cocos2dx_spine_SkeletonData_getVersionRegistry);
  se::Class::defineFunction(this,"setX",js_cocos2dx_spine_SkeletonData_setXRegistry);
  se::Class::defineFunction(this,"setY",js_cocos2dx_spine_SkeletonData_setYRegistry);
  se::Class::defineFunction(this,"setHeight",js_cocos2dx_spine_SkeletonData_setHeightRegistry);
  se::Class::defineFunction(this,"getWidth",js_cocos2dx_spine_SkeletonData_getWidthRegistry);
  se::Class::defineFunction(this,"getSlots",js_cocos2dx_spine_SkeletonData_getSlotsRegistry);
  se::Class::defineFunction(this,"findSkin",js_cocos2dx_spine_SkeletonData_findSkinRegistry);
  se::Class::defineFunction(this,"getY",js_cocos2dx_spine_SkeletonData_getYRegistry);
  se::Class::defineFunction(this,"getBones",js_cocos2dx_spine_SkeletonData_getBonesRegistry);
  se::Class::defineFunction
            (this,"findPathConstraintIndex",
             js_cocos2dx_spine_SkeletonData_findPathConstraintIndexRegistry);
  se::Class::defineFunction
            (this,"findSlotIndex",js_cocos2dx_spine_SkeletonData_findSlotIndexRegistry);
  se::Class::defineFunction
            (this,"getTransformConstraints",
             js_cocos2dx_spine_SkeletonData_getTransformConstraintsRegistry);
  se::Class::defineFunction(this,"findSlot",js_cocos2dx_spine_SkeletonData_findSlotRegistry);
  se::Class::defineFunction(this,"setAudioPath",js_cocos2dx_spine_SkeletonData_setAudioPathRegistry)
  ;
  se::Class::defineFunction
            (this,"findPathConstraint",js_cocos2dx_spine_SkeletonData_findPathConstraintRegistry);
  se::Class::defineFunction(this,"getName",js_cocos2dx_spine_SkeletonData_getNameRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<spine::SkeletonData>(this);
  __jsb_spine_SkeletonData_proto = se::Class::getProto(this);
  __jsb_spine_SkeletonData_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

