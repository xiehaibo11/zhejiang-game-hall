
/* universe::get_int(lua_State*, int, int*, char const*) */

undefined8 universe::get_int(lua_State *param_1,int param_2,int *param_3,char *param_4)

{
  int iVar1;
  undefined8 uVar2;
  double dVar3;
  
  iVar1 = lua_isnumber();
  if (iVar1 == 0) {
    luaL_error(param_1,"%s: arg %d is not a number",param_4,param_2);
    uVar2 = 0;
  }
  else {
    dVar3 = (double)lua_tonumber(param_1,param_2);
    iVar1 = -0x80000000;
    if ((int)dVar3 != -0x80000000) {
      dVar3 = (double)lua_tonumber(param_1,param_2);
      iVar1 = (int)dVar3;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009e3910 with catch @ 009e38a0
                       catch(type#1 @ 00000000) { ... } // from try @ 009e3940 with catch @ 009e38a0
                       catch(type#1 @ 00000000) { ... } // from try @ 009e3970 with catch @ 009e38a0
                       catch(type#1 @ 00000000) { ... } // from try @ 009e3998 with catch @ 009e38a0
                       catch(type#1 @ 00000000) { ... } // from try @ 009e39c4 with catch @ 009e38a0
                        */
    *param_3 = iVar1;
    uVar2 = 1;
  }
  return uVar2;
}

