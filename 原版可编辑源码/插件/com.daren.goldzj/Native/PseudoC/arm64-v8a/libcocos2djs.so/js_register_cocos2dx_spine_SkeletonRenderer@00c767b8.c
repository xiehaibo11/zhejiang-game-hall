
/* js_register_cocos2dx_spine_SkeletonRenderer(se::Object*) */

undefined8 js_register_cocos2dx_spine_SkeletonRenderer(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined1 local_37;
  undefined6 uStack_36;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_36 = 0;
  local_30 = (void *)0x0;
  local_40 = (basic_string)0x10;
  uStack_3f = 0x6f74656c656b53;
  uStack_38 = 0x6e;
  local_37 = 0;
  this = (Class *)se::Class::create(&local_40,param_1,(Object *)0x0,
                                    js_cocos2dx_spine_SkeletonRenderer_constructorRegistry);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineFunction(this,"setUseTint",js_cocos2dx_spine_SkeletonRenderer_setUseTintRegistry)
  ;
  se::Class::defineFunction
            (this,"setTimeScale",js_cocos2dx_spine_SkeletonRenderer_setTimeScaleRegistry);
  se::Class::defineFunction(this,"render",js_cocos2dx_spine_SkeletonRenderer_renderRegistry);
  se::Class::defineFunction
            (this,"initWithUUID",js_cocos2dx_spine_SkeletonRenderer_initWithUUIDRegistry);
  se::Class::defineFunction
            (this,"setAttachUtil",js_cocos2dx_spine_SkeletonRenderer_setAttachUtilRegistry);
  se::Class::defineFunction
            (this,"setOpacityModifyRGB",
             js_cocos2dx_spine_SkeletonRenderer_setOpacityModifyRGBRegistry);
  se::Class::defineFunction(this,"paused",js_cocos2dx_spine_SkeletonRenderer_pausedRegistry);
  se::Class::defineFunction(this,"destroy",js_cocos2dx_spine_SkeletonRenderer_destroyRegistry);
  se::Class::defineFunction
            (this,"setAttachment",js_cocos2dx_spine_SkeletonRenderer_setAttachmentRegistry);
  se::Class::defineFunction
            (this,"setBonesToSetupPose",
             js_cocos2dx_spine_SkeletonRenderer_setBonesToSetupPoseRegistry);
  se::Class::defineFunction(this,"onEnable",js_cocos2dx_spine_SkeletonRenderer_onEnableRegistry);
  se::Class::defineFunction(this,"setEffect",js_cocos2dx_spine_SkeletonRenderer_setEffectRegistry);
  se::Class::defineFunction
            (this,"stopSchedule",js_cocos2dx_spine_SkeletonRenderer_stopScheduleRegistry);
  se::Class::defineFunction
            (this,"isOpacityModifyRGB",js_cocos2dx_spine_SkeletonRenderer_isOpacityModifyRGBRegistry
            );
  se::Class::defineFunction
            (this,"setDebugSlotsEnabled",
             js_cocos2dx_spine_SkeletonRenderer_setDebugSlotsEnabledRegistry);
  se::Class::defineFunction
            (this,"initWithJsonFile",js_cocos2dx_spine_SkeletonRenderer_initWithJsonFileRegistry);
  se::Class::defineFunction
            (this,"setToSetupPose",js_cocos2dx_spine_SkeletonRenderer_setToSetupPoseRegistry);
  se::Class::defineFunction
            (this,"setSlotsToSetupPose",
             js_cocos2dx_spine_SkeletonRenderer_setSlotsToSetupPoseRegistry);
  se::Class::defineFunction
            (this,"initWithBinaryFile",js_cocos2dx_spine_SkeletonRenderer_initWithBinaryFileRegistry
            );
  se::Class::defineFunction
            (this,"initWithSkeleton",js_cocos2dx_spine_SkeletonRenderer_initWithSkeletonRegistry);
  se::Class::defineFunction
            (this,"getBoundingBox",js_cocos2dx_spine_SkeletonRenderer_getBoundingBoxRegistry);
  se::Class::defineFunction
            (this,"getDebugData",js_cocos2dx_spine_SkeletonRenderer_getDebugDataRegistry);
  se::Class::defineFunction(this,"findBone",js_cocos2dx_spine_SkeletonRenderer_findBoneRegistry);
  se::Class::defineFunction(this,"update",js_cocos2dx_spine_SkeletonRenderer_updateRegistry);
  se::Class::defineFunction
            (this,"getAttachment",js_cocos2dx_spine_SkeletonRenderer_getAttachmentRegistry);
  se::Class::defineFunction
            (this,"setDebugMeshEnabled",
             js_cocos2dx_spine_SkeletonRenderer_setDebugMeshEnabledRegistry);
  se::Class::defineFunction
            (this,"beginSchedule",js_cocos2dx_spine_SkeletonRenderer_beginScheduleRegistry);
  se::Class::defineFunction(this,"initialize",js_cocos2dx_spine_SkeletonRenderer_initializeRegistry)
  ;
  se::Class::defineFunction
            (this,"setDebugBonesEnabled",
             js_cocos2dx_spine_SkeletonRenderer_setDebugBonesEnabledRegistry);
  se::Class::defineFunction
            (this,"getTimeScale",js_cocos2dx_spine_SkeletonRenderer_getTimeScaleRegistry);
  se::Class::defineFunction
            (this,"setSlotsRange",js_cocos2dx_spine_SkeletonRenderer_setSlotsRangeRegistry);
  se::Class::defineFunction(this,"onDisable",js_cocos2dx_spine_SkeletonRenderer_onDisableRegistry);
  se::Class::defineFunction(this,"setColor",js_cocos2dx_spine_SkeletonRenderer_setColorRegistry);
  se::Class::defineFunction
            (this,"bindNodeProxy",js_cocos2dx_spine_SkeletonRenderer_bindNodeProxyRegistry);
  se::Class::defineFunction
            (this,"setBatchEnabled",js_cocos2dx_spine_SkeletonRenderer_setBatchEnabledRegistry);
  se::Class::defineFunction(this,"setSkin",js_cocos2dx_spine_SkeletonRenderer_setSkinRegistry);
  se::Class::defineFunction(this,"findSlot",js_cocos2dx_spine_SkeletonRenderer_findSlotRegistry);
  se::Class::defineFunction
            (this,"updateWorldTransform",
             js_cocos2dx_spine_SkeletonRenderer_updateWorldTransformRegistry);
  se::Class::defineFunction
            (this,"getSkeleton",js_cocos2dx_spine_SkeletonRenderer_getSkeletonRegistry);
  se::Class::defineFunction
            (this,"setVertexEffectDelegate",
             js_cocos2dx_spine_SkeletonRenderer_setVertexEffectDelegateRegistry);
  se::Class::defineFinalizeFunction(this,js_spine_SkeletonRenderer_finalizeRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<spine::SkeletonRenderer>(this);
  __jsb_spine_SkeletonRenderer_proto = se::Class::getProto(this);
  __jsb_spine_SkeletonRenderer_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

