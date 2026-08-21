
/* js_register_cocos2dx_dragonbones_ArmatureData(se::Object*) */

undefined8 js_register_cocos2dx_dragonbones_ArmatureData(Object *param_1)

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
  local_30 = (void *)0x0;
  local_40 = (basic_string)0x18;
  local_37 = 0x61746144;
  uStack_3f = 0x727574616d7241;
  uStack_38 = 0x65;
  local_33 = 0;
  this = (Class *)se::Class::create(&local_40,param_1,__jsb_dragonBones_BaseObject_proto,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineProperty
            (this,"frameRate",js_cocos2dx_dragonbones_ArmatureData_get_frameRateRegistry,
             js_cocos2dx_dragonbones_ArmatureData_set_frameRateRegistry);
  se::Class::defineProperty
            (this,"name",js_cocos2dx_dragonbones_ArmatureData_get_nameRegistry,
             js_cocos2dx_dragonbones_ArmatureData_set_nameRegistry);
  se::Class::defineFunction(this,"getBone",js_cocos2dx_dragonbones_ArmatureData_getBoneRegistry);
  se::Class::defineFunction(this,"addAction",js_cocos2dx_dragonbones_ArmatureData_addActionRegistry)
  ;
  se::Class::defineFunction
            (this,"setUserData",js_cocos2dx_dragonbones_ArmatureData_setUserDataRegistry);
  se::Class::defineFunction(this,"getSlot",js_cocos2dx_dragonbones_ArmatureData_getSlotRegistry);
  se::Class::defineFunction(this,"getSkin",js_cocos2dx_dragonbones_ArmatureData_getSkinRegistry);
  se::Class::defineFunction
            (this,"setDefaultAnimation",
             js_cocos2dx_dragonbones_ArmatureData_setDefaultAnimationRegistry);
  se::Class::defineFunction(this,"setType",js_cocos2dx_dragonbones_ArmatureData_setTypeRegistry);
  se::Class::defineFunction(this,"setParent",js_cocos2dx_dragonbones_ArmatureData_setParentRegistry)
  ;
  se::Class::defineFunction
            (this,"getDefaultSkin",js_cocos2dx_dragonbones_ArmatureData_getDefaultSkinRegistry);
  se::Class::defineFunction(this,"getMesh",js_cocos2dx_dragonbones_ArmatureData_getMeshRegistry);
  se::Class::defineFunction
            (this,"setDefaultSkin",js_cocos2dx_dragonbones_ArmatureData_setDefaultSkinRegistry);
  se::Class::defineFunction
            (this,"getAnimationNames",js_cocos2dx_dragonbones_ArmatureData_getAnimationNamesRegistry
            );
  se::Class::defineFunction(this,"getType",js_cocos2dx_dragonbones_ArmatureData_getTypeRegistry);
  se::Class::defineFunction
            (this,"addConstraint",js_cocos2dx_dragonbones_ArmatureData_addConstraintRegistry);
  se::Class::defineFunction
            (this,"getUserData",js_cocos2dx_dragonbones_ArmatureData_getUserDataRegistry);
  se::Class::defineFunction(this,"getAABB",js_cocos2dx_dragonbones_ArmatureData_getAABBRegistry);
  se::Class::defineFunction(this,"getParent",js_cocos2dx_dragonbones_ArmatureData_getParentRegistry)
  ;
  se::Class::defineFunction
            (this,"getDefaultAnimation",
             js_cocos2dx_dragonbones_ArmatureData_getDefaultAnimationRegistry);
  se::Class::defineFunction
            (this,"getAnimation",js_cocos2dx_dragonbones_ArmatureData_getAnimationRegistry);
  se::Class::defineFunction
            (this,"getConstraint",js_cocos2dx_dragonbones_ArmatureData_getConstraintRegistry);
  se::Class::defineFunction(this,"sortBones",js_cocos2dx_dragonbones_ArmatureData_sortBonesRegistry)
  ;
  se::Class::install(this);
  JSBClassType::registerClass<dragonBones::ArmatureData>(this);
  __jsb_dragonBones_ArmatureData_proto = se::Class::getProto(this);
  __jsb_dragonBones_ArmatureData_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

