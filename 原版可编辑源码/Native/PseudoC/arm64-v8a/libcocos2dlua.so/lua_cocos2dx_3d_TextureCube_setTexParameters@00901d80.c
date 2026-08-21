
/* lua_cocos2dx_3d_TextureCube_setTexParameters(lua_State*) */

undefined4 lua_cocos2dx_3d_TextureCube_setTexParameters(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  TextureCube *this;
  ulong uVar3;
  undefined4 uVar4;
  _TexParams a_Stack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (TextureCube *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_texparams(param_1,2,a_Stack_48,"cc.TextureCube:setTexParameters");
    if ((uVar3 & 1) != 0) {
      cocos2d::TextureCube::setTexParameters(this,a_Stack_48);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00901e3c;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_3d_TextureCube_setTexParameters\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.TextureCube:setTexParameters",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00901e3c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00901e54 to 00a01e9f has its CatchHandler @ 00901e54
                       catch(type#1 @ 00000000) { ... } // from try @ 00901e54 with catch @ 00901e54
                       catch(type#1 @ 00000000) { ... } // from try @ 00901fbc with catch @ 00901e54
                       catch(type#1 @ 00000000) { ... } // from try @ 00902048 with catch @ 00901e54
                       catch(type#1 @ 00000000) { ... } // from try @ 009020d0 with catch @ 00901e54
                       catch(type#1 @ 00000000) { ... } // from try @ 00902130 with catch @ 00901e54
                        */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

