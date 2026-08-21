
/* js_register_cocos2dx_spine_Skeleton(se::Object*) */

undefined8 js_register_cocos2dx_spine_Skeleton(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined1 local_37;
  undefined6 uStack_36;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_36 = 0;
  local_30 = (void *)0x0;
  local_40 = (basic_string)0x10;
  uStack_3f = 0x6f74656c656b53;
  uStack_38 = 0x6e;
  local_37 = 0;
  this = (Class *)se::Class::create(&local_40,param_1,(Object *)0x0,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineFunction(this,"setToSetupPose",js_cocos2dx_spine_Skeleton_setToSetupPoseRegistry)
  ;
  se::Class::defineFunction(this,"getSkin",js_cocos2dx_spine_Skeleton_getSkinRegistry);
  se::Class::defineFunction(this,"getX",js_cocos2dx_spine_Skeleton_getXRegistry);
  se::Class::defineFunction
            (this,"findTransformConstraint",
             js_cocos2dx_spine_Skeleton_findTransformConstraintRegistry);
  se::Class::defineFunction(this,"setAttachment",js_cocos2dx_spine_Skeleton_setAttachmentRegistry);
  se::Class::defineFunction
            (this,"findIkConstraint",js_cocos2dx_spine_Skeleton_findIkConstraintRegistry);
  se::Class::defineFunction
            (this,"setBonesToSetupPose",js_cocos2dx_spine_Skeleton_setBonesToSetupPoseRegistry);
  se::Class::defineFunction(this,"getScaleY",js_cocos2dx_spine_Skeleton_getScaleYRegistry);
  se::Class::defineFunction(this,"getScaleX",js_cocos2dx_spine_Skeleton_getScaleXRegistry);
  se::Class::defineFunction(this,"findBoneIndex",js_cocos2dx_spine_Skeleton_findBoneIndexRegistry);
  se::Class::defineFunction
            (this,"setSlotsToSetupPose",js_cocos2dx_spine_Skeleton_setSlotsToSetupPoseRegistry);
  se::Class::defineFunction(this,"getDrawOrder",js_cocos2dx_spine_Skeleton_getDrawOrderRegistry);
  se::Class::defineFunction(this,"getTime",js_cocos2dx_spine_Skeleton_getTimeRegistry);
  se::Class::defineFunction(this,"getColor",js_cocos2dx_spine_Skeleton_getColorRegistry);
  se::Class::defineFunction
            (this,"getIkConstraints",js_cocos2dx_spine_Skeleton_getIkConstraintsRegistry);
  se::Class::defineFunction(this,"getData",js_cocos2dx_spine_Skeleton_getDataRegistry);
  se::Class::defineFunction
            (this,"getUpdateCacheList",js_cocos2dx_spine_Skeleton_getUpdateCacheListRegistry);
  se::Class::defineFunction(this,"setScaleY",js_cocos2dx_spine_Skeleton_setScaleYRegistry);
  se::Class::defineFunction(this,"setScaleX",js_cocos2dx_spine_Skeleton_setScaleXRegistry);
  se::Class::defineFunction
            (this,"getPathConstraints",js_cocos2dx_spine_Skeleton_getPathConstraintsRegistry);
  se::Class::defineFunction(this,"getSlots",js_cocos2dx_spine_Skeleton_getSlotsRegistry);
  se::Class::defineFunction
            (this,"printUpdateCache",js_cocos2dx_spine_Skeleton_printUpdateCacheRegistry);
  se::Class::defineFunction(this,"update",js_cocos2dx_spine_Skeleton_updateRegistry);
  se::Class::defineFunction(this,"getAttachment",js_cocos2dx_spine_Skeleton_getAttachmentRegistry);
  se::Class::defineFunction(this,"setTime",js_cocos2dx_spine_Skeleton_setTimeRegistry);
  se::Class::defineFunction(this,"setPosition",js_cocos2dx_spine_Skeleton_setPositionRegistry);
  se::Class::defineFunction(this,"setX",js_cocos2dx_spine_Skeleton_setXRegistry);
  se::Class::defineFunction(this,"setY",js_cocos2dx_spine_Skeleton_setYRegistry);
  se::Class::defineFunction(this,"findBone",js_cocos2dx_spine_Skeleton_findBoneRegistry);
  se::Class::defineFunction(this,"getY",js_cocos2dx_spine_Skeleton_getYRegistry);
  se::Class::defineFunction(this,"getBones",js_cocos2dx_spine_Skeleton_getBonesRegistry);
  se::Class::defineFunction(this,"getRootBone",js_cocos2dx_spine_Skeleton_getRootBoneRegistry);
  se::Class::defineFunction(this,"updateCache",js_cocos2dx_spine_Skeleton_updateCacheRegistry);
  se::Class::defineFunction(this,"findSlotIndex",js_cocos2dx_spine_Skeleton_findSlotIndexRegistry);
  se::Class::defineFunction
            (this,"getTransformConstraints",
             js_cocos2dx_spine_Skeleton_getTransformConstraintsRegistry);
  se::Class::defineFunction(this,"setSkin",js_cocos2dx_spine_Skeleton_setSkinRegistry);
  se::Class::defineFunction(this,"findSlot",js_cocos2dx_spine_Skeleton_findSlotRegistry);
  se::Class::defineFunction
            (this,"updateWorldTransform",js_cocos2dx_spine_Skeleton_updateWorldTransformRegistry);
  se::Class::defineFunction
            (this,"findPathConstraint",js_cocos2dx_spine_Skeleton_findPathConstraintRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<spine::Skeleton>(this);
  __jsb_spine_Skeleton_proto = se::Class::getProto(this);
  __jsb_spine_Skeleton_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

