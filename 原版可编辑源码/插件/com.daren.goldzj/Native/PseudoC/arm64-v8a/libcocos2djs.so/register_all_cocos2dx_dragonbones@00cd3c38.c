
/* register_all_cocos2dx_dragonbones(se::Object*) */

undefined8 register_all_cocos2dx_dragonbones(Object *param_1)

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
  uVar2 = se::Object::getProperty(param_1,"dragonBones",aVStack_38);
  if ((uVar2 & 1) == 0) {
    pOVar3 = (Object *)se::Object::createPlainObject();
    se::HandleObject::HandleObject(aHStack_40,pOVar3);
    se::Value::setObject(aVStack_38,aHStack_40,false);
    se::Object::setProperty(param_1,"dragonBones",aVStack_38);
    se::HandleObject::~HandleObject(aHStack_40);
  }
  pOVar3 = (Object *)se::Value::toObject(aVStack_38);
  js_register_cocos2dx_dragonbones_BaseObject(pOVar3);
  js_register_cocos2dx_dragonbones_TransformObject(pOVar3);
  js_register_cocos2dx_dragonbones_Slot(pOVar3);
  js_register_cocos2dx_dragonbones_AttachUtilBase(pOVar3);
  js_register_cocos2dx_dragonbones_RealTimeAttachUtil(pOVar3);
  js_register_cocos2dx_dragonbones_Matrix(pOVar3);
  js_register_cocos2dx_dragonbones_BoundingBoxData(pOVar3);
  js_register_cocos2dx_dragonbones_PolygonBoundingBoxData(pOVar3);
  js_register_cocos2dx_dragonbones_Transform(pOVar3);
  js_register_cocos2dx_dragonbones_Animation(pOVar3);
  js_register_cocos2dx_dragonbones_TextureData(pOVar3);
  js_register_cocos2dx_dragonbones_CCTextureData(pOVar3);
  js_register_cocos2dx_dragonbones_BaseFactory(pOVar3);
  js_register_cocos2dx_dragonbones_CCFactory(pOVar3);
  js_register_cocos2dx_dragonbones_WorldClock(pOVar3);
  js_register_cocos2dx_dragonbones_TextureAtlasData(pOVar3);
  js_register_cocos2dx_dragonbones_CCArmatureDisplay(pOVar3);
  js_register_cocos2dx_dragonbones_AnimationState(pOVar3);
  js_register_cocos2dx_dragonbones_BoneData(pOVar3);
  js_register_cocos2dx_dragonbones_EllipseBoundingBoxData(pOVar3);
  js_register_cocos2dx_dragonbones_ArmatureData(pOVar3);
  js_register_cocos2dx_dragonbones_CCTextureAtlasData(pOVar3);
  js_register_cocos2dx_dragonbones_CCSlot(pOVar3);
  js_register_cocos2dx_dragonbones_Armature(pOVar3);
  js_register_cocos2dx_dragonbones_Bone(pOVar3);
  js_register_cocos2dx_dragonbones_UserData(pOVar3);
  js_register_cocos2dx_dragonbones_RectangleBoundingBoxData(pOVar3);
  js_register_cocos2dx_dragonbones_CacheModeAttachUtil(pOVar3);
  js_register_cocos2dx_dragonbones_ArmatureCacheMgr(pOVar3);
  js_register_cocos2dx_dragonbones_SkinData(pOVar3);
  js_register_cocos2dx_dragonbones_EventObject(pOVar3);
  js_register_cocos2dx_dragonbones_SlotData(pOVar3);
  js_register_cocos2dx_dragonbones_DragonBonesData(pOVar3);
  js_register_cocos2dx_dragonbones_AnimationData(pOVar3);
  js_register_cocos2dx_dragonbones_CCArmatureCacheDisplay(pOVar3);
  se::Value::~Value(aVStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

