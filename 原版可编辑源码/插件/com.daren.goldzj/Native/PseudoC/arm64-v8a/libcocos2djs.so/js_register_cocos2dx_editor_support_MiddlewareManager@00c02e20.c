
/* js_register_cocos2dx_editor_support_MiddlewareManager(se::Object*) */

undefined8 js_register_cocos2dx_editor_support_MiddlewareManager(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined2 uStack_2f;
  undefined5 uStack_2d;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_2d = 0;
  local_40 = (basic_string)0x22;
  uStack_37 = 0x67616e614d6572;
  uStack_30 = 0x65;
  uStack_3f = 0x77656c6464694d;
  uStack_38 = 0x61;
  uStack_2f = 0x72;
  this = (Class *)se::Class::create(&local_40,param_1,(Object *)0x0,
                                    js_cocos2dx_editor_support_MiddlewareManager_constructorRegistry
                                   );
  if (((byte)local_40 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_2d,CONCAT21(uStack_2f,uStack_30)));
  }
  se::Class::defineFunction
            (this,"render",js_cocos2dx_editor_support_MiddlewareManager_renderRegistry);
  se::Class::defineFunction
            (this,"update",js_cocos2dx_editor_support_MiddlewareManager_updateRegistry);
  se::Class::defineStaticFunction
            (this,"destroyInstance",
             js_cocos2dx_editor_support_MiddlewareManager_destroyInstanceRegistry);
  se::Class::defineStaticFunction
            (this,"generateModuleID",
             js_cocos2dx_editor_support_MiddlewareManager_generateModuleIDRegistry);
  se::Class::defineStaticFunction
            (this,"getInstance",js_cocos2dx_editor_support_MiddlewareManager_getInstanceRegistry);
  se::Class::defineFinalizeFunction(this,js_cocos2d_middleware_MiddlewareManager_finalizeRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<cocos2d::middleware::MiddlewareManager>(this);
  __jsb_cocos2d_middleware_MiddlewareManager_proto = se::Class::getProto(this);
  __jsb_cocos2d_middleware_MiddlewareManager_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

