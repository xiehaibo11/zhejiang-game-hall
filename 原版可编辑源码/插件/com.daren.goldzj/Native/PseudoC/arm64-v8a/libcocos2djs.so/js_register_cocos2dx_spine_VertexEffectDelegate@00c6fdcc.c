
/* js_register_cocos2dx_spine_VertexEffectDelegate(se::Object*) */

undefined8 js_register_cocos2dx_spine_VertexEffectDelegate(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined4 uStack_2f;
  undefined1 uStack_2b;
  undefined2 uStack_2a;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = (basic_string)0x28;
  uStack_2a = 0;
  uStack_37 = 0x6c654474636566;
  uStack_30 = 0x65;
  uStack_3f = 0x45786574726556;
  uStack_38 = 0x66;
  uStack_2f = 0x65746167;
  uStack_2b = 0;
  this = (Class *)se::Class::create(&local_40,param_1,(Object *)0x0,
                                    js_cocos2dx_spine_VertexEffectDelegate_constructorRegistry);
  if (((byte)local_40 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_2a,CONCAT15(uStack_2b,CONCAT41(uStack_2f,uStack_30))));
  }
  se::Class::defineFunction
            (this,"getEffectType",js_cocos2dx_spine_VertexEffectDelegate_getEffectTypeRegistry);
  se::Class::defineFunction
            (this,"initSwirlWithPowOut",
             js_cocos2dx_spine_VertexEffectDelegate_initSwirlWithPowOutRegistry);
  se::Class::defineFunction
            (this,"initSwirlWithPow",js_cocos2dx_spine_VertexEffectDelegate_initSwirlWithPowRegistry
            );
  se::Class::defineFunction
            (this,"initJitter",js_cocos2dx_spine_VertexEffectDelegate_initJitterRegistry);
  se::Class::defineFunction
            (this,"getSwirlVertexEffect",
             js_cocos2dx_spine_VertexEffectDelegate_getSwirlVertexEffectRegistry);
  se::Class::defineFunction
            (this,"getVertexEffect",js_cocos2dx_spine_VertexEffectDelegate_getVertexEffectRegistry);
  se::Class::defineFunction
            (this,"getJitterVertexEffect",
             js_cocos2dx_spine_VertexEffectDelegate_getJitterVertexEffectRegistry);
  se::Class::defineFunction(this,"clear",js_cocos2dx_spine_VertexEffectDelegate_clearRegistry);
  se::Class::defineFinalizeFunction(this,js_spine_VertexEffectDelegate_finalizeRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<spine::VertexEffectDelegate>(this);
  __jsb_spine_VertexEffectDelegate_proto = se::Class::getProto(this);
  __jsb_spine_VertexEffectDelegate_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

