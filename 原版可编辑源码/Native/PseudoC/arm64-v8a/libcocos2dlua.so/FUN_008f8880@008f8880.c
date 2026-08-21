
undefined8 FUN_008f8880(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = DAT_01782a28;
  uVar2 = DAT_01782a30;
  if (((byte)fairygui::HtmlObject::buttonResource & 1) == 0) {
    uVar1 = (ulong)((byte)fairygui::HtmlObject::buttonResource >> 1);
    uVar2 = 0x1782a21;
  }
  lua_pushlstring(param_1,uVar2,uVar1);
  return 1;
}

