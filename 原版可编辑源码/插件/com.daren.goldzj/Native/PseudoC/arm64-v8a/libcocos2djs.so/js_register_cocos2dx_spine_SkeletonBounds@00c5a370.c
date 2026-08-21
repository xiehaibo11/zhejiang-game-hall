
/* js_register_cocos2dx_spine_SkeletonBounds(se::Object*) */

undefined8 js_register_cocos2dx_spine_SkeletonBounds(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined6 uStack_3f;
  undefined2 local_39;
  undefined6 uStack_37;
  undefined1 local_31;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = (void *)0x0;
  local_40 = (basic_string)0x1c;
  uStack_37 = 0x73646e756f42;
  uStack_3f = 0x74656c656b53;
  local_39 = 0x6e6f;
  local_31 = 0;
  this = (Class *)se::Class::create(&local_40,param_1,(Object *)0x0,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineFunction(this,"getHeight",js_cocos2dx_spine_SkeletonBounds_getHeightRegistry);
  se::Class::defineFunction
            (this,"aabbintersectsSegment",
             js_cocos2dx_spine_SkeletonBounds_aabbintersectsSegmentRegistry);
  se::Class::defineFunction(this,"getWidth",js_cocos2dx_spine_SkeletonBounds_getWidthRegistry);
  se::Class::defineFunction
            (this,"aabbcontainsPoint",js_cocos2dx_spine_SkeletonBounds_aabbcontainsPointRegistry);
  se::Class::defineFunction
            (this,"intersectsSegment",js_cocos2dx_spine_SkeletonBounds_intersectsSegmentRegistry);
  se::Class::defineFunction
            (this,"containsPoint",js_cocos2dx_spine_SkeletonBounds_containsPointRegistry);
  se::Class::defineFunction(this,"getPolygon",js_cocos2dx_spine_SkeletonBounds_getPolygonRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<spine::SkeletonBounds>(this);
  __jsb_spine_SkeletonBounds_proto = se::Class::getProto(this);
  __jsb_spine_SkeletonBounds_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

