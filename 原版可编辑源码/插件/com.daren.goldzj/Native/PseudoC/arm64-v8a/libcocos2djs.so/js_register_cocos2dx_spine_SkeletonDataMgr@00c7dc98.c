
/* js_register_cocos2dx_spine_SkeletonDataMgr(se::Object*) */

undefined8 js_register_cocos2dx_spine_SkeletonDataMgr(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 local_38;
  undefined7 uStack_37;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = (basic_string)0x1e;
  uStack_37 = 0x72674d61746144;
  uStack_3f = 0x6f74656c656b53;
  local_38 = 0x6e;
  local_30 = (void *)0x0;
  this = (Class *)se::Class::create(&local_40,param_1,(Object *)0x0,
                                    js_cocos2dx_spine_SkeletonDataMgr_constructorRegistry);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineFunction
            (this,"setDestroyCallback",js_cocos2dx_spine_SkeletonDataMgr_setDestroyCallbackRegistry)
  ;
  se::Class::defineStaticFunction
            (this,"getInstance",js_cocos2dx_spine_SkeletonDataMgr_getInstanceRegistry);
  se::Class::defineFinalizeFunction(this,js_spine_SkeletonDataMgr_finalizeRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<spine::SkeletonDataMgr>(this);
  __jsb_spine_SkeletonDataMgr_proto = se::Class::getProto(this);
  __jsb_spine_SkeletonDataMgr_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

