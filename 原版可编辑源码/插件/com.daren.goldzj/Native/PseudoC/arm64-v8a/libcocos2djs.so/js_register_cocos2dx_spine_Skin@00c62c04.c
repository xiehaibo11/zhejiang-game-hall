
/* js_register_cocos2dx_spine_Skin(se::Object*) */

undefined8 js_register_cocos2dx_spine_Skin(Object *param_1)

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
  local_40[0] = 0x6e696b5308;
  this = (Class *)se::Class::create((basic_string *)local_40,param_1,(Object *)0x0,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineFunction(this,"findNamesForSlot",js_cocos2dx_spine_Skin_findNamesForSlotRegistry)
  ;
  se::Class::defineFunction(this,"getConstraints",js_cocos2dx_spine_Skin_getConstraintsRegistry);
  se::Class::defineFunction(this,"removeAttachment",js_cocos2dx_spine_Skin_removeAttachmentRegistry)
  ;
  se::Class::defineFunction(this,"getBones",js_cocos2dx_spine_Skin_getBonesRegistry);
  se::Class::defineFunction(this,"getName",js_cocos2dx_spine_Skin_getNameRegistry);
  se::Class::defineFunction(this,"getAttachment",js_cocos2dx_spine_Skin_getAttachmentRegistry);
  se::Class::defineFunction(this,"addSkin",js_cocos2dx_spine_Skin_addSkinRegistry);
  se::Class::defineFunction(this,"setAttachment",js_cocos2dx_spine_Skin_setAttachmentRegistry);
  se::Class::defineFunction(this,"copySkin",js_cocos2dx_spine_Skin_copySkinRegistry);
  se::Class::defineFunction
            (this,"findAttachmentsForSlot",js_cocos2dx_spine_Skin_findAttachmentsForSlotRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<spine::Skin>(this);
  __jsb_spine_Skin_proto = se::Class::getProto(this);
  __jsb_spine_Skin_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

