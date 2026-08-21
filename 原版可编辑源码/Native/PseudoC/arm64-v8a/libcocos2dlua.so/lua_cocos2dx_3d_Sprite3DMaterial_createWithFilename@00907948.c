
/* lua_cocos2dx_3d_Sprite3DMaterial_createWithFilename(lua_State*) */

undefined4 lua_cocos2dx_3d_Sprite3DMaterial_createWithFilename(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined4 uVar5;
  ulong local_40;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
                    /* catch() { ... } // from try @ 009078b8 with catch @ 00907950 */
                    /* catch() { ... } // from try @ 009078d0 with catch @ 00907954 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 1) {
    local_38 = 0;
    local_30 = (void *)0x0;
    local_40 = 0;
                    /* catch() { ... } // from try @ 00907884 with catch @ 00907984 */
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_40,"cc.Sprite3DMaterial:createWithFilename")
    ;
    if ((uVar3 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_3d_Sprite3DMaterial_createWithFilename\'"
                  ,0);
      uVar5 = 0;
    }
    else {
      pvVar4 = (void *)cocos2d::Sprite3DMaterial::createWithFilename((basic_string *)&local_40);
      if (pvVar4 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "cc.Sprite3DMaterial");
      }
      uVar5 = 1;
    }
    if ((local_40 & 1) != 0) {
      operator_delete(local_30);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.Sprite3DMaterial:createWithFilename",iVar2 + -1,1);
    uVar5 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

