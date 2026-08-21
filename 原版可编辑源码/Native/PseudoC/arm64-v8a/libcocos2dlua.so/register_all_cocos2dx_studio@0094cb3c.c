
/* register_all_cocos2dx_studio(lua_State*) */

undefined8 register_all_cocos2dx_studio(lua_State *param_1)

{
  tolua_open();
  tolua_module(param_1,"ccs",0);
  tolua_beginmodule(param_1,"ccs");
  lua_register_cocos2dx_studio_Frame(param_1);
  lua_register_cocos2dx_studio_PlayableFrame(param_1);
  lua_register_cocos2dx_studio_ActionTimelineNode(param_1);
  lua_register_cocos2dx_studio_ActionFrame(param_1);
  lua_register_cocos2dx_studio_ActionRotationFrame(param_1);
  lua_register_cocos2dx_studio_BlendFuncFrame(param_1);
  lua_register_cocos2dx_studio_BoneNode(param_1);
  lua_register_cocos2dx_studio_SkeletonNode(param_1);
  lua_register_cocos2dx_studio_ScaleFrame(param_1);
  lua_register_cocos2dx_studio_Tween(param_1);
  lua_register_cocos2dx_studio_ContourData(param_1);
  lua_register_cocos2dx_studio_ActionTimeline(param_1);
  lua_register_cocos2dx_studio_InnerActionFrame(param_1);
  lua_register_cocos2dx_studio_ActionTimelineData(param_1);
  lua_register_cocos2dx_studio_DisplayData(param_1);
  lua_register_cocos2dx_studio_ArmatureDisplayData(param_1);
  lua_register_cocos2dx_studio_MovementData(param_1);
  lua_register_cocos2dx_studio_ArmatureDataManager(param_1);
  lua_register_cocos2dx_studio_ColorFrame(param_1);
  lua_register_cocos2dx_studio_BatchNode(param_1);
  lua_register_cocos2dx_studio_BaseData(param_1);
  lua_register_cocos2dx_studio_FrameData(param_1);
  lua_register_cocos2dx_studio_Timeline(param_1);
  lua_register_cocos2dx_studio_ComController(param_1);
  lua_register_cocos2dx_studio_BoneData(param_1);
  lua_register_cocos2dx_studio_ComRender(param_1);
  lua_register_cocos2dx_studio_SkewFrame(param_1);
  lua_register_cocos2dx_studio_RotationSkewFrame(param_1);
  lua_register_cocos2dx_studio_ParticleDisplayData(param_1);
  lua_register_cocos2dx_studio_ActionFadeFrame(param_1);
  lua_register_cocos2dx_studio_VisibleFrame(param_1);
  lua_register_cocos2dx_studio_PositionFrame(param_1);
  lua_register_cocos2dx_studio_RotationFrame(param_1);
  lua_register_cocos2dx_studio_ArmatureData(param_1);
  lua_register_cocos2dx_studio_ActionObject(param_1);
  lua_register_cocos2dx_studio_Skin(param_1);
  lua_register_cocos2dx_studio_MovementBoneData(param_1);
  lua_register_cocos2dx_studio_EventFrame(param_1);
  lua_register_cocos2dx_studio_DisplayManager(param_1);
  lua_register_cocos2dx_studio_GUIReader(param_1);
  lua_register_cocos2dx_studio_ArmatureAnimation(param_1);
  lua_register_cocos2dx_studio_Armature(param_1);
  lua_register_cocos2dx_studio_SpriteDisplayData(param_1);
  lua_register_cocos2dx_studio_ActionManagerEx(param_1);
  lua_register_cocos2dx_studio_Bone(param_1);
  lua_register_cocos2dx_studio_ZOrderFrame(param_1);
  lua_register_cocos2dx_studio_ActionTintFrame(param_1);
  lua_register_cocos2dx_studio_TextureData(param_1);
  lua_register_cocos2dx_studio_ActionMoveFrame(param_1);
  lua_register_cocos2dx_studio_SceneReader(param_1);
  lua_register_cocos2dx_studio_ActionTimelineCache(param_1);
  lua_register_cocos2dx_studio_AlphaFrame(param_1);
  lua_register_cocos2dx_studio_ComAudio(param_1);
  lua_register_cocos2dx_studio_ComExtensionData(param_1);
  lua_register_cocos2dx_studio_AnimationData(param_1);
  lua_register_cocos2dx_studio_AnchorPointFrame(param_1);
  lua_register_cocos2dx_studio_ActionScaleFrame(param_1);
  lua_register_cocos2dx_studio_TextureFrame(param_1);
  lua_register_cocos2dx_studio_ComAttribute(param_1);
  tolua_endmodule(param_1);
  return 1;
}

