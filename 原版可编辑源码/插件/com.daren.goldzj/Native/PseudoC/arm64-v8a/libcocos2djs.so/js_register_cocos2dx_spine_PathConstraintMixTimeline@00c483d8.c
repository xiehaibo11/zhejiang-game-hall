
/* js_register_cocos2dx_spine_PathConstraintMixTimeline(se::Object*) */

undefined8 js_register_cocos2dx_spine_PathConstraintMixTimeline(Object *param_1)

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
  pOVar2 = __jsb_spine_CurveTimeline_proto;
  builtin_strncpy(local_30,"PathConstraintMixTimeline",0x1a);
  local_40[1] = 0x19;
  local_40[0] = 0x21;
  this = (Class *)se::Class::create((basic_string *)local_40,param_1,pOVar2,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineFunction
            (this,"getPropertyId",js_cocos2dx_spine_PathConstraintMixTimeline_getPropertyIdRegistry)
  ;
  se::Class::install(this);
  JSBClassType::registerClass<spine::PathConstraintMixTimeline>(this);
  __jsb_spine_PathConstraintMixTimeline_proto = se::Class::getProto(this);
  __jsb_spine_PathConstraintMixTimeline_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

