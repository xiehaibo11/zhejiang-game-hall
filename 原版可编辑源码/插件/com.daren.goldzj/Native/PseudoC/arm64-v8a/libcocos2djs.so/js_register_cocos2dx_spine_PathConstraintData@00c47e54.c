
/* js_register_cocos2dx_spine_PathConstraintData(se::Object*) */

undefined8 js_register_cocos2dx_spine_PathConstraintData(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined2 uStack_2f;
  undefined1 uStack_2d;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_2c = 0;
  local_40 = (basic_string)0x24;
  uStack_2f = 0x6174;
  uStack_37 = 0x44746e69617274;
  uStack_30 = 0x61;
  uStack_3f = 0x6e6f4368746150;
  uStack_38 = 0x73;
  uStack_2d = 0;
  this = (Class *)se::Class::create(&local_40,param_1,__jsb_spine_ConstraintData_proto,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_2c,CONCAT13(uStack_2d,CONCAT21(uStack_2f,uStack_30))));
  }
  se::Class::defineFunction
            (this,"setOffsetRotation",js_cocos2dx_spine_PathConstraintData_setOffsetRotationRegistry
            );
  se::Class::defineFunction
            (this,"setSpacing",js_cocos2dx_spine_PathConstraintData_setSpacingRegistry);
  se::Class::defineFunction
            (this,"getOffsetRotation",js_cocos2dx_spine_PathConstraintData_getOffsetRotationRegistry
            );
  se::Class::defineFunction
            (this,"setSpacingMode",js_cocos2dx_spine_PathConstraintData_setSpacingModeRegistry);
  se::Class::defineFunction
            (this,"getRotateMix",js_cocos2dx_spine_PathConstraintData_getRotateMixRegistry);
  se::Class::defineFunction
            (this,"getPositionMode",js_cocos2dx_spine_PathConstraintData_getPositionModeRegistry);
  se::Class::defineFunction(this,"getBones",js_cocos2dx_spine_PathConstraintData_getBonesRegistry);
  se::Class::defineFunction(this,"setTarget",js_cocos2dx_spine_PathConstraintData_setTargetRegistry)
  ;
  se::Class::defineFunction
            (this,"getTranslateMix",js_cocos2dx_spine_PathConstraintData_getTranslateMixRegistry);
  se::Class::defineFunction
            (this,"getSpacing",js_cocos2dx_spine_PathConstraintData_getSpacingRegistry);
  se::Class::defineFunction(this,"getTarget",js_cocos2dx_spine_PathConstraintData_getTargetRegistry)
  ;
  se::Class::defineFunction
            (this,"getRotateMode",js_cocos2dx_spine_PathConstraintData_getRotateModeRegistry);
  se::Class::defineFunction
            (this,"setRotateMode",js_cocos2dx_spine_PathConstraintData_setRotateModeRegistry);
  se::Class::defineFunction
            (this,"getSpacingMode",js_cocos2dx_spine_PathConstraintData_getSpacingModeRegistry);
  se::Class::defineFunction
            (this,"setRotateMix",js_cocos2dx_spine_PathConstraintData_setRotateMixRegistry);
  se::Class::defineFunction
            (this,"setPosition",js_cocos2dx_spine_PathConstraintData_setPositionRegistry);
  se::Class::defineFunction
            (this,"setPositionMode",js_cocos2dx_spine_PathConstraintData_setPositionModeRegistry);
  se::Class::defineFunction
            (this,"getPosition",js_cocos2dx_spine_PathConstraintData_getPositionRegistry);
  se::Class::defineFunction
            (this,"setTranslateMix",js_cocos2dx_spine_PathConstraintData_setTranslateMixRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<spine::PathConstraintData>(this);
  __jsb_spine_PathConstraintData_proto = se::Class::getProto(this);
  __jsb_spine_PathConstraintData_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

