
/* js_register_cocos2dx_spine_TransformConstraintData(se::Object*) */

undefined8 js_register_cocos2dx_spine_TransformConstraintData(Object *param_1)

{
  long lVar1;
  Object *pOVar2;
  Class *this;
  ulong local_40 [2];
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = operator_new(0x20);
  pOVar2 = __jsb_spine_ConstraintData_proto;
  builtin_strncpy(local_30,"TransformConstraintData",0x18);
  local_40[1] = 0x17;
  local_40[0] = 0x21;
  this = (Class *)se::Class::create((basic_string *)local_40,param_1,pOVar2,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineFunction
            (this,"getOffsetRotation",
             js_cocos2dx_spine_TransformConstraintData_getOffsetRotationRegistry);
  se::Class::defineFunction
            (this,"getRotateMix",js_cocos2dx_spine_TransformConstraintData_getRotateMixRegistry);
  se::Class::defineFunction
            (this,"isLocal",js_cocos2dx_spine_TransformConstraintData_isLocalRegistry);
  se::Class::defineFunction
            (this,"getBones",js_cocos2dx_spine_TransformConstraintData_getBonesRegistry);
  se::Class::defineFunction
            (this,"isRelative",js_cocos2dx_spine_TransformConstraintData_isRelativeRegistry);
  se::Class::defineFunction
            (this,"getTranslateMix",
             js_cocos2dx_spine_TransformConstraintData_getTranslateMixRegistry);
  se::Class::defineFunction
            (this,"getTarget",js_cocos2dx_spine_TransformConstraintData_getTargetRegistry);
  se::Class::defineFunction
            (this,"getOffsetScaleX",
             js_cocos2dx_spine_TransformConstraintData_getOffsetScaleXRegistry);
  se::Class::defineFunction
            (this,"getOffsetScaleY",
             js_cocos2dx_spine_TransformConstraintData_getOffsetScaleYRegistry);
  se::Class::defineFunction
            (this,"getOffsetShearY",
             js_cocos2dx_spine_TransformConstraintData_getOffsetShearYRegistry);
  se::Class::defineFunction
            (this,"getOffsetY",js_cocos2dx_spine_TransformConstraintData_getOffsetYRegistry);
  se::Class::defineFunction
            (this,"getOffsetX",js_cocos2dx_spine_TransformConstraintData_getOffsetXRegistry);
  se::Class::defineFunction
            (this,"getShearMix",js_cocos2dx_spine_TransformConstraintData_getShearMixRegistry);
  se::Class::defineFunction
            (this,"getScaleMix",js_cocos2dx_spine_TransformConstraintData_getScaleMixRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<spine::TransformConstraintData>(this);
  __jsb_spine_TransformConstraintData_proto = se::Class::getProto(this);
  __jsb_spine_TransformConstraintData_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

