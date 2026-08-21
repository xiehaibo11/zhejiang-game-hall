
/* std::__ndk1::__function::__func<LUA_TableViewDataSource::tableCellAtIndex(cocos2d::extension::TableView*,
   long)::{lambda(lua_State*, int)#1},
   std::__ndk1::allocator<LUA_TableViewDataSource::tableCellAtIndex(cocos2d::extension::TableView*,
   long)::{lambda(lua_State*, int)#1}>, void (lua_State*,
   int)>::TEMPNAMEPLACEHOLDERVALUE(lua_State*&&, int&&) */

void std::__ndk1::__function::
     __func<LUA_TableViewDataSource::tableCellAtIndex(cocos2d::extension::TableView*,long)::{lambda(lua_State*,int)#1},std::__ndk1::allocator<LUA_TableViewDataSource::tableCellAtIndex(cocos2d::extension::TableView*,long)::{lambda(lua_State*,int)#1}>,void(lua_State*,int)>
     ::operator()(lua_State **param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)param_2;
  uVar1 = tolua_tousertype(uVar2,0xffffffff,0);
  *(undefined8 *)param_1[1] = uVar1;
  lua_settop(uVar2,0xfffffffe);
  return;
}

