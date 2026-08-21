
undefined8 FUN_008af8ec(lua_State *param_1)

{
  int *piVar1;
  int iVar2;
  Node *pNVar3;
  void *pvVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  if (param_1 != (lua_State *)0x0) {
    iVar2 = lua_gettop();
    if (iVar2 + -1 == 1) {
      pNVar3 = (Node *)tolua_tousertype(param_1,2,0);
      pvVar4 = (void *)cocos2d::MenuItemLabel::create(pNVar3);
      piVar1 = (int *)((long)pvVar4 + 0x10);
      if (pvVar4 == (void *)0x0) {
        iVar2 = -1;
        piVar1 = (int *)0x0;
      }
      else {
        iVar2 = *(int *)((long)pvVar4 + 0xc);
      }
      toluafix_pushusertype_ccobject(param_1,iVar2,piVar1,pvVar4,"cc.MenuItemLabel");
      uVar5 = 1;
    }
    else {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
                 "cc.MenuItemLabel:create",iVar2 + -1,1);
      uVar5 = 0;
    }
  }
  return uVar5;
}

