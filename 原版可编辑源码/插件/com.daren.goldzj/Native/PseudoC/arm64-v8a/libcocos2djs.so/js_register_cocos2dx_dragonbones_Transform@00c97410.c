
/* js_register_cocos2dx_dragonbones_Transform(se::Object*) */

undefined8 js_register_cocos2dx_dragonbones_Transform(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined2 local_37;
  undefined5 uStack_35;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_35 = 0;
  local_30 = (void *)0x0;
  local_40 = (basic_string)0x12;
  local_37 = 0x6d;
  uStack_3f = 0x6f66736e617254;
  uStack_38 = 0x72;
  this = (Class *)se::Class::create(&local_40,param_1,(Object *)0x0,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineProperty
            (this,"x",js_cocos2dx_dragonbones_Transform_get_xRegistry,
             js_cocos2dx_dragonbones_Transform_set_xRegistry);
  se::Class::defineProperty
            (this,"y",js_cocos2dx_dragonbones_Transform_get_yRegistry,
             js_cocos2dx_dragonbones_Transform_set_yRegistry);
  se::Class::defineProperty
            (this,"skew",js_cocos2dx_dragonbones_Transform_get_skewRegistry,
             js_cocos2dx_dragonbones_Transform_set_skewRegistry);
  se::Class::defineProperty
            (this,"rotation",js_cocos2dx_dragonbones_Transform_get_rotationRegistry,
             js_cocos2dx_dragonbones_Transform_set_rotationRegistry);
  se::Class::defineProperty
            (this,"scaleX",js_cocos2dx_dragonbones_Transform_get_scaleXRegistry,
             js_cocos2dx_dragonbones_Transform_set_scaleXRegistry);
  se::Class::defineProperty
            (this,"scaleY",js_cocos2dx_dragonbones_Transform_get_scaleYRegistry,
             js_cocos2dx_dragonbones_Transform_set_scaleYRegistry);
  se::Class::defineStaticFunction
            (this,"normalizeRadian",js_cocos2dx_dragonbones_Transform_normalizeRadianRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<dragonBones::Transform>(this);
  __jsb_dragonBones_Transform_proto = se::Class::getProto(this);
  __jsb_dragonBones_Transform_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

