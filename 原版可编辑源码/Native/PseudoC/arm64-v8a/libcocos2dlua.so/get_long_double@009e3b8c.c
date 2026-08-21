
/* universe::get_long_double(lua_State*, int, long double*, char const*) */

bool universe::get_long_double(lua_State *param_1,int param_2,longdouble *param_3,char *param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009e3c04 with catch @ 009e3b94
                       catch(type#1 @ 00000000) { ... } // from try @ 009e3c34 with catch @ 009e3b94
                       catch(type#1 @ 00000000) { ... } // from try @ 009e3c64 with catch @ 009e3b94
                       catch(type#1 @ 00000000) { ... } // from try @ 009e3c8c with catch @ 009e3b94
                       catch(type#1 @ 00000000) { ... } // from try @ 009e3cb8 with catch @ 009e3b94
                        */
  iVar1 = lua_isnumber();
  if (iVar1 == 0) {
    luaL_error(param_1,"%s: arg %d is not a number",param_4,param_2);
  }
  else {
    lua_tonumber(param_1,param_2);
    auVar2 = __extenddftf2();
    *(undefined1 (*) [16])param_3 = auVar2;
  }
  return iVar1 != 0;
}

