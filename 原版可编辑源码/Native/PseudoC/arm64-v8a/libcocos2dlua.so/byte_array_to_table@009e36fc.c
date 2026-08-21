
/* universe::byte_array_to_table(lua_State*, unsigned char*) */

undefined8 universe::byte_array_to_table(lua_State *param_1,uchar *param_2)

{
  size_t sVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  lua_createtable(param_1,0,0);
  sVar1 = strlen((char *)param_2);
                    /* try { // try from 009e3730 to 00ae3733 has its CatchHandler @ 009e3790 */
  if (0 < (int)sVar1) {
                    /* try { // try from 009e3734 to 00ae37ab has its CatchHandler @ 009e36d8 */
    uVar2 = 0;
    do {
      lua_pushnumber((double)(int)uVar2 + 1.0,param_1);
      uVar3 = NEON_ucvtf((ulong)param_2[uVar2]);
      lua_pushnumber(uVar3,param_1);
      lua_rawset(param_1,0xfffffffd);
      uVar2 = uVar2 + 1;
    } while ((sVar1 & 0xffffffff) != uVar2);
  }
  return 1;
}

