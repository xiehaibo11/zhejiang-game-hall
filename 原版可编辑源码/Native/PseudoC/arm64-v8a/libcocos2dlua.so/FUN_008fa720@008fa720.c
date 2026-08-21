
undefined8 FUN_008fa720(undefined8 param_1)

{
  ulong uVar1;
  byte *pbVar2;
  int iVar3;
  GTreeNode *this;
  undefined8 uVar4;
  byte *pbVar5;
  
  this = (GTreeNode *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 0) {
    pbVar5 = (byte *)fairygui::GTreeNode::getIcon(this);
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
               "fairygui.GTreeNode:getIcon",iVar3 + -1,0);
    uVar4 = 0;
  }
                    /* try { // try from 008fa7a8 to 009fa813 has its CatchHandler @ 008fa7a8
                       catch() { ... } // from try @ 008fa7a8 with catch @ 008fa7a8
                       catch() { ... } // from try @ 008fa8c8 with catch @ 008fa7a8 */
  return uVar4;
}

