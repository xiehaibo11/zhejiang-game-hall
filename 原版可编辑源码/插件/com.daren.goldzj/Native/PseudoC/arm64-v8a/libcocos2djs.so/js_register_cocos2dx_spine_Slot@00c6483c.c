
/* js_register_cocos2dx_spine_Slot(se::Object*) */

undefined8 js_register_cocos2dx_spine_Slot(Object *param_1)

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
  this = (Class *)se::Class::create((basic_string *)local_40,param_1,(Object *)0x0,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineFunction(this,"getBone",js_cocos2dx_spine_Slot_getBoneRegistry);
  se::Class::defineFunction
            (this,"setAttachmentTime",js_cocos2dx_spine_Slot_setAttachmentTimeRegistry);
  se::Class::defineFunction(this,"getDarkColor",js_cocos2dx_spine_Slot_getDarkColorRegistry);
  se::Class::defineFunction(this,"getColor",js_cocos2dx_spine_Slot_getColorRegistry);
  se::Class::defineFunction(this,"setToSetupPose",js_cocos2dx_spine_Slot_setToSetupPoseRegistry);
  se::Class::defineFunction(this,"getAttachment",js_cocos2dx_spine_Slot_getAttachmentRegistry);
  se::Class::defineFunction
            (this,"getAttachmentTime",js_cocos2dx_spine_Slot_getAttachmentTimeRegistry);
  se::Class::defineFunction(this,"setAttachment",js_cocos2dx_spine_Slot_setAttachmentRegistry);
  se::Class::defineFunction(this,"hasDarkColor",js_cocos2dx_spine_Slot_hasDarkColorRegistry);
  se::Class::defineFunction(this,"getDeform",js_cocos2dx_spine_Slot_getDeformRegistry);
  se::Class::defineFunction(this,"getSkeleton",js_cocos2dx_spine_Slot_getSkeletonRegistry);
  se::Class::defineFunction(this,"getData",js_cocos2dx_spine_Slot_getDataRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<spine::Slot>(this);
  __jsb_spine_Slot_proto = se::Class::getProto(this);
  __jsb_spine_Slot_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

