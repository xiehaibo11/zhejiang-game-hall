
undefined8 FUN_008f892c(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = DAT_01782a40;
  uVar2 = DAT_01782a48;
  if (((byte)fairygui::HtmlObject::inputResource & 1) == 0) {
    uVar1 = (ulong)((byte)fairygui::HtmlObject::inputResource >> 1);
    uVar2 = 0x1782a39;
  }
  lua_pushlstring(param_1,uVar2,uVar1);
  return 1;
}

