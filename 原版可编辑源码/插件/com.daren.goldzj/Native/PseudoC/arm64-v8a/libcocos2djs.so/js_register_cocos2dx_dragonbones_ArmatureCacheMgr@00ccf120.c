
/* js_register_cocos2dx_dragonbones_ArmatureCacheMgr(se::Object*) */

undefined8 js_register_cocos2dx_dragonbones_ArmatureCacheMgr(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined6 uStack_2e;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_2e = 0;
  local_40 = (basic_string)0x20;
  uStack_37 = 0x674d6568636143;
  uStack_30 = 0x72;
  uStack_3f = 0x727574616d7241;
  uStack_38 = 0x65;
  uStack_2f = 0;
  this = (Class *)se::Class::create(&local_40,param_1,(Object *)0x0,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_2e,CONCAT11(uStack_2f,uStack_30)));
  }
  se::Class::defineFunction
            (this,"removeArmatureCache",
             js_cocos2dx_dragonbones_ArmatureCacheMgr_removeArmatureCacheRegistry);
  se::Class::defineFunction
            (this,"buildArmatureCache",
             js_cocos2dx_dragonbones_ArmatureCacheMgr_buildArmatureCacheRegistry);
  se::Class::defineStaticFunction
            (this,"destroyInstance",js_cocos2dx_dragonbones_ArmatureCacheMgr_destroyInstanceRegistry
            );
  se::Class::defineStaticFunction
            (this,"getInstance",js_cocos2dx_dragonbones_ArmatureCacheMgr_getInstanceRegistry);
  se::Class::defineFinalizeFunction(this,js_dragonBones_ArmatureCacheMgr_finalizeRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<dragonBones::ArmatureCacheMgr>(this);
  __jsb_dragonBones_ArmatureCacheMgr_proto = se::Class::getProto(this);
  __jsb_dragonBones_ArmatureCacheMgr_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

