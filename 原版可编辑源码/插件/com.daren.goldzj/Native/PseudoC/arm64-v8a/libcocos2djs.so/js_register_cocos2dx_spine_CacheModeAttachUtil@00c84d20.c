
/* js_register_cocos2dx_spine_CacheModeAttachUtil(se::Object*) */

undefined8 js_register_cocos2dx_spine_CacheModeAttachUtil(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined4 uStack_2f;
  undefined3 uStack_2b;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_2b = 0;
  local_40 = (basic_string)0x26;
  uStack_37 = 0x68636174744165;
  uStack_30 = 0x55;
  uStack_3f = 0x6f4d6568636143;
  uStack_38 = 100;
  uStack_2f = 0x6c6974;
  this = (Class *)se::Class::create(&local_40,param_1,__jsb_spine_AttachUtilBase_proto,
                                    js_cocos2dx_spine_CacheModeAttachUtil_constructorRegistry);
  if (((byte)local_40 & 1) != 0) {
    operator_delete((void *)CONCAT35(uStack_2b,CONCAT41(uStack_2f,uStack_30)));
  }
  se::Class::defineFinalizeFunction(this,js_spine_CacheModeAttachUtil_finalizeRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<spine::CacheModeAttachUtil>(this);
  __jsb_spine_CacheModeAttachUtil_proto = se::Class::getProto(this);
  __jsb_spine_CacheModeAttachUtil_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

