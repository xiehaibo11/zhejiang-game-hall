
/* js_register_cocos2dx_editor_support_Texture2D(se::Object*) */

undefined8 js_register_cocos2dx_editor_support_Texture2D(Object *param_1)

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
  local_37 = 0x44;
  uStack_3f = 0x65727574786554;
  uStack_38 = 0x32;
  this = (Class *)se::Class::create(&local_40,param_1,(Object *)0x0,
                                    js_cocos2dx_editor_support_Texture2D_constructorRegistry);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineFunction
            (this,"getRealTextureIndex",
             js_cocos2dx_editor_support_Texture2D_getRealTextureIndexRegistry);
  se::Class::defineFunction
            (this,"setTexParamCallback",
             js_cocos2dx_editor_support_Texture2D_setTexParamCallbackRegistry);
  se::Class::defineFunction
            (this,"setPixelsHigh",js_cocos2dx_editor_support_Texture2D_setPixelsHighRegistry);
  se::Class::defineFunction
            (this,"getNativeTexture",js_cocos2dx_editor_support_Texture2D_getNativeTextureRegistry);
  se::Class::defineFunction
            (this,"setPixelsWide",js_cocos2dx_editor_support_Texture2D_setPixelsWideRegistry);
  se::Class::defineFunction
            (this,"getPixelsHigh",js_cocos2dx_editor_support_Texture2D_getPixelsHighRegistry);
  se::Class::defineFunction
            (this,"getPixelsWide",js_cocos2dx_editor_support_Texture2D_getPixelsWideRegistry);
  se::Class::defineFunction
            (this,"setRealTextureIndex",
             js_cocos2dx_editor_support_Texture2D_setRealTextureIndexRegistry);
  se::Class::defineFunction
            (this,"setNativeTexture",js_cocos2dx_editor_support_Texture2D_setNativeTextureRegistry);
  se::Class::defineFunction
            (this,"setTexParameters",js_cocos2dx_editor_support_Texture2D_setTexParametersRegistry);
  se::Class::defineFinalizeFunction(this,js_cocos2d_middleware_Texture2D_finalizeRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<cocos2d::middleware::Texture2D>(this);
  __jsb_cocos2d_middleware_Texture2D_proto = se::Class::getProto(this);
  __jsb_cocos2d_middleware_Texture2D_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

