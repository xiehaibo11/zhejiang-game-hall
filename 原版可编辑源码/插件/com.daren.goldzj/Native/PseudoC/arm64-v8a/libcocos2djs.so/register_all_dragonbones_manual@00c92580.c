
/* register_all_dragonbones_manual(se::Object*) */

undefined8 register_all_dragonbones_manual(Object *param_1)

{
  long lVar1;
  ScriptEngine *this;
  code *pcVar2;
  undefined **local_80 [4];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  se::Object::defineProperty
            (__jsb_dragonBones_Slot_proto,"globalTransformMatrix",
             js_cocos2dx_dragonbones_Slot_get_globalTransformMatrixRegistry,
             (_func_void_Local_Local_PropertyCallbackInfo_ptr *)0x0);
  se::Object::defineProperty
            (__jsb_dragonBones_Animation_proto,"animations",
             js_cocos2dx_dragonbones_Animation_get_animationsRegistry,
             (_func_void_Local_Local_PropertyCallbackInfo_ptr *)0x0);
  se::Object::defineFunction
            (__jsb_dragonBones_Armature_proto,"getDisplay",
             js_cocos2dx_dragonbones_Armature_getDisplayRegistry);
  se::Object::defineFunction
            (__jsb_dragonBones_Armature_proto,"getSlots",
             js_cocos2dx_dragonbones_Armature_getSlotsRegistry);
  se::Object::defineFunction
            (__jsb_dragonBones_Armature_proto,"getBones",
             js_cocos2dx_dragonbones_Armature_getBonesRegistry);
  se::Object::defineFunction
            (__jsb_dragonBones_Armature_proto,"getBoneByDisplay",
             js_cocos2dx_dragonbones_Armature_getBoneByDisplayRegistry);
  se::Object::defineFunction
            (__jsb_dragonBones_Armature_proto,"getSlotByDisplay",
             js_cocos2dx_dragonbones_Armature_getSlotByDisplayRegistry);
  se::Object::defineFunction
            (__jsb_dragonBones_Armature_proto,"setReplacedTexture",
             js_cocos2dx_dragonbones_Armature_setReplacedTextureRegistry);
  se::Object::defineFunction
            (__jsb_dragonBones_Armature_proto,"getReplacedTexture",
             js_cocos2dx_dragonbones_Armature_getReplacedTextureRegistry);
  se::Object::defineProperty
            (__jsb_dragonBones_ArmatureData_proto,"animations",
             js_cocos2dx_dragonbones_ArmatureData_get_animationsRegistry,
             (_func_void_Local_Local_PropertyCallbackInfo_ptr *)0x0);
  se::Object::defineProperty
            (__jsb_dragonBones_ArmatureData_proto,"bones",
             js_cocos2dx_dragonbones_ArmatureData_get_bonesRegistry,
             (_func_void_Local_Local_PropertyCallbackInfo_ptr *)0x0);
  se::Object::defineProperty
            (__jsb_dragonBones_ArmatureData_proto,"skins",
             js_cocos2dx_dragonbones_ArmatureData_get_skinsRegistry,
             (_func_void_Local_Local_PropertyCallbackInfo_ptr *)0x0);
  se::Object::defineProperty
            (__jsb_dragonBones_ArmatureData_proto,"slots",
             js_cocos2dx_dragonbones_ArmatureData_get_slotsRegistry,
             (_func_void_Local_Local_PropertyCallbackInfo_ptr *)0x0);
  se::Object::defineProperty
            (__jsb_dragonBones_DragonBonesData_proto,"armatureNames",
             js_cocos2dx_dragonbones_DragonBonesData_get_armatureNamesRegistry,
             (_func_void_Local_Local_PropertyCallbackInfo_ptr *)0x0);
  se::Object::defineProperty
            (__jsb_dragonBones_Slot_proto,"displayIndex",
             js_cocos2dx_dragonbones_Slot_get_displayIndexRegistry,
             js_cocos2dx_dragonbones_Slot_set_displayIndexRegistry);
  se::Object::defineFunction
            (__jsb_dragonBones_Slot_proto,"getDisplay",
             js_cocos2dx_dragonbones_Slot_getDisplayRegistry);
  se::Object::defineFunction
            (__jsb_dragonBones_Slot_proto,"setDisplay",
             js_cocos2dx_dragonbones_Slot_setDisplayRegistry);
  se::Object::defineFunction
            (__jsb_dragonBones_BaseFactory_proto,"parseTextureAtlasData",
             js_cocos2dx_dragonbones_BaseFactory_parseTextureAtlasDataRegistry);
  local_80[0] = &PTR_FUN_01c8dd20;
  local_60 = (long *)local_80;
  dragonBones::BaseObject::setObjectRecycleOrDestroyCallback((function *)local_80);
  if (local_80 == (undefined ***)local_60) {
    pcVar2 = *(code **)(*local_60 + 0x20);
LAB_00c927e8:
    (*pcVar2)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar2 = *(code **)(*local_60 + 0x28);
    goto LAB_00c927e8;
  }
  this = (ScriptEngine *)se::ScriptEngine::getInstance();
  local_80[0] = &PTR_FUN_01c8de30;
  local_60 = (long *)local_80;
  se::ScriptEngine::addAfterCleanupHook(this,(function *)local_80);
  if (local_80 == (undefined ***)local_60) {
    pcVar2 = *(code **)(*local_60 + 0x20);
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00c92834;
    pcVar2 = *(code **)(*local_60 + 0x28);
  }
  (*pcVar2)();
LAB_00c92834:
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

