
undefined8 FUN_008f89d8(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = DAT_01782a58;
  uVar2 = DAT_01782a60;
  if (((byte)fairygui::HtmlObject::selectResource & 1) == 0) {
    uVar1 = (ulong)((byte)fairygui::HtmlObject::selectResource >> 1);
    uVar2 = 0x1782a51;
  }
  lua_pushlstring(param_1,uVar2,uVar1);
  return 1;
}

