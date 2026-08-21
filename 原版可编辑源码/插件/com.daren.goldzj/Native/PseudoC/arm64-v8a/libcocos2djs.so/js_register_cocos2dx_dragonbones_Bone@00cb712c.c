
/* js_register_cocos2dx_dragonbones_Bone(se::Object*) */

undefined8 js_register_cocos2dx_dragonbones_Bone(Object *param_1)

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
  this = (Class *)se::Class::create((basic_string *)local_40,param_1,
                                    __jsb_dragonBones_TransformObject_proto,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineFunction(this,"getOffsetMode",js_cocos2dx_dragonbones_Bone_getOffsetModeRegistry)
  ;
  se::Class::defineFunction(this,"getParent",js_cocos2dx_dragonbones_Bone_getParentRegistry);
  se::Class::defineFunction(this,"getName",js_cocos2dx_dragonbones_Bone_getNameRegistry);
  se::Class::defineFunction(this,"contains",js_cocos2dx_dragonbones_Bone_containsRegistry);
  se::Class::defineFunction(this,"update",js_cocos2dx_dragonbones_Bone_updateRegistry);
  se::Class::defineFunction
            (this,"updateByConstraint",js_cocos2dx_dragonbones_Bone_updateByConstraintRegistry);
  se::Class::defineFunction(this,"getVisible",js_cocos2dx_dragonbones_Bone_getVisibleRegistry);
  se::Class::defineFunction(this,"init",js_cocos2dx_dragonbones_Bone_initRegistry);
  se::Class::defineFunction(this,"invalidUpdate",js_cocos2dx_dragonbones_Bone_invalidUpdateRegistry)
  ;
  se::Class::defineFunction(this,"setOffsetMode",js_cocos2dx_dragonbones_Bone_setOffsetModeRegistry)
  ;
  se::Class::defineFunction(this,"setVisible",js_cocos2dx_dragonbones_Bone_setVisibleRegistry);
  se::Class::defineFunction(this,"getBoneData",js_cocos2dx_dragonbones_Bone_getBoneDataRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<dragonBones::Bone>(this);
  __jsb_dragonBones_Bone_proto = se::Class::getProto(this);
  __jsb_dragonBones_Bone_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

