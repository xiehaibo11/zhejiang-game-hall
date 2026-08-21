
/* js_register_cocos2dx_spine_PathConstraint(se::Object*) */

undefined8 js_register_cocos2dx_spine_PathConstraint(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined6 uStack_3f;
  undefined2 local_39;
  undefined6 uStack_37;
  undefined1 local_31;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = (void *)0x0;
  local_40 = (basic_string)0x1c;
  uStack_37 = 0x746e69617274;
  uStack_3f = 0x6f4368746150;
  local_39 = 0x736e;
  local_31 = 0;
  this = (Class *)se::Class::create(&local_40,param_1,(Object *)0x0,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineFunction(this,"setSpacing",js_cocos2dx_spine_PathConstraint_setSpacingRegistry);
  se::Class::defineFunction
            (this,"setRotateMix",js_cocos2dx_spine_PathConstraint_setRotateMixRegistry);
  se::Class::defineFunction
            (this,"getRotateMix",js_cocos2dx_spine_PathConstraint_getRotateMixRegistry);
  se::Class::defineFunction(this,"getBones",js_cocos2dx_spine_PathConstraint_getBonesRegistry);
  se::Class::defineFunction(this,"setTarget",js_cocos2dx_spine_PathConstraint_setTargetRegistry);
  se::Class::defineFunction
            (this,"getTranslateMix",js_cocos2dx_spine_PathConstraint_getTranslateMixRegistry);
  se::Class::defineFunction(this,"update",js_cocos2dx_spine_PathConstraint_updateRegistry);
  se::Class::defineFunction(this,"getTarget",js_cocos2dx_spine_PathConstraint_getTargetRegistry);
  se::Class::defineFunction(this,"getSpacing",js_cocos2dx_spine_PathConstraint_getSpacingRegistry);
  se::Class::defineFunction(this,"getOrder",js_cocos2dx_spine_PathConstraint_getOrderRegistry);
  se::Class::defineFunction(this,"isActive",js_cocos2dx_spine_PathConstraint_isActiveRegistry);
  se::Class::defineFunction(this,"setActive",js_cocos2dx_spine_PathConstraint_setActiveRegistry);
  se::Class::defineFunction(this,"apply",js_cocos2dx_spine_PathConstraint_applyRegistry);
  se::Class::defineFunction(this,"setPosition",js_cocos2dx_spine_PathConstraint_setPositionRegistry)
  ;
  se::Class::defineFunction(this,"getData",js_cocos2dx_spine_PathConstraint_getDataRegistry);
  se::Class::defineFunction(this,"getPosition",js_cocos2dx_spine_PathConstraint_getPositionRegistry)
  ;
  se::Class::defineFunction
            (this,"setTranslateMix",js_cocos2dx_spine_PathConstraint_setTranslateMixRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<spine::PathConstraint>(this);
  __jsb_spine_PathConstraint_proto = se::Class::getProto(this);
  __jsb_spine_PathConstraint_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

