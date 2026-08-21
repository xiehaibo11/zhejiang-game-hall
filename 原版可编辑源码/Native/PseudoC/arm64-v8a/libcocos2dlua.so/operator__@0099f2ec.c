
/* std::__ndk1::__function::__func<LUA_TableViewDataSource::tableCellSizeForIndex(cocos2d::extension::TableView*,
   long)::{lambda(lua_State*, int)#1},
   std::__ndk1::allocator<LUA_TableViewDataSource::tableCellSizeForIndex(cocos2d::extension::TableView*,
   long)::{lambda(lua_State*, int)#1}>, void (lua_State*,
   int)>::TEMPNAMEPLACEHOLDERVALUE(lua_State*&&, int&&) */

void std::__ndk1::__function::
     __func<LUA_TableViewDataSource::tableCellSizeForIndex(cocos2d::extension::TableView*,long)::{lambda(lua_State*,int)#1},std::__ndk1::allocator<LUA_TableViewDataSource::tableCellSizeForIndex(cocos2d::extension::TableView*,long)::{lambda(lua_State*,int)#1}>,void(lua_State*,int)>
     ::operator()(lua_State **param_1,int *param_2)

{
  undefined8 uVar1;
  double dVar2;
  
                    /* try { // try from 0099f2ec to 00a9f2f3 has its CatchHandler @ 0099f380 */
                    /* try { // try from 0099f2f4 to 00a9f39b has its CatchHandler @ 0099f264 */
  uVar1 = *(undefined8 *)param_2;
  dVar2 = (double)tolua_tonumber(0,uVar1,0xffffffff);
  *(float *)param_1[1] = (float)dVar2;
  lua_settop(uVar1,0xfffffffe);
  dVar2 = (double)tolua_tonumber(0,uVar1,0xffffffff);
  *(float *)param_1[2] = (float)dVar2;
  lua_settop(uVar1,0xfffffffe);
  return;
}

