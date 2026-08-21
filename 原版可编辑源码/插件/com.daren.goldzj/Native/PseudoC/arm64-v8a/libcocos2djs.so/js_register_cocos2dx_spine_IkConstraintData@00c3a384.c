
/* js_register_cocos2dx_spine_IkConstraintData(se::Object*) */

undefined8 js_register_cocos2dx_spine_IkConstraintData(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined6 uStack_2e;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_2e = 0;
  local_40 = (basic_string)0x20;
  uStack_37 = 0x746144746e6961;
  uStack_30 = 0x61;
  uStack_3f = 0x74736e6f436b49;
  uStack_38 = 0x72;
  uStack_2f = 0;
  this = (Class *)se::Class::create(&local_40,param_1,__jsb_spine_ConstraintData_proto,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_2e,CONCAT11(uStack_2f,uStack_30)));
  }
  se::Class::defineFunction(this,"getMix",js_cocos2dx_spine_IkConstraintData_getMixRegistry);
  se::Class::defineFunction(this,"setUniform",js_cocos2dx_spine_IkConstraintData_setUniformRegistry)
  ;
  se::Class::defineFunction(this,"setStretch",js_cocos2dx_spine_IkConstraintData_setStretchRegistry)
  ;
  se::Class::defineFunction(this,"getUniform",js_cocos2dx_spine_IkConstraintData_getUniformRegistry)
  ;
  se::Class::defineFunction(this,"getBones",js_cocos2dx_spine_IkConstraintData_getBonesRegistry);
  se::Class::defineFunction(this,"setTarget",js_cocos2dx_spine_IkConstraintData_setTargetRegistry);
  se::Class::defineFunction(this,"getTarget",js_cocos2dx_spine_IkConstraintData_getTargetRegistry);
  se::Class::defineFunction
            (this,"setCompress",js_cocos2dx_spine_IkConstraintData_setCompressRegistry);
  se::Class::defineFunction
            (this,"getBendDirection",js_cocos2dx_spine_IkConstraintData_getBendDirectionRegistry);
  se::Class::defineFunction
            (this,"setBendDirection",js_cocos2dx_spine_IkConstraintData_setBendDirectionRegistry);
  se::Class::defineFunction
            (this,"getSoftness",js_cocos2dx_spine_IkConstraintData_getSoftnessRegistry);
  se::Class::defineFunction(this,"getStretch",js_cocos2dx_spine_IkConstraintData_getStretchRegistry)
  ;
  se::Class::defineFunction(this,"setMix",js_cocos2dx_spine_IkConstraintData_setMixRegistry);
  se::Class::defineFunction
            (this,"getCompress",js_cocos2dx_spine_IkConstraintData_getCompressRegistry);
  se::Class::defineFunction
            (this,"setSoftness",js_cocos2dx_spine_IkConstraintData_setSoftnessRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<spine::IkConstraintData>(this);
  __jsb_spine_IkConstraintData_proto = se::Class::getProto(this);
  __jsb_spine_IkConstraintData_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

