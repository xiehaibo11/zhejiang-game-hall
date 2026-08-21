
/* js_register_cocos2dx_dragonbones_CCArmatureDisplay(se::Object*) */

undefined8 js_register_cocos2dx_dragonbones_CCArmatureDisplay(Object *param_1)

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
  uStack_37 = 0x6c707369446572;
  uStack_30 = 0x61;
  uStack_3f = 0x74616d72414343;
  uStack_38 = 0x75;
  uStack_2f = 0x79;
  this = (Class *)se::Class::create(&local_40,param_1,(Object *)0x0,
                                    js_cocos2dx_dragonbones_CCArmatureDisplay_constructorRegistry);
  if (((byte)local_40 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_2d,CONCAT21(uStack_2f,uStack_30)));
  }
  se::Class::defineFunction(this,"dbInit",js_cocos2dx_dragonbones_CCArmatureDisplay_dbInitRegistry);
  se::Class::defineFunction
            (this,"addDBEventListener",
             js_cocos2dx_dragonbones_CCArmatureDisplay_addDBEventListenerRegistry);
  se::Class::defineFunction
            (this,"getRootDisplay",js_cocos2dx_dragonbones_CCArmatureDisplay_getRootDisplayRegistry)
  ;
  se::Class::defineFunction
            (this,"setAttachUtil",js_cocos2dx_dragonbones_CCArmatureDisplay_setAttachUtilRegistry);
  se::Class::defineFunction
            (this,"removeDBEventListener",
             js_cocos2dx_dragonbones_CCArmatureDisplay_removeDBEventListenerRegistry);
  se::Class::defineFunction
            (this,"setEffect",js_cocos2dx_dragonbones_CCArmatureDisplay_setEffectRegistry);
  se::Class::defineFunction
            (this,"dispose",js_cocos2dx_dragonbones_CCArmatureDisplay_disposeRegistry);
  se::Class::defineFunction
            (this,"setOpacityModifyRGB",
             js_cocos2dx_dragonbones_CCArmatureDisplay_setOpacityModifyRGBRegistry);
  se::Class::defineFunction
            (this,"dbClear",js_cocos2dx_dragonbones_CCArmatureDisplay_dbClearRegistry);
  se::Class::defineFunction
            (this,"dispatchDBEvent",
             js_cocos2dx_dragonbones_CCArmatureDisplay_dispatchDBEventRegistry);
  se::Class::defineFunction
            (this,"getDebugData",js_cocos2dx_dragonbones_CCArmatureDisplay_getDebugDataRegistry);
  se::Class::defineFunction
            (this,"hasDBEventListener",
             js_cocos2dx_dragonbones_CCArmatureDisplay_hasDBEventListenerRegistry);
  se::Class::defineFunction
            (this,"dbUpdate",js_cocos2dx_dragonbones_CCArmatureDisplay_dbUpdateRegistry);
  se::Class::defineFunction
            (this,"setDBEventCallback",
             js_cocos2dx_dragonbones_CCArmatureDisplay_setDBEventCallbackRegistry);
  se::Class::defineFunction
            (this,"setDebugBonesEnabled",
             js_cocos2dx_dragonbones_CCArmatureDisplay_setDebugBonesEnabledRegistry);
  se::Class::defineFunction
            (this,"getAnimation",js_cocos2dx_dragonbones_CCArmatureDisplay_getAnimationRegistry);
  se::Class::defineFunction
            (this,"setColor",js_cocos2dx_dragonbones_CCArmatureDisplay_setColorRegistry);
  se::Class::defineFunction
            (this,"bindNodeProxy",js_cocos2dx_dragonbones_CCArmatureDisplay_bindNodeProxyRegistry);
  se::Class::defineFunction
            (this,"setBatchEnabled",
             js_cocos2dx_dragonbones_CCArmatureDisplay_setBatchEnabledRegistry);
  se::Class::defineFunction
            (this,"dbRender",js_cocos2dx_dragonbones_CCArmatureDisplay_dbRenderRegistry);
  se::Class::defineFunction
            (this,"armature",js_cocos2dx_dragonbones_CCArmatureDisplay_getArmatureRegistry);
  se::Class::defineFunction
            (this,"convertToRootSpace",
             js_cocos2dx_dragonbones_CCArmatureDisplay_convertToRootSpaceRegistry);
  se::Class::defineStaticFunction
            (this,"create",js_cocos2dx_dragonbones_CCArmatureDisplay_createRegistry);
  se::Class::defineFinalizeFunction(this,js_dragonBones_CCArmatureDisplay_finalizeRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<dragonBones::CCArmatureDisplay>(this);
  __jsb_dragonBones_CCArmatureDisplay_proto = se::Class::getProto(this);
  __jsb_dragonBones_CCArmatureDisplay_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

