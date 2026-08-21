
/* lua_cocos2dx_extension_PUParticleSystem3D_makeParticleLocal(lua_State*) */

undefined8 lua_cocos2dx_extension_PUParticleSystem3D_makeParticleLocal(lua_State *param_1)

{
  int iVar1;
  
  tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_PUParticleSystem3D_makeParticleLocal\'"
                ,0);
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009b4dac with catch @ 009b4d3c
                       catch(type#1 @ 00000000) { ... } // from try @ 009b4ddc with catch @ 009b4d3c
                       catch(type#1 @ 00000000) { ... } // from try @ 009b4e0c with catch @ 009b4d3c
                       catch(type#1 @ 00000000) { ... } // from try @ 009b4e34 with catch @ 009b4d3c
                       catch(type#1 @ 00000000) { ... } // from try @ 009b4e60 with catch @ 009b4d3c
                        */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012e94e6,
               iVar1 + -1,1);
  }
  return 0;
}

