
/* register_all_cocos2dx_math_manual(lua_State*) */

undefined8 register_all_cocos2dx_math_manual(lua_State *param_1)

{
  if (param_1 != (lua_State *)0x0) {
    tolua_module(param_1,0,0);
    tolua_beginmodule(param_1,0);
    tolua_function(param_1,"mat4_getInversed",FUN_008aaf48);
    tolua_function(param_1,"mat4_transformVector",FUN_008ab010);
    tolua_function(param_1,"mat4_decompose",FUN_008ab218);
    tolua_function(param_1,"mat4_multiply",FUN_008ab9c0);
    tolua_function(param_1,"mat4_translate",tolua_cocos2d_Mat4_translate);
    tolua_function(param_1,"mat4_createRotationZ",tolua_cocos2d_Mat4_createRotationZ);
    tolua_function(param_1,"mat4_setIdentity",tolua_cocos2d_Mat4_setIdentity);
    tolua_function(param_1,"mat4_createTranslation",tolua_cocos2d_Mat4_createTranslation);
    tolua_function(param_1,"mat4_createRotation",tolua_cocos2d_Mat4_createRotation);
    tolua_function(param_1,"vec3_cross",FUN_008abae0);
    tolua_function(param_1,"vec2_isLineIntersect",FUN_008abc28);
    tolua_function(param_1,"cc_mathutils_random",FUN_008abd74);
    tolua_endmodule(param_1);
  }
  return 0;
}

