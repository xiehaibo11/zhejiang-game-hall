
/* js_register_cocos2dx_dragonbones_DragonBonesData(se::Object*) */

undefined8 js_register_cocos2dx_dragonbones_DragonBonesData(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 local_38;
  undefined7 uStack_37;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = (basic_string)0x1e;
  uStack_37 = 0x6174614473656e;
  uStack_3f = 0x426e6f67617244;
  local_38 = 0x6f;
  local_30 = (void *)0x0;
  this = (Class *)se::Class::create(&local_40,param_1,__jsb_dragonBones_BaseObject_proto,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineProperty
            (this,"name",js_cocos2dx_dragonbones_DragonBonesData_get_nameRegistry,
             js_cocos2dx_dragonbones_DragonBonesData_set_nameRegistry);
  se::Class::defineFunction
            (this,"setUserData",js_cocos2dx_dragonbones_DragonBonesData_setUserDataRegistry);
  se::Class::defineFunction
            (this,"getUserData",js_cocos2dx_dragonbones_DragonBonesData_getUserDataRegistry);
  se::Class::defineFunction
            (this,"getFrameIndices",js_cocos2dx_dragonbones_DragonBonesData_getFrameIndicesRegistry)
  ;
  se::Class::defineFunction
            (this,"getArmature",js_cocos2dx_dragonbones_DragonBonesData_getArmatureRegistry);
  se::Class::defineFunction
            (this,"getArmatureNames",
             js_cocos2dx_dragonbones_DragonBonesData_getArmatureNamesRegistry);
  se::Class::defineFunction
            (this,"addArmature",js_cocos2dx_dragonbones_DragonBonesData_addArmatureRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<dragonBones::DragonBonesData>(this);
  __jsb_dragonBones_DragonBonesData_proto = se::Class::getProto(this);
  __jsb_dragonBones_DragonBonesData_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

