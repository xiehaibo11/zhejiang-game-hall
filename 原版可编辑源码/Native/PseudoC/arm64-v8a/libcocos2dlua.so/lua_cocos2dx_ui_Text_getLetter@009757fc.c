
/* lua_cocos2dx_ui_Text_getLetter(lua_State*) */

void lua_cocos2dx_ui_Text_getLetter(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 uVar6;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"ccui.Text:getLetter");
    if ((uVar4 & 1) != 0) {
      pvVar5 = (void *)(**(code **)(*plVar3 + 0x688))(plVar3,local_3c);
      if (pvVar5 == (void *)0x0) {
                    /* try { // try from 009758f8 to 00a7594b has its CatchHandler @ 009758f8
                       catch() { ... } // from try @ 009758f8 with catch @ 009758f8
                       catch() { ... } // from try @ 009759e8 with catch @ 009758f8
                       catch() { ... } // from try @ 00975a4c with catch @ 009758f8 */
        lua_pushnil(param_1);
        uVar6 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                   "cc.Sprite");
        uVar6 = 1;
      }
      goto LAB_009758d4;
    }
    tolua_error(param_1,&DAT_012d9b7d,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Text:getLetter",iVar2 + -1,1);
  }
  uVar6 = 0;
LAB_009758d4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

