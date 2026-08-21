
/* js_register_cocos2dx_spine_AnimationStateData(se::Object*) */

undefined8 js_register_cocos2dx_spine_AnimationStateData(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined2 uStack_2f;
  undefined1 uStack_2d;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = (basic_string)0x24;
  uStack_2c = 0;
  uStack_37 = 0x4465746174536e;
  uStack_30 = 0x61;
  uStack_3f = 0x6974616d696e41;
  uStack_38 = 0x6f;
  uStack_2f = 0x6174;
  uStack_2d = 0;
  this = (Class *)se::Class::create(&local_40,param_1,(Object *)0x0,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_2c,CONCAT13(uStack_2d,CONCAT21(uStack_2f,uStack_30))));
  }
  se::Class::defineFunction(this,"getMix",js_cocos2dx_spine_AnimationStateData_getMixRegistry);
  se::Class::defineFunction
            (this,"getDefaultMix",js_cocos2dx_spine_AnimationStateData_getDefaultMixRegistry);
  se::Class::defineFunction(this,"setMix",js_cocos2dx_spine_AnimationStateData_setMixRegistry);
  se::Class::defineFunction
            (this,"setDefaultMix",js_cocos2dx_spine_AnimationStateData_setDefaultMixRegistry);
  se::Class::defineFunction
            (this,"getSkeletonData",js_cocos2dx_spine_AnimationStateData_getSkeletonDataRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<spine::AnimationStateData>(this);
  __jsb_spine_AnimationStateData_proto = se::Class::getProto(this);
  __jsb_spine_AnimationStateData_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

