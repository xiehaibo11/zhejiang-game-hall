
undefined8 FUN_0099d6e0(lua_State *param_1)

{
  int iVar1;
  undefined4 uVar2;
  AssetsManager *this;
  Ref *this_00;
  ScriptHandlerMgr *pSVar3;
  double dVar4;
  
  if (param_1 != (lua_State *)0x0) {
    this = (AssetsManager *)tolua_tousertype(param_1,1,0);
    iVar1 = lua_gettop(param_1);
    if (iVar1 + -1 == 2) {
      if ((*(long *)(this + 0x380) == 0) ||
         (this_00 = (Ref *)__dynamic_cast(*(long *)(this + 0x380),
                                          &cocos2d::extension::AssetsManagerDelegateProtocol::
                                           typeinfo,&LuaAssetsManagerDelegateProtocol::typeinfo,0x28
                                         ), this_00 == (Ref *)0x0)) {
        this_00 = operator_new(0x30,(nothrow_t *)&std::nothrow);
        if (this_00 == (Ref *)0x0) {
          return 0;
        }
        *(undefined8 *)(this_00 + 0x18) = 0;
        *(undefined8 *)(this_00 + 0x10) = 0;
        *(undefined8 *)(this_00 + 0x28) = 0;
        *(undefined8 *)(this_00 + 0x20) = 0;
        *(undefined8 *)(this_00 + 8) = 0;
        *(undefined8 *)this_00 = 0;
        cocos2d::Ref::Ref(this_00);
        *(undefined ***)this_00 = &PTR__LuaAssetsManagerDelegateProtocol_0169e1f0;
        *(undefined ***)(this_00 + 0x28) = &PTR__LuaAssetsManagerDelegateProtocol_0169e228;
        (**(code **)(*(long *)this + 0x300))(this,this_00);
        cocos2d::extension::AssetsManager::setDelegate
                  (this,(AssetsManagerDelegateProtocol *)(this_00 + 0x28));
        cocos2d::Ref::release(this_00);
      }
      uVar2 = toluafix_ref_function(param_1,2,0);
      dVar4 = (double)tolua_tonumber(0,param_1,3);
      pSVar3 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
      cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar3,this_00,uVar2,(int)dVar4 + 0x1f);
    }
    else {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
                 "cc.AssetsManager:setDelegate",iVar1 + -1,2);
    }
  }
  return 0;
}

