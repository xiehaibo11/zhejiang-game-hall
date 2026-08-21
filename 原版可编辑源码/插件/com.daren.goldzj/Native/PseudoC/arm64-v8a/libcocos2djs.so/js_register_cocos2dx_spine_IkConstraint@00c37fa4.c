
/* js_register_cocos2dx_spine_IkConstraint(se::Object*) */

undefined8 js_register_cocos2dx_spine_IkConstraint(Object *param_1)

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
  local_40 = (basic_string)0x18;
  local_30 = (void *)0x0;
  local_37 = 0x746e6961;
  uStack_3f = 0x74736e6f436b49;
  uStack_38 = 0x72;
  local_33 = 0;
  this = (Class *)se::Class::create(&local_40,param_1,(Object *)0x0,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineFunction(this,"getMix",js_cocos2dx_spine_IkConstraint_getMixRegistry);
  se::Class::defineFunction(this,"getStretch",js_cocos2dx_spine_IkConstraint_getStretchRegistry);
  se::Class::defineFunction(this,"getCompress",js_cocos2dx_spine_IkConstraint_getCompressRegistry);
  se::Class::defineFunction(this,"setStretch",js_cocos2dx_spine_IkConstraint_setStretchRegistry);
  se::Class::defineFunction(this,"getBones",js_cocos2dx_spine_IkConstraint_getBonesRegistry);
  se::Class::defineFunction(this,"setTarget",js_cocos2dx_spine_IkConstraint_setTargetRegistry);
  se::Class::defineFunction
            (this,"setBendDirection",js_cocos2dx_spine_IkConstraint_setBendDirectionRegistry);
  se::Class::defineFunction(this,"update",js_cocos2dx_spine_IkConstraint_updateRegistry);
  se::Class::defineFunction(this,"getTarget",js_cocos2dx_spine_IkConstraint_getTargetRegistry);
  se::Class::defineFunction(this,"setCompress",js_cocos2dx_spine_IkConstraint_setCompressRegistry);
  se::Class::defineFunction
            (this,"getBendDirection",js_cocos2dx_spine_IkConstraint_getBendDirectionRegistry);
  se::Class::defineFunction(this,"setActive",js_cocos2dx_spine_IkConstraint_setActiveRegistry);
  se::Class::defineFunction(this,"getOrder",js_cocos2dx_spine_IkConstraint_getOrderRegistry);
  se::Class::defineFunction(this,"getSoftness",js_cocos2dx_spine_IkConstraint_getSoftnessRegistry);
  se::Class::defineFunction(this,"setMix",js_cocos2dx_spine_IkConstraint_setMixRegistry);
  se::Class::defineFunction(this,"getData",js_cocos2dx_spine_IkConstraint_getDataRegistry);
  se::Class::defineFunction(this,"setSoftness",js_cocos2dx_spine_IkConstraint_setSoftnessRegistry);
  se::Class::defineFunction(this,"isActive",js_cocos2dx_spine_IkConstraint_isActiveRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<spine::IkConstraint>(this);
  __jsb_spine_IkConstraint_proto = se::Class::getProto(this);
  __jsb_spine_IkConstraint_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

