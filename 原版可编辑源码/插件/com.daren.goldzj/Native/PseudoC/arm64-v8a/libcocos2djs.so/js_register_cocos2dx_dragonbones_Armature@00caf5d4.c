
/* js_register_cocos2dx_dragonbones_Armature(se::Object*) */

undefined8 js_register_cocos2dx_dragonbones_Armature(Object *param_1)

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
  local_37 = 0;
  uStack_3f = 0x727574616d7241;
  uStack_38 = 0x65;
  this = (Class *)se::Class::create(&local_40,param_1,__jsb_dragonBones_BaseObject_proto,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineFunction(this,"getBone",js_cocos2dx_dragonbones_Armature_getBoneRegistry);
  se::Class::defineFunction(this,"getClock",js_cocos2dx_dragonbones_Armature_getClockRegistry);
  se::Class::defineFunction(this,"render",js_cocos2dx_dragonbones_Armature_renderRegistry);
  se::Class::defineFunction(this,"getSlot",js_cocos2dx_dragonbones_Armature_getSlotRegistry);
  se::Class::defineFunction(this,"setClock",js_cocos2dx_dragonbones_Armature_setClockRegistry);
  se::Class::defineFunction
            (this,"_bufferAction",js_cocos2dx_dragonbones_Armature__bufferActionRegistry);
  se::Class::defineFunction(this,"_addBone",js_cocos2dx_dragonbones_Armature__addBoneRegistry);
  se::Class::defineFunction
            (this,"getAnimatable",js_cocos2dx_dragonbones_Armature_getAnimatableRegistry);
  se::Class::defineFunction(this,"getName",js_cocos2dx_dragonbones_Armature_getNameRegistry);
  se::Class::defineFunction(this,"dispose",js_cocos2dx_dragonbones_Armature_disposeRegistry);
  se::Class::defineFunction
            (this,"invalidUpdate",js_cocos2dx_dragonbones_Armature_invalidUpdateRegistry);
  se::Class::defineFunction
            (this,"getCacheFrameRate",js_cocos2dx_dragonbones_Armature_getCacheFrameRateRegistry);
  se::Class::defineFunction(this,"getFlipY",js_cocos2dx_dragonbones_Armature_getFlipYRegistry);
  se::Class::defineFunction(this,"getFlipX",js_cocos2dx_dragonbones_Armature_getFlipXRegistry);
  se::Class::defineFunction
            (this,"intersectsSegment",js_cocos2dx_dragonbones_Armature_intersectsSegmentRegistry);
  se::Class::defineFunction
            (this,"setCacheFrameRate",js_cocos2dx_dragonbones_Armature_setCacheFrameRateRegistry);
  se::Class::defineFunction
            (this,"_addConstraint",js_cocos2dx_dragonbones_Armature__addConstraintRegistry);
  se::Class::defineFunction(this,"setFlipY",js_cocos2dx_dragonbones_Armature_setFlipYRegistry);
  se::Class::defineFunction(this,"setFlipX",js_cocos2dx_dragonbones_Armature_setFlipXRegistry);
  se::Class::defineFunction(this,"_addSlot",js_cocos2dx_dragonbones_Armature__addSlotRegistry);
  se::Class::defineFunction(this,"advanceTime",js_cocos2dx_dragonbones_Armature_advanceTimeRegistry)
  ;
  se::Class::defineFunction
            (this,"getAnimation",js_cocos2dx_dragonbones_Armature_getAnimationRegistry);
  se::Class::defineFunction(this,"getParent",js_cocos2dx_dragonbones_Armature_getParentRegistry);
  se::Class::defineFunction
            (this,"getArmatureData",js_cocos2dx_dragonbones_Armature_getArmatureDataRegistry);
  se::Class::defineFunction
            (this,"getEventDispatcher",js_cocos2dx_dragonbones_Armature_getEventDispatcherRegistry);
  se::Class::defineFunction
            (this,"containsPoint",js_cocos2dx_dragonbones_Armature_containsPointRegistry);
  se::Class::defineFunction(this,"getProxy",js_cocos2dx_dragonbones_Armature_getProxyRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<dragonBones::Armature>(this);
  __jsb_dragonBones_Armature_proto = se::Class::getProto(this);
  __jsb_dragonBones_Armature_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

