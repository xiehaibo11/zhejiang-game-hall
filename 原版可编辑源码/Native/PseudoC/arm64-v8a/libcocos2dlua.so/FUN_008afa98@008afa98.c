
undefined8 FUN_008afa98(lua_State *param_1)

{
  int *piVar1;
  int iVar2;
  Node *pNVar3;
  Node *pNVar4;
  void *pvVar5;
  undefined8 uVar6;
  int iVar7;
  Node *pNVar8;
  
  uVar6 = 0;
  if (param_1 != (lua_State *)0x0) {
    iVar2 = lua_gettop();
    iVar7 = iVar2 + -1;
    if ((iVar2 < 5) && (1 < iVar7)) {
      pNVar3 = (Node *)tolua_tousertype(param_1,2,0);
      pNVar4 = (Node *)tolua_tousertype(param_1,3,0);
      pNVar8 = (Node *)0x0;
      if (iVar7 == 3) {
        pNVar8 = (Node *)tolua_tousertype(param_1,4,0);
      }
      pvVar5 = (void *)cocos2d::MenuItemSprite::create(pNVar3,pNVar4,pNVar8);
      piVar1 = (int *)((long)pvVar5 + 0x10);
      if (pvVar5 == (void *)0x0) {
        iVar7 = -1;
        piVar1 = (int *)0x0;
      }
      else {
        iVar7 = *(int *)((long)pvVar5 + 0xc);
      }
      toluafix_pushusertype_ccobject(param_1,iVar7,piVar1,pvVar5,"cc.MenuItemSprite");
      uVar6 = 1;
    }
    else {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
                 "cc.MenuItemSprite:create",iVar7,3);
      uVar6 = 0;
    }
  }
  return uVar6;
}

