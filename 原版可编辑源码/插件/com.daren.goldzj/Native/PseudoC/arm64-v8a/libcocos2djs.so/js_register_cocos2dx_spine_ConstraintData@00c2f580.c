
/* js_register_cocos2dx_spine_ConstraintData(se::Object*) */

undefined8 js_register_cocos2dx_spine_ConstraintData(Object *param_1)

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
  uStack_37 = 0x61746144746e;
  uStack_3f = 0x7274736e6f43;
  local_39 = 0x6961;
  local_31 = 0;
  this = (Class *)se::Class::create(&local_40,param_1,(Object *)0x0,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineFunction(this,"setOrder",js_cocos2dx_spine_ConstraintData_setOrderRegistry);
  se::Class::defineFunction(this,"getName",js_cocos2dx_spine_ConstraintData_getNameRegistry);
  se::Class::defineFunction
            (this,"setSkinRequired",js_cocos2dx_spine_ConstraintData_setSkinRequiredRegistry);
  se::Class::defineFunction(this,"getOrder",js_cocos2dx_spine_ConstraintData_getOrderRegistry);
  se::Class::defineFunction
            (this,"isSkinRequired",js_cocos2dx_spine_ConstraintData_isSkinRequiredRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<spine::ConstraintData>(this);
  __jsb_spine_ConstraintData_proto = se::Class::getProto(this);
  __jsb_spine_ConstraintData_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

