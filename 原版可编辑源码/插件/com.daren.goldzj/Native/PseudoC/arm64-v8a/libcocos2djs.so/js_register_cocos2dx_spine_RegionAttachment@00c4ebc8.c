
/* js_register_cocos2dx_spine_RegionAttachment(se::Object*) */

undefined8 js_register_cocos2dx_spine_RegionAttachment(Object *param_1)

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
  uStack_37 = 0x6e656d68636174;
  uStack_30 = 0x74;
  uStack_3f = 0x416e6f69676552;
  uStack_38 = 0x74;
  uStack_2f = 0;
  this = (Class *)se::Class::create(&local_40,param_1,__jsb_spine_Attachment_proto,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_2e,CONCAT11(uStack_2f,uStack_30)));
  }
  se::Class::defineFunction
            (this,"setRegionOriginalHeight",
             js_cocos2dx_spine_RegionAttachment_setRegionOriginalHeightRegistry);
  se::Class::defineFunction
            (this,"setRegionOffsetY",js_cocos2dx_spine_RegionAttachment_setRegionOffsetYRegistry);
  se::Class::defineFunction
            (this,"setRegionOffsetX",js_cocos2dx_spine_RegionAttachment_setRegionOffsetXRegistry);
  se::Class::defineFunction
            (this,"getRegionOriginalWidth",
             js_cocos2dx_spine_RegionAttachment_getRegionOriginalWidthRegistry);
  se::Class::defineFunction(this,"setUVs",js_cocos2dx_spine_RegionAttachment_setUVsRegistry);
  se::Class::defineFunction(this,"getWidth",js_cocos2dx_spine_RegionAttachment_getWidthRegistry);
  se::Class::defineFunction(this,"getY",js_cocos2dx_spine_RegionAttachment_getYRegistry);
  se::Class::defineFunction
            (this,"getRotation",js_cocos2dx_spine_RegionAttachment_getRotationRegistry);
  se::Class::defineFunction(this,"setWidth",js_cocos2dx_spine_RegionAttachment_setWidthRegistry);
  se::Class::defineFunction
            (this,"setRegionWidth",js_cocos2dx_spine_RegionAttachment_setRegionWidthRegistry);
  se::Class::defineFunction(this,"getUVs",js_cocos2dx_spine_RegionAttachment_getUVsRegistry);
  se::Class::defineFunction
            (this,"getRegionHeight",js_cocos2dx_spine_RegionAttachment_getRegionHeightRegistry);
  se::Class::defineFunction(this,"getScaleY",js_cocos2dx_spine_RegionAttachment_getScaleYRegistry);
  se::Class::defineFunction(this,"getScaleX",js_cocos2dx_spine_RegionAttachment_getScaleXRegistry);
  se::Class::defineFunction(this,"getHeight",js_cocos2dx_spine_RegionAttachment_getHeightRegistry);
  se::Class::defineFunction(this,"getPath",js_cocos2dx_spine_RegionAttachment_getPathRegistry);
  se::Class::defineFunction
            (this,"setRotation",js_cocos2dx_spine_RegionAttachment_setRotationRegistry);
  se::Class::defineFunction(this,"setPath",js_cocos2dx_spine_RegionAttachment_setPathRegistry);
  se::Class::defineFunction
            (this,"getRegionWidth",js_cocos2dx_spine_RegionAttachment_getRegionWidthRegistry);
  se::Class::defineFunction(this,"setScaleY",js_cocos2dx_spine_RegionAttachment_setScaleYRegistry);
  se::Class::defineFunction(this,"setScaleX",js_cocos2dx_spine_RegionAttachment_setScaleXRegistry);
  se::Class::defineFunction
            (this,"setRegionOriginalWidth",
             js_cocos2dx_spine_RegionAttachment_setRegionOriginalWidthRegistry);
  se::Class::defineFunction(this,"getColor",js_cocos2dx_spine_RegionAttachment_getColorRegistry);
  se::Class::defineFunction(this,"copy",js_cocos2dx_spine_RegionAttachment_copyRegistry);
  se::Class::defineFunction(this,"setX",js_cocos2dx_spine_RegionAttachment_setXRegistry);
  se::Class::defineFunction(this,"setY",js_cocos2dx_spine_RegionAttachment_setYRegistry);
  se::Class::defineFunction(this,"setHeight",js_cocos2dx_spine_RegionAttachment_setHeightRegistry);
  se::Class::defineFunction(this,"getX",js_cocos2dx_spine_RegionAttachment_getXRegistry);
  se::Class::defineFunction(this,"getOffset",js_cocos2dx_spine_RegionAttachment_getOffsetRegistry);
  se::Class::defineFunction
            (this,"setRegionHeight",js_cocos2dx_spine_RegionAttachment_setRegionHeightRegistry);
  se::Class::defineFunction
            (this,"updateOffset",js_cocos2dx_spine_RegionAttachment_updateOffsetRegistry);
  se::Class::defineFunction
            (this,"getRegionOriginalHeight",
             js_cocos2dx_spine_RegionAttachment_getRegionOriginalHeightRegistry);
  se::Class::defineFunction
            (this,"getRegionOffsetY",js_cocos2dx_spine_RegionAttachment_getRegionOffsetYRegistry);
  se::Class::defineFunction
            (this,"getRegionOffsetX",js_cocos2dx_spine_RegionAttachment_getRegionOffsetXRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<spine::RegionAttachment>(this);
  __jsb_spine_RegionAttachment_proto = se::Class::getProto(this);
  __jsb_spine_RegionAttachment_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

