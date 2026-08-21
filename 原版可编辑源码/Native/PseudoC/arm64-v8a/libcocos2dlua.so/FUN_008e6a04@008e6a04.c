
undefined8 FUN_008e6a04(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GMovieClip *pGVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ScriptHandlerMgr *this;
  code *pcVar9;
  int local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  undefined **local_190;
  int local_188;
  undefined ***local_170;
  long alStack_160 [4];
  long *local_140;
  long alStack_130 [4];
  long *local_110;
  long alStack_100 [4];
  long *local_e0;
  long alStack_d0 [4];
  long *local_b0;
  long alStack_a0 [4];
  long *local_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pGVar3 = (GMovieClip *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 008e6a4c to 009e6a53 has its CatchHandler @ 008e6a90 */
                    /* try { // try from 008e6a54 to 009e6aab has its CatchHandler @ 008e69b0 */
  switch(iVar2 + -1) {
  case 0:
    local_80 = (long *)0x0;
                    /* catch() { ... } // from try @ 008e6a4c with catch @ 008e6a90 */
    fairygui::GMovieClip::setPlaySettings(pGVar3,0,0xffffffff,0,0xffffffff,alStack_a0);
    plVar4 = local_80;
    if (alStack_a0 == local_80) {
LAB_008e6bbc:
      (**(code **)(*plVar4 + 0x20))();
      goto LAB_008e6db0;
    }
    break;
  case 1:
    uVar5 = luaval_to_int32(param_1,2,&local_194,"fairygui.GMovieClip:setPlaySettings");
    if ((uVar5 & 1) == 0) {
LAB_008e6d9c:
      tolua_error(param_1,
                  "invalid arguments in function \'lua_fairygui_GMovieClip_setPlaySettings\'",0);
      goto LAB_008e6db0;
    }
    local_b0 = (long *)0x0;
    fairygui::GMovieClip::setPlaySettings(pGVar3,local_194,0xffffffff,0,0xffffffff,alStack_d0);
    plVar4 = local_b0;
    if (alStack_d0 == local_b0) goto LAB_008e6bbc;
    break;
  case 2:
    uVar5 = luaval_to_int32(param_1,2,&local_194,"fairygui.GMovieClip:setPlaySettings");
    uVar6 = luaval_to_int32(param_1,3,&local_198,"fairygui.GMovieClip:setPlaySettings");
    if (((uVar5 & 1) == 0) || ((uVar6 & 1) == 0)) goto LAB_008e6d9c;
    local_e0 = (long *)0x0;
    fairygui::GMovieClip::setPlaySettings(pGVar3,local_194,local_198,0,0xffffffff,alStack_100);
    plVar4 = local_e0;
    if (alStack_100 == local_e0) goto LAB_008e6bbc;
    break;
  case 3:
    uVar5 = luaval_to_int32(param_1,2,&local_194,"fairygui.GMovieClip:setPlaySettings");
    uVar6 = luaval_to_int32(param_1,3,&local_198,"fairygui.GMovieClip:setPlaySettings");
    uVar7 = luaval_to_int32(param_1,4,&local_19c,"fairygui.GMovieClip:setPlaySettings");
    if ((((uVar5 & 1) == 0) || ((uVar6 & 1) == 0)) || ((uVar7 & 1) == 0)) goto LAB_008e6d9c;
    local_110 = (long *)0x0;
    fairygui::GMovieClip::setPlaySettings
              (pGVar3,local_194,local_198,local_19c,0xffffffff,alStack_130);
    plVar4 = local_110;
    if (alStack_130 == local_110) goto LAB_008e6bbc;
    break;
  case 4:
    uVar5 = luaval_to_int32(param_1,2,&local_194,"fairygui.GMovieClip:setPlaySettings");
    uVar6 = luaval_to_int32(param_1,3,&local_198,"fairygui.GMovieClip:setPlaySettings");
    uVar7 = luaval_to_int32(param_1,4,&local_19c,"fairygui.GMovieClip:setPlaySettings");
    uVar8 = luaval_to_int32(param_1,5,&local_1a0,"fairygui.GMovieClip:setPlaySettings");
    if ((((uVar5 & 1) == 0) || ((uVar6 & 1) == 0)) || (((uVar7 & 1) == 0 || ((uVar8 & 1) == 0))))
    goto LAB_008e6d9c;
    local_140 = (long *)0x0;
    fairygui::GMovieClip::setPlaySettings
              (pGVar3,local_194,local_198,local_19c,local_1a0,alStack_160);
    plVar4 = local_140;
    if (alStack_160 == local_140) goto LAB_008e6bbc;
    break;
  case 5:
    uVar5 = luaval_to_int32(param_1,2,&local_194,"fairygui.GMovieClip:setPlaySettings");
    uVar6 = luaval_to_int32(param_1,3,&local_198,"fairygui.GMovieClip:setPlaySettings");
    uVar7 = luaval_to_int32(param_1,4,&local_19c,"fairygui.GMovieClip:setPlaySettings");
    uVar8 = luaval_to_int32(param_1,5,&local_1a0,"fairygui.GMovieClip:setPlaySettings");
    iVar2 = toluafix_ref_function(param_1,6,0);
    if ((((iVar2 == 0) || ((uVar5 & 1) == 0)) || ((uVar6 & 1) == 0)) ||
       (((uVar7 & 1) == 0 || ((uVar8 & 1) == 0)))) goto LAB_008e6d9c;
    local_190 = &PTR_FUN_0169b6c8;
    local_188 = iVar2;
    local_170 = &local_190;
    fairygui::GMovieClip::setPlaySettings(pGVar3,local_194,local_198,local_19c,local_1a0,&local_190)
    ;
    if (&local_190 == local_170) {
      pcVar9 = (code *)(*local_170)[4];
LAB_008e6dec:
      (*pcVar9)();
    }
    else if (local_170 != (undefined ***)0x0) {
      pcVar9 = (code *)(*local_170)[5];
      goto LAB_008e6dec;
    }
    this = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    cocos2d::ScriptHandlerMgr::addCustomHandler(this,pGVar3,iVar2);
    goto LAB_008e6db0;
  default:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GMovieClip:setPlaySettings",iVar2 + -1,0);
    goto LAB_008e6db0;
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x28))();
  }
LAB_008e6db0:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

