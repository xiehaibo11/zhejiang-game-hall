
/* lua_register_cocos2dx_Node(lua_State*) */

undefined8 lua_register_cocos2dx_Node(lua_State *param_1)

{
  long lVar1;
  long lVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_78 [2];
  void *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  tolua_usertype(param_1,"cc.Node");
  tolua_cclass(param_1,"Node","cc.Node",&DAT_012769c7,0);
  tolua_beginmodule(param_1,"Node");
  tolua_function(param_1,"new",lua_cocos2dx_Node_constructor);
  tolua_function(param_1,"addChild",lua_cocos2dx_Node_addChild);
  tolua_function(param_1,"removeComponent",lua_cocos2dx_Node_removeComponent);
  tolua_function(param_1,"setPhysicsBody",lua_cocos2dx_Node_setPhysicsBody);
  tolua_function(param_1,"getDescription",lua_cocos2dx_Node_getDescription);
  tolua_function(param_1,"setRotationSkewY",lua_cocos2dx_Node_setRotationSkewY);
  tolua_function(param_1,"setOpacityModifyRGB",lua_cocos2dx_Node_setOpacityModifyRGB);
  tolua_function(param_1,"setCascadeOpacityEnabled",lua_cocos2dx_Node_setCascadeOpacityEnabled);
  tolua_function(param_1,"getChildren",lua_cocos2dx_Node_getChildren);
  tolua_function(param_1,"setOnExitCallback",lua_cocos2dx_Node_setOnExitCallback);
  tolua_function(param_1,"setActionManager",lua_cocos2dx_Node_setActionManager);
  tolua_function(param_1,"convertToWorldSpaceAR",lua_cocos2dx_Node_convertToWorldSpaceAR);
  tolua_function(param_1,"isIgnoreAnchorPointForPosition",
                 lua_cocos2dx_Node_isIgnoreAnchorPointForPosition);
  tolua_function(param_1,"getChildByName",lua_cocos2dx_Node_getChildByName);
  tolua_function(param_1,"updateDisplayedOpacity",lua_cocos2dx_Node_updateDisplayedOpacity);
  tolua_function(param_1,"init",lua_cocos2dx_Node_init);
  tolua_function(param_1,"getCameraMask",lua_cocos2dx_Node_getCameraMask);
  tolua_function(param_1,"setRotation",lua_cocos2dx_Node_setRotation);
  tolua_function(param_1,"setScaleZ",lua_cocos2dx_Node_setScaleZ);
  tolua_function(param_1,"setScaleY",lua_cocos2dx_Node_setScaleY);
  tolua_function(param_1,"setScaleX",lua_cocos2dx_Node_setScaleX);
  tolua_function(param_1,"setRotationSkewX",lua_cocos2dx_Node_setRotationSkewX);
  tolua_function(param_1,"setonEnterTransitionDidFinishCallback",
                 lua_cocos2dx_Node_setonEnterTransitionDidFinishCallback);
  tolua_function(param_1,"removeAllComponents",lua_cocos2dx_Node_removeAllComponents);
  tolua_function(param_1,"_setLocalZOrder",lua_cocos2dx_Node__setLocalZOrder);
  tolua_function(param_1,"setCameraMask",lua_cocos2dx_Node_setCameraMask);
  tolua_function(param_1,"getTag",lua_cocos2dx_Node_getTag);
  tolua_function(param_1,"getGLProgram",lua_cocos2dx_Node_getGLProgram);
  tolua_function(param_1,"getNodeToWorldTransform",lua_cocos2dx_Node_getNodeToWorldTransform);
  tolua_function(param_1,"getPosition3D",lua_cocos2dx_Node_getPosition3D);
  tolua_function(param_1,"removeChild",lua_cocos2dx_Node_removeChild);
  tolua_function(param_1,"convertToWorldSpace",lua_cocos2dx_Node_convertToWorldSpace);
  tolua_function(param_1,"getScene",lua_cocos2dx_Node_getScene);
  tolua_function(param_1,"getEventDispatcher",lua_cocos2dx_Node_getEventDispatcher);
  tolua_function(param_1,"setSkewX",lua_cocos2dx_Node_setSkewX);
  tolua_function(param_1,"setGLProgramState",lua_cocos2dx_Node_setGLProgramState);
  tolua_function(param_1,"setOnEnterCallback",lua_cocos2dx_Node_setOnEnterCallback);
  tolua_function(param_1,"stopActionsByFlags",lua_cocos2dx_Node_stopActionsByFlags);
  tolua_function(param_1,"setNormalizedPosition",lua_cocos2dx_Node_setNormalizedPosition);
  tolua_function(param_1,"setonExitTransitionDidStartCallback",
                 lua_cocos2dx_Node_setonExitTransitionDidStartCallback);
  tolua_function(param_1,"convertTouchToNodeSpace",lua_cocos2dx_Node_convertTouchToNodeSpace);
  tolua_function(param_1,"removeAllChildren",lua_cocos2dx_Node_removeAllChildrenWithCleanup);
  tolua_function(param_1,"getNodeToParentAffineTransform",
                 lua_cocos2dx_Node_getNodeToParentAffineTransform);
  tolua_function(param_1,"isCascadeOpacityEnabled",lua_cocos2dx_Node_isCascadeOpacityEnabled);
  tolua_function(param_1,"setParent",lua_cocos2dx_Node_setParent);
  tolua_function(param_1,"getName",lua_cocos2dx_Node_getName);
  tolua_function(param_1,"resume",lua_cocos2dx_Node_resume);
  tolua_function(param_1,"getRotation3D",lua_cocos2dx_Node_getRotation3D);
  tolua_function(param_1,"getNodeToParentTransform",lua_cocos2dx_Node_getNodeToParentTransform);
  tolua_function(param_1,"convertTouchToNodeSpaceAR",lua_cocos2dx_Node_convertTouchToNodeSpaceAR);
  tolua_function(param_1,"convertToNodeSpace",lua_cocos2dx_Node_convertToNodeSpace);
  tolua_function(param_1,"setPositionNormalized",lua_cocos2dx_Node_setPositionNormalized);
  tolua_function(param_1,"pause",lua_cocos2dx_Node_pause);
  tolua_function(param_1,"isOpacityModifyRGB",lua_cocos2dx_Node_isOpacityModifyRGB);
  tolua_function(param_1,"setPosition",lua_cocos2dx_Node_setPosition);
  tolua_function(param_1,"stopActionByTag",lua_cocos2dx_Node_stopActionByTag);
  tolua_function(param_1,"reorderChild",lua_cocos2dx_Node_reorderChild);
  tolua_function(param_1,"setSkewY",lua_cocos2dx_Node_setSkewY);
  tolua_function(param_1,"setPositionZ",lua_cocos2dx_Node_setPositionZ);
  tolua_function(param_1,"setRotation3D",lua_cocos2dx_Node_setRotation3D);
  tolua_function(param_1,"setPositionX",lua_cocos2dx_Node_setPositionX);
  tolua_function(param_1,"setNodeToParentTransform",lua_cocos2dx_Node_setNodeToParentTransform);
  tolua_function(param_1,"getAnchorPoint",lua_cocos2dx_Node_getAnchorPoint);
  tolua_function(param_1,"getNumberOfRunningActions",lua_cocos2dx_Node_getNumberOfRunningActions);
  tolua_function(param_1,"updateTransform",lua_cocos2dx_Node_updateTransform);
  tolua_function(param_1,"setGLProgram",lua_cocos2dx_Node_setGLProgram);
  tolua_function(param_1,"isVisible",lua_cocos2dx_Node_isVisible);
  tolua_function(param_1,"getChildrenCount",lua_cocos2dx_Node_getChildrenCount);
  tolua_function(param_1,"convertToNodeSpaceAR",lua_cocos2dx_Node_convertToNodeSpaceAR);
  tolua_function(param_1,"addComponent",lua_cocos2dx_Node_addComponent);
  tolua_function(param_1,"runAction",lua_cocos2dx_Node_runAction);
  tolua_function(param_1,"visit",lua_cocos2dx_Node_visit);
  tolua_function(param_1,"getRotation",lua_cocos2dx_Node_getRotation);
  tolua_function(param_1,"getPhysicsBody",lua_cocos2dx_Node_getPhysicsBody);
  tolua_function(param_1,"getAnchorPointInPoints",lua_cocos2dx_Node_getAnchorPointInPoints);
  tolua_function(param_1,"removeChildByName",lua_cocos2dx_Node_removeChildByName);
  tolua_function(param_1,"getGLProgramState",lua_cocos2dx_Node_getGLProgramState);
  tolua_function(param_1,"setScheduler",lua_cocos2dx_Node_setScheduler);
  tolua_function(param_1,"stopAllActions",lua_cocos2dx_Node_stopAllActions);
  tolua_function(param_1,"getSkewX",lua_cocos2dx_Node_getSkewX);
  tolua_function(param_1,"getSkewY",lua_cocos2dx_Node_getSkewY);
  tolua_function(param_1,"getDisplayedColor",lua_cocos2dx_Node_getDisplayedColor);
  tolua_function(param_1,"getActionByTag",lua_cocos2dx_Node_getActionByTag);
  tolua_function(param_1,"setName",lua_cocos2dx_Node_setName);
  tolua_function(param_1,"update",lua_cocos2dx_Node_update);
  tolua_function(param_1,"getDisplayedOpacity",lua_cocos2dx_Node_getDisplayedOpacity);
  tolua_function(param_1,"getLocalZOrder",lua_cocos2dx_Node_getLocalZOrder);
  tolua_function(param_1,"getScheduler",lua_cocos2dx_Node_getScheduler);
  tolua_function(param_1,"getParentToNodeAffineTransform",
                 lua_cocos2dx_Node_getParentToNodeAffineTransform);
  tolua_function(param_1,"getPositionNormalized",lua_cocos2dx_Node_getPositionNormalized);
  tolua_function(param_1,"setColor",lua_cocos2dx_Node_setColor);
  tolua_function(param_1,"isRunning",lua_cocos2dx_Node_isRunning);
  tolua_function(param_1,"getParent",lua_cocos2dx_Node_getParent);
  tolua_function(param_1,"getPositionZ",lua_cocos2dx_Node_getPositionZ);
  tolua_function(param_1,"getPositionY",lua_cocos2dx_Node_getPositionY);
  tolua_function(param_1,"getPositionX",lua_cocos2dx_Node_getPositionX);
  tolua_function(param_1,"removeChildByTag",lua_cocos2dx_Node_removeChildByTag);
  tolua_function(param_1,"setPositionY",lua_cocos2dx_Node_setPositionY);
  tolua_function(param_1,"getNodeToWorldAffineTransform",
                 lua_cocos2dx_Node_getNodeToWorldAffineTransform);
  tolua_function(param_1,"updateDisplayedColor",lua_cocos2dx_Node_updateDisplayedColor);
  tolua_function(param_1,"setVisible",lua_cocos2dx_Node_setVisible);
  tolua_function(param_1,"getParentToNodeTransform",lua_cocos2dx_Node_getParentToNodeTransform);
  tolua_function(param_1,"isScheduled",lua_cocos2dx_Node_isScheduled);
  tolua_function(param_1,"setGlobalZOrder",lua_cocos2dx_Node_setGlobalZOrder);
  tolua_function(param_1,"setScale",lua_cocos2dx_Node_setScale);
  tolua_function(param_1,"getChildByTag",lua_cocos2dx_Node_getChildByTag);
  tolua_function(param_1,"getScaleZ",lua_cocos2dx_Node_getScaleZ);
  tolua_function(param_1,"getScaleY",lua_cocos2dx_Node_getScaleY);
  tolua_function(param_1,"getScaleX",lua_cocos2dx_Node_getScaleX);
  tolua_function(param_1,"setLocalZOrder",lua_cocos2dx_Node_setLocalZOrder);
  tolua_function(param_1,"getWorldToNodeAffineTransform",
                 lua_cocos2dx_Node_getWorldToNodeAffineTransform);
  tolua_function(param_1,"setCascadeColorEnabled",lua_cocos2dx_Node_setCascadeColorEnabled);
  tolua_function(param_1,"setOpacity",lua_cocos2dx_Node_setOpacity);
  tolua_function(param_1,"cleanup",lua_cocos2dx_Node_cleanup);
  tolua_function(param_1,"getComponent",lua_cocos2dx_Node_getComponent);
  tolua_function(param_1,"getContentSize",lua_cocos2dx_Node_getContentSize);
  tolua_function(param_1,"stopAllActionsByTag",lua_cocos2dx_Node_stopAllActionsByTag);
  tolua_function(param_1,"getColor",lua_cocos2dx_Node_getColor);
  tolua_function(param_1,"getBoundingBox",lua_cocos2dx_Node_getBoundingBox);
  tolua_function(param_1,"setIgnoreAnchorPointForPosition",
                 lua_cocos2dx_Node_setIgnoreAnchorPointForPosition);
  tolua_function(param_1,"setEventDispatcher",lua_cocos2dx_Node_setEventDispatcher);
  tolua_function(param_1,"getGlobalZOrder",lua_cocos2dx_Node_getGlobalZOrder);
  tolua_function(param_1,"draw",lua_cocos2dx_Node_draw);
  tolua_function(param_1,"setUserObject",lua_cocos2dx_Node_setUserObject);
  tolua_function(param_1,"removeFromParent",lua_cocos2dx_Node_removeFromParentAndCleanup);
  tolua_function(param_1,"setPosition3D",lua_cocos2dx_Node_setPosition3D);
  tolua_function(param_1,"getNumberOfRunningActionsByTag",
                 lua_cocos2dx_Node_getNumberOfRunningActionsByTag);
  tolua_function(param_1,"sortAllChildren",lua_cocos2dx_Node_sortAllChildren);
  tolua_function(param_1,"getWorldToNodeTransform",lua_cocos2dx_Node_getWorldToNodeTransform);
  tolua_function(param_1,"getScale",lua_cocos2dx_Node_getScale);
  tolua_function(param_1,"getOpacity",lua_cocos2dx_Node_getOpacity);
  tolua_function(param_1,"updateOrderOfArrival",lua_cocos2dx_Node_updateOrderOfArrival);
  tolua_function(param_1,"getNormalizedPosition",lua_cocos2dx_Node_getNormalizedPosition);
  tolua_function(param_1,"getRotationSkewX",lua_cocos2dx_Node_getRotationSkewX);
  tolua_function(param_1,"getRotationSkewY",lua_cocos2dx_Node_getRotationSkewY);
  tolua_function(param_1,"setTag",lua_cocos2dx_Node_setTag);
  tolua_function(param_1,"isCascadeColorEnabled",lua_cocos2dx_Node_isCascadeColorEnabled);
  tolua_function(param_1,"stopAction",lua_cocos2dx_Node_stopAction);
  tolua_function(param_1,"getActionManager",lua_cocos2dx_Node_getActionManager);
  tolua_function(param_1,"create",lua_cocos2dx_Node_create);
  tolua_function(param_1,"getAttachedNodeCount",lua_cocos2dx_Node_getAttachedNodeCount);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d4NodeE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_01297afe,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.Node",7);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"Node");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_01297afe,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.Node",7);
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

