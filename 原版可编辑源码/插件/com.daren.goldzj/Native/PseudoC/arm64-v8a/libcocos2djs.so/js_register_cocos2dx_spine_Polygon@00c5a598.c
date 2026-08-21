
/* js_register_cocos2dx_spine_Polygon(se::Object*) */

undefined8 js_register_cocos2dx_spine_Polygon(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined7 uStack_37;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_37 = 0;
  local_30 = (void *)0x0;
  local_40 = (basic_string)0xe;
  uStack_3f = 0x6e6f67796c6f50;
  uStack_38 = 0;
  this = (Class *)se::Class::create(&local_40,param_1,(Object *)0x0,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::install(this);
  JSBClassType::registerClass<spine::Polygon>(this);
  __jsb_spine_Polygon_proto = se::Class::getProto(this);
  __jsb_spine_Polygon_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

