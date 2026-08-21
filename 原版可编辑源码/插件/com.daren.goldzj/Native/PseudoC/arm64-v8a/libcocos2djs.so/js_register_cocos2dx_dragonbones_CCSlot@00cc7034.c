
/* js_register_cocos2dx_dragonbones_CCSlot(se::Object*) */

undefined8 js_register_cocos2dx_dragonbones_CCSlot(Object *param_1)

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
  local_3b = 0x746f;
  local_39 = 0;
  local_3f = 0x6c534343;
  this = (Class *)se::Class::create(&local_40,param_1,__jsb_dragonBones_Slot_proto,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineFunction(this,"getTexture",js_cocos2dx_dragonbones_CCSlot_getTextureRegistry);
  se::Class::defineFunction
            (this,"updateWorldMatrix",js_cocos2dx_dragonbones_CCSlot_updateWorldMatrixRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<dragonBones::CCSlot>(this);
  __jsb_dragonBones_CCSlot_proto = se::Class::getProto(this);
  __jsb_dragonBones_CCSlot_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

