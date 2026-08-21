
/* std::__ndk1::__function::__func<LUA_TableViewDataSource::numberOfCellsInTableView(cocos2d::extension::TableView*)::{lambda(lua_State*,
   int)#1},
   std::__ndk1::allocator<LUA_TableViewDataSource::numberOfCellsInTableView(cocos2d::extension::TableView*)::{lambda(lua_State*,
   int)#1}>, void (lua_State*, int)>::TEMPNAMEPLACEHOLDERVALUE(lua_State*&&, int&&) */

void std::__ndk1::__function::
     __func<LUA_TableViewDataSource::numberOfCellsInTableView(cocos2d::extension::TableView*)::{lambda(lua_State*,int)#1},std::__ndk1::allocator<LUA_TableViewDataSource::numberOfCellsInTableView(cocos2d::extension::TableView*)::{lambda(lua_State*,int)#1}>,void(lua_State*,int)>
     ::operator()(lua_State **param_1,int *param_2)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = *(undefined8 *)param_2;
                    /* try { // try from 0099f4c8 to 00a9f54f has its CatchHandler @ 0099f4c8
                       catch() { ... } // from try @ 0099f4c8 with catch @ 0099f4c8
                       catch() { ... } // from try @ 0099f558 with catch @ 0099f4c8 */
  dVar2 = (double)tolua_tonumber(0,uVar1,0xffffffff);
  *(long *)param_1[1] = (long)dVar2;
  lua_settop(uVar1,0xfffffffe);
  return;
}

