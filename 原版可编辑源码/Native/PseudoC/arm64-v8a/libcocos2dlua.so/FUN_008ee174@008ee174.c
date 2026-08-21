
undefined8 FUN_008ee174(undefined8 param_1)

{
  ulong uVar1;
  byte *pbVar2;
  int iVar3;
  GController *this;
  undefined8 uVar4;
  byte *pbVar5;
  
                    /* catch() { ... } // from try @ 008ee154 with catch @ 008ee18c */
  this = (GController *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
                    /* try { // try from 008ee1a0 to 009eef5f has its CatchHandler @ 008ee1a0
                       catch() { ... } // from try @ 008ee1a0 with catch @ 008ee1a0
                       catch() { ... } // from try @ 008eefe0 with catch @ 008ee1a0 */
  if (iVar3 + -1 == 0) {
    pbVar5 = (byte *)fairygui::GController::getPreviousPage(this);
    uVar1 = *(ulong *)(pbVar5 + 8);
    pbVar2 = *(byte **)(pbVar5 + 0x10);
    if ((*pbVar5 & 1) == 0) {
      pbVar2 = pbVar5 + 1;
      uVar1 = (ulong)(*pbVar5 >> 1);
    }
    lua_pushlstring(param_1,pbVar2,uVar1);
    uVar4 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GController:getPreviousPage",iVar3 + -1,0);
    uVar4 = 0;
  }
  return uVar4;
}

