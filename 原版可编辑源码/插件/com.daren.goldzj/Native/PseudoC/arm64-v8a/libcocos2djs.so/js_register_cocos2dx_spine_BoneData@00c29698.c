
/* js_register_cocos2dx_spine_BoneData(se::Object*) */

undefined8 js_register_cocos2dx_spine_BoneData(Object *param_1)

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
  uStack_3f = 0x746144656e6f42;
  uStack_38 = 0x61;
  local_37 = 0;
  this = (Class *)se::Class::create(&local_40,param_1,(Object *)0x0,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineFunction(this,"getX",js_cocos2dx_spine_BoneData_getXRegistry);
  se::Class::defineFunction(this,"getY",js_cocos2dx_spine_BoneData_getYRegistry);
  se::Class::defineFunction(this,"getRotation",js_cocos2dx_spine_BoneData_getRotationRegistry);
  se::Class::defineFunction(this,"isSkinRequired",js_cocos2dx_spine_BoneData_isSkinRequiredRegistry)
  ;
  se::Class::defineFunction(this,"getIndex",js_cocos2dx_spine_BoneData_getIndexRegistry);
  se::Class::defineFunction(this,"getScaleY",js_cocos2dx_spine_BoneData_getScaleYRegistry);
  se::Class::defineFunction(this,"getScaleX",js_cocos2dx_spine_BoneData_getScaleXRegistry);
  se::Class::defineFunction(this,"getLength",js_cocos2dx_spine_BoneData_getLengthRegistry);
  se::Class::defineFunction(this,"getName",js_cocos2dx_spine_BoneData_getNameRegistry);
  se::Class::defineFunction(this,"setLength",js_cocos2dx_spine_BoneData_setLengthRegistry);
  se::Class::defineFunction(this,"setRotation",js_cocos2dx_spine_BoneData_setRotationRegistry);
  se::Class::defineFunction(this,"setShearX",js_cocos2dx_spine_BoneData_setShearXRegistry);
  se::Class::defineFunction(this,"setShearY",js_cocos2dx_spine_BoneData_setShearYRegistry);
  se::Class::defineFunction(this,"setScaleY",js_cocos2dx_spine_BoneData_setScaleYRegistry);
  se::Class::defineFunction(this,"setScaleX",js_cocos2dx_spine_BoneData_setScaleXRegistry);
  se::Class::defineFunction(this,"getShearX",js_cocos2dx_spine_BoneData_getShearXRegistry);
  se::Class::defineFunction(this,"getShearY",js_cocos2dx_spine_BoneData_getShearYRegistry);
  se::Class::defineFunction(this,"setX",js_cocos2dx_spine_BoneData_setXRegistry);
  se::Class::defineFunction(this,"setY",js_cocos2dx_spine_BoneData_setYRegistry);
  se::Class::defineFunction
            (this,"setSkinRequired",js_cocos2dx_spine_BoneData_setSkinRequiredRegistry);
  se::Class::defineFunction(this,"getParent",js_cocos2dx_spine_BoneData_getParentRegistry);
  se::Class::defineFunction
            (this,"getTransformMode",js_cocos2dx_spine_BoneData_getTransformModeRegistry);
  se::Class::defineFunction
            (this,"setTransformMode",js_cocos2dx_spine_BoneData_setTransformModeRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<spine::BoneData>(this);
  __jsb_spine_BoneData_proto = se::Class::getProto(this);
  __jsb_spine_BoneData_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

