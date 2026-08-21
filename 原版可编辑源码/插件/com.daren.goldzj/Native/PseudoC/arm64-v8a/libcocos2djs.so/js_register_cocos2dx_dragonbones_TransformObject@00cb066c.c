
/* js_register_cocos2dx_dragonbones_TransformObject(se::Object*) */

undefined8 js_register_cocos2dx_dragonbones_TransformObject(Object *param_1)

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
  uStack_37 = 0x7463656a624f6d;
  uStack_3f = 0x6f66736e617254;
  local_38 = 0x72;
  local_30 = (void *)0x0;
  this = (Class *)se::Class::create(&local_40,param_1,__jsb_dragonBones_BaseObject_proto,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineFunction
            (this,"getOffset",js_cocos2dx_dragonbones_TransformObject_getOffsetRegistry);
  se::Class::defineFunction
            (this,"getGlobal",js_cocos2dx_dragonbones_TransformObject_getGlobalRegistry);
  se::Class::defineFunction
            (this,"getOrigin",js_cocos2dx_dragonbones_TransformObject_getOriginRegistry);
  se::Class::defineFunction
            (this,"getGlobalTransformMatrix",
             js_cocos2dx_dragonbones_TransformObject_getGlobalTransformMatrixRegistry);
  se::Class::defineFunction
            (this,"getArmature",js_cocos2dx_dragonbones_TransformObject_getArmatureRegistry);
  se::Class::defineFunction
            (this,"updateGlobalTransform",
             js_cocos2dx_dragonbones_TransformObject_updateGlobalTransformRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<dragonBones::TransformObject>(this);
  __jsb_dragonBones_TransformObject_proto = se::Class::getProto(this);
  __jsb_dragonBones_TransformObject_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

