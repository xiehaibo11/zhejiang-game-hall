
/* js_register_cocos2dx_dragonbones_WorldClock(se::Object*) */

undefined8 js_register_cocos2dx_dragonbones_WorldClock(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined2 local_37;
  undefined1 local_35;
  undefined4 uStack_34;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_34 = 0;
  local_40 = (basic_string)0x14;
  local_30 = (void *)0x0;
  local_37 = 0x6b63;
  uStack_3f = 0x6c43646c726f57;
  uStack_38 = 0x6f;
  local_35 = 0;
  this = (Class *)se::Class::create(&local_40,param_1,(Object *)0x0,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineFunction(this,"render",js_cocos2dx_dragonbones_WorldClock_renderRegistry);
  se::Class::defineFunction(this,"clear",js_cocos2dx_dragonbones_WorldClock_clearRegistry);
  se::Class::defineFunction(this,"contains",js_cocos2dx_dragonbones_WorldClock_containsRegistry);
  se::Class::defineFunction(this,"getClock",js_cocos2dx_dragonbones_WorldClock_getClockRegistry);
  se::Class::defineFunction
            (this,"advanceTime",js_cocos2dx_dragonbones_WorldClock_advanceTimeRegistry);
  se::Class::defineFunction(this,"setClock",js_cocos2dx_dragonbones_WorldClock_setClockRegistry);
  se::Class::defineStaticFunction
            (this,"getStaticClock",js_cocos2dx_dragonbones_WorldClock_getStaticClockRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<dragonBones::WorldClock>(this);
  __jsb_dragonBones_WorldClock_proto = se::Class::getProto(this);
  __jsb_dragonBones_WorldClock_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

