
/* js_register_cocos2dx_dragonbones_UserData(se::Object*) */

undefined8 js_register_cocos2dx_dragonbones_UserData(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined1 local_37;
  undefined6 uStack_36;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_36 = 0;
  local_30 = (void *)0x0;
  local_40 = (basic_string)0x10;
  local_37 = 0;
  uStack_3f = 0x74614472657355;
  uStack_38 = 0x61;
  this = (Class *)se::Class::create(&local_40,param_1,__jsb_dragonBones_BaseObject_proto,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineFunction(this,"getFloat",js_cocos2dx_dragonbones_UserData_getFloatRegistry);
  se::Class::defineFunction(this,"getFloats",js_cocos2dx_dragonbones_UserData_getFloatsRegistry);
  se::Class::defineFunction(this,"getString",js_cocos2dx_dragonbones_UserData_getStringRegistry);
  se::Class::defineFunction(this,"getInts",js_cocos2dx_dragonbones_UserData_getIntsRegistry);
  se::Class::defineFunction(this,"getInt",js_cocos2dx_dragonbones_UserData_getIntRegistry);
  se::Class::defineFunction(this,"addInt",js_cocos2dx_dragonbones_UserData_addIntRegistry);
  se::Class::defineFunction(this,"getStrings",js_cocos2dx_dragonbones_UserData_getStringsRegistry);
  se::Class::defineFunction(this,"addFloat",js_cocos2dx_dragonbones_UserData_addFloatRegistry);
  se::Class::defineFunction(this,"addString",js_cocos2dx_dragonbones_UserData_addStringRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<dragonBones::UserData>(this);
  __jsb_dragonBones_UserData_proto = se::Class::getProto(this);
  __jsb_dragonBones_UserData_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

