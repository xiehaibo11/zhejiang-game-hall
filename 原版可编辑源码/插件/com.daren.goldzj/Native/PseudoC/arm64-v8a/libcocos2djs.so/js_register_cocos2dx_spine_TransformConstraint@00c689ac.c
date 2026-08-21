
/* js_register_cocos2dx_spine_TransformConstraint(se::Object*) */

undefined8 js_register_cocos2dx_spine_TransformConstraint(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined4 uStack_2f;
  undefined3 uStack_2b;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_2b = 0;
  local_40 = (basic_string)0x26;
  uStack_37 = 0x7274736e6f436d;
  uStack_30 = 0x61;
  uStack_3f = 0x6f66736e617254;
  uStack_38 = 0x72;
  uStack_2f = 0x746e69;
  this = (Class *)se::Class::create(&local_40,param_1,(Object *)0x0,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete((void *)CONCAT35(uStack_2b,CONCAT41(uStack_2f,uStack_30)));
  }
  se::Class::defineFunction
            (this,"setActive",js_cocos2dx_spine_TransformConstraint_setActiveRegistry);
  se::Class::defineFunction
            (this,"getScaleMix",js_cocos2dx_spine_TransformConstraint_getScaleMixRegistry);
  se::Class::defineFunction
            (this,"setRotateMix",js_cocos2dx_spine_TransformConstraint_setRotateMixRegistry);
  se::Class::defineFunction
            (this,"getRotateMix",js_cocos2dx_spine_TransformConstraint_getRotateMixRegistry);
  se::Class::defineFunction(this,"getBones",js_cocos2dx_spine_TransformConstraint_getBonesRegistry);
  se::Class::defineFunction
            (this,"setTarget",js_cocos2dx_spine_TransformConstraint_setTargetRegistry);
  se::Class::defineFunction
            (this,"getTranslateMix",js_cocos2dx_spine_TransformConstraint_getTranslateMixRegistry);
  se::Class::defineFunction
            (this,"setShearMix",js_cocos2dx_spine_TransformConstraint_setShearMixRegistry);
  se::Class::defineFunction(this,"update",js_cocos2dx_spine_TransformConstraint_updateRegistry);
  se::Class::defineFunction
            (this,"getTarget",js_cocos2dx_spine_TransformConstraint_getTargetRegistry);
  se::Class::defineFunction
            (this,"setScaleMix",js_cocos2dx_spine_TransformConstraint_setScaleMixRegistry);
  se::Class::defineFunction(this,"getOrder",js_cocos2dx_spine_TransformConstraint_getOrderRegistry);
  se::Class::defineFunction
            (this,"getShearMix",js_cocos2dx_spine_TransformConstraint_getShearMixRegistry);
  se::Class::defineFunction(this,"apply",js_cocos2dx_spine_TransformConstraint_applyRegistry);
  se::Class::defineFunction(this,"getData",js_cocos2dx_spine_TransformConstraint_getDataRegistry);
  se::Class::defineFunction(this,"isActive",js_cocos2dx_spine_TransformConstraint_isActiveRegistry);
  se::Class::defineFunction
            (this,"setTranslateMix",js_cocos2dx_spine_TransformConstraint_setTranslateMixRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<spine::TransformConstraint>(this);
  __jsb_spine_TransformConstraint_proto = se::Class::getProto(this);
  __jsb_spine_TransformConstraint_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

