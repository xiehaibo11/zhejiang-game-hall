
/* js_register_cocos2dx_spine_TransformConstraintTimeline(se::Object*) */

undefined8 js_register_cocos2dx_spine_TransformConstraintTimeline(Object *param_1)

{
  long lVar1;
  Object *pOVar2;
  Class *this;
  ulong local_40 [2];
  undefined8 *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = operator_new(0x20);
  pOVar2 = __jsb_spine_CurveTimeline_proto;
  *(undefined8 *)((long)local_30 + 0x13) = 0x656e696c656d6954;
  *(undefined8 *)((long)local_30 + 0xb) = 0x746e69617274736e;
  local_30[1] = 0x617274736e6f436d;
  *local_30 = 0x726f66736e617254;
  *(undefined1 *)((long)local_30 + 0x1b) = 0;
  local_40[1] = 0x1b;
  local_40[0] = 0x21;
  this = (Class *)se::Class::create((basic_string *)local_40,param_1,pOVar2,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineFunction
            (this,"getPropertyId",
             js_cocos2dx_spine_TransformConstraintTimeline_getPropertyIdRegistry);
  se::Class::defineFunction
            (this,"setFrame",js_cocos2dx_spine_TransformConstraintTimeline_setFrameRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<spine::TransformConstraintTimeline>(this);
  __jsb_spine_TransformConstraintTimeline_proto = se::Class::getProto(this);
  __jsb_spine_TransformConstraintTimeline_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

