
/* js_register_cocos2dx_dragonbones_EllipseBoundingBoxData(se::Object*) */

undefined8 js_register_cocos2dx_dragonbones_EllipseBoundingBoxData(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  char local_3f [16];
  undefined6 uStack_2f;
  undefined1 uStack_29;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = (basic_string)0x2c;
  uStack_2f = 0x61746144786f;
  builtin_strncpy(local_3f,"EllipseBoundingB",0x10);
  uStack_29 = 0;
  this = (Class *)se::Class::create(&local_40,param_1,__jsb_dragonBones_BoundingBoxData_proto,
                                    js_cocos2dx_dragonbones_EllipseBoundingBoxData_constructorRegistry
                                   );
  if (((byte)local_40 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_29,CONCAT61(uStack_2f,local_3f[0xf])));
  }
  se::Class::defineStaticFunction
            (this,"getTypeIndex",js_cocos2dx_dragonbones_EllipseBoundingBoxData_getTypeIndexRegistry
            );
  se::Class::defineStaticFunction
            (this,"ellipseIntersectsSegment",
             js_cocos2dx_dragonbones_EllipseBoundingBoxData_ellipseIntersectsSegmentRegistry);
  se::Class::defineFinalizeFunction(this,js_dragonBones_EllipseBoundingBoxData_finalizeRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<dragonBones::EllipseBoundingBoxData>(this);
  __jsb_dragonBones_EllipseBoundingBoxData_proto = se::Class::getProto(this);
  __jsb_dragonBones_EllipseBoundingBoxData_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

