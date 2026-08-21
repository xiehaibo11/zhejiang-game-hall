
undefined8 FUN_008e4130(undefined8 param_1)

{
  ulong uVar1;
  byte *pbVar2;
  int iVar3;
  GComboBox *this;
  undefined8 uVar4;
  byte *pbVar5;
  
  this = (GComboBox *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
                    /* try { // try from 008e415c to 009e41f7 has its CatchHandler @ 008e3d54 */
  if (iVar3 + -1 == 0) {
    pbVar5 = (byte *)fairygui::GComboBox::getValue(this);
    uVar1 = *(ulong *)(pbVar5 + 8);
    pbVar2 = *(byte **)(pbVar5 + 0x10);
    if ((*pbVar5 & 1) == 0) {
      pbVar2 = pbVar5 + 1;
      uVar1 = (ulong)(*pbVar5 >> 1);
    }
                    /* catch() { ... } // from try @ 008e4110 with catch @ 008e41a8 */
    lua_pushlstring(param_1,pbVar2,uVar1);
                    /* catch() { ... } // from try @ 008e4128 with catch @ 008e41ac */
    uVar4 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GComboBox:getValue",iVar3 + -1,0);
    uVar4 = 0;
  }
  return uVar4;
}

