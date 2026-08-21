
/* js_register_cocos2dx_spine_SwirlVertexEffect(se::Object*) */

undefined8 js_register_cocos2dx_spine_SwirlVertexEffect(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined2 uStack_2f;
  undefined5 uStack_2d;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_2d = 0;
  local_40 = (basic_string)0x22;
  uStack_2f = 0x74;
  uStack_37 = 0x65666645786574;
  uStack_30 = 99;
  uStack_3f = 0x65566c72697753;
  uStack_38 = 0x72;
  this = (Class *)se::Class::create(&local_40,param_1,__jsb_spine_VertexEffect_proto,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_2d,CONCAT21(uStack_2f,uStack_30)));
  }
  se::Class::defineFunction(this,"setRadius",js_cocos2dx_spine_SwirlVertexEffect_setRadiusRegistry);
  se::Class::defineFunction(this,"getAngle",js_cocos2dx_spine_SwirlVertexEffect_getAngleRegistry);
  se::Class::defineFunction
            (this,"getCenterY",js_cocos2dx_spine_SwirlVertexEffect_getCenterYRegistry);
  se::Class::defineFunction
            (this,"getCenterX",js_cocos2dx_spine_SwirlVertexEffect_getCenterXRegistry);
  se::Class::defineFunction(this,"setAngle",js_cocos2dx_spine_SwirlVertexEffect_setAngleRegistry);
  se::Class::defineFunction(this,"setWorldX",js_cocos2dx_spine_SwirlVertexEffect_setWorldXRegistry);
  se::Class::defineFunction(this,"setWorldY",js_cocos2dx_spine_SwirlVertexEffect_setWorldYRegistry);
  se::Class::defineFunction(this,"getWorldY",js_cocos2dx_spine_SwirlVertexEffect_getWorldYRegistry);
  se::Class::defineFunction(this,"getWorldX",js_cocos2dx_spine_SwirlVertexEffect_getWorldXRegistry);
  se::Class::defineFunction
            (this,"setCenterY",js_cocos2dx_spine_SwirlVertexEffect_setCenterYRegistry);
  se::Class::defineFunction
            (this,"setCenterX",js_cocos2dx_spine_SwirlVertexEffect_setCenterXRegistry);
  se::Class::defineFunction(this,"getRadius",js_cocos2dx_spine_SwirlVertexEffect_getRadiusRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<spine::SwirlVertexEffect>(this);
  __jsb_spine_SwirlVertexEffect_proto = se::Class::getProto(this);
  __jsb_spine_SwirlVertexEffect_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

