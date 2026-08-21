
/* register_all_cocos2dx_spine(se::Object*) */

undefined8 register_all_cocos2dx_spine(Object *param_1)

{
  long lVar1;
  ulong uVar2;
  Object *pOVar3;
  HandleObject aHStack_40 [8];
  Value aVStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  se::Value::Value(aVStack_38);
  uVar2 = se::Object::getProperty(param_1,"spine",aVStack_38);
  if ((uVar2 & 1) == 0) {
    pOVar3 = (Object *)se::Object::createPlainObject();
    se::HandleObject::HandleObject(aHStack_40,pOVar3);
    se::Value::setObject(aVStack_38,aHStack_40,false);
    se::Object::setProperty(param_1,"spine",aVStack_38);
    se::HandleObject::~HandleObject(aHStack_40);
  }
  pOVar3 = (Object *)se::Value::toObject(aVStack_38);
  js_register_cocos2dx_spine_Slot(pOVar3);
  js_register_cocos2dx_spine_AttachUtilBase(pOVar3);
  js_register_cocos2dx_spine_RealTimeAttachUtil(pOVar3);
  js_register_cocos2dx_spine_ConstraintData(pOVar3);
  js_register_cocos2dx_spine_Polygon(pOVar3);
  js_register_cocos2dx_spine_SkeletonCacheAnimation(pOVar3);
  js_register_cocos2dx_spine_Attachment(pOVar3);
  js_register_cocos2dx_spine_VertexAttachment(pOVar3);
  js_register_cocos2dx_spine_SkeletonDataMgr(pOVar3);
  js_register_cocos2dx_spine_VertexEffect(pOVar3);
  js_register_cocos2dx_spine_JitterVertexEffect(pOVar3);
  js_register_cocos2dx_spine_SkeletonCacheMgr(pOVar3);
  js_register_cocos2dx_spine_Timeline(pOVar3);
  js_register_cocos2dx_spine_CurveTimeline(pOVar3);
  js_register_cocos2dx_spine_IkConstraintTimeline(pOVar3);
  js_register_cocos2dx_spine_SkeletonRenderer(pOVar3);
  js_register_cocos2dx_spine_Animation(pOVar3);
  js_register_cocos2dx_spine_MeshAttachment(pOVar3);
  js_register_cocos2dx_spine_TranslateTimeline(pOVar3);
  js_register_cocos2dx_spine_ShearTimeline(pOVar3);
  js_register_cocos2dx_spine_AttachmentTimeline(pOVar3);
  js_register_cocos2dx_spine_PathConstraintMixTimeline(pOVar3);
  js_register_cocos2dx_spine_PathConstraintPositionTimeline(pOVar3);
  js_register_cocos2dx_spine_PathConstraintSpacingTimeline(pOVar3);
  js_register_cocos2dx_spine_SkeletonAnimation(pOVar3);
  js_register_cocos2dx_spine_IkConstraintData(pOVar3);
  js_register_cocos2dx_spine_SwirlVertexEffect(pOVar3);
  js_register_cocos2dx_spine_AnimationStateData(pOVar3);
  js_register_cocos2dx_spine_PointAttachment(pOVar3);
  js_register_cocos2dx_spine_AnimationState(pOVar3);
  js_register_cocos2dx_spine_TrackEntry(pOVar3);
  js_register_cocos2dx_spine_BoneData(pOVar3);
  js_register_cocos2dx_spine_ScaleTimeline(pOVar3);
  js_register_cocos2dx_spine_SkeletonData(pOVar3);
  js_register_cocos2dx_spine_PathAttachment(pOVar3);
  js_register_cocos2dx_spine_TransformConstraint(pOVar3);
  js_register_cocos2dx_spine_BoundingBoxAttachment(pOVar3);
  js_register_cocos2dx_spine_ClippingAttachment(pOVar3);
  js_register_cocos2dx_spine_DeformTimeline(pOVar3);
  js_register_cocos2dx_spine_SkeletonBounds(pOVar3);
  js_register_cocos2dx_spine_TransformConstraintData(pOVar3);
  js_register_cocos2dx_spine_ColorTimeline(pOVar3);
  js_register_cocos2dx_spine_PathConstraint(pOVar3);
  js_register_cocos2dx_spine_TransformConstraintTimeline(pOVar3);
  js_register_cocos2dx_spine_Bone(pOVar3);
  js_register_cocos2dx_spine_EventTimeline(pOVar3);
  js_register_cocos2dx_spine_Skeleton(pOVar3);
  js_register_cocos2dx_spine_TwoColorTimeline(pOVar3);
  js_register_cocos2dx_spine_Color(pOVar3);
  js_register_cocos2dx_spine_DrawOrderTimeline(pOVar3);
  js_register_cocos2dx_spine_RegionAttachment(pOVar3);
  js_register_cocos2dx_spine_IkConstraint(pOVar3);
  js_register_cocos2dx_spine_RotateTimeline(pOVar3);
  js_register_cocos2dx_spine_SlotData(pOVar3);
  js_register_cocos2dx_spine_CacheModeAttachUtil(pOVar3);
  js_register_cocos2dx_spine_Skin(pOVar3);
  js_register_cocos2dx_spine_VertexEffectDelegate(pOVar3);
  js_register_cocos2dx_spine_EventData(pOVar3);
  js_register_cocos2dx_spine_Event(pOVar3);
  js_register_cocos2dx_spine_PathConstraintData(pOVar3);
  se::Value::~Value(aVStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

