
/* js_register_cocos2dx_dragonbones_Slot(se::Object*) */

undefined8 js_register_cocos2dx_dragonbones_Slot(Object *param_1)

{
  long lVar1;
  Class *this;
  ulong local_40 [2];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40[1] = 0;
  local_30 = (void *)0x0;
  local_40[0] = 0x746f6c5308;
  this = (Class *)se::Class::create((basic_string *)local_40,param_1,
                                    __jsb_dragonBones_TransformObject_proto,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineProperty
            (this,"displayController",js_cocos2dx_dragonbones_Slot_get_displayControllerRegistry,
             js_cocos2dx_dragonbones_Slot_set_displayControllerRegistry);
  se::Class::defineProperty
            (this,"_zOrder",js_cocos2dx_dragonbones_Slot_get__zOrderRegistry,
             js_cocos2dx_dragonbones_Slot_set__zOrderRegistry);
  se::Class::defineFunction(this,"_updateColor",js_cocos2dx_dragonbones_Slot__updateColorRegistry);
  se::Class::defineFunction
            (this,"setRawDisplayDatas",js_cocos2dx_dragonbones_Slot_setRawDisplayDatasRegistry);
  se::Class::defineFunction(this,"getVisible",js_cocos2dx_dragonbones_Slot_getVisibleRegistry);
  se::Class::defineFunction(this,"getSlotData",js_cocos2dx_dragonbones_Slot_getSlotDataRegistry);
  se::Class::defineFunction(this,"getName",js_cocos2dx_dragonbones_Slot_getNameRegistry);
  se::Class::defineFunction(this,"_setZorder",js_cocos2dx_dragonbones_Slot__setZorderRegistry);
  se::Class::defineFunction(this,"invalidUpdate",js_cocos2dx_dragonbones_Slot_invalidUpdateRegistry)
  ;
  se::Class::defineFunction
            (this,"getChildArmature",js_cocos2dx_dragonbones_Slot_getChildArmatureRegistry);
  se::Class::defineFunction
            (this,"intersectsSegment",js_cocos2dx_dragonbones_Slot_intersectsSegmentRegistry);
  se::Class::defineFunction(this,"update",js_cocos2dx_dragonbones_Slot_updateRegistry);
  se::Class::defineFunction
            (this,"updateTransformAndMatrix",
             js_cocos2dx_dragonbones_Slot_updateTransformAndMatrixRegistry);
  se::Class::defineFunction(this,"getParent",js_cocos2dx_dragonbones_Slot_getParentRegistry);
  se::Class::defineFunction
            (this,"getBoundingBoxData",js_cocos2dx_dragonbones_Slot_getBoundingBoxDataRegistry);
  se::Class::defineFunction
            (this,"setChildArmature",js_cocos2dx_dragonbones_Slot_setChildArmatureRegistry);
  se::Class::defineFunction
            (this,"replaceDisplayData",js_cocos2dx_dragonbones_Slot_replaceDisplayDataRegistry);
  se::Class::defineFunction(this,"containsPoint",js_cocos2dx_dragonbones_Slot_containsPointRegistry)
  ;
  se::Class::defineFunction(this,"setVisible",js_cocos2dx_dragonbones_Slot_setVisibleRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<dragonBones::Slot>(this);
  __jsb_dragonBones_Slot_proto = se::Class::getProto(this);
  __jsb_dragonBones_Slot_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

