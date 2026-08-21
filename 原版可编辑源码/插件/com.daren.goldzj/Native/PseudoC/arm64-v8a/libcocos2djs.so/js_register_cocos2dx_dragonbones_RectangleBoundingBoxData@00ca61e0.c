
/* js_register_cocos2dx_dragonbones_RectangleBoundingBoxData(se::Object*) */

undefined8 js_register_cocos2dx_dragonbones_RectangleBoundingBoxData(Object *param_1)

{
  long lVar1;
  Class *this;
  ulong local_40 [2];
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = operator_new(0x20);
  builtin_strncpy(local_30,"RectangleBoundingBoxData",0x19);
  local_40[1] = 0x18;
  local_40[0] = 0x21;
  this = (Class *)se::Class::create((basic_string *)local_40,param_1,
                                    __jsb_dragonBones_BoundingBoxData_proto,
                                    js_cocos2dx_dragonbones_RectangleBoundingBoxData_constructorRegistry
                                   );
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineStaticFunction
            (this,"rectangleIntersectsSegment",
             js_cocos2dx_dragonbones_RectangleBoundingBoxData_rectangleIntersectsSegmentRegistry);
  se::Class::defineStaticFunction
            (this,"getTypeIndex",
             js_cocos2dx_dragonbones_RectangleBoundingBoxData_getTypeIndexRegistry);
  se::Class::defineFinalizeFunction(this,js_dragonBones_RectangleBoundingBoxData_finalizeRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<dragonBones::RectangleBoundingBoxData>(this);
  __jsb_dragonBones_RectangleBoundingBoxData_proto = se::Class::getProto(this);
  __jsb_dragonBones_RectangleBoundingBoxData_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

