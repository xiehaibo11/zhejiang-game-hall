
/* js_register_cocos2dx_dragonbones_EventObject(se::Object*) */

undefined8 js_register_cocos2dx_dragonbones_EventObject(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined4 local_37;
  undefined3 uStack_33;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_33 = 0;
  local_30 = (void *)0x0;
  local_40 = (basic_string)0x16;
  local_37 = 0x746365;
  uStack_3f = 0x624f746e657645;
  uStack_38 = 0x6a;
  this = (Class *)se::Class::create(&local_40,param_1,__jsb_dragonBones_BaseObject_proto,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineProperty
            (this,"type",js_cocos2dx_dragonbones_EventObject_get_typeRegistry,
             js_cocos2dx_dragonbones_EventObject_set_typeRegistry);
  se::Class::defineProperty
            (this,"name",js_cocos2dx_dragonbones_EventObject_get_nameRegistry,
             js_cocos2dx_dragonbones_EventObject_set_nameRegistry);
  se::Class::defineProperty
            (this,"armature",js_cocos2dx_dragonbones_EventObject_get_armatureRegistry,
             js_cocos2dx_dragonbones_EventObject_set_armatureRegistry);
  se::Class::defineProperty
            (this,"bone",js_cocos2dx_dragonbones_EventObject_get_boneRegistry,
             js_cocos2dx_dragonbones_EventObject_set_boneRegistry);
  se::Class::defineProperty
            (this,"slot",js_cocos2dx_dragonbones_EventObject_get_slotRegistry,
             js_cocos2dx_dragonbones_EventObject_set_slotRegistry);
  se::Class::defineProperty
            (this,"animationState",js_cocos2dx_dragonbones_EventObject_get_animationStateRegistry,
             js_cocos2dx_dragonbones_EventObject_set_animationStateRegistry);
  se::Class::defineFunction(this,"getBone",js_cocos2dx_dragonbones_EventObject_getBoneRegistry);
  se::Class::defineFunction(this,"getData",js_cocos2dx_dragonbones_EventObject_getDataRegistry);
  se::Class::defineFunction
            (this,"getAnimationState",js_cocos2dx_dragonbones_EventObject_getAnimationStateRegistry)
  ;
  se::Class::defineFunction
            (this,"getArmature",js_cocos2dx_dragonbones_EventObject_getArmatureRegistry);
  se::Class::defineFunction(this,"getSlot",js_cocos2dx_dragonbones_EventObject_getSlotRegistry);
  se::Class::defineStaticFunction
            (this,"actionDataToInstance",
             js_cocos2dx_dragonbones_EventObject_actionDataToInstanceRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<dragonBones::EventObject>(this);
  __jsb_dragonBones_EventObject_proto = se::Class::getProto(this);
  __jsb_dragonBones_EventObject_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

