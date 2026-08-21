
/* js_register_cocos2dx_dragonbones_BoundingBoxData(se::Object*) */

undefined8 js_register_cocos2dx_dragonbones_BoundingBoxData(Object *param_1)

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
  uStack_37 = 0x61746144786f42;
  uStack_3f = 0x6e69646e756f42;
  local_38 = 0x67;
  local_30 = (void *)0x0;
  this = (Class *)se::Class::create(&local_40,param_1,__jsb_dragonBones_BaseObject_proto,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineProperty
            (this,"color",js_cocos2dx_dragonbones_BoundingBoxData_get_colorRegistry,
             js_cocos2dx_dragonbones_BoundingBoxData_set_colorRegistry);
  se::Class::defineProperty
            (this,"width",js_cocos2dx_dragonbones_BoundingBoxData_get_widthRegistry,
             js_cocos2dx_dragonbones_BoundingBoxData_set_widthRegistry);
  se::Class::defineProperty
            (this,"height",js_cocos2dx_dragonbones_BoundingBoxData_get_heightRegistry,
             js_cocos2dx_dragonbones_BoundingBoxData_set_heightRegistry);
  se::Class::defineFunction
            (this,"intersectsSegment",
             js_cocos2dx_dragonbones_BoundingBoxData_intersectsSegmentRegistry);
  se::Class::defineFunction
            (this,"containsPoint",js_cocos2dx_dragonbones_BoundingBoxData_containsPointRegistry);
  se::Class::defineFunction(this,"getType",js_cocos2dx_dragonbones_BoundingBoxData_getTypeRegistry);
  se::Class::defineFunction(this,"setType",js_cocos2dx_dragonbones_BoundingBoxData_setTypeRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<dragonBones::BoundingBoxData>(this);
  __jsb_dragonBones_BoundingBoxData_proto = se::Class::getProto(this);
  __jsb_dragonBones_BoundingBoxData_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

