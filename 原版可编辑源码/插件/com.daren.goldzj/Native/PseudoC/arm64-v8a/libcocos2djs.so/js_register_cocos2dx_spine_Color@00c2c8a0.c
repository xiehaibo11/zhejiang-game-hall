
/* js_register_cocos2dx_spine_Color(se::Object*) */

undefined8 js_register_cocos2dx_spine_Color(Object *param_1)

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
  local_40[0] = 0x726f6c6f430a;
  this = (Class *)se::Class::create((basic_string *)local_40,param_1,(Object *)0x0,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineProperty
            (this,"r",js_cocos2dx_spine_Color_get_rRegistry,js_cocos2dx_spine_Color_set_rRegistry);
  se::Class::defineProperty
            (this,"g",js_cocos2dx_spine_Color_get_gRegistry,js_cocos2dx_spine_Color_set_gRegistry);
  se::Class::defineProperty
            (this,"b",js_cocos2dx_spine_Color_get_bRegistry,js_cocos2dx_spine_Color_set_bRegistry);
  se::Class::defineProperty
            (this,"a",js_cocos2dx_spine_Color_get_aRegistry,js_cocos2dx_spine_Color_set_aRegistry);
  se::Class::defineFunction(this,"clamp",js_cocos2dx_spine_Color_clampRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<spine::Color>(this);
  __jsb_spine_Color_proto = se::Class::getProto(this);
  __jsb_spine_Color_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

