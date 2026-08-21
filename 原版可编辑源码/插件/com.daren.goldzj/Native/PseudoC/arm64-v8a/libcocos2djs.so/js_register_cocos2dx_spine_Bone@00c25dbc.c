
/* js_register_cocos2dx_spine_Bone(se::Object*) */

undefined8 js_register_cocos2dx_spine_Bone(Object *param_1)

{
  long lVar1;
  Class *this;
  ulong local_40 [2];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40[1] = 0;
  local_30 = (void *)0x0;
  local_40[0] = 0x656e6f4208;
  this = (Class *)se::Class::create((basic_string *)local_40,param_1,(Object *)0x0,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineFunction(this,"setD",js_cocos2dx_spine_Bone_setDRegistry);
  se::Class::defineFunction
            (this,"setAppliedRotation",js_cocos2dx_spine_Bone_setAppliedRotationRegistry);
  se::Class::defineFunction(this,"setAScaleY",js_cocos2dx_spine_Bone_setAScaleYRegistry);
  se::Class::defineFunction(this,"setAScaleX",js_cocos2dx_spine_Bone_setAScaleXRegistry);
  se::Class::defineFunction(this,"getB",js_cocos2dx_spine_Bone_getBRegistry);
  se::Class::defineFunction(this,"getC",js_cocos2dx_spine_Bone_getCRegistry);
  se::Class::defineFunction(this,"getD",js_cocos2dx_spine_Bone_getDRegistry);
  se::Class::defineFunction(this,"getWorldScaleY",js_cocos2dx_spine_Bone_getWorldScaleYRegistry);
  se::Class::defineFunction(this,"getX",js_cocos2dx_spine_Bone_getXRegistry);
  se::Class::defineFunction(this,"getY",js_cocos2dx_spine_Bone_getYRegistry);
  se::Class::defineFunction(this,"getChildren",js_cocos2dx_spine_Bone_getChildrenRegistry);
  se::Class::defineFunction(this,"setWorldX",js_cocos2dx_spine_Bone_setWorldXRegistry);
  se::Class::defineFunction(this,"setAppliedValid",js_cocos2dx_spine_Bone_setAppliedValidRegistry);
  se::Class::defineFunction(this,"getRotation",js_cocos2dx_spine_Bone_getRotationRegistry);
  se::Class::defineFunction(this,"getAShearX",js_cocos2dx_spine_Bone_getAShearXRegistry);
  se::Class::defineFunction(this,"getAShearY",js_cocos2dx_spine_Bone_getAShearYRegistry);
  se::Class::defineFunction
            (this,"getWorldRotationY",js_cocos2dx_spine_Bone_getWorldRotationYRegistry);
  se::Class::defineFunction(this,"isAppliedValid",js_cocos2dx_spine_Bone_isAppliedValidRegistry);
  se::Class::defineFunction(this,"getScaleY",js_cocos2dx_spine_Bone_getScaleYRegistry);
  se::Class::defineFunction(this,"getScaleX",js_cocos2dx_spine_Bone_getScaleXRegistry);
  se::Class::defineFunction(this,"setToSetupPose",js_cocos2dx_spine_Bone_setToSetupPoseRegistry);
  se::Class::defineFunction
            (this,"getWorldToLocalRotationX",js_cocos2dx_spine_Bone_getWorldToLocalRotationXRegistry
            );
  se::Class::defineFunction
            (this,"getWorldToLocalRotationY",js_cocos2dx_spine_Bone_getWorldToLocalRotationYRegistry
            );
  se::Class::defineFunction(this,"getAScaleX",js_cocos2dx_spine_Bone_getAScaleXRegistry);
  se::Class::defineFunction(this,"getA",js_cocos2dx_spine_Bone_getARegistry);
  se::Class::defineFunction(this,"setRotation",js_cocos2dx_spine_Bone_setRotationRegistry);
  se::Class::defineFunction(this,"getAX",js_cocos2dx_spine_Bone_getAXRegistry);
  se::Class::defineFunction(this,"getData",js_cocos2dx_spine_Bone_getDataRegistry);
  se::Class::defineFunction(this,"setShearX",js_cocos2dx_spine_Bone_setShearXRegistry);
  se::Class::defineFunction(this,"setShearY",js_cocos2dx_spine_Bone_setShearYRegistry);
  se::Class::defineFunction(this,"setScaleY",js_cocos2dx_spine_Bone_setScaleYRegistry);
  se::Class::defineFunction(this,"setScaleX",js_cocos2dx_spine_Bone_setScaleXRegistry);
  se::Class::defineFunction(this,"setA",js_cocos2dx_spine_Bone_setARegistry);
  se::Class::defineFunction(this,"setB",js_cocos2dx_spine_Bone_setBRegistry);
  se::Class::defineFunction(this,"getAScaleY",js_cocos2dx_spine_Bone_getAScaleYRegistry);
  se::Class::defineFunction(this,"getWorldScaleX",js_cocos2dx_spine_Bone_getWorldScaleXRegistry);
  se::Class::defineFunction
            (this,"getWorldRotationX",js_cocos2dx_spine_Bone_getWorldRotationXRegistry);
  se::Class::defineFunction(this,"getShearX",js_cocos2dx_spine_Bone_getShearXRegistry);
  se::Class::defineFunction(this,"update",js_cocos2dx_spine_Bone_updateRegistry);
  se::Class::defineFunction(this,"getShearY",js_cocos2dx_spine_Bone_getShearYRegistry);
  se::Class::defineFunction(this,"setAShearX",js_cocos2dx_spine_Bone_setAShearXRegistry);
  se::Class::defineFunction(this,"setAShearY",js_cocos2dx_spine_Bone_setAShearYRegistry);
  se::Class::defineFunction(this,"setActive",js_cocos2dx_spine_Bone_setActiveRegistry);
  se::Class::defineFunction(this,"setC",js_cocos2dx_spine_Bone_setCRegistry);
  se::Class::defineFunction(this,"setWorldY",js_cocos2dx_spine_Bone_setWorldYRegistry);
  se::Class::defineFunction(this,"setX",js_cocos2dx_spine_Bone_setXRegistry);
  se::Class::defineFunction(this,"setY",js_cocos2dx_spine_Bone_setYRegistry);
  se::Class::defineFunction(this,"setAX",js_cocos2dx_spine_Bone_setAXRegistry);
  se::Class::defineFunction(this,"setAY",js_cocos2dx_spine_Bone_setAYRegistry);
  se::Class::defineFunction(this,"isActive",js_cocos2dx_spine_Bone_isActiveRegistry);
  se::Class::defineFunction(this,"getAY",js_cocos2dx_spine_Bone_getAYRegistry);
  se::Class::defineFunction(this,"rotateWorld",js_cocos2dx_spine_Bone_rotateWorldRegistry);
  se::Class::defineFunction(this,"getParent",js_cocos2dx_spine_Bone_getParentRegistry);
  se::Class::defineFunction
            (this,"getAppliedRotation",js_cocos2dx_spine_Bone_getAppliedRotationRegistry);
  se::Class::defineFunction
            (this,"updateWorldTransform",js_cocos2dx_spine_Bone_updateWorldTransformRegistry);
  se::Class::defineFunction(this,"getWorldY",js_cocos2dx_spine_Bone_getWorldYRegistry);
  se::Class::defineFunction(this,"getWorldX",js_cocos2dx_spine_Bone_getWorldXRegistry);
  se::Class::defineFunction(this,"getSkeleton",js_cocos2dx_spine_Bone_getSkeletonRegistry);
  se::Class::defineStaticFunction(this,"isYDown",js_cocos2dx_spine_Bone_isYDownRegistry);
  se::Class::defineStaticFunction(this,"setYDown",js_cocos2dx_spine_Bone_setYDownRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<spine::Bone>(this);
  __jsb_spine_Bone_proto = se::Class::getProto(this);
  __jsb_spine_Bone_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

