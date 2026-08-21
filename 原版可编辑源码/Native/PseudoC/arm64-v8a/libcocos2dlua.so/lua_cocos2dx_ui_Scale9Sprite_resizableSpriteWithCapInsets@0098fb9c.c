
/* lua_cocos2dx_ui_Scale9Sprite_resizableSpriteWithCapInsets(lua_State*) */

void lua_cocos2dx_ui_Scale9Sprite_resizableSpriteWithCapInsets(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Scale9Sprite *this;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  Rect aRStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Scale9Sprite *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Rect::Rect(aRStack_48);
    uVar3 = luaval_to_rect(param_1,2,aRStack_48,"ccui.Scale9Sprite:resizableSpriteWithCapInsets");
    if ((uVar3 & 1) != 0) {
      pvVar4 = (void *)cocos2d::ui::Scale9Sprite::resizableSpriteWithCapInsets(this,aRStack_48);
      if (pvVar4 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar5 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "ccui.Scale9Sprite");
        uVar5 = 1;
      }
      goto LAB_0098fc74;
    }
    tolua_error(param_1,&DAT_012df879,0);
  }
  else {
                    /* try { // try from 0098fc4c to 00a8fdef has its CatchHandler @ 0098fc4c
                       catch() { ... } // from try @ 0098fc4c with catch @ 0098fc4c
                       catch() { ... } // from try @ 0098fe70 with catch @ 0098fc4c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Scale9Sprite:resizableSpriteWithCapInsets",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_0098fc74:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

