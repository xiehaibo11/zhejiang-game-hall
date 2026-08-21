
/* universe::get_byte_array(lua_State*, int, unsigned char**, char const*) */

undefined8 universe::get_byte_array(lua_State *param_1,int param_2,uchar **param_3,char *param_4)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  uchar *__s;
  undefined8 uVar4;
  ulong uVar5;
  double dVar6;
  
  iVar2 = lua_type();
  if (iVar2 == 5) {
    uVar3 = lua_objlen(param_1,param_2);
    __s = malloc(uVar3 + 1);
    memset(__s,0,uVar3 + 1);
    if (uVar3 != 0) {
      uVar5 = 0;
      do {
        uVar1 = uVar5 + 1;
        lua_pushnumber((double)uVar1,param_1);
        lua_gettable(param_1,param_2);
        iVar2 = lua_isnumber(param_1,0xffffffff);
        if (iVar2 == 0) {
                    /* try { // try from 009e36d8 to 00ae372f has its CatchHandler @ 009e36d8
                       catch() { ... } // from try @ 009e36d8 with catch @ 009e36d8
                       catch() { ... } // from try @ 009e3734 with catch @ 009e36d8 */
          free(__s);
          goto LAB_009e36e0;
        }
        dVar6 = (double)lua_tonumber(param_1,0xffffffff);
        __s[uVar5] = (uchar)(int)dVar6;
        lua_settop(param_1,0xfffffffe);
        uVar5 = uVar1;
      } while (uVar3 != uVar1);
    }
    *param_3 = __s;
    uVar4 = 1;
  }
  else {
    luaL_error(param_1,"%s: arg %d is not a table",param_4,param_2);
LAB_009e36e0:
    uVar4 = 0;
  }
  return uVar4;
}

