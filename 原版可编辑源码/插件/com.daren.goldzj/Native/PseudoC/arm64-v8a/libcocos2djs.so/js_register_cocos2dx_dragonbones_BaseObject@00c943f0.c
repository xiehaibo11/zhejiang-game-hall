
/* js_register_cocos2dx_dragonbones_BaseObject(se::Object*) */

undefined8 js_register_cocos2dx_dragonbones_BaseObject(Object *param_1)

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
  local_37 = 0x7463;
  uStack_3f = 0x6a624f65736142;
  uStack_38 = 0x65;
  local_35 = 0;
  this = (Class *)se::Class::create(&local_40,param_1,(Object *)0x0,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineFunction
            (this,"returnToPool",js_cocos2dx_dragonbones_BaseObject_returnToPoolRegistry);
  se::Class::defineStaticFunction
            (this,"clearPool",js_cocos2dx_dragonbones_BaseObject_clearPoolRegistry);
  se::Class::defineStaticFunction
            (this,"setMaxCount",js_cocos2dx_dragonbones_BaseObject_setMaxCountRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<dragonBones::BaseObject>(this);
  __jsb_dragonBones_BaseObject_proto = se::Class::getProto(this);
  __jsb_dragonBones_BaseObject_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

