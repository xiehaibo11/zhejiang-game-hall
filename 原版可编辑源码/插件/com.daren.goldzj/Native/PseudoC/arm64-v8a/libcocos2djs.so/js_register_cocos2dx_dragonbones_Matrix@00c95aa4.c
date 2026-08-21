
/* js_register_cocos2dx_dragonbones_Matrix(se::Object*) */

undefined8 js_register_cocos2dx_dragonbones_Matrix(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined4 local_3f;
  undefined2 local_3b;
  undefined1 local_39;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = 0;
  local_30 = (void *)0x0;
  local_40 = (basic_string)0xc;
  local_3b = 0x7869;
  local_3f = 0x7274614d;
  local_39 = 0;
  this = (Class *)se::Class::create(&local_40,param_1,(Object *)0x0,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineProperty
            (this,"a",js_cocos2dx_dragonbones_Matrix_get_aRegistry,
             js_cocos2dx_dragonbones_Matrix_set_aRegistry);
  se::Class::defineProperty
            (this,"b",js_cocos2dx_dragonbones_Matrix_get_bRegistry,
             js_cocos2dx_dragonbones_Matrix_set_bRegistry);
  se::Class::defineProperty
            (this,"c",js_cocos2dx_dragonbones_Matrix_get_cRegistry,
             js_cocos2dx_dragonbones_Matrix_set_cRegistry);
  se::Class::defineProperty
            (this,"d",js_cocos2dx_dragonbones_Matrix_get_dRegistry,
             js_cocos2dx_dragonbones_Matrix_set_dRegistry);
  se::Class::defineProperty
            (this,"tx",js_cocos2dx_dragonbones_Matrix_get_txRegistry,
             js_cocos2dx_dragonbones_Matrix_set_txRegistry);
  se::Class::defineProperty
            (this,"ty",js_cocos2dx_dragonbones_Matrix_get_tyRegistry,
             js_cocos2dx_dragonbones_Matrix_set_tyRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<dragonBones::Matrix>(this);
  __jsb_dragonBones_Matrix_proto = se::Class::getProto(this);
  __jsb_dragonBones_Matrix_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

